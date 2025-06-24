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

// ------------------ half & bfloat16 -----------------------------------------
#include "half.hpp"
using half_float::half;

struct bfloat16 {
    uint16_t v{};
    constexpr bfloat16() = default;
    explicit bfloat16(float f) {
        uint32_t w; std::memcpy(&w, &f, 4);
        uint32_t lsb   = (w >> 16) & 1;
        uint32_t round = ((w & 0xFFFF) > 0x8000) ||
                         ((w & 0xFFFF) == 0x8000 && lsb);
        v = static_cast<uint16_t>((w >> 16) + round);
    }
    operator float() const {
        uint32_t w = uint32_t(v) << 16;
        float f; std::memcpy(&f, &w, 4); return f;
    }
};
inline std::ostream& operator<<(std::ostream& os, const bfloat16& x){
    return os << float(x);
}

// ------------------ int4 container ------------------------------------------
struct int4_t {
    int8_t v;
    int4_t(): v(0) {}
    explicit int4_t(int x){
        if(x<-8) x=-8; if(x>7) x=7; v = int8_t(x & 0xF);
    }
    operator int() const { int t=v&0xF; if(t&0x8) t|=~0xF; return t;}
};
inline std::ostream& operator<<(std::ostream& os, const int4_t& x){
    return os << int(x);
}

// ------------------ Matrix ---------------------------------------------------
template<typename T,size_t R,size_t C>
class Matrix{
public:
    Matrix(): data_(R*C) {}
    T&       operator()(size_t i,size_t j)       { return data_[i*C+j];}
    const T& operator()(size_t i,size_t j) const { return data_[i*C+j];}

    void random_fill(std::mt19937& rng){
        if constexpr(std::is_same_v<T,int4_t>){
            std::uniform_int_distribution<int> d(-8,7);
            for(auto& e:data_) e = int4_t(d(rng));
        } else if constexpr(std::is_same_v<T,int8_t>){
            std::uniform_int_distribution<int> d(-128,127);
            for(auto& e:data_) e = int8_t(d(rng));
        } else if constexpr(std::is_same_v<T,int16_t>){
            std::uniform_int_distribution<int> d(-32768,32767);
            for(auto& e:data_) e = int16_t(d(rng));
        } else if constexpr(std::is_same_v<T,bfloat16>){
            std::uniform_real_distribution<float> d(-8.f,8.f);
            for(auto& e:data_) e = bfloat16(d(rng));
        } else if constexpr(std::is_same_v<T,half>){
            std::uniform_real_distribution<float> d(-8.f,8.f);
            for(auto& e:data_) e = half(d(rng));
        } else { // float
            std::uniform_real_distribution<float> d(-8.f,8.f);
            for(auto& e:data_) e = d(rng);
        }
    }

    void flatten(std::vector<uint8_t>& out) const{
        for(const auto& e:data_){
            if constexpr(std::is_same_v<T,float>){
                uint32_t w; std::memcpy(&w,&e,4);
                out.insert(out.end(),(uint8_t*)&w,(uint8_t*)&w+4);
            } else if constexpr(std::is_same_v<T,half>){
                uint16_t h; std::memcpy(&h,&e,2);
                out.insert(out.end(),(uint8_t*)&h,(uint8_t*)&h+2);
            } else if constexpr(std::is_same_v<T,bfloat16>){
                uint16_t h=e.v;
                out.insert(out.end(),(uint8_t*)&h,(uint8_t*)&h+2);
            } else if constexpr(std::is_same_v<T,int16_t>){
                uint16_t w; std::memcpy(&w,&e,2);
                out.insert(out.end(),(uint8_t*)&w,(uint8_t*)&w+2);
            } else { // int8 / int4
                out.push_back(uint8_t(int(e)));
            }
        }
    }
private:
    std::vector<T> data_;
};

template <typename TA, typename TB, typename TC, typename TD,
          size_t M, size_t K, size_t N>
class FmaCase {
public:
    std::vector<uint8_t> bufA, bufB, bufC, bufD;

    template <typename T, size_t R, size_t C>
void print_matrix_tiles_hex(const Matrix<T, R, C>& D, const std::string& tag) {
    static_assert(R % 8 == 0 && C % 8 == 0, "Matrix dimensions must be multiple of 8");

    std::cout << "\n>>> " << tag << " — " << R << "×" << C << " in 8×8 tiles (hex view)\n";

    size_t tile_id = 0;
    for (size_t r = 0; r < 8; ++r) {
                for (size_t c = 0; c < 8; ++c) {
                    std::cout << "PE "
                      << " ["<<8*r+c<<"]\n";
    for (size_t tr = 0; tr < R; tr += 8) {
        for (size_t tc = 0; tc < C; tc += 8) {
                    const T& val = D(tr + r, tc + c);
                    if constexpr (std::is_same_v<T, float>) {
                        uint32_t bits;
                        std::memcpy(&bits, &val, sizeof(bits));
                        std::cout << std::hex << std::uppercase << std::setw(8) << std::setfill('0') << bits << " ";
                    } else if constexpr (std::is_same_v<T, half>) {
                        uint16_t bits;
                        std::memcpy(&bits, &val, sizeof(bits));
                        std::cout << std::hex << std::uppercase << std::setw(8) << std::setfill('0') << bits << " ";
                    } else {
                         int32_t bits;
                        std::memcpy(&bits, &val, sizeof(bits));
                        std::cout << std::hex << std::uppercase << std::setw(8) << std::setfill('0') << bits << " ";
                    }
                }
                std::cout << '\n';
            }
            std::cout << std::dec << '\n';
        }
    }
}

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

        print_matrix_tiles_hex(D,"print D in tensorcore format");
    }
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



// ------------------ CLI ------------------------------------------------------
enum class DType { INT4, INT8, INT16, FP16, BF16, FP32 };

static std::string lower(std::string s){ for(char&c:s)c=std::tolower(c);return s;}

static void usage(const char* exe){
    std::cerr<<"Usage: "<<exe<<" <dtype> [mixed] [chunk_size]\n"
             <<"  dtype: int4 | int8 | int16 | fp16 | bf16 | fp32\n"
             <<"  mixed: (only for fp16) A,B fp16 ; C,D fp32\n"
             <<"  chunk_size: positive multiple of 8 (default 32)\n";
}
struct Options{ DType dtype; bool mixed=false; size_t chunk=32;};

static Options parse_opts(int argc,char**argv){
    if(argc<2){usage(argv[0]);std::exit(1);}
    Options o; std::string d=lower(argv[1]);
    if(d=="int4")           o.dtype=DType::INT4;
    else if(d=="int8")      o.dtype=DType::INT8;
    else if(d=="int16")     o.dtype=DType::INT16;
    else if(d=="fp16"||d=="half") o.dtype=DType::FP16;
    else if(d=="bf16"||d=="bfloat16") o.dtype=DType::BF16;
    else if(d=="fp32"||d=="float")   o.dtype=DType::FP32;
    else{ std::cerr<<"Unsupported dtype "<<argv[1]<<"\n";usage(argv[0]);std::exit(1);}

    int idx=2;
    if(o.dtype==DType::FP16 && idx<argc && lower(argv[idx])=="mixed"){ o.mixed=true; ++idx;}
    if(idx<argc){ int v=std::stoi(argv[idx]); if(v<=0||v%8){std::cerr<<"chunk must multiple 8\n";std::exit(1);} o.chunk=v;}
    return o;
}
