// MAC_top.sv  -- 2‑Stage Pipeline (cut after CarrySaveAdder)
// =============================================================
// Stage‑0  : purely combinational converters (fp16_to_fp32_conv)
// Stage‑1a : ExponentProcessor ▸ PreNormalizer ▸ {Multiplier} ▸ CSA
//            + SpecialCaseDetector (short path)            
//            ──────────────────────────────────────────────── clk1
// Stage‑2  : EACAdder ▸ MSBIncrementer ▸ PosSumMux ▸ LOD ▸
//            Normalizer ▸ Rounder ▸ fp32_to_fp16_conv
//            (plus flag mux & final result regs)
//
// 1.  Cut point is **just after CarrySaveAdder**.  This balances logic:
//      • Stage‑1 包含 Booth/Wallace(≈4‑5FO4) + 3:2 CSA  →  ~3.5‑4 ns
//      • Stage‑2 包含 EACAdder(≈1.2ns) + LOD(≈0.8ns) +
//        Normalizer(≈1ns) + Rounder(≈1ns)               →  ~4 ns
// 2.  No Stage‑1 input depends on any Stage‑2 output; registers cut all
//     feedbacks.
// 3.  fp_mode/Rounding_mode_i 以及 special‑case flags 都在 Stage‑1 寄存，并一并
//     传送到 Stage‑2；保证管线同步无冒险。
// -------------------------------------------------------------------
//  Accrued exception flag encoding:
//  Flag Mnemonic   |   Flag Meaning.       |
//  --------------------------------------
//      NV          |   Invalid Operation
//      DZ          |   Divide by Zero
//      OF          |   Overflow
//      UF          |   Underflow
//      NX          |   Inexact.  //由于采用转换实现，这里大概率是inexact
//  --------------------------------------
`timescale 1ns/1ps
`include "fp16_to_fp32_conv.sv"
`include "fp32_to_fp16_conv.sv"
`include "FMA32_core.sv"
module MAC32_top #(
    // -------- Parameters forwarded to sub‑modules ------------------
    parameter int PARM_RM       = 3,
    parameter int PARM_XLEN     = 32,
    parameter int PARM_EXP      = 8,
    parameter int PARM_MANT     = 23,
    parameter int PARM_BIAS     = 127,

    // Stage‑2‑only extras (keep default values from RTL)
    parameter int  PARM_LEADONE_WIDTH = 7,
    parameter logic [PARM_MANT-1:0] PARM_MANT_NAN = 23'b100_0000_0000_0000_0000_0000,
    parameter logic [2:0] PARM_RM_RNE   = 3'b000,
    parameter logic [2:0] PARM_RM_RTZ   = 3'b001,
    parameter logic [2:0] PARM_RM_RDN   = 3'b010,
    parameter logic [2:0] PARM_RM_RUP   = 3'b011,
    parameter logic [2:0] PARM_RM_RMM   = 3'b100
)
(
    input  logic          clk,
    input  logic          rst_n,
    // control
    // fp_calculation mode: 00=FP32, 01=FP16 normal, 10=FP16 mixed
    input  logic  [1:0]   fp_mode,      
    input  logic  [2:0]   Rounding_mode_i,
    // data
    // input  logic [15:0]   A16_i,
    // input  logic [15:0]   B16_i,
    // input  logic [15:0]   C16_i,
    input  logic [31:0]   A_i,
    input  logic [31:0]   B_i,
    input  logic [31:0]   C_i,
    output logic [31:0]   Result_o, //Result_o=A_i+B_i*C_i
    // output logic [15:0]   R16_o,
    output logic          NV_o,
    output logic          OF_o,
    output logic          UF_o,
    output logic          NX_o         
);

  // stage-1 registers
  logic [31:0]  A_reg1, B_reg1, C_reg1;
  logic [2:0]   rm_reg1;
  logic [`FMA_STAGE1_BUS_W-1:0] stage1_bus_reg1;


  logic [`FMA_STAGE1_BUS_W-1:0] stage1_bus_wire;
  fma32_core_stage1 #(
    .PARM_RM   (PARM_RM),
    .PARM_XLEN (PARM_XLEN),
    .PARM_EXP  (PARM_EXP),
    .PARM_MANT (PARM_MANT),
    .PARM_BIAS (PARM_BIAS)
  ) u_s1 (
      .rm_i          (rm_reg1),
      .A_i           (A_reg1),
      .B_i           (B_reg1),
      .C_i           (C_reg1),
      .stage1_bus_o  (stage1_bus_wire)
  );

  logic [31:0] A_i_fp32, B_i_fp32, C_i_fp32;
  fp16_to_fp32_conv u_fp16_to_fp32_0 (
    .fp16_i(A_i[15:0]),
    .fp32_o(A_i_fp32)
  );
  fp16_to_fp32_conv u_fp16_to_fp32_1 (
    .fp16_i(B_i[15:0]),
    .fp32_o(B_i_fp32)
  );
  fp16_to_fp32_conv u_fp16_to_fp32_2 (
    .fp16_i(C_i[15:0]),
    .fp32_o(C_i_fp32)
  );

  wire [31:0] A_true_input, B_true_input, C_true_input;
  always_comb begin
    // select inputs based on mode
    if (fp_mode==2'b00) begin
      A_true_input = A_i; B_true_input = B_i; C_true_input = C_i;
    end else begin
      // normal or mixed: convert to FP32 first
      A_true_input = fp_mode==2'b01
                ? A_i_fp32
                : A_i;
      B_true_input = B_i_fp32;
      C_true_input = C_i_fp32;
    end
  end

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      A_reg1 <= '0; B_reg1 <= '0; C_reg1 <= '0;
      rm_reg1 <= '0;
      stage1_bus_reg1 <= '0;
    end else begin

      A_reg1 <= A_true_input;
      B_reg1 <= B_true_input;
      C_reg1 <= C_true_input;
      rm_reg1 <= Rounding_mode_i;
      // run stage1 combinational
      stage1_bus_reg1 <= stage1_bus_wire;
    end
  end

  // stage-2 registers and outputs
  logic [31:0]  result32_reg2;
  logic [4:0]   flags_reg2;

 
  logic [31:0] res32;
  logic [4:0]  ffs;
  fma32_core_stage2 #(
    .PARM_RM           (PARM_RM),
    .PARM_XLEN         (PARM_XLEN),
    .PARM_EXP          (PARM_EXP),
    .PARM_MANT         (PARM_MANT),
    .PARM_LEADONE_WIDTH(PARM_LEADONE_WIDTH),
    .PARM_MANT_NAN     (PARM_MANT_NAN),
    .PARM_RM_RNE       (PARM_RM_RNE),
    .PARM_RM_RTZ       (PARM_RM_RTZ),
    .PARM_RM_RDN       (PARM_RM_RDN),
    .PARM_RM_RUP       (PARM_RM_RUP),
    .PARM_RM_RMM       (PARM_RM_RMM)
) u_s2 (
    .stage1_bus_i (stage1_bus_reg1),
    .A_i          (A_reg1),
    .B_i          (B_reg1),
    .C_i          (C_reg1),
    .Result_o     (res32),
    .NV_o         (ffs[4]),
    .OF_o         (ffs[3]),
    .UF_o         (ffs[2]),
    .NX_o         (ffs[1])
);

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      result32_reg2 <= '0;
      flags_reg2 <= '0;
    end else begin
      // run stage2 combinational

      result32_reg2 <= res32;
      flags_reg2 <= ffs;
    end
  end


  logic fp32_to_fp16_conv_underflow;
  logic fp32_to_fp16_conv_overflow;
  logic [15:0] fp32_to_fp16_conv_result;
  fp32_to_fp16_conv u_fp32_to_fp16 (
    .fp32_i(result32_reg2),
    .fp16_o(fp32_to_fp16_conv_result),
    .underflow_o(fp32_to_fp16_conv_underflow),
    .overflow_o(fp32_to_fp16_conv_overflow)
  );



  // final output selection
  assign Result_o = (fp_mode==2'b01)
                    ? fp32_to_fp16_conv_result
                    : result32_reg2;
  assign NV_o = flags_reg2[4];
  assign OF_o = flags_reg2[3]|fp32_to_fp16_conv_overflow;
  assign UF_o = flags_reg2[2]|fp32_to_fp16_conv_underflow;
  assign NX_o = flags_reg2[1];

endmodule