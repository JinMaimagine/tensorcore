#include <cstring>
#include<iostream>
#include<bit>


float fp16_to_float(uint16_t i)
{
    // Check for signed zero, 根据F16的表示规则，如果Exponent(5位)和Significand(10位)都为0，那么表示浮点数zero, -0
    // 转换成f32只需要向右移16位构成32位表示就可以了，即符号位+31位0
    if ((i & 0x7FFF) == 0)
    {
        uint32_t result = (static_cast<uint32_t>(i) << 16);
        float f = 0.0;
        std::memset(&f, 0, sizeof(f));
        std::memcpy(&f, &result, sizeof(result));
        return f;
    }

    // 根据f16的IEEE754-2008标准，获取sign，Exponent，Significand的值
    uint32_t half_sign = (i & 0x8000);
    uint32_t half_exp = (i & 0x7C00);
    uint32_t half_man = (i & 0x03FF);

    // Check for an infinity or NaN when all exponent bits set
    // 如果Exponent（5位）对应的bit位全是1，即11111，那么可能是infinity or NaN 
    if (half_exp == 0x7C00)
    {
        // 如果Significand（10位）是0，就表示+-infinity（无穷）
        // Check for signed infinity if mantissa is zero
        if (half_man == 0)
        {
            // 转换位float32就是，符号位 + float32的+-infinity表示
            // 即符号位：（half_sign << 16）
            // float32的+-infinity表示： Exponent（占用8bit）全为1，fraction（23bit）全为0，即0x7F800000
            uint32_t result = (half_sign << 16) | 0x7F800000;
            float f = 0.0;
            std::memset(&f, 0, sizeof(f));
            std::memcpy(&f, &result, sizeof(result));
            return f;
        }
        else
        {
            // 如果Significand（10位）不是0， 就表示NaN
            // 转换为对应Float32的NaN，即Exponent（占用8bit）全为1；fraction（23bit）为half_man右移动13位（f32的fraction表示位数减去f16的fraction表示的位数，即23 - 10等于13）
            // NaN, keep current mantissa but also set most significiant mantissa bit
            // 为啥不是 0x7F800000??? 
            uint32_t result = (half_sign << 16) | 0x7FC00000 | (half_man << 13);
            float f = 0.0;
            std::memset(&f, 0, sizeof(f));
            std::memcpy(&f, &result, sizeof(result));
            return f;
        }
    }

    // Calculate single-precision components with adjusted exponent
    // 转换为f32的符号位，右移动16位
    uint32_t sign = half_sign << 16;
    // Unbias exponent
    // 因为F16的Exponent的表示的不是e为底，Exponent为指数的指数函数，而是指数为Exponent-15，偏移量为15
    // 对应F32的偏移量为127，所以换成F32的Exponent就要E - 15 + 127表示
    int32_t unbiased_exp = (static_cast<int32_t>(half_exp) >> 10) - 15;
    
    // 通过前面的条件过滤，这里表示Exponent全为0，Significand不全为0，表示subnormal number
    // Check for subnormals, which will be normalized by adjusting exponent
    if (half_exp == 0)
    {
        // Calculate how much to adjust the exponent by
        int e = std::__countl_zero(half_man) - 6;

        // Rebias and adjust exponent
        uint32_t exp = (127 - 15 - e) << 23;
        uint32_t man = (half_man << (14 + e)) & 0x7FFFFF;
        uint32_t result = sign | exp | man;
        float f = 0.0;
        std::memset(&f, 0, sizeof(f));
        std::memcpy(&f, &result, sizeof(result));
        return f;
    }

    // Rebias exponent for a normalized normal
    // 这里的加127，对应上面说的F16转F32时Exponent要加上F32的Exponent偏移量127；向右移动23位到达表示Exponent对应的bit位置
    uint32_t exp = (static_cast<uint32_t>(unbiased_exp + 127)) << 23;
    // 向右移动13位，Significand值由F16的10位表示转换成23位表示
    uint32_t man = (half_man & 0x03FF) << 13;
    uint32_t result = sign | exp | man;
    float f = 0.0;
    std::memset(&f, 0, sizeof(f));
    std::memcpy(&f, &result, sizeof(result));
    return f;
}


uint32_t float_to_bits(float f) {
    static_assert(sizeof(float) == sizeof(uint32_t));
    uint32_t u;
    std::memcpy(&u, &f, sizeof(u));
    return u;
}


float bits_to_float(uint32_t u) {
    float f;
    std::memcpy(&f, &u, sizeof(f));
    return f;
}



int main() {
    uint32_t d;
    float c;
    std::cin>>std::hex>>d;
    c=bits_to_float(d);
    std::cout<<c<<std::endl;
    uint32_t a;
    uint32_t b;
    while(true)
    {
        std::cin>>std::hex>>a>>b;
        uint16_t a1=a;
        uint16_t b1=b;
        std::cout<<fp16_to_float(a1)<<std::endl;
        std::cout<<fp16_to_float(b1)<<std::endl;
        c=c+fp16_to_float(a1)*fp16_to_float(b1);
        std::cout<<c<<std::endl;
        std::cout<<std::hex<<float_to_bits(c)<<std::endl;
    }
}