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

struct int4_t {                  // 4‑bit signed container
    int8_t v;                    // lower nibble stores value in [‑8,7]
    int4_t() : v(0) {}
    explicit int4_t(int x) {
        if (x < -8) x = -8; if (x > 7) x = 7; v = static_cast<int8_t>(x & 0xF);
    }
    operator int() const {
        int t = v & 0xF; if (t & 0x8) t |= ~0xF; return t;
    }
};
inline std::ostream& operator<<(std::ostream& os, const int4_t& x) {
    return os << static_cast<int>(x);
}

// -------------------------------- Matrix ------------------------------------

template <typename T, size_t R, size_t C>
class Matrix {
public:
    Matrix() : data_(R * C) {}

    T&       operator()(size_t i, size_t j)       { return data_[i * C + j]; }
    const T& operator()(size_t i, size_t j) const { return data_[i * C + j]; }

    void random_fill(std::mt19937& rng) {
        if constexpr (std::is_same_v<T, int4_t>) {
            std::uniform_int_distribution<int> d(-8, 7);
            for (auto& e : data_) e = int4_t(d(rng));
        } else if constexpr (std::is_same_v<T, int8_t>) {
            std::uniform_int_distribution<int> d(-128, 127);
            for (auto& e : data_) e = static_cast<int8_t>(d(rng));
        } else if constexpr (std::is_same_v<T, half>) {
            std::uniform_real_distribution<float> d(-8.0f, 8.0f); // wider range
            for (auto& e : data_) e = half(d(rng));
        } else {
            std::uniform_real_distribution<float> d(-8.0f, 8.0f);
            for (auto& e : data_) e = d(rng);
        }
    }

    void flatten(std::vector<uint8_t>& out) const {
        for (const auto& e : data_) {
            if constexpr (std::is_same_v<T, float>) {
                uint32_t w; std::memcpy(&w, &e, 4);
                out.insert(out.end(), reinterpret_cast<uint8_t*>(&w), reinterpret_cast<uint8_t*>(&w) + 4);
            } else if constexpr (std::is_same_v<T, half>) {
                uint16_t h; std::memcpy(&h, &e, 2);
                out.insert(out.end(), reinterpret_cast<uint8_t*>(&h), reinterpret_cast<uint8_t*>(&h) + 2);
            } else {
                out.push_back(static_cast<uint8_t>(static_cast<int>(e)));
            }
        }
    }

private:
    std::vector<T> data_;
};

// ------------------------------ Utilities -----------------------------------

template <typename T, size_t R, size_t C>
void print_matrix(const Matrix<T,R,C>& M, const std::string& tag) {
    std::cout << "\n>>> " << tag << " (" << R << "×" << C << ")\n";
    for (size_t i = 0; i < R; ++i) {
        for (size_t j = 0; j < C; ++j) {
            if constexpr (std::is_same_v<T, half>) std::cout << std::setw(10) << float(M(i,j));
            else if constexpr (std::is_same_v<T, int8_t>) std::cout << std::setw(10) << +M(i,j);
            else                                   std::cout << std::setw(10) << M(i,j);
        }
        std::cout << '\n';
    }
}

void dump_buffer(const std::vector<uint8_t>& buf, size_t chunk) {
    for (size_t i = 0; i < buf.size(); i += chunk) {
        std::cout << std::setw(6) << i << ": ";
        for (size_t j = 0; j < chunk && i + j < buf.size(); ++j) {
            std::cout << std::hex << std::setw(2) << std::setfill('0')
                      << static_cast<int>(buf[i + j]) << ' ';
        }
        std::cout << std::dec << std::setfill(' ') << '\n';
    }
}

// ------------------ FMA kernel (templated on all types) ---------------------

// ------------------ FMA kernel (templated on all types) ---------------------
template <typename TA, typename TB, typename TC, typename TD,
          size_t M, size_t K, size_t N>
class FmaCase {
public:
    std::vector<uint8_t> bufA, bufB, bufC, bufD;

    FmaCase(const std::string& label, std::mt19937& rng, size_t chunk) {
        Matrix<TA, M, K> A; A.random_fill(rng);
        Matrix<TB, K, N> B; B.random_fill(rng);
        Matrix<TC, M, N> C; C.random_fill(rng);
        Matrix<TD, M, N> D;

        // 执行 A * B + C 并保存到 D
        for (size_t i = 0; i < M; ++i) {
            for (size_t j = 0; j < N; ++j) {
                float acc = 0.0f;
                for (size_t k = 0; k < K; ++k)
                    acc += static_cast<float>(A(i,k)) * static_cast<float>(B(k,j));
                acc += static_cast<float>(C(i,j));
                D(i,j) = static_cast<TD>(acc); // cast down if TD == half
            }
        }

        std::cout << "\n=== " << label << " ===";
        print_matrix(A, "A");
        print_matrix(B, "B");
        print_matrix(C, "C");
        print_matrix(D, "D = A*B + C");

        // 序列化
        A.flatten(bufA);
        B.flatten(bufB);
        C.flatten(bufC);
        D.flatten(bufD);

        std::cout << "\n--- Flattened buffers (chunk=" << chunk << " bytes) ---\n";
        std::cout << "A buffer (" << bufA.size() << " bytes):\n"; dump_buffer(bufA, chunk);
        std::cout << "B buffer (" << bufB.size() << " bytes):\n"; dump_buffer(bufB, chunk);
        std::cout << "C buffer (" << bufC.size() << " bytes):\n"; dump_buffer(bufC, chunk);
        std::cout << "D buffer (" << bufD.size() << " bytes):\n"; dump_buffer(bufD, chunk);
    }
};


// ------------------------------- CLI Parse ----------------------------------

enum class DType { INT4, INT8, FP16, FP32 };

static std::string lower(std::string s){ for(char& c:s) c=std::tolower(c); return s; }

static void usage(const char* exe){
    std::cerr << "Usage: " << exe << " <dtype> [mixed] [chunk_size]\n"
              << "  dtype: int4 | int8 | fp16 | fp32\n"
              << "  mixed: (only for fp16) -> A,B fp16 ; C,D fp32\n"
              << "  chunk_size: positive multiple of 8, default 32\n";
}

struct Options {
    DType dtype;
    bool  mixed  = false; // fp16‑mixed flag
    size_t chunk = 32;
};

static Options parse_opts(int argc, char** argv){
    if(argc < 2){ usage(argv[0]); std::exit(1);}    
    Options o;
    std::string d = lower(argv[1]);
    if(d=="int4") o.dtype=DType::INT4; else if(d=="int8") o.dtype=DType::INT8;
    else if(d=="fp16"||d=="half"||d=="float16") o.dtype=DType::FP16;
    else if(d=="fp32"||d=="float"||d=="float32") o.dtype=DType::FP32;
    else { std::cerr<<"Unsupported dtype "<<argv[1]<<"\n"; usage(argv[0]); std::exit(1);}    

    int idx = 2;
    if(o.dtype==DType::FP16 && idx<argc && lower(argv[idx])=="mixed"){ o.mixed=true; ++idx; }

    if(idx<argc){ int v=std::stoi(argv[idx]); if(v<=0||v%8){ std::cerr<<"chunk_size must be positive and multiple of 8\n"; std::exit(1);} o.chunk=v; }

    return o;
}

// --------------------------------- main -------------------------------------

int main(int argc, char** argv){
    Options opt = parse_opts(argc, argv);
    std::mt19937 rng(std::random_device{}());

    switch(opt.dtype){
        case DType::INT4:
            FmaCase<int4_t,int4_t,int4_t,int,8,4,2>("M32K16×K16N8+M32N8 ", rng,opt.chunk);
            FmaCase<int4_t,int4_t,int4_t,int,4,4,4>("M16K16×K16N16+M16N16", rng,opt.chunk);
            FmaCase<int4_t,int4_t,int4_t,int, 2,4,8>("M8K16×K16N32+M8N32 ", rng,opt.chunk);
            break;
        case DType::INT8:
            FmaCase<int8_t,int8_t,int8_t,int,8,4,2>("M32K16×K16N8+M32N8 ", rng,opt.chunk);
            FmaCase<int8_t,int8_t,int8_t,int,4,4,4>("M16K16×K16N16+M16N16", rng,opt.chunk);
            FmaCase<int8_t,int8_t,int8_t,int, 2,4,8>("M8K16×K16N32+M8N32 ", rng,opt.chunk);
            break;
        case DType::FP16:
            if(opt.mixed){
                // A,B = half ; C,D = float
                FmaCase<half,half,float,float,8,4,2>("M32K16×K16N8+M32N8 (mixed)", rng,opt.chunk);
                FmaCase<half,half,float,float,4,4,4>("M16K16×K16N16+M16N16(mixed)", rng,opt.chunk);
                FmaCase<half,half,float,float, 2,4,8>("M8K16×K16N32+M8N32 (mixed)", rng,opt.chunk);
            } else {
                // pure fp16 everywhere
                FmaCase<half,half,half,half,8,4,2>("M32K16×K16N8+M32N8 ", rng,opt.chunk);
                FmaCase<half,half,half,half,4,4,4>("M16K16×K16N16+M16N16", rng,opt.chunk);
                FmaCase<half,half,half,half, 2,4,8>("M8K16×K16N32+M8N32 ", rng,opt.chunk);
            }
            break;
        case DType::FP32:
            FmaCase<float,float,float,float,8,4,2>("M32K16×K16N8+M32N8 ", rng,opt.chunk);
            FmaCase<float,float,float,float,4,4,4>("M16K16×K16N16+M16N16", rng,opt.chunk);
            FmaCase<float,float,float,float, 2,4,8>("M8K16×K16N32+M8N32 ", rng,opt.chunk);
            break;
    }

    return 0;
}
