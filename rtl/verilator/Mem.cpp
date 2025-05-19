#include <cstddef>
#include <cstring>
#include<iostream>
#include <memory>
#include<vector>
//这个就专门用来验证tensorcore(不包含AXI),后面再提供一个可行的转换
enum class DataType {
    INT8,
    FP16,
    FP32
};

//FP32 
class FP16{
    //TODO:need check
    float to_float() const {//need more check
        uint16_t h = value;
        uint32_t sign = (h >> 15) & 0x1;
        uint32_t exp  = (h >> 10) & 0x1F;
        uint32_t frac =  h        & 0x3FF;
        uint32_t f;

        if (exp == 0) {
            if (frac == 0) {
                // ±0
                f = sign << 31;
            } else {
                // subnormal
                int shift = __builtin_clz(frac) - 21; // normalize
                frac <<= shift;
                exp = 127 - 15 - shift + 1;
                f = (sign << 31) | (exp << 23) | ((frac & 0x3FF) << 13);
            }
        } else if (exp == 0x1F) {
            // Inf or NaN
            f = (sign << 31) | (0xFF << 23) | (frac ? (frac << 13) : 0);
        } else {
            // normal
            exp = exp - 15 + 127;
            f = (sign << 31) | (exp << 23) | (frac << 13);
        }
        float out;
        std::memcpy(&out, &f, sizeof(f));
        return out;
    }
    bool is_nan() const
    {
        // 通过上面的定义判断是否为NaN
        return (value & 0x7FFF) > 0x7C00;
    }

    bool operator==(const FP16 &other) const
    {
        if (is_nan() || other.is_nan())
        {
            return false;
        }
        else
        {
            // 直接判断二进制内容是否相等，或者exponent和fraction全为0，此时表示正负0相等
            return (value == other.value) || ((value | other.value) & 0x7FFF) == 0;
        }
    }

     bool operator<(const FP16 &other) const
    {
        if (is_nan() || other.is_nan())
        {
            return false;
        }
        else
        {
            // 判断正负符号位
            bool neg = (value & 0x8000) != 0;
            bool other_neg = (other.value & 0x8000) != 0;
            // 都为正数，直接比较value
            if (!neg && !other_neg)
            {
                return value < other.value;
            }
            // neg为正，other_neg负，返回false
            else if (!neg && other_neg)
            {
                return false;
            }
            // neg为负，other_neg正
            // 进一步判断this和other是否都为0，不都为0，负数肯定小于正数
            else if (neg && !other_neg)
            {
                return ((value | other.value) & 0x7FFF) != 0;
            }
            // 都为负数，直接比较value
            else
            {
                return value > other.value;
            }
        }
    }
    friend std::ostream& operator<<(std::ostream &os, const FP16 &h) {
        return os << h.to_float();
    }
    bool operator<=(const FP16 &other) const
    {
        if (is_nan() || other.is_nan())
        {
            return false;
        }
        else
        {
            bool neg = (value & 0x8000) != 0;
            bool other_neg = (other.value & 0x8000) != 0;
            if (!neg && !other_neg)
            {
                return value <= other.value;
            }
            else if (!neg && other_neg)
            {
                return ((value | other.value) & 0x7FFF) == 0;
            }
            else if (neg && !other_neg)
            {
                return true;
            }
            else
            {
                return value >= other.value;
            }
        }
    }
  private:
  uint16_t value;
};

class Matrix {
protected:
    size_t rows;
    size_t cols;
    DataType type;

public:
    Matrix(size_t r, size_t c, DataType t) : rows(r), cols(c), type(t) {}
    virtual ~Matrix() {}

    virtual void* data() = 0;
    virtual void print() const = 0;

    size_t getRows() const { return rows; }
    size_t getCols() const { return cols; }
    DataType getType() const { return type; }
};

template<typename T>
class TypedMatrix : public Matrix {
private:
    std::vector<T> buffer;

public:
    TypedMatrix(size_t r, size_t c, DataType t)
        : Matrix(r, c, t), buffer(r * c) {}

    void* data() override {
        return buffer.data();
    }

    void set(size_t i, size_t j, T value) {
        buffer[i * cols + j] = value;
    }

    T get(size_t i, size_t j) const {
        return buffer[i * cols + j];
    }

    void print() const override {
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                std::cout << get(i, j) << " ";
            }
            std::cout << "\n";
        }
    }
};


std::unique_ptr<Matrix> createMatrix(size_t rows, size_t cols, DataType type) {
    switch (type) {
        case DataType::INT8:
            return std::make_unique<TypedMatrix<int8_t>>(rows, cols, type);
        case DataType::FP16:
            return std::make_unique<TypedMatrix<FP16>>(rows, cols, type);
        case DataType::FP32:
            return std::make_unique<TypedMatrix<float>>(rows, cols, type);
        default:
            throw std::runtime_error("Unsupported type.");
    }
}

//FP32,INT8可以直接用,但是INT4,FP16不能


//INT4需要我单独写和算
class matrix_INT4{
  private:
    size_t rows;
    size_t cols;
    std::vector<uint8_t> buffer;
};



