// =============================================================
// Verilator C++ testbench for FP32→FP16 converter
// =============================================================
#include "VFP32toFP16.h"
#include "verilated.h"
#include <iomanip>
#include <vector>
#include <cstdint>
#include <iostream>
#include <random>
#include <cstring>
// -----------------------------------------------------------------------------
// Reference software conversion from IEEE‑754 FP32 to FP16 (RNE) together with
// expected Overflow (OF), Underflow (UF) and Inexact (NX) flag generation that
// mirrors the RTL logic.
// -----------------------------------------------------------------------------
static uint16_t fp32_to_fp16_ref(uint32_t bits,
                                 bool  &of_flag,
                                 bool  &uf_flag,
                                 bool  &nx_flag)
{
    const uint32_t sign   = (bits >> 31) & 0x1u;
    const uint32_t exp32  = (bits >> 23) & 0xFFu;
    const uint32_t man32  =  bits        & 0x7FFFFFu;

    of_flag = false;
    uf_flag = false;
    bool nv_flag  = false;
    bool is_inf   = false;

    uint16_t result = 0;

    if (exp32 == 0xFFu) {                      // Inf or NaN
        if (man32 == 0) {                      //  ±Inf
            result  = static_cast<uint16_t>((sign << 15) | 0x7C00);
            of_flag = true;
            is_inf  = true;
        } else {                               //  NaN – keep payload
            uint16_t mant16 = static_cast<uint16_t>(man32 >> 13);
            if (mant16 == 0) mant16 = 0x0200;  // make sure mantissa!=0
            result  = static_cast<uint16_t>((sign << 15) | 0x7C00 | (mant16 & 0x03FF));
            nv_flag = true;                    // Invalid‑op flag in RTL
        }
    } else {
        int  unbiased = static_cast<int>(exp32) - 127;
        int  half_exp = unbiased + 15;

        if (half_exp >= 31) {                  // Overflow – saturate to FP16 max
            result  = 0x7BFF;                  // RTL ignores sign on overflow
            of_flag = true;
        }
        else if (half_exp <= 0) {              // Subnormal or Underflow
            if (half_exp < -9) {               // Too small – flush to zero
                result  = static_cast<uint16_t>(sign << 15);
                uf_flag = true;
            } else {                           // Create subnormal, round‑to‑nearest‑even
                uint32_t man24   = (1u << 23) | man32;    // implicit leading 1
                int      rshift  = 14 - half_exp;         // 14 … 23
                uint32_t half_man= man24 >> rshift;

                uint32_t round_bit = (man24 >> (rshift - 1)) & 0x1u;
                bool     sticky    = (man24 & ((1u << (rshift - 1)) - 1)) != 0;
                bool     incr      = (round_bit && sticky) ||
                                      ((half_man & 0x1u) && round_bit && !sticky);

                uint32_t sum11 = half_man + incr;         // 11‑bit result
                uint32_t exp5  = 0;

                if (sum11 & 0x400u) {                     // carry from rounding
                    sum11 = 0;
                    exp5  = 1;
                }
                result = static_cast<uint16_t>((sign << 15) | (exp5 << 10) | (sum11 & 0x3FFu));
            }
        }
        else {                                           // Normalised path
            uint32_t mant10    = man32 >> 13;
            uint32_t round_bit = (man32 >> 12) & 0x1u;
            bool     sticky    = (man32 & 0xFFFu) != 0;
            bool     incr      = (round_bit && sticky) ||
                                  ((mant10 & 0x1u) && round_bit && !sticky);

            uint32_t sum11 = mant10 + incr;              // may overflow
            int      exp5  = half_exp;

            if (sum11 & 0x400u) {                        // mantissa overflow
                sum11 = 0;
                ++exp5;
            }

            if (exp5 >= 31) {                            // re‑check overflow
                result  = 0x7BFF;
                of_flag = true;
            } else {
                result = static_cast<uint16_t>((sign << 15) |
                                                ((exp5 & 0x1F) << 10) |
                                                (sum11 & 0x3FFu));
            }
        }
    }

    bool inexact = (bits & 0x1FFFu) != 0;                // lower 13 discarded bits
    nx_flag = (!nv_flag && inexact) || (of_flag && !is_inf) || uf_flag;

    return result;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    VFP32toFP16 dut;

    // 固定输入控制信号
    dut.mode   = 0;  // 0→执行 FP32→FP16 转换
    dut.OF_in  = 0;
    dut.UF_in  = 0;
    dut.NV_in  = 0;
    dut.DZ_in  = 0;
    dut.NX_in  = 0;

    // 一组典型测试向量：正常数、次正规数、特殊值，含参考输出
    struct TestVector {
        uint32_t input;
        uint16_t expected_fp16;
        bool expected_OF, expected_UF, expected_NX;
    };
    std::vector<TestVector> vec = {
        {0x3F800000u, 0x3C00, 0, 0, 0}, // +1.0 → 0x3C00
        {0xC0000000u, 0xC000, 0, 0, 0}, // -2.0 → 0xC000
        {0x3E99999Au, 0x34CD, 0, 0, 1}, // +0.3
        {0x00000001u, 0x0000, 0, 1, 1}, // 最小正 subnormal
        {0x00800000u, 0x0000, 0, 1, 1}, // 32-bit normalized → 16-bit subnormal
        {0x7F800000u, 0x7C00, 1, 0, 0}, // +Inf
        {0xFF800000u, 0xFC00, 1, 0, 0}, // -Inf
        {0x7F7FFFFFu, 0x7BFF, 1, 0, 1}, // FP32 max → FP16 max
        {0x7FC01234u, 0x7E00, 0, 0, 0}  // quiet NaN (canonical FP16 NaN encoding)
    };

    std::cout << "  FP32(hex)  ->  FP16(hex)  OF UF NX\n";
    std::cout << "-------------------------------------\n";

    for (const auto& tv : vec) {
        dut.result_i = tv.input;
        dut.eval();

        bool pass_fp16 = (dut.result_o == tv.expected_fp16);
        bool pass_OF   = (dut.OF_out == tv.expected_OF);
        bool pass_UF   = (dut.UF_out == tv.expected_UF);
        bool pass_NX   = (dut.NX_out == tv.expected_NX);

        std::cout << std::hex << std::setw(8) << std::setfill('0') << tv.input
                  << "  ->  "
                  << std::setw(4) << dut.result_o
                  << "   OF=" << std::dec << int(dut.OF_out)
                  << " UF=" << int(dut.UF_out)
                  << " NX=" << int(dut.NX_out);

        if (!pass_fp16 || !pass_OF || !pass_UF || !pass_NX) {
            std::cout << "  [ERROR]";
            if (!pass_fp16) std::cout << " FP16 mismatch (exp " << std::hex << tv.expected_fp16 << ")";
            if (!pass_OF)   std::cout << " OF!=exp(" << tv.expected_OF << ")";
            if (!pass_UF)   std::cout << " UF!=exp(" << tv.expected_UF << ")";
            if (!pass_NX)   std::cout << " NX!=exp(" << tv.expected_NX << ")";
        }

        std::cout << std::endl;
    }


    // --------------------------------------------------------------
    //  Randomised tests within the FP16 representable range (±65 504)
    // --------------------------------------------------------------
    const std::size_t kNumRandom = 1000;
    std::mt19937 rng(20250518);                        // deterministic seed
    std::uniform_real_distribution<float> dist(-65504.0f, 65504.0f);

    std::size_t fail_cnt = 0;
    for (std::size_t i = 0; i < kNumRandom; ++i) {
        float    f_val   = dist(rng);
        uint32_t in_bits = 0;
        std::memcpy(&in_bits, &f_val, sizeof(float));

        bool exp_OF = false, exp_UF = false, exp_NX = false;
        uint16_t exp_fp16 = fp32_to_fp16_ref(in_bits, exp_OF, exp_UF, exp_NX);

        dut.result_i = in_bits;
        dut.eval();

        bool pass_fp16 = (dut.result_o == exp_fp16);
        bool pass_OF   = (dut.OF_out  == exp_OF);
        bool pass_UF   = (dut.UF_out  == exp_UF);
        bool pass_NX   = (dut.NX_out  == exp_NX);

        if (!pass_fp16 || !pass_OF || !pass_UF || !pass_NX) {
            ++fail_cnt;
            std::cout << std::hex << std::setw(8) << std::setfill('0') << in_bits
                      << "  ->  "
                      << std::setw(4) << dut.result_o
                      << " (ref " << exp_fp16 << ") "
                      << "OF=" << std::dec << int(dut.OF_out) << "/" << exp_OF
                      << " UF=" << int(dut.UF_out) << "/" << exp_UF
                      << " NX=" << int(dut.NX_out) << "/" << exp_NX
                      << "  [FAIL]" << std::endl;
        }
    }

    if (fail_cnt == 0) {
        std::cout << "Randomised test (" << kNumRandom << " cases): PASS" << std::endl;
    } else {
        std::cout << "Randomised test (" << kNumRandom << " cases): "
                  << fail_cnt << " failure(s)" << std::endl;
    }



    dut.final();
    return 0;
}