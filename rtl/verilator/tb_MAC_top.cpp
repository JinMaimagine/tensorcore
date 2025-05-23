// tb_MAC_top.cpp
// -----------------------------------------------------------------------------
// Randomised verification test‑bench for MAC_top.
// ‑ 100 random cases for each supported mode (7 × 100 = 700 total).
// ‑ Compares DUT output against a software golden model.
// ‑ Reports overall statistics and detailed information for any mismatches.
// -----------------------------------------------------------------------------
//
// Build example (Linux / macOS, GCC/Clang):
//   verilator -Wall -cc MAC_top.sv --exe tb_MAC_top.cpp -CFLAGS "-std=c++17" \
//             -trace --build
//   ./obj_dir/Vtb_MAC_top           # or ./obj_dir/VMAC_top depending on prefix
//
// If you enable ‑trace the bench will emit wave.vcd.
//
// -----------------------------------------------------------------------------
#include <verilated.h>
#include "VMAC_top.h"
#include <verilated_vcd_c.h>

#include <bitset>
#include <cassert>
#include <cinttypes>
#include <iomanip>
#include <iostream>
#include <random>
#include <sstream>
#include <string>
#include <vector>
#include <fstream>

static vluint64_t main_time = 0;                     // simulation time
double sc_time_stamp() { return main_time; }         // called by $time in RTL

/* -------------------------------------------------------------------------- */
/*  Utility helpers                                                           */
/* -------------------------------------------------------------------------- */

// 128‑bit hex formatting ------------------------------------------------------
static std::string to_hex128(__uint128_t v) {
    std::ostringstream oss;
    oss << std::hex << std::setfill('0')
        << std::setw(16) << static_cast<uint64_t>(v >> 64)
        << std::setw(16) << static_cast<uint64_t>(v & 0xffff'ffff'ffff'ffffULL);
    return oss.str();
}

// 32‑bit float <‑> raw bits helpers ------------------------------------------
static uint32_t float_to_bits(float f) {
    static_assert(sizeof(float) == sizeof(uint32_t));
    uint32_t u;
    std::memcpy(&u, &f, sizeof(u));
    return u;
}
static float bits_to_float(uint32_t u) {
    float f;
    std::memcpy(&f, &u, sizeof(f));
    return f;
}

// Fraction和man、Significand、mantissa 指的同一个东西，都是尾数位，F16的最后10位，F32的最后23位。
// In the below functions, round to nearest, with ties to even.
// Let us call the most significant bit that will be shifted out the round_bit.
//
// Round up if either
//  a) Removed part > tie.
//     (mantissa & round_bit) != 0 && (mantissa & (round_bit - 1)) != 0
//  b) Removed part == tie, and retained part is odd. F32的Fraction右移动13位后，剩下部分是奇数，可以进位
//     (mantissa & round_bit) != 0 && (mantissa & (2 * round_bit)) != 0
// F32的Fraction右移动13位后，剩下部分是奇数，可以进位
// (If removed part == tie and retained part is even, do not round up.)
// These two conditions can be combined into one:
//     (mantissa & round_bit) != 0 && (mantissa & ((round_bit - 1) | (2 * round_bit))) != 0
// which can be simplified into
//     (mantissa & round_bit) != 0 && (mantissa & (3 * round_bit - 1)) != 0
static uint16_t float_to_fp16(float value)
{
    // Convert to raw bytes
    uint32_t x;
    std::memset(&x, 0, sizeof(uint32_t));
    std::memcpy(&x, &value, sizeof x);

    // Extract IEEE754 components
    uint32_t sign = x & 0x80000000u;
    uint32_t exp = x & 0x7F800000u;
    uint32_t man = x & 0x007FFFFFu;

    // Check for all exponent bits being set, which is Infinity or NaN
    // Exponent全为1，表示Infinity or NaN
    if (exp == 0x7F800000u)
    {
        uint32_t nan_bit = (man == 0) ? 0 : 0x0200u;
        // 0x7C00u 表示F16的Exponent全为1
        // nan_bit：如果man==0，表示+-infinity，所以直接把(man >> 13)就变成了F16的man
        // 如果man != 0, 把（man >> 13）可能变成了0，所以加上一个nan_bit，确保转换成的F16！=0
        return (sign >> 16) | 0x7C00u | nan_bit | (man >> 13);
    }

    // 右移16bit转换成F16的sign
    uint32_t half_sign = sign >> 16;
    // 127是F32的Exponent的偏移
    // 从F32的Exponent转换成F16，就需要exp的值 - 127 + 15, 15是F16的偏移
    int32_t unbiased_exp = ((exp >> 23) - 127);
    int32_t half_exp = unbiased_exp + 15;

    // 表示half_exp超过F16的Exponent最大表示，11111
    // Check for exponent overflow, return +infinity
    // 表示infinity
    if (half_exp >= 0x1F)
    {
        // 0x7C00u表示，F16表示的bit位，Fraction全部为0, Exponent全部为1
        return half_sign | 0x7C00u;
    }

    // Check for underflow
    if (half_exp <= 0)
    {
        // Check mantissa for what we can do
        if ((14 - half_exp) > 24)
        {
            // No rounding possibility, so this is a full underflow, return signed zero
            return half_sign;
        }
        man = man | 0x00800000u;
        uint32_t half_man = man >> (14 - half_exp);
        uint32_t round_bit = 1 << (13 - half_exp);
        if ((man & round_bit) != 0 && (man & (3 * round_bit - 1)) != 0)
        {
            half_man++;
        }
        return half_sign | half_man;
    }
    // Rebias the exponent, 左移10位到F16的Exponent表示位置
    half_exp = (half_exp << 10);
    // 右移动13位，到F16的Significand表示位置
    uint32_t half_man = man >> 13;
    // round_bit表示F32的Fraction中的从右往左的第13位，也就是转换成F16（10位）时要移除的最后一个位置。
    uint32_t round_bit = 0x00001000u;
    // Check for rounding (see comment above functions)
    if ((man & round_bit) != 0 && (man & (3 * round_bit - 1)) != 0)
    {
        // Round it
        return (half_sign | half_exp | half_man) + (uint32_t)1;
    }
    else
    {
        return half_sign | half_exp | half_man;
    }
}// f16的格式定义：https://en.wikipedia.org/wiki/Half-precision_floating-point_format
// f32的格式定义：https://en.wikipedia.org/wiki/Single-precision_floating-point_format
// Fraction和man、Significand、mantissa 指的同一个东西，都是尾数位，F16的最后10位，F32的最后23位。
static float fp16_to_float(uint16_t i)
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
// 4‑/8‑/16‑/32‑bit field helpers ---------------------------------------------
template <typename INT> static INT clip(INT v, int bits) {
    INT mask = (static_cast<INT>(1) << bits) - 1;
    return static_cast<INT>(v & mask);
}

/* -------------------------------------------------------------------------- */
/*  Clock helper                                                              */
/* -------------------------------------------------------------------------- */
static void tick(VMAC_top* dut) {
    dut->clk = 0;
    dut->eval();
    dut->clk = 1;
    dut->eval();
    ++main_time;
}

/* -------------------------------------------------------------------------- */
struct FailInfo {
    uint8_t      mode;
    int          idx;
    uint32_t     in1;
    uint32_t     in2;
    __uint128_t  in3;
    __uint128_t  expected;
    __uint128_t  actual;
};

/* -------------------------------------------------------------------------- */
/*  Main                                                                      */
/* -------------------------------------------------------------------------- */
int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    VMAC_top* dut = new VMAC_top;
    // ---------- redirect all std::cout output to a log file ----------
    std::ofstream log_file("sim.log");
    std::streambuf* cout_backup = std::cout.rdbuf();   // save original buffer
    std::cout.rdbuf(log_file.rdbuf());                 // redirect

#ifdef TRACE
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("wave.vcd");
#endif

    // ------------------------------------------------------------------ reset
    dut->rst = 1;
    tick(dut);
    tick(dut);
    dut->rst = 0;

    // ---------------------------------------------------------------- rng + stats
    std::mt19937                 rng{0xC0FFEE};
    const uint8_t                modes[7] = {0, 1, 2, 3, 4, 5, 6};
    int pass_per_mode[8] = {0};        // per‑mode pass counters
    int                          total_tests = 0;
    std::vector<FailInfo>        fails;

    // ---------------------------------------------------------------- test loop
    for (uint8_t mode : modes) {
        for (int tcase = 0; tcase < 100; ++tcase) {
            uint32_t    in1 = 0, in2 = 0;
            __uint128_t in3 = 0, expected = 0;

            switch (mode) {
                /* ------------------------------------------------ fp16 normal */
                case 0b000: {
                    // std::uniform_real_distribution<float> dist(-65000.0f, 65000.0f);
                    std::uniform_real_distribution<float> dist(-5.0f, 5.0f);

                    float A = dist(rng), B = dist(rng), C = dist(rng);

                    uint16_t a16 = float_to_fp16(A);
                    uint16_t b16 = float_to_fp16(B);
                    uint16_t c16 = float_to_fp16(C);

                    in1 = a16;                         // low 16‑bits used
                    in2 = b16;
                    in3 = c16;

                    //模拟模块计算过程：先转成fp32，再计算，再转回fp16
                    float A_ = fp16_to_float(a16);
                    float B_ = fp16_to_float(b16);
                    float C_ = fp16_to_float(c16);

                    float R = A_ * B_ + C_;
                    expected = static_cast<uint16_t>(float_to_fp16(R));
                    break;
                }
                /* ----------------------------------------------- fp16 mix (32) */
                case 0b001: {
                    std::uniform_real_distribution<float> d16(-65000.0f, 65000.0f);
                    std::uniform_real_distribution<float> d32(-1.0e6f, 1.0e6f);
                    float A = d16(rng), B = d16(rng), C = d32(rng);

                    //模拟输入
                    uint16_t a16 = float_to_fp16(A);
                    uint16_t b16 = float_to_fp16(B);
                    uint32_t c32 = float_to_bits(C);

                    in1 = a16;
                    in2 = b16;
                    in3 = c32;

                    //模拟模块计算过程：先转成fp32，再计算，不用转回fp16
                    float a32_ = fp16_to_float(a16);
                    float b32_ = fp16_to_float(b16);

                    float R = a32_ * b32_ + C;
                    expected = static_cast<uint32_t>(float_to_bits(R));
                    break;
                }
                /* ------------------------------------------------- fp32 normal */
                case 0b010: {
                    std::uniform_real_distribution<float> dist(-1.0e6f, 1.0e6f);
                    float A = dist(rng), B = dist(rng), C = dist(rng);

                    uint32_t a32 = float_to_bits(A);
                    uint32_t b32 = float_to_bits(B);
                    uint32_t c32 = float_to_bits(C);

                    in1 = a32;
                    in2 = b32;
                    in3 = c32;

                    float R = A * B + C;
                    expected = static_cast<uint32_t>(float_to_bits(R));
                    break;
                }
                /* ----------------------------------------------- INT4 normal */
                case 0b011:break; // no INT4 normal mode
                /* ----------------------------------------------- INT4 mix   */
                case 0b101: {
                    std::uniform_int_distribution<int>  d4(-8, 7);
                    // std::uniform_int_distribution<int> d16(-32768, 32767);
                    std::uniform_int_distribution<int> d16(-10000, 10000);

                    for (int i = 0; i < 8; ++i) {
                        int v1 = d4(rng);
                        int v2 = d4(rng);
                        int16_t v3 = static_cast<int16_t>(d16(rng));

                        in1 |= clip<uint32_t>(v1, 4) << (4 * i);
                        in2 |= clip<uint32_t>(v2, 4) << (4 * i);
                        in3 |= static_cast<__uint128_t>(static_cast<uint16_t>(v3)) << (16 * i);

                        int16_t prod = static_cast<int8_t>(v1) * static_cast<int8_t>(v2);
                        int16_t res  = static_cast<int16_t>(prod + v3);
                        expected |= static_cast<__uint128_t>(static_cast<uint16_t>(res)) << (16 * i);
                    }
                    break;
                }
                /* -------------------------------- IN3 adjacent‑16 add (mode 100) */
                case 0b100: {
                    std::uniform_int_distribution<int> d16(-32768, 32767);
                    int16_t seg[8];

                    /* pack 8×16‑bit signed segments into IN3 */
                    for (int i = 0; i < 8; ++i) {
                        seg[i] = static_cast<int16_t>(d16(rng));
                        in3 |= static_cast<__uint128_t>(static_cast<uint16_t>(seg[i])) << (16 * i);
                    }

                    /* adjacent‑pair addition: (0+1), (2+3), (4+5), (6+7) */
                    for (int p = 0; p < 4; ++p) {
                        int32_t s = static_cast<int32_t>(seg[2 * p]) +
                                    static_cast<int32_t>(seg[2 * p + 1]);
                        expected |= static_cast<__uint128_t>(static_cast<uint32_t>(s)) << (32 * p);
                    }
                    break;
                }
                /* ----------------------------------------------- INT8 mix   */
                case 0b110: {
                    std::uniform_int_distribution<int>  d8(-128, 127);
                    std::uniform_int_distribution<int> d32(-1'000'000, 1'000'000);

                    for (int i = 0; i < 4; ++i) {
                        int v1 = d8(rng);
                        int v2 = d8(rng);
                        int32_t v3 = static_cast<int32_t>(d32(rng));

                        in1 |= clip<uint32_t>(v1, 8) << (8 * i);
                        in2 |= clip<uint32_t>(v2, 8) << (8 * i);
                        in3 |= static_cast<__uint128_t>(static_cast<uint32_t>(v3)) << (32 * i);

                        int32_t prod = static_cast<int16_t>(v1) * static_cast<int16_t>(v2);
                        int32_t res  = prod + v3;
                        expected |= static_cast<__uint128_t>(static_cast<uint32_t>(res)) << (32 * i);
                    }
                    break;
                }
                default: assert(!"Unhandled mode");     // should never hit
            }

            /* -------------------------------------------------- drive inputs */
            dut->mode            = mode;
            dut->Rounding_mode_i = 0;                  // RNE
            dut->MAC_top__02EIN1 = in1;
            dut->MAC_top__02EIN2 = in2;
            for (int w = 0; w < 4; ++w) {
                dut->IN3[w] = static_cast<uint32_t>(in3 >> (32 * w));
            }

            /* ------------------------------------------------- pipeline wait */
            // const int wait_cycles = (mode <= 0b010) ? 3 : 2; // fp=2‑stage, int=1‑stage
            const int wait_cycles = (mode <= 0b010) ? 2 : 1; // fp=2‑stage, int=1‑stage. //内部去掉了一层寄存器，放在外面写

            for (int i = 0; i < wait_cycles; ++i) tick(dut);

            /* --------------------------------------------------- sample OUT */
            __uint128_t actual = 0;
            for (int w = 0; w < 4; ++w) {
                actual |= static_cast<__uint128_t>(dut->OUT[w]) << (32 * w);
            }

            /* -------------------------------------------------- compare */
            bool ok;
            switch (mode) {
                case 0b000: ok = (static_cast<uint16_t>(actual) == static_cast<uint16_t>(expected)); break;
                case 0b001:
                case 0b010: ok = (static_cast<uint32_t>(actual) == static_cast<uint32_t>(expected)); break;
                default:    ok = (actual == expected); break;
            }

            if (!ok) {
                fails.push_back({mode, tcase, in1, in2, in3, expected, actual});
            }
            else {
                ++pass_per_mode[mode];
            }
            ++total_tests;
        }
        std::cout << "Mode " << std::bitset<3>(mode)
                  << " : " << pass_per_mode[mode] << "/100 passed\n";
    }

    // ---------------------------------------------------------------- summary
    std::cout << "============================================\n";
    std::cout << "Total tests : " << total_tests << '\n';
    std::cout << "Pass        : " << (total_tests - static_cast<int>(fails.size())) << '\n';
    std::cout << "Fail        : " << fails.size() << '\n';

    for (const auto& f : fails) {
        std::cout << "--------------------------------------------\n";
        std::cout << "Mode " << std::bitset<3>(f.mode) << " case #" << f.idx << '\n'
                  << " IN1 = 0x" << std::hex << std::setw(8) << std::setfill('0') << f.in1 << '\n'
                  << " IN2 = 0x" << std::setw(8) << f.in2 << '\n'
                  << " IN3 = 0x" << to_hex128(f.in3) << '\n'
                  << " Exp = 0x" << to_hex128(f.expected) << '\n'
                  << " Act = 0x" << to_hex128(f.actual)   << std::dec << '\n';
    }

#ifdef TRACE
    tfp->close();
    delete tfp;
#endif
    dut->final();
    delete dut;

    std::cout << "============================================\n";
    // ---------- restore stdout to terminal ----------
    std::cout.rdbuf(cout_backup);
    std::cout << "Simulation complete. Detailed log in sim.log\n";
    return fails.empty() ? 0 : 1;
}
