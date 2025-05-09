`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//  
//
//  Floating-point control and status register:
//  |31     8|7                     5|4                            0|
//  |reserved|  Rounding Mode (frm)  |  Accured Exceptions(fflags)  |
//                                          NV  DZ  OF  UF  NX
//
//  Rounding mode encoding:
//  Rounding Mode|    Mnemonic    |   Meaning
//  -------------------------------------------------------------------------------------------
//       000     |    RNE         |   Round to Nearest, ties to Even
//       001     |    RTZ         |   Round towards Zero
//       010     |    RDN         |   Round Down    (towards -INFINITY)
//       011     |    RUP         |   Round UP      (towards +INFINITY)
//       100     |    RMM         |   Round to Nearest, ties Max Magnitude
//       101     |    ---         |   Invalid. Reserved for future use
//       110     |    ---         |   Invalid. Reserved for future use
//       111     |    DYN         |   In instruction's rm field, selects dynamic rounding mode;
//                                      In Rounding Mode register, Invalid
//
//  Accrued exception flag encoding:
//  Flag Mnemonic   |   Flag Meaning
//  --------------------------------------
//      NV          |   Invalid Operation
//      DZ          |   Divide by Zero
//      OF          |   Overflow
//      UF          |   Underflow
//      NX          |   Inexact
//
//////////////////////////////////////////////////////////////////////////////////

// =============================================================
// MAC_top.sv  -- 2‑stage pipelined FMA with FP16 support
// -------------------------------------------------------------
// • fp16_to_fp32_conv : purely combinational 16→32 converter
// • fp32_to_fp16_conv : purely combinational 32→16 converter (RNE)
// • Stage‑1 registers  : capture 32‑bit operands (after conversion)
// • Stage‑2 registers  : capture FMA32 result (and convert back)
//
// Timing target: >200 MHz on typical 65 nm std‑cell.  Two balanced
// pipeline stages split roughly at A/BC conversion + Pre‑Normalize /
// Multiplier  vs.  EAC + Normalise + Rounder + final conversion.
// Special‑case path goes through the same core, but for safety we also
// insert the same Stage‑2 flop so every output observes exactly two
// cycles of latency regardless of the operand class.
// -------------------------------------------------------------

module MAC_top #(
    parameter EXP32  = 8,
    parameter MAN32  = 23,
    parameter EXP16  = 5,
    parameter MAN16  = 10,
    parameter BIAS32 = 127,
    parameter BIAS16 = 15
)(
    input  logic              clk,
    input  logic              rst_n,

    // control
    input  logic [1:0]        fp_mode_i,   // 00:fp32  01:fp16  10:mix16/32
    input  logic [2:0]        rm_i,        // rounding mode for core

    // operands
    input  logic [31:0]       A_i,
    input  logic [31:0]       B_i,
    input  logic [31:0]       C_i,

    // result
    output logic [31:0]       R32_o,
    output logic [15:0]       R16_o,
    output logic [4:0]        flags_o
);

    //--------------------------------------------------------------------
    // 0. FP16 → FP32 / passthrough (combinational)
    //--------------------------------------------------------------------

    logic [31:0] A32_conv, B32_conv, C32_conv;

    fp16_to_fp32_conv u_conv_A (
        .fp16_i (A_i[15:0]),
        .fp32_o (A32_conv)
    );
    fp16_to_fp32_conv u_conv_B (
        .fp16_i (B_i[15:0]),
        .fp32_o (B32_conv)
    );
    fp16_to_fp32_conv u_conv_C (
        .fp16_i (C_i[15:0]),
        .fp32_o (C32_conv)
    );

    logic [31:0] A32_mux, B32_mux, C32_mux;

    always_comb begin
        unique case (fp_mode_i)
            2'b00: begin // FP32 native
                A32_mux = A_i;
                B32_mux = B_i;
                C32_mux = C_i;
            end
            2'b01: begin // FP16 normal (16+16*16)
                A32_mux = A32_conv;
                B32_mux = B32_conv;
                C32_mux = C32_conv;
            end
            default: begin // 2'b10 mix (32 + 16*16)
                A32_mux = A_i;        // keep A as 32‑bit
                B32_mux = B32_conv;
                C32_mux = C32_conv;
            end
        endcase
    end

    //--------------------------------------------------------------------
    // 1. Stage‑1 pipeline registers  (after operand selection)
    //--------------------------------------------------------------------

    typedef struct packed {
        logic [31:0] A;
        logic [31:0] B;
        logic [31:0] C;
        logic [2:0 ] RM;
        logic [1:0 ] mode;
    } stage1_t;

    stage1_t s1_d, s1_q;

    always_comb begin
        s1_d.A    = A32_mux;
        s1_d.B    = B32_mux;
        s1_d.C    = C32_mux;
        s1_d.RM   = rm_i;
        s1_d.mode = fp_mode_i;
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) s1_q <= '0; else s1_q <= s1_d;
    end

    //--------------------------------------------------------------------
    // 2. Original single‑precision FMA core (combinational)
    //--------------------------------------------------------------------

    logic [31:0] core_res;
    logic [4:0 ] core_flags;

    FMA32_core u_fma_core (
        .A_i   (s1_q.A),
        .B_i   (s1_q.B),
        .C_i   (s1_q.C),
        .Rounding_mode_i  (s1_q.RM),
        .Result_o   (core_res),
        .NV_o(flags_o[4]),
        // .DZ_o(flags_o[3]),
        .OF_o(flags_o[2]),
        .UF_o(flags_o[1]),
        .NX_o(flags_o[0])
    );

    //--------------------------------------------------------------------
    // 3. FP32 → FP16 (combinational)
    //--------------------------------------------------------------------

    logic [15:0] res16_conv;
    fp32_to_fp16_conv u_conv_out (
        .fp32_i (core_res),
        .fp16_o (res16_conv)
    );

    //--------------------------------------------------------------------
    // 4. Stage‑2 pipeline registers  (balance + final outputs)
    //--------------------------------------------------------------------

    typedef struct packed {
        logic [31:0] R32;
        logic [15:0] R16;
        logic [4:0 ] FLG;
        logic [1:0 ] mode;
    } stage2_t;

    stage2_t s2_d, s2_q;

    always_comb begin
        s2_d.R32  = core_res;
        s2_d.FLG  = core_flags;
        s2_d.mode = s1_q.mode;   // forward mode for final sel
        s2_d.R16  = res16_conv;  // converted every cycle, disregarded if not needed
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) s2_q <= '0; else s2_q <= s2_d;
    end

    //--------------------------------------------------------------------
    // 5. Write‑back selection
    //--------------------------------------------------------------------

    assign R32_o  = (s2_q.mode==2'b01) ? 32'h0 : s2_q.R32; // FP16 normal → 32‑bit result invalid
    assign R16_o  = (s2_q.mode==2'b01) ? s2_q.R16 : 16'h0; // only fp16 normal outputs 16‑bit
    assign flags_o = s2_q.FLG;

endmodule

// ---------------------------------------------------------------------
// 16→32 converter  (combinational)
// ---------------------------------------------------------------------
module fp16_to_fp32_conv (
    input  logic [15:0] fp16_i,
    output logic [31:0] fp32_o
);
    logic sign;
    logic [4:0]  exp16;
    logic [9:0]  man16;

    assign sign  = fp16_i[15];
    assign exp16 = fp16_i[14:10];
    assign man16 = fp16_i[9:0];

    always_comb begin
        if (exp16==5'b11111) begin // Inf/NaN
            fp32_o = {sign, 8'hFF, {MAN32{1'b0}}};
            fp32_o[22] = |man16;  // propagate NaN payload as quiet‑NaN
            fp32_o[21:0] = {man16,12'b0};
        end
        else if (exp16==5'b00000) begin // Zero or subnormal → treat as zero
            fp32_o = {sign, 8'h00, 23'b0};
        end else begin
            // normalised: exp32 = exp16 - 15 + 127 = exp16 + 112
            fp32_o = {sign, exp16 + 8'd112, man16, 13'b0};
        end
    end
endmodule

// ---------------------------------------------------------------------
// 32→16 converter  (combinational, round‑to‑nearest‑even)
// ---------------------------------------------------------------------
module fp32_to_fp16_conv (
    input  logic [31:0] fp32_i,
    output logic [15:0] fp16_o
);
    logic sign;
    logic [7:0] exp32;
    logic [22:0] man32;

    assign sign  = fp32_i[31];
    assign exp32 = fp32_i[30:23];
    assign man32 = fp32_i[22:0];

    logic [5:0] exp_adj;
    logic round_bit, sticky_bit;

    // exponent adjust: exp16 = exp32 - 127 + 15 = exp32 - 112
    assign exp_adj = exp32 - 8'd112;

    always_comb begin
        // default zero
        fp16_o = {sign, 15'b0};
        if (exp32==8'hFF) begin // Inf/NaN
            fp16_o = {sign, 5'h1F, 10'h0};
            if (man32!=0) fp16_o[9] = 1'b1; // NaN payload minimal
        end else if (exp32<8'd103) begin
            // too small => underflow to zero (no subnorm support here)
            fp16_o = {sign, 15'b0};
        end else if (exp32>8'd142) begin
            // too large => Inf
            fp16_o = {sign, 5'h1F, 10'h0};
        end else begin
            // normal range
            // take top 10 man bits, next bit is round, lower are sticky
            round_bit  = man32[12];
            sticky_bit = |man32[11:0];
            logic [10:0] rnd_sum = {1'b0, man32[22:13]} + (round_bit & (sticky_bit|man32[13]));
            fp16_o = {sign, exp_adj[4:0], rnd_sum[9:0]};
            // handle mantissa overflow
            if (rnd_sum[10]) begin
                fp16_o[14:10] = exp_adj[4:0] + 5'd1;
                fp16_o[9:0]   = 10'h0;
            end
        end
    end
endmodule
