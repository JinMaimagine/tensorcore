// ---------------------------------------------------------------------
// 32‑bit IEEE‑754 single‑precision → 16‑bit IEEE‑754 half‑precision
//   * Round‑to‑nearest‑even (RNE) 暂时只实现了这个
//   * Generates subnormals, preserves NaN payload
//   * result_o[15:0] = fp16, result_o[31:16] = 0
// ---------------------------------------------------------------------
`timescale 1ns/1ps
`default_nettype none

module fp32_to_fp16_conv #(
    parameter PARM_RM       = 3,
)
(
    input  wire [31:0] fp32_i,
    input [PARM_RM - 1 : 0] Rounding_mode_i, //TODO：现在不可指定，默认输入为000
    output logic [31:0] result_o,   // [15:0] = fp16, [31:16] = 0
    output logic        underflow_o,
    output logic        overflow_o
);
    // --------------------------------------------------
    // Field extraction helpers
    // --------------------------------------------------
    logic        sign;            // 1‑bit sign
    logic [7:0]  exp32;           // 8‑bit exponent
    logic [22:0] man32;           // 23‑bit mantissa

    // Working registers
    logic  signed [8:0] unbiased_exp;  // −127 … +128
    logic  signed [8:0] half_exp;      // 实际只有−31 … +31，但是判断范围需要，给8位
    logic [15:0] fp16_tmp;             // final 16‑bit half‑precision

    logic [9:0] mant16_use_tmp; // 10‑bit mantissa for NaN


    always_comb begin
        // Slice
        sign  = fp32_i[31];
        exp32 = fp32_i[30:23];
        man32 = fp32_i[22:0];

        // Default outputs
        underflow_o = 1'b0;
        overflow_o  = 1'b0;
        fp16_tmp    = 16'd0;

        // Default internal values to avoid unintended latches
        unbiased_exp = '0;
        half_exp     = '0;

        // -------------------------------------------------------------
        // 1. Special cases: Inf / NaN
        // -------------------------------------------------------------
        if (exp32 == 8'hFF) begin
            // Preserve NaN payload (at least lowest 10 bits); ensure man!=0
            mant16_use_tmp = (man32 == 0) ? 10'd0 :
                         ((man32[22:13] == 0) ? 10'h200 : man32[22:13]);
          	// 如果是 NaN（即 exp32 == 0xFF && man32 != 0），
            //就从原始的 fp32 的 man32[22:13] 中提取前 10 位作为 fp16 的 mantissa。
	          // 若 man32[22:13] == 0，说明提取的 10 位全 0，这在 fp16 中看起来像是 +∞，
            //所以补上 10'h200，确保它符合 NaN 的格式。
            fp16_tmp = {sign, 5'h1F, mant16_use_tmp};
            overflow_o = (man32 == 0 ) ? 1'b1 : 1'b0; // Inf or NaN
        end else begin
            //----------------------------------------------------------
            // 2. Decode exponent
            //----------------------------------------------------------
            unbiased_exp = exp32 - 127;
            half_exp     = unbiased_exp + 15;

            // 2‑A. Overflow溢出  → ±Inf
            if (half_exp >= 31) begin
                fp16_tmp   = 16'h7BFF; //FP32 max → FP16 max
                overflow_o = 1'b1;
            end
            // 2‑B. Subnormal / Underflow (half_exp ≤ 0) -15～-24次方是subnormal 再小就underflow
            // 对于 正规数（normalized），指数编码范围是 1 ~ 30（实际指数 = 编码 − 15）。
            // 对于 次正规数（subnormal），指数为 0，实际指数视为 −14，但没有隐含的最高位 1，实际尾数是一个非常小的数。
            // 更小的指数，fp16 就无法表示了，结果必须是 0（就是 underflow）。
            else if (half_exp <= 0) begin
                // --------------------------------------------------
                // 2‑B. Subnormal / Underflow
                // --------------------------------------------------
                if (half_exp < -9) begin         // Too small → underflow
                    fp16_tmp    = {sign, 15'd0};
                    underflow_o = 1'b1;
                end else begin
                    // Build a 24‑bit mantissa with leading implicit 1
                    logic [23:0] man24   = {1'b1, man32};
                    int          rshift  = 14 - half_exp; // explicit sign‑extend
                    logic [10:0] half_man = (man24 >> rshift); // keep low 11 bits

                    // Guard / Round / Sticky
                    logic round_bit = man24[rshift-1];
                    logic sticky    = |(man24 & ((24'd1 << (rshift-1)) - 1));
                    logic incr      = (round_bit & sticky) |
                                       (half_man[0] & round_bit & ~sticky);

                    logic [10:0] sum11 = {1'b0, half_man} + incr;
                    logic [4:0]  exp5  = 5'd0;

                    // Carry from rounding converts max‑subnormal → min‑normal
                    if (sum11[10]) begin
                        sum11 = 11'd0;
                        exp5  = 5'd1;
                    end

                    fp16_tmp = {sign, exp5, sum11[9:0]};
                end
            end
            // 2‑C. Normalised numbers
            else begin
                // Extract top 10 bits and the three rounding bits
                logic [9:0]  mant10    = man32[22:13];
                logic        round_bit = man32[12];      // Guard bit
                logic        sticky    = |man32[11:0];   // OR of remaining bits
                logic        incr      = (round_bit & sticky) |
                                           (mant10[0] & round_bit & ~sticky);

                logic [10:0] sum11     = {1'b0, mant10} + incr;
                logic signed [7:0]  exp5      = half_exp;

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



module FP32toFP16 #(
    parameter PARM_RM = 3 // Rounding mode bits, currently unused
)
(
    input wire [31:0] result_i,
    input wire [PARM_RM - 1 : 0] Rounding_mode_i, // TODO: currently unused, default input is 000
    input wire mode, // mode=1转换，mode=0不转换
    input wire OF_in,
    input wire UF_in,
    input wire NV_in,
    // input wire DZ_in,
    input wire NX_in,
    output reg [31:0] result_o,
    output reg OF_out,
    output reg UF_out,
    output wire NV_out,
    // output wire DZ_out,
    output wire NX_out
);

    // --------------------------------------------------
    // Internal wires for FP32→FP16 converter
    // --------------------------------------------------
    wire [31:0] fp16_conv;
    wire        conv_uf;
    wire        conv_of;

    fp32_to_fp16_conv u_fp32_to_fp16_conv (
        .Rounding_mode_i (Rounding_mode_i),//TODO:目前没用，默认为000，如果修改直接改fp32_to_fp16_conv即可
        .fp32_i      (result_i),
        .result_o      (fp16_conv),
        .underflow_o (conv_uf),
        .overflow_o  (conv_of)
    );

    // NaN detection (exp==0xFF && mantissa≠0) for Invalid Operation flag
    wire isnan_i    = (result_i[30:23] == 8'hFF) && (result_i[22:0] != 0);
    // Inexact: any discarded fraction bits when converting to fp16 (lower 13 bits)
    wire inexact_i  = |result_i[12:0];

    //输入是+inf或者-inf时，输出的fp16也是 +inf 或者 -inf，但是NX不用置为1
    wire is_inf = (result_i[30:23] == 8'hFF) && (result_i[22:0] == 0);

    always_comb begin
        if (~mode) begin
            // mode==0 → passthrough
            result_o = result_i;
            OF_out   = OF_in;
            UF_out   = UF_in;
        end else begin
            // mode==1 → convert to fp16 (low 16 bits) and zero‑pad upper half
            result_o = fp16_conv;
            OF_out   = conv_of;
            UF_out   = conv_uf;
        end
    end

    assign NV_out = NV_in | (~mode & isnan_i);      // propagate or set on NaN
    // assign DZ_out = DZ_in;                          //不会发生
    assign NX_out = NX_in | ((~mode & inexact_i) && ~NV_out)| 
                            (conv_of && ~is_inf) | // propagate or set on inexact
                             conv_uf;  // propagate or set on underflow

endmodule
