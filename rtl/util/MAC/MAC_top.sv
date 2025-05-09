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
    input  logic         clk,
    input  logic         rst_n,
    // control
    input  logic  [1:0]  fp_mode,     // 00=FP32  01=FP16  10=mixed
    input  logic  [2:0]  rm_i,
    // data
    input  logic [31:0]  A_i,
    input  logic [31:0]  B_i,
    input  logic [31:0]  C_i,
    output logic [31:0]  R32_o,       // FP32 or mixed result
    output logic [15:0]  R16_o,       // valid only when fp_mode==01
    output logic [4:0]   flags_o      // NV,OF,UF,NX + reserved
);
// ------------------------------------------------------------
// === 0) FP16 → FP32 converters (combinational) ==============
// ------------------------------------------------------------
logic [31:0] A32_c, B32_c, C32_c;
logic        A_is_spcase, B_is_spcase, C_is_spcase;   // NaN/Inf/zero flags

fp16_to_fp32_conv u_a_conv (.in16(A_i[15:0]), .out32(A32_c), .is_sp(A_is_spcase));
fp16_to_fp32_conv u_b_conv (.in16(B_i[15:0]), .out32(B32_c), .is_sp(B_is_spcase));
fp16_to_fp32_conv u_c_conv (.in16(C_i[15:0]), .out32(C32_c), .is_sp(C_is_spcase));

// 选择器：若非 FP16 模式直接透传 32‑bit 输入
logic [31:0] A32_sel, B32_sel, C32_sel;
always_comb begin
    case(fp_mode)
        2'b01: begin  // fp16 normal
            A32_sel = A32_c;
            B32_sel = B32_c;
            C32_sel = C32_c;
        end
        2'b10: begin  // mixed : A is 32, B/C are 16
            A32_sel = A_i;
            B32_sel = B32_c;
            C32_sel = C32_c;
        end
        default: begin // fp32
            A32_sel = A_i;
            B32_sel = B_i;
            C32_sel = C_i;
        end
    endcase
end

// ------------------------------------------------------------
// === 1) Stage‑1 : ExponentProc + PreNorm + Mult + CSA ======
// ------------------------------------------------------------
// (1‑a) exponent processor / prenorm / multiplier are inside core FMA
// We instantiate the original single‑cycle FMA32 but expose the CSA cut.

// Signals crossing the pipeline boundary
logic [47:0] st1_csa_sum, st1_csa_carry;
logic [49:0] st1_Ahigh;          // upper part of aligned addend
logic [7:0]  st1_meta_flags;     // {NaN,Inf,Zero,Dn,_reserved}
logic [2:0]  st1_rm;
logic [1:0]  st1_mode;

fma32_core_stage1 u_fma32_s1 (
    .clk       (clk),          // purely combinational inside
    .A32_i     (A32_sel),
    .B32_i     (B32_sel),
    .C32_i     (C32_sel),
    .rm_i      (rm_i),
    // outputs to pipeline regs
    .CSA_sum_o   (st1_csa_sum ),
    .CSA_carry_o (st1_csa_carry),
    .A_high_o    (st1_Ahigh   ),
    .meta_o      (st1_meta_flags)
);

// ---- Stage‑1 registers -------------------------------------
always_ff @(posedge clk or negedge rst_n) begin
    if(!rst_n) begin
        st1_csa_sum_r   <= '0;
        st1_csa_carry_r <= '0;
        st1_Ahigh_r     <= '0;
        st1_meta_r      <= '0;
        st1_rm_r        <= '0;
        st1_mode_r      <= '0;
    end else begin
        st1_csa_sum_r   <= st1_csa_sum;
        st1_csa_carry_r <= st1_csa_carry;
        st1_Ahigh_r     <= st1_Ahigh;
        st1_meta_r      <= st1_meta_flags;
        st1_rm_r        <= rm_i;
        st1_mode_r      <= fp_mode;
    end
end

// ------------------------------------------------------------
// === 2) Stage‑2 : the rest of FMA + fp32→fp16 conv ========
// ------------------------------------------------------------
logic [31:0] res32_comb;
logic [4:0]  flags_comb;

fma32_core_stage2 u_fma32_s2 (
    .CSA_sum_i   (st1_csa_sum_r),
    .CSA_carry_i (st1_csa_carry_r),
    .A_high_i    (st1_Ahigh_r),
    .rm_i        (st1_rm_r),
    .meta_i      (st1_meta_r),
    .result_o    (res32_comb),
    .flags_o     (flags_comb)
);

// --- optional fp32 → fp16 conversion -----------------------
logic [15:0] res16_conv;
fp32_to_fp16_conv u_conv_back (.in32(res32_comb), .out16(res16_conv));

// ---- Stage‑2 registers (final outputs) --------------------
always_ff @(posedge clk or negedge rst_n) begin
    if(!rst_n) begin
        R32_o   <= '0;
        R16_o   <= '0;
        flags_o <= '0;
    end else begin
        R32_o   <= res32_comb;         // always forward 32‑bit
        R16_o   <= (st1_mode_r==2'b01) ? res16_conv : 16'h0;
        flags_o <= flags_comb;
    end
end
endmodule

