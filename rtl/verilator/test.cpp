#include <cstddef>
#include <cstring>
#include <iostream>
#include <memory>
#include <vector>
#include <stdexcept>

// … 你原来的 DataType/FP16/Matrix/TypedMatrix/createMatrix …

// 1) 给 FP16 增加从 float 构造，以及到 float 的隐式转换
class FP16 {
public:
    FP16() = default;
    // 构造：float -> 半精度
    FP16(float f) {
        value = float_to_half(f);
    }
    // 隐式转换：半精度 -> float
    operator float() const {
        return to_float();
    }

    // … to_float(), is_nan(), operator==, <, <=, friend<< … 留原样 …

private:
    uint16_t value;

    // 把单精度 float 转成半精度 bit-pattern 的简易实现
    static uint16_t float_to_half(float f) {
        uint32_t x;
        std::memcpy(&x, &f, sizeof(x));
        uint32_t sign = (x >> 31) & 0x1;
        int32_t exp  = int32_t((x >> 23) & 0xFF) - 127 + 15;
        uint32_t frac = x & 0x7FFFFF;
        if (exp <= 0) {
            // subnormal or zero
            if (exp < -10) return uint16_t(sign << 15);
            frac = (frac | 0x800000) >> (1 - exp);
            return uint16_t((sign << 15) | (frac >> 13));
        } else if (exp >= 31) {
            // overflow → Inf
            return uint16_t((sign << 15) | (0x1F << 10));
        } else {
            return uint16_t((sign << 15) | (exp << 10) | (frac >> 13));
        }
    }
};

// 2) 通用的 D = A*B + C 运算模板
template<typename T>
static std::unique_ptr<TypedMatrix<T>>
macTemplate(const TypedMatrix<T> &A,
            const TypedMatrix<T> &B,
            const TypedMatrix<T> &C) {
    size_t M = A.getRows(), K = A.getCols(), N = B.getCols();
    if (K != B.getRows() || M!=C.getRows()||N!=C.getCols())
        throw std::runtime_error("Dimension mismatch in MAC");
    auto D = std::make_unique<TypedMatrix<T>>(M, N, A.getType());
    for (size_t i = 0; i < M; ++i) {
        for (size_t j = 0; j < N; ++j) {
            T sum{};
            for (size_t k = 0; k < K; ++k) {
                sum = sum + A.get(i, k) * B.get(k, j);
            }
            D->set(i, j, sum + C.get(i, j));
        }
    }
    return D;
}

// 3) 根据实际类型分发
std::unique_ptr<Matrix>
mac(const Matrix &A, const Matrix &B, const Matrix &C) {
    if (A.getType() != B.getType() || A.getType() != C.getType())
        throw std::runtime_error("Type mismatch in mac()");
    switch (A.getType()) {
        case DataType::INT8:
            return macTemplate(
                static_cast<const TypedMatrix<int8_t>&>(A),
                static_cast<const TypedMatrix<int8_t>&>(B),
                static_cast<const TypedMatrix<int8_t>&>(C)
            );
        case DataType::FP16:
            return macTemplate(
                static_cast<const TypedMatrix<FP16>&>(A),
                static_cast<const TypedMatrix<FP16>&>(B),
                static_cast<const TypedMatrix<FP16>&>(C)
            );
        case DataType::FP32:
            return macTemplate(
                static_cast<const TypedMatrix<float>&>(A),
                static_cast<const TypedMatrix<float>&>(B),
                static_cast<const TypedMatrix<float>&>(C)
            );
        default:
            throw std::runtime_error("Unsupported DataType in mac()");
    }
}

// 在你的 main() 或者测试里，就可以这样调用：
//   auto A = createMatrix(M,K,DataType::FP16);
//   auto B = createMatrix(K,N,DataType::FP16);
//   auto C = createMatrix(M,N,DataType::FP16);
//   // 填 A/B/C ...
//   auto D = mac(*A, *B, *C);
//   D->print();