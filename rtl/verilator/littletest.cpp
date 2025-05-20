// matrix_fma.cpp — Generate & print matrices A, B, C, D and byte‑buffers for Verilator
// -----------------------------------------------------------------------------
// Compile:  g++ -std=c++17 -O3 matrix_fma.cpp -o matrix_fma
// Usage:    ./matrix_fma <dtype> [chunk_size]
//           dtype       = int4 | int8 | fp16 | fp32
//           chunk_size  = bytes per slice exported from the flattened buffer
//                         (must be a positive multiple of 8, default = 32)
//
// The program instantiates three shapes mimicking ML tiles and performs
//   D = A * B + C
// for the selected precision.  It then
//   • prints A, B, C and D in a human‑readable table
//   • flattens A, B, C row‑major into std::vector<uint8_t>
//   • dumps the buffer as hexadecimal words sliced every <chunk_size> bytes
//
// This makes the output plug‑and‑play for Verilator testbenches that expect
// fixed‑width bursts (e.g. 32‑byte beats on a 256‑bit AXI).
// -----------------------------------------------------------------------------

#include <algorithm>
#include <cstdint>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <random>
#include <stdexcept>
#include <string>
#include <type_traits>
#include <vector>

// half‑precision (header‑only: half.hpp by Christoph Hohn)
#include "half.hpp"
using half_float::half;

// ------------------------------ INT4 TYPE -----------------------------------
struct int4_t {
    int8_t v; // lower nibble = signed value in [‑8,7]
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
inline std::ostream& operator<<(std::ostream& os, const int4_t& x) {
    return os << static_cast<int>(x);
}

// ----------------------------- MATRIX CLASS ---------------------------------

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
        } else {
            std::uniform_real_distribution<float> dist(-1.0f, 1.0f);
            for (auto& e : data_) e = dist(rng);
        }
    }

    // Append all elements to a byte vector in row‑major order
    void flatten(std::vector<uint8_t>& out) const {
        for (const auto& e : data_) {
            if constexpr (std::is_same_v<T, float>) {
                uint32_t word; std::memcpy(&word, &e, 4);
                out.insert(out.end(), reinterpret_cast<uint8_t*>(&word),
                           reinterpret_cast<uint8_t*>(&word) + 4);
            } else if constexpr (std::is_same_v<T, half>) {
                uint16_t h; std::memcpy(&h, &e, 2);
                out.insert(out.end(), reinterpret_cast<uint8_t*>(&h),
                           reinterpret_cast<uint8_t*>(&h) + 2);
            } else { // int8_t or int4_t (stored in one byte)
                out.push_back(static_cast<uint8_t>(static_cast<int>(e)));
            }
        }
    }

private:
    std::vector<T> data_;
};

// --------------------------- MATRIX PRINTER ---------------------------------

template <typename T, size_t R, size_t C>
void print_matrix(const Matrix<T,R,C>& M, const std::string& name) {
    std::cout << "\n>>> " << name << " (" << R << "×" << C << ")\n";
    for (size_t i = 0; i < R; ++i) {
        for (size_t j = 0; j < C; ++j) {
            if constexpr (std::is_same_v<T, half>)
                std::cout << std::setw(8) << float(M(i,j));
            else if constexpr (std::is_same_v<T, int8_t>)
                std::cout << std::setw(8) << +M(i,j);
            else
                std::cout << std::setw(8) << M(i,j);
        }
        std::cout << '\n';
    }
}

// --------------------------- BUFFER DUMPER ----------------------------------

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

// ---------------------- FMA FOR ONE CASE ------------------------------------

template <typename TA, typename TB, typename TC, size_t M, size_t K, size_t N>
void fma_case(const std::string& label, std::mt19937& rng, size_t chunk) {
    Matrix<TA, M, K> A; A.random_fill(rng);
    Matrix<TB, K, N> B; B.random_fill(rng);
    Matrix<TC, M, N> C; C.random_fill(rng);

    // Compute D in FP32 for accuracy, then store as float
    Matrix<float, M, N> D;
    for (size_t i = 0; i < M; ++i) {
        for (size_t j = 0; j < N; ++j) {
            float acc = 0.0f;
            for (size_t k = 0; k < K; ++k)
                acc += static_cast<float>(A(i,k)) * static_cast<float>(B(k,j));
            D(i,j) = acc + static_cast<float>(C(i,j));
        }
    }

    // -------- print matrices --------
    std::cout << "\n=== " << label << " ===\n";
    print_matrix(A, "A");
    print_matrix(B, "B");
    print_matrix(C, "C");
    print_matrix(D, "D = A*B + C");

    // -------- flatten to buffers --------
    std::vector<uint8_t> bufA, bufB, bufC;
    A.flatten(bufA); B.flatten(bufB); C.flatten(bufC);

    std::cout << "\n--- Flattened buffers (chunk=" << chunk << " bytes) ---\n";
    std::cout << "A buffer (" << bufA.size() << " bytes):\n"; dump_buffer(bufA, chunk);
    std::cout << "B buffer (" << bufB.size() << " bytes):\n"; dump_buffer(bufB, chunk);
    std::cout << "C buffer (" << bufC.size() << " bytes):\n"; dump_buffer(bufC, chunk);
}

// -------------------------- DISPATCH LOGIC ----------------------------------

enum class DType { INT4, INT8, FP16, FP32 };

static DType parse_dtype(const std::string& s) {
    std::string t; for (char ch : s) t += std::tolower(ch);
    if (t == "int4")  return DType::INT4;
    if (t == "int8")  return DType::INT8;
    if (t == "fp16" || t == "half" || t == "float16") return DType::FP16;
    if (t == "fp32" || t == "float" || t == "float32") return DType::FP32;
    throw std::invalid_argument("Unsupported dtype " + s);
}

static size_t parse_chunk(int argc, char** argv) {
    size_t chunk = 32; // default
    if (argc >= 3) {
        int v = std::stoi(argv[2]);
        if (v <= 0 || v % 8) throw std::invalid_argument("chunk_size must be a positive multiple of 8");
        chunk = static_cast<size_t>(v);
    }
    return chunk;
}

template <typename T>
void run_all(std::mt19937& rng, size_t chunk) {
    fma_case<T,T,T,4,4, 4 >("M32K16×K16N8+M32N8 ", rng, chunk);
    fma_case<T,T,T,8,4,2>("M16K16×K16N16+M16N16", rng, chunk);
    fma_case<T,T,T, 2,4,8>("M8K16×K16N32+M8N32 ", rng, chunk);
}

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <dtype> [chunk_size]\n"
                  << "dtype = int4 | int8 | fp16 | fp32\n"
                  << "chunk_size (bytes, multiple of 8, default 32)\n";
        return 1;
    }

    try {
        DType dt = parse_dtype(argv[1]);
        size_t chunk = parse_chunk(argc, argv);
        std::mt19937 rng(std::random_device{}());

        switch (dt) {
            case DType::INT4: run_all<int4_t>(rng, chunk); break;
            case DType::INT8: run_all<int8_t>(rng, chunk); break;
            case DType::FP16: run_all<half>(rng, chunk);   break;
            case DType::FP32: run_all<float>(rng, chunk);  break;
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
        return 1;
    }

    return 0;
}
