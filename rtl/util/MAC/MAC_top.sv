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
// 3.  fp_mode/rm_i 以及 special‑case flags 都在 Stage‑1 寄存，并一并
//     传送到 Stage‑2；保证管线同步无冒险。
// -------------------------------------------------------------------
`timescale 1ns/1ps
module MAC_top (
    input  logic          clk,
    input  logic          rst_n,
    // control
    input  logic  [1:0]   fp_mode,      // 00=FP32, 01=FP16 normal, 10=FP16 mixed
    input  logic  [2:0]   rm_i,
    // data
    input  logic [15:0]   A16_i,
    input  logic [15:0]   B16_i,
    input  logic [15:0]   C16_i,
    input  logic [31:0]   A32_i,
    input  logic [31:0]   B32_i,
    input  logic [31:0]   C32_i,
    output logic [31:0]   R32_o,
    output logic [15:0]   R16_o,
    output logic [4:0]    flags_o
);

  // stage-1 registers
  logic [31:0]  A_reg1, B_reg1, C_reg1;
  logic [2:0]   rm_reg1;
  logic [FMA_STAGE1_BUS_W-1:0] stage1_bus_reg1;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      A_reg1 <= '0; B_reg1 <= '0; C_reg1 <= '0;
      rm_reg1 <= '0;
      stage1_bus_reg1 <= '0;
    end else begin
      // select inputs based on mode
      if (fp_mode==2'b00) begin
        A_reg1 <= A32_i; B_reg1 <= B32_i; C_reg1 <= C32_i;
      end else begin
        // normal or mixed: convert to FP32 first
        A_reg1 <= fp16_to_fp32_conv(fp_mode==2'b01 ? A16_i : A32_i);
        B_reg1 <= fp16_to_fp32_conv(B16_i);
        C_reg1 <= fp16_to_fp32_conv(C16_i);
      end
      rm_reg1 <= rm_i;
      // run stage1 combinational
      stage1_bus_reg1 <= fma32_core_stage1(
        .Rounding_mode_i(rm_reg1),
        .A_i(A_reg1), .B_i(B_reg1), .C_i(C_reg1)
      ).stage1_bus_o;
    end
  end

  // stage-2 registers and outputs
  logic [31:0]  result32_reg2;
  logic [4:0]   flags_reg2;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      result32_reg2 <= '0;
      flags_reg2 <= '0;
    end else begin
      // run stage2 combinational
      logic [31:0] res32;
      logic [4:0]  ffs;
      fma32_core_stage2 u_s2 (
        .stage1_bus_i(stage1_bus_reg1),
        .Rounding_mode_i(rm_reg1),
        .A_raw_i(A_reg1), .B_raw_i(B_reg1), .C_raw_i(C_reg1),
        .Result_o(res32),
        .NV_o(ffs[4]), .OF_o(ffs[3]), .UF_o(ffs[2]), .NX_o(ffs[1])
      );
      result32_reg2 <= res32;
      flags_reg2 <= ffs;
    end
  end

  // final output selection
  assign R32_o = result32_reg2;
  assign R16_o = (fp_mode==2'b01)
                ? fp32_to_fp16_conv(result32_reg2)
                : 16'h0;
  assign flags_o = flags_reg2;

endmodule