// matrix_fma.cpp
// Compile with: g++ -std=c++17 -O3 matrix_fma.cpp -o matrix_fma
// Requires the header‑only half‑precision implementation (half.hpp) by Christoph Hohn.
//
// This sample demonstrates fused matrix multiply‑add (FMA):
//     D = A * B + C
// for **three fixed shapes** that mimic typical ML tile sizes and **four data precisions**:
//
//   Shapes (M×K) * (K×N) + (M×N)  →  D(M×N)
//   -------------------------------------------------
//   1. 32×16  * 16×8  + 32×8   (label: M32K16*K16N8+M32N8)
//   2. 16×16  * 16×16 + 16×16  (label: M16K16*K16N16+M16N16)
//   3.  8×16  * 16×32 +  8×32  (label: M8K16*K16N32+M8N32)
//
//   Precisions: INT4, INT8, FP16, FP32 (select ONE for the entire run)
//
// Usage:   ./matrix_fma <dtype>
// Example: ./matrix_fma int4
// --------------------------------------------------------------

#include <cstdint>
#include <iomanip>
#include <iostream>
#include <random>
#include <stdexcept>
#include <string>
#include <type_traits>
#include <vector>

// half‑precision support (header‑only)
#include "half.hpp"
using half_float::half;

// ----------------------------- INT4 ----------------------------
struct int4_t {
    int8_t v; // lower 4 bits store signed value [‑8, 7]
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
inline std::ostream& operator<<(std::ostream& os, const int4_t& x) { return os << static_cast<int>(x); }

// --------------------------- Matrix ----------------------------

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

private:
    std::vector<T> data_;
};

// -------------------- Fused Multiply‑Add -----------------------

template <typename TA, typename TB, typename TC, size_t M, size_t K, size_t N>
void fma_case(const std::string& label, std::mt19937& rng) {
    Matrix<TA, M, K> A; A.random_fill(rng);
    Matrix<TB, K, N> B; B.random_fill(rng);
    Matrix<TC, M, N> C; C.random_fill(rng);

    // D stored in FP32 for numerical range
    float D[M][N] = {0};
    for (size_t i = 0; i < M; ++i) {
        for (size_t k = 0; k < K; ++k) {
            float a = static_cast<float>(A(i, k));
            for (size_t j = 0; j < N; ++j) {
                D[i][j] += a * static_cast<float>(B(k, j));
            }
        }
        for (size_t j = 0; j < N; ++j) {
            D[i][j] += static_cast<float>(C(i, j));
        }
    }

    double checksum = 0.0;
    for (size_t i = 0; i < M; ++i)
        for (size_t j = 0; j < N; ++j)
            checksum += D[i][j];

    std::cout << label << "  ==>  checksum: " << std::setprecision(10) << checksum << '\n';
}

// ------------------------- Dispatcher --------------------------

enum class DType { INT4, INT8, FP16, FP32 };
DType parse_dtype(const std::string& s) {
    std::string t; for (char ch : s) t += std::tolower(ch);
    if (t == "int4")  return DType::INT4;
    if (t == "int8")  return DType::INT8;
    if (t == "fp16" || t == "half" || t == "float16") return DType::FP16;
    if (t == "fp32" || t == "float" || t == "float32") return DType::FP32;
    throw std::invalid_argument("Unsupported dtype " + s);
}

template <typename T>
void run_all(std::mt19937& rng) {
    fma_case<T, T, T, 32, 16, 8 >("M32K16*K16N8+M32N8 ", rng);
    fma_case<T, T, T, 16, 16, 16>("M16K16*K16N16+M16N16", rng);
    fma_case<T, T, T,  8, 16, 32>("M8K16*K16N32+M8N32 ", rng);
}

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <dtype>\n";
        std::cerr << "dtype = int4 | int8 | fp16 | fp32\n";
        return 1;
    }

    DType dt = parse_dtype(argv[1]);
    std::mt19937 rng(std::random_device{}());

    switch (dt) {
        case DType::INT4: run_all<int4_t>(rng); break;
        case DType::INT8: run_all<int8_t>(rng); break;
        case DType::FP16: run_all<half>(rng);   break;
        case DType::FP32: run_all<float>(rng);  break;
    }
    return 0;
}
