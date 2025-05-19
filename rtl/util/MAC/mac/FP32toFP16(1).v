// ---------------------------------------------------------------------
// 32‑bit IEEE‑754 single‑precision → 16‑bit IEEE‑754 half‑precision
//   * Round‑to‑nearest‑even (RNE)
//   * Generates subnormals, preserves NaN payload
//   * result_o[15:0] = fp16, result_o[31:16] = 0
// ---------------------------------------------------------------------
`timescale 1ns/1ps
`default_nettype none

module fp32_to_fp16_conv (
    input  wire [31:0] fp32_i,
    output logic [31:0] result_o,   // [15:0] = fp16, [31:16] = 0
    output logic        underflow_o,
    output logic        overflow_o
);
    // field extraction helpers (use plain ints for simplicity; synthesizable)
    int sign;
    int exp32;
    int man32;

    int    unbiased_exp;
    int    half_exp;
    int    fp16_tmp;

    always_comb begin
        // Slice
        sign  = fp32_i[31];
        exp32 = fp32_i[30:23];
        man32 = fp32_i[22:0];

        // Default outputs
        underflow_o = 1'b0;
        overflow_o  = 1'b0;
        fp16_tmp    = 16'd0;

        // -------------------------------------------------------------
        // 1. Special cases: Inf / NaN
        // -------------------------------------------------------------
        if (exp32 == 8'hFF) begin
            // Preserve NaN payload (at least lowest 10 bits); ensure man!=0
            int mant16 = (man32 == 0) ? 10'd0 :
                         ((man32[22:13] == 0) ? 10'h200 : man32[22:13]);
          	// 如果是 NaN（即 exp32 == 0xFF && man32 != 0），
            //就从原始的 fp32 的 man32[22:13] 中提取前 10 位作为 fp16 的 mantissa。
	          // 若 man32[22:13] == 0，说明提取的 10 位全 0，这可能会在 fp16 中看起来像是 +∞，
            //所以补上 10'h200，确保它符合 NaN 的格式。
            fp16_tmp = {sign, 5'h1F, mant16};
        end else begin
            //----------------------------------------------------------
            // 2. Decode exponent
            //----------------------------------------------------------
            unbiased_exp = exp32 - 127;
            half_exp     = unbiased_exp + 15;

            // 2‑A. Overflow溢出  → ±Inf
            if (half_exp >= 31) begin
                fp16_tmp   = {sign, 5'h1F, 10'd0};
                overflow_o = 1'b1;
            end
            // 2‑B. Subnormal / Underflow (half_exp ≤ 0) -15～-24次方是subnormal 再小就underflow
            // 对于 正规数（normalized），指数编码范围是 1 ~ 30（实际指数 = 编码 − 15）。
            // 对于 次正规数（subnormal），指数为 0，实际指数视为 −14，但没有隐含的最高位 1，实际尾数是一个非常小的数。
            // 更小的指数，fp16 就无法表示了，结果必须是 0（就是 underflow）。
            else if (half_exp <= 0) begin
                // Too small even for subnormal
                if (half_exp < -24) begin
                    fp16_tmp     = {sign, 15'd0}; // signed zero
                    underflow_o  = 1'b1;
                end else begin
                    // Produce subnormal with RNE。  round to nearest even
                    int man24    = {1'b1, man32}; // 24‑bit with hidden 1
                    int rshift   = 14 - half_exp; // 14 .. 38
                    int half_man = man24 >>> rshift;
                    int round_bit= 1 << (rshift-1);
          /*
          	使用 IEEE-754 的 Round to Nearest, Ties to Even（RNE）：
	          如果被移掉的位正好是 中间值（比如 1000…），且保留部分是奇数 → 进位。
	          如果被移掉的位 > 中间值 → 进位。
	          其他情况不进位。
          */
                    if ( (man24 & round_bit) &&
                         (man24 & ((round_bit<<1)-1)) ) begin
                        half_man = half_man + 1;
                    end
                    fp16_tmp = {sign, 5'd0, half_man[9:0]};
                    if (half_man == 0) underflow_o = 1'b1;
          //如果尾数全被截断为 0，就相当于最终变成 ±0，也算 underflow，于是拉高 underflow_o
                end
            end
            // 2‑C. Normalised numbers
            else begin
                // Extract top 10 mantissa bits & rounding bits
                int mant10    = man32 >> 13;
                int round_bit = man32[12];
                int sticky    = (man32[11:0] != 0);
                int incr      = round_bit & (sticky | mant10[0]);

                int sum11     = {1'b0, mant10} + incr; // 11 bits
                int exp5      = half_exp;

                // Mantissa overflow → exp +1
                if (sum11[10]) begin
                    sum11 = 11'd0;
                    exp5  = exp5 + 1;
                end

                // Re‑check for overflow after carry
                if (exp5 >= 31) begin
                    fp16_tmp   = {sign, 5'h1F, 10'd0};
                    overflow_o = 1'b1;
                end else begin
                    fp16_tmp = {sign, exp5[4:0], sum11[9:0]};
                end
            end
        end // special/normal cases

        // -------------------------------------------------------------
        // 3. Pack to 32‑bit result (upper 16 bits zero‑pad)
        // -------------------------------------------------------------
        result_o = {16'd0, fp16_tmp[15:0]};
    end
endmodule



module FP32toFP16 (
    input wire [31:0] result_i,
    input wire mode,
    input wire OF_in,
    input wire UF_in,
    input wire NV_in,
    input wire DZ_in,
    input wire NX_in,
    output reg [31:0] result_o,
    output reg OF_out,
    output reg UF_out,
    output wire NV_out,
    output wire DZ_out,
    output wire NX_out
);

    // --------------------------------------------------
    // Internal wires for FP32→FP16 converter
    // --------------------------------------------------
    wire [15:0] fp16_conv;
    wire        conv_uf;
    wire        conv_of;

    fp32_to_fp16_conv u_fp32_to_fp16_conv (
        .fp32_i      (result_i),
        .fp16_o      (fp16_conv),
        .underflow_o (conv_uf),
        .overflow_o  (conv_of)
    );

    // NaN detection (exp==0xFF && mantissa≠0) for Invalid Operation flag
    wire isnan_i    = (result_i[30:23] == 8'hFF) && (result_i[22:0] != 0);
    // Inexact: any discarded fraction bits when converting to fp16 (lower 13 bits)
    wire inexact_i  = |result_i[12:0];

    always_comb begin
        if (mode) begin
            // mode==1 → passthrough
            result_o = result_i;
            OF_out   = OF_in;
            UF_out   = UF_in;
        end else begin
            // mode==0 → convert to fp16 (low 16 bits) and zero‑pad upper half
            result_o = {16'd0, fp16_conv};
            OF_out   = conv_of;
            UF_out   = conv_uf;
        end
    end

    assign NV_out = NV_in | (~mode & isnan_i);      // propagate or set on NaN
    assign DZ_out = DZ_in;                          //不会发生
    assign NX_out = NX_in | (~mode & inexact_i);    // propagate or set on rounding

endmodule
