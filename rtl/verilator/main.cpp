// axi_memory_tb.cpp – Verilator testbench integrating test.cpp matrix generation
// -----------------------------------------------------------------------------
// Drives three matrices (C → A → B) for every combination of
//   • shape  : (M32K16N8, M16K16N16, M8K16N32)
//   • dtype  : FP32, FP16, INT8, INT4
// Data are produced with the same templates/structures found in the user's
// original **test.cpp** so that the DUT receives real matrix elements instead
// of dummy random payload.  The burst timing still inserts a 0‑7 cycle random
// gap between beats to emulate memory latency.
// -----------------------------------------------------------------------------
// Build example (waveform enabled with TRACE):
//   verilator -Wall --trace -cc tensorcore.sv para_pkg.sv \
//             -exe axi_memory_tb.cpp -CFLAGS "-std=c++17" && make -C obj_dir -j
// -----------------------------------------------------------------------------

#include "Vtensorcore.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include <algorithm>
#include <array>
#include <cstdint>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <random>
#include <stdexcept>
#include <string>
#include <type_traits>
#include <vector>

// --------------------- HALF‑PRECISION SUPPORT ------------------------------
// Users’ test.cpp relies on the header‑only half.hpp from <https://sourceforge.net/projects/half>.
// Place half.hpp next to this file or adjust include path accordingly.
#include "half.hpp"
using half_float::half;

// ----------------------------- INT4 TYPE -----------------------------------
struct int4_t {                 // identical to definition in test.cpp
    int8_t v;                   // signed value stored in low nibble [‑8, 7]
    int4_t() : v(0) {}
    explicit int4_t(int x) {
        if (x < -8) x = -8;
        if (x > 7)  x = 7;
        v = static_cast<int8_t>(x & 0xF);
    }
    operator int() const {
        int t = v & 0xF;
        if (t & 0x8) t |= ~0xF;
        return t;
    }
};

// ---------------------------- MATRIX CLASS ---------------------------------

template <typename T, size_t R, size_t C>
class Matrix {
public:
    Matrix() : data_(R * C) {}
    T&       operator()(size_t i, size_t j)       { return data_[i * C + j]; }
    const T& operator()(size_t i, size_t j) const { return data_[i * C + j]; }

    void random_fill(std::mt19937& rng) {
        if constexpr (std::is_same_v<T, int4_t>) {
            std::uniform_int_distribution<int> dist(-8, 7);
            for (auto& e : data_) e = int4_t(dist(rng));
        } else if constexpr (std::is_same_v<T, int8_t>) {
            std::uniform_int_distribution<int> dist(-128, 127);
            for (auto& e : data_) e = static_cast<int8_t>(dist(rng));
        } else if constexpr (std::is_same_v<T, half>) {
            std::uniform_real_distribution<float> dist(-1.0f, 1.0f);
            for (auto& e : data_) e = half(dist(rng));
        } else { // float
            std::uniform_real_distribution<float> dist(-1.0f, 1.0f);
            for (auto& e : data_) e = dist(rng);
        }
    }

    // append all elements (row‑major) to a byte vector
    void flatten(std::vector<uint8_t>& out) const {
        for (const auto& e : data_) {
            if constexpr (std::is_same_v<T, float>) {
                uint32_t tmp; std::memcpy(&tmp, &e, 4);
                out.insert(out.end(), reinterpret_cast<uint8_t*>(&tmp), reinterpret_cast<uint8_t*>(&tmp) + 4);
            } else if constexpr (std::is_same_v<T, half>) {
                uint16_t tmp; std::memcpy(&tmp, &e, 2);
                out.insert(out.end(), reinterpret_cast<uint8_t*>(&tmp), reinterpret_cast<uint8_t*>(&tmp) + 2);
            } else { // int8_t or int4_t (stored in byte)
                out.push_back(static_cast<uint8_t>(static_cast<int>(e)));
            }
        }
    }

private:
    std::vector<T> data_;
};

// -------------------- SHAPE / DTYPE ENUMS (match para_pkg) ------------------

enum Shape : uint8_t { M32K16N8 = 0, M16K16N16 = 1, M8K16N32 = 2 };
enum DType : uint8_t { FP32 = 0, FP16 = 1, INT8 = 2, INT4 = 3 };

struct MatrixBuffers {
    std::vector<uint8_t> C, A, B;   // flattened memory images
    size_t c_idx = 0, a_idx = 0, b_idx = 0; // streaming cursors
};

// ---------------------- SIMULATION TIME HELPERS -----------------------------
static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

inline void tick(Vtensorcore* top, VerilatedVcdC* tfp) {
    // falling edge
    top->clk = 0;
    top->eval();
    if (tfp) tfp->dump(main_time);
    ++main_time;
    // rising edge
    top->clk = 1;
    top->eval();
    if (tfp) tfp->dump(main_time);
    ++main_time;
}

inline void reset(Vtensorcore* top, VerilatedVcdC* tfp) {
    top->rst = 0;
    top->start = 0;
    top->axi_in_valid = 0;
    top->axi_in_finish = 0;
    top->axi_in_arready = 0;
    for (int i = 0; i < 8; ++i) tick(top, tfp);
    top->rst = 1;
    tick(top, tfp);
}

// pack <=256‑bit little‑endian byte array into VlWide<8>
static void pack256(Vtensorcore* top, const uint8_t* bytes, size_t len) {
    uint32_t words[8] = {};
    std::memcpy(words, bytes, std::min(len, size_t(32)));
    VL_ASSIGN_W(8, top->axi_in_data, words);
}

// --------------------------- REQUEST SERVICER -------------------------------

static void serve_request(Vtensorcore* top, VerilatedVcdC* tfp, std::mt19937& rng,
                          std::vector<uint8_t>& buf, size_t& cursor) {
    // Accept address on one cycle
    top->axi_in_arready = 1;
    tick(top, tfp);
    top->axi_in_arready = 0;

    const int beats   = top->axi_out_burst_num + 1;
    const size_t bsz  = 1u << top->axi_out_burst_size;      // bytes per beat
    std::uniform_int_distribution<int> gap_dist(0, 7);

    for (int id = 0; id < beats; ++id) {
        for (int g = 0, n = gap_dist(rng); g < n; ++g) tick(top, tfp);

        // payload preparation (pad with zeros if under‑run)
        uint8_t temp[32] = {};
        size_t avail = std::min(bsz, buf.size() - cursor);
        std::memcpy(temp, buf.data() + cursor, avail);
        cursor += avail;

        pack256(top, temp, 32);
        top->axi_in_burst_id = id;
        top->axi_in_valid    = 1;
        top->axi_in_finish   = (id == beats - 1);
        tick(top, tfp);
        top->axi_in_valid  = 0;
        top->axi_in_finish = 0;
    }
}

// ------------------ BUFFER GENERATION PER SHAPE/DTYPE ----------------------

template <typename TA, typename TB, typename TC>
static MatrixBuffers build_buffers(Shape shape, std::mt19937& rng) {
    MatrixBuffers mb;
    switch (shape) {
        case M32K16N8: {
            Matrix<TC, 32, 8 > C; C.random_fill(rng); C.flatten(mb.C);
            Matrix<TA, 32, 16> A; A.random_fill(rng); A.flatten(mb.A);
            Matrix<TB, 16, 8 > B; B.random_fill(rng); B.flatten(mb.B);
            break;
        }
        case M16K16N16: {
            Matrix<TC, 16, 16> C; C.random_fill(rng); C.flatten(mb.C);
            Matrix<TA, 16, 16> A; A.random_fill(rng); A.flatten(mb.A);
            Matrix<TB, 16, 16> B; B.random_fill(rng); B.flatten(mb.B);
            break;
        }
        case M8K16N32: {
            Matrix<TC, 8, 32> C; C.random_fill(rng); C.flatten(mb.C);
            Matrix<TA, 8, 16> A; A.random_fill(rng); A.flatten(mb.A);
            Matrix<TB, 16, 32> B; B.random_fill(rng); B.flatten(mb.B);
            break;
        }
    }
    return mb;
}

static MatrixBuffers build_buffers_for(DType dt, Shape sh, std::mt19937& rng) {
    switch (dt) {
        case FP32: return build_buffers<float,float,float>(sh, rng);
        case FP16: return build_buffers<half,half,half>(sh, rng);
        case INT8: return build_buffers<int8_t,int8_t,int8_t>(sh, rng);
        default : return build_buffers<int4_t,int4_t,int4_t>(sh, rng);
    }
}

// ------------------------------- MAIN --------------------------------------

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    auto* top = new Vtensorcore;

#ifdef TRACE
    Verilated::traceEverOn(true);
    VerilatedVcdC tf;
    top->trace(&tf, 99);
    tf.open("wave.vcd");
    auto* tfp = &tf;
#else
    VerilatedVcdC* tfp = nullptr;
#endif

    std::mt19937 rng(std::random_device{}());

    for (uint8_t dt = 0; dt < 4; ++dt) {
        for (uint8_t sh = 0; sh < 3; ++sh) {
            MatrixBuffers mb = build_buffers_for(static_cast<DType>(dt), static_cast<Shape>(sh), rng);

            reset(top, tfp);
            top->compute_type_compute_shape = sh;
            top->compute_type_data_type     = dt;
            top->mixed = 0;
            top->start = 1; tick(top, tfp); top->start = 0;

            int served = 0;
            while (served < 3 && !Verilated::gotFinish()) {
                if (top->axi_out_request_valid && !top->axi_in_arready) {
                    // select buffer by sel (C=1, A=4, B=2)
                    switch (top->axi_out_sel) {
                        case 1: serve_request(top, tfp, rng, mb.C, mb.c_idx); break;
                        case 4: serve_request(top, tfp, rng, mb.A, mb.a_idx); break;
                        case 2: serve_request(top, tfp, rng, mb.B, mb.b_idx); break;
                        default: std::cerr << "Unknown sel " << int(top->axi_out_sel) << std::endl; break;
                    }
                    ++served;
                }
                tick(top, tfp);
            }

            for (int i = 0; i < 32; ++i) tick(top, tfp); // settle
        }
    }

#ifdef TRACE
    tfp->close();
#endif

    delete top;
    return 0;
}
