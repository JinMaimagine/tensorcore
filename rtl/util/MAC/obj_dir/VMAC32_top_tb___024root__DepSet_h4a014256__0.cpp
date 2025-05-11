// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC32_top_tb.h for the primary calling header

#include "VMAC32_top_tb__pch.h"
#include "VMAC32_top_tb__Syms.h"
#include "VMAC32_top_tb___024root.h"

extern "C" int float_to_half(double r);

VL_INLINE_OPT void VMAC32_top_tb___024root____Vdpiimwrap_MAC32_top_tb__DOT__float_to_half_TOP(double r, IData/*31:0*/ &float_to_half__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root____Vdpiimwrap_MAC32_top_tb__DOT__float_to_half_TOP\n"); );
    // Body
    double r__Vcvt;
    for (size_t r__Vidx = 0; r__Vidx < 1; ++r__Vidx) r__Vcvt = r;
    int float_to_half__Vfuncrtn__Vcvt;
    float_to_half__Vfuncrtn__Vcvt = float_to_half(r__Vcvt);
    float_to_half__Vfuncrtn = float_to_half__Vfuncrtn__Vcvt;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC32_top_tb___024root___dump_triggers__act(VMAC32_top_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VMAC32_top_tb___024root___eval_triggers__act(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___eval_triggers__act\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.MAC32_top_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.MAC32_top_tb__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSelfRef.MAC32_top_tb__DOT__rst_n) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__rst_n__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__clk__0 
        = vlSelfRef.MAC32_top_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__rst_n__0 
        = vlSelfRef.MAC32_top_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMAC32_top_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VMAC32_top_tb___024root___nba_sequent__TOP__0(VMAC32_top_tb___024root* vlSelf);
void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3__0(VMAC32_top_tb_Compressor32* vlSelf);
void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2__0(VMAC32_top_tb_Compressor32* vlSelf);
void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1__0(VMAC32_top_tb_Compressor32* vlSelf);
void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0__0(VMAC32_top_tb_Compressor32* vlSelf);
void VMAC32_top_tb___024root___nba_sequent__TOP__1(VMAC32_top_tb___024root* vlSelf);
void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_2__0(VMAC32_top_tb_Compressor32* vlSelf);
void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1__0(VMAC32_top_tb_Compressor32* vlSelf);
void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0__0(VMAC32_top_tb_Compressor32* vlSelf);
void VMAC32_top_tb___024root___nba_sequent__TOP__2(VMAC32_top_tb___024root* vlSelf);
void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1__0(VMAC32_top_tb_Compressor32* vlSelf);
void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0__0(VMAC32_top_tb_Compressor32* vlSelf);
void VMAC32_top_tb___024root___nba_sequent__TOP__3(VMAC32_top_tb___024root* vlSelf);
void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32__0(VMAC32_top_tb_Compressor32* vlSelf);
void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32__0(VMAC32_top_tb_Compressor32* vlSelf);
void VMAC32_top_tb___024root___nba_sequent__TOP__4(VMAC32_top_tb___024root* vlSelf);
void VMAC32_top_tb___024root___nba_comb__TOP__0(VMAC32_top_tb___024root* vlSelf);
void VMAC32_top_tb___024root___nba_comb__TOP__1(VMAC32_top_tb___024root* vlSelf);

void VMAC32_top_tb___024root___eval_nba(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___eval_nba\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VMAC32_top_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3__0((&vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3));
        VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2__0((&vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2));
        VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1__0((&vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1));
        VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0__0((&vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0));
        VMAC32_top_tb___024root___nba_sequent__TOP__1(vlSelf);
        VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_2__0((&vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_2));
        VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1__0((&vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1));
        VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0__0((&vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0));
        VMAC32_top_tb___024root___nba_sequent__TOP__2(vlSelf);
        VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1__0((&vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1));
        VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0__0((&vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0));
        VMAC32_top_tb___024root___nba_sequent__TOP__3(vlSelf);
        VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32__0((&vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32));
        VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32__0((&vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32));
        VMAC32_top_tb___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((9ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VMAC32_top_tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0xbULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VMAC32_top_tb___024root___nba_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void VMAC32_top_tb___024root___nba_sequent__TOP__0(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___nba_sequent__TOP__0\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*24:0*/ MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0 = 0;
    IData/*24:0*/ MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_12;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_12 = 0;
    IData/*24:0*/ MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_13;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_13 = 0;
    IData/*24:0*/ MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_14;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_14 = 0;
    IData/*24:0*/ MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_15;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_15 = 0;
    IData/*24:0*/ MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_16;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_16 = 0;
    IData/*24:0*/ MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_17;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_17 = 0;
    IData/*24:0*/ MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_18;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_18 = 0;
    IData/*24:0*/ MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_19;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_19 = 0;
    IData/*24:0*/ MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_20;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_20 = 0;
    IData/*24:0*/ MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_21;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_21 = 0;
    IData/*24:0*/ MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_22;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_22 = 0;
    IData/*24:0*/ MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_23;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_23 = 0;
    IData/*31:0*/ __Vdly__MAC32_top_tb__DOT__cycle;
    __Vdly__MAC32_top_tb__DOT__cycle = 0;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<4>/*127:0*/ __Vtemp_24;
    VlWide<4>/*127:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_40;
    // Body
    __Vdly__MAC32_top_tb__DOT__cycle = vlSelfRef.MAC32_top_tb__DOT__cycle;
    if (vlSelfRef.MAC32_top_tb__DOT__rst_n) {
        __Vdly__MAC32_top_tb__DOT__cycle = ((IData)(1U) 
                                            + vlSelfRef.MAC32_top_tb__DOT__cycle);
        if ((VL_LTES_III(32, 2U, vlSelfRef.MAC32_top_tb__DOT__cycle) 
             & (~ (IData)((0U != vlSelfRef.MAC32_top_tb__DOT__exp_q.size()))))) {
            vlSelfRef.MAC32_top_tb__DOT__unnamedblk1__DOT__exp 
                = vlSelfRef.MAC32_top_tb__DOT__exp_q.pop_front();
            if (VL_UNLIKELY(((vlSelfRef.MAC32_top_tb__DOT__Result_o 
                              != (IData)((vlSelfRef.MAC32_top_tb__DOT__unnamedblk1__DOT__exp 
                                          >> 4U)))))) {
                VL_WRITEF_NX("[%0t] %%Error: MAC32_top_tb.sv:204: Assertion failed in %NMAC32_top_tb.unnamedblk1: [%0t] MISMATCH : got %x exp %x (mode %0#)\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1000),
                             -9,32,vlSelfRef.MAC32_top_tb__DOT__Result_o,
                             32,(IData)((vlSelfRef.MAC32_top_tb__DOT__unnamedblk1__DOT__exp 
                                         >> 4U)),2,
                             vlSelfRef.MAC32_top_tb__DOT__fp_mode);
                vlSelfRef.MAC32_top_tb__DOT__err_cnt 
                    = ((IData)(1U) + vlSelfRef.MAC32_top_tb__DOT__err_cnt);
                VL_STOP_MT("testbench_MAC32/MAC32_top_tb.sv", 204, "");
            }
        }
    } else {
        vlSelfRef.MAC32_top_tb__DOT__err_cnt = 0U;
        __Vdly__MAC32_top_tb__DOT__cycle = 0U;
    }
    if (vlSelfRef.MAC32_top_tb__DOT__rst_n) {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__flags_reg2 
            = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__ffs;
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__rm_reg1 
            = vlSelfRef.MAC32_top_tb__DOT__Rounding_mode_i;
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
            = (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Sign_result) 
                << 0x1fU) | vlSelfRef.__VdfgRegularize_h6171c202_6_0);
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1 
            = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_true_input;
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[0U] 
            = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus[0U];
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[1U] 
            = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus[1U];
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[2U] 
            = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus[2U];
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
            = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus[3U];
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
            = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus[4U];
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1 
            = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_true_input;
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
            = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_true_input;
    } else {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__flags_reg2 = 0U;
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__rm_reg1 = 0U;
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 = 0U;
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1 = 0U;
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[0U] = 0U;
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[1U] = 0U;
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[2U] = 0U;
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] = 0U;
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] = 0U;
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1 = 0U;
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 = 0U;
    }
    vlSelfRef.MAC32_top_tb__DOT__cycle = __Vdly__MAC32_top_tb__DOT__cycle;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__fp32_to_fp16_conv_overflow = 0U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__fp32_to_fp16_conv_underflow = 0U;
    if ((0xffU != (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                            >> 0x17U)))) {
        if ((0x67U <= (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                >> 0x17U)))) {
            if ((0x8eU < (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                   >> 0x17U)))) {
                vlSelfRef.MAC32_top_tb__DOT__dut__DOT__fp32_to_fp16_conv_overflow = 1U;
            }
        }
        if ((0x67U > (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                               >> 0x17U)))) {
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__fp32_to_fp16_conv_underflow = 1U;
        }
    }
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_sub112__DOT__u_sub__DOT__C__BRA__6__KET__ 
        = (IData)((0x18000000U == (0x18000000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__exp_adj 
        = ((0x20U & (VL_REDXOR_32((0x18000000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2)) 
                     << 5U)) | ((0x10U & ((~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                              >> 0x1bU)) 
                                          << 4U)) | 
                                (0xfU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                         >> 0x17U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_inc_exp__DOT__C__BRA__2__KET__ 
        = (IData)((0x1800000U == (0x1800000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__incr 
        = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
            >> 0xcU) & (0U != (0x2fffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Zero 
        = ((~ (IData)((0U != (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1 
                                       >> 0x17U))))) 
           & (0U == (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant 
        = (((IData)((0U != (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1 
                                     >> 0x17U)))) << 0x17U) 
           | (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Exp 
        = (((~ (IData)((0U != (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1 
                                        >> 0x17U))))) 
            & (0U != (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1)))
            ? 1U : (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1 
                             >> 0x17U)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__NV_o 
        = (1U & ((IData)((0U != (0x38000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U]))) 
                 | (((IData)((0x280000U == (0x280000U 
                                            & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U]))) 
                     | (IData)((0x440000U == (0x440000U 
                                              & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])))) 
                    | ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                        >> 0x1eU) & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                      >> 0x17U) & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x600000U 
                                                            & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U]))))))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__eac__DOT____VdfgRegularize_hca792c16_0_0 
        = ((0xfffffffffffeULL & (((QData)((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[2U])) 
                                  << 0x11U) | (0x1fffffffffffeULL 
                                               & ((QData)((IData)(
                                                                  vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[1U])) 
                                                  >> 0xfU)))) 
           | (QData)((IData)((1U & ((~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                        >> 0x15U)) 
                                    & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                                       >> 0x1eU))))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Inf 
        = (IData)((0x7f800000U == (0x7fffffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Zero 
        = ((~ (IData)((0U != (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1 
                                       >> 0x17U))))) 
           & (0U == (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_NaN 
        = (IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1)) 
                   & (0U != (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Exp 
        = (((~ (IData)((0U != (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1 
                                        >> 0x17U))))) 
            & (0U != (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1)))
            ? 1U : (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1 
                             >> 0x17U)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant 
        = (((IData)((0U != (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1 
                                     >> 0x17U)))) << 0x17U) 
           | (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__C_Inf 
        = (IData)((0x7f800000U == (0x7fffffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__C_Zero 
        = ((~ (IData)((0U != (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                       >> 0x17U))))) 
           & (0U == (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__C_NaN 
        = (IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)) 
                   & (0U != (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1))));
    vlSelfRef.__VdfgRegularize_h6171c202_5_0 = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1 
                                                 ^ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1) 
                                                >> 0x1fU);
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__C_Exp 
        = (((~ (IData)((0U != (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                        >> 0x17U))))) 
            & (0U != (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)))
            ? 1U : (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                             >> 0x17U)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul1x 
        = (((((((IData)((0U != (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                         >> 0x17U)))) 
                << 1U) << 0xbU) | (0x800U & (VL_REDXOR_32(
                                                          (0x600000U 
                                                           & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)) 
                                             << 0xbU))) 
             | ((0x400U & (VL_REDXOR_32((0x180000U 
                                         & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)) 
                           << 0xaU)) | (0x200U & (VL_REDXOR_32(
                                                               (0x60000U 
                                                                & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)) 
                                                  << 9U)))) 
            | ((0x100U & (VL_REDXOR_32((0x18000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)) 
                          << 8U)) | ((0x80U & (VL_REDXOR_16(
                                                            (0x6000U 
                                                             & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)) 
                                               << 7U)) 
                                     | (0x40U & (VL_REDXOR_16(
                                                              (0x1800U 
                                                               & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)) 
                                                 << 6U))))) 
           | (((0x20U & (VL_REDXOR_16((0x600U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)) 
                         << 5U)) | ((0x10U & (VL_REDXOR_16(
                                                           (0x180U 
                                                            & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)) 
                                              << 4U)) 
                                    | (8U & (VL_REDXOR_8(
                                                         (0x60U 
                                                          & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)) 
                                             << 3U)))) 
              | ((4U & (VL_REDXOR_8((0x18U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)) 
                        << 2U)) | ((2U & (VL_REDXOR_4(
                                                      (6U 
                                                       & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)) 
                                          << 1U)) | 
                                   (1U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul2x 
        = ((((0x800U & (((IData)(((0U == (0x600000U 
                                          & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)) 
                                  & (0U != (0xffU & 
                                            (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                             >> 0x17U))))) 
                         | (IData)(((0x600000U == (0x600000U 
                                                   & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)) 
                                    & (~ (IData)((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                      >> 0x17U)))))))) 
                        << 0xbU)) | ((0x400U & (((IData)(
                                                         (0x200000U 
                                                          == 
                                                          (0x380000U 
                                                           & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1))) 
                                                 | (IData)(
                                                           (0x180000U 
                                                            == 
                                                            (0x380000U 
                                                             & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)))) 
                                                << 0xaU)) 
                                     | (0x200U & (((IData)(
                                                           (0x80000U 
                                                            == 
                                                            (0xe0000U 
                                                             & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1))) 
                                                   | (IData)(
                                                             (0x60000U 
                                                              == 
                                                              (0xe0000U 
                                                               & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)))) 
                                                  << 9U)))) 
            | ((0x100U & (((IData)((0x20000U == (0x38000U 
                                                 & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1))) 
                           | (IData)((0x18000U == (0x38000U 
                                                   & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)))) 
                          << 8U)) | ((0x80U & (((IData)(
                                                        (0x8000U 
                                                         == 
                                                         (0xe000U 
                                                          & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1))) 
                                                | (IData)(
                                                          (0x6000U 
                                                           == 
                                                           (0xe000U 
                                                            & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)))) 
                                               << 7U)) 
                                     | (0x40U & (((IData)(
                                                          (0x2000U 
                                                           == 
                                                           (0x3800U 
                                                            & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1))) 
                                                  | (IData)(
                                                            (0x1800U 
                                                             == 
                                                             (0x3800U 
                                                              & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)))) 
                                                 << 6U))))) 
           | (((0x20U & (((IData)((0x800U == (0xe00U 
                                              & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1))) 
                          | (IData)((0x600U == (0xe00U 
                                                & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)))) 
                         << 5U)) | ((0x10U & (((IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x380U 
                                                         & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1))) 
                                               | (IData)(
                                                         (0x180U 
                                                          == 
                                                          (0x380U 
                                                           & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)))) 
                                              << 4U)) 
                                    | (8U & (((IData)(
                                                      (0x80U 
                                                       == 
                                                       (0xe0U 
                                                        & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1))) 
                                              | (IData)(
                                                        (0x60U 
                                                         == 
                                                         (0xe0U 
                                                          & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)))) 
                                             << 3U)))) 
              | ((4U & (((IData)((0x20U == (0x38U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1))) 
                         | (IData)((0x18U == (0x38U 
                                              & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)))) 
                        << 2U)) | ((2U & (((IData)(
                                                   (8U 
                                                    == 
                                                    (0xeU 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1))) 
                                           | (IData)(
                                                     (6U 
                                                      == 
                                                      (0xeU 
                                                       & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)))) 
                                          << 1U)) | (IData)(
                                                            (2U 
                                                             == 
                                                             (3U 
                                                              & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)))))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_sub112__DOT__u_sub__DOT__C__BRA__7__KET__ 
        = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
            >> 0x1dU) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_sub112__DOT__u_sub__DOT__C__BRA__6__KET__));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_inc_exp__DOT__C__BRA__3__KET__ 
        = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
            >> 0x19U) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_inc_exp__DOT__C__BRA__2__KET__));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__1__KET__ 
        = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
            >> 0xdU) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__incr));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Sign_result = 0U;
    if ((1U & (~ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__NV_o)))) {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Sign_result 
            = (1U & ((IData)((0U != (0xe00000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])))
                      ? ((0x800000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                          ? (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1 
                             >> 0x1fU) : ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1 
                                           ^ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1) 
                                          >> 0x1fU))
                      : ((IData)((0U != (0xc0000U & 
                                         vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])))
                          ? (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1 
                             >> 0x1fU) : ((0x10000000U 
                                           & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U])
                                           ? (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1 
                                              >> 0x1fU)
                                           : (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Adder_sign)))));
    }
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__low_sum 
        = (0xffffffffffffULL & ((((QData)((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[0U]))) 
                                + vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__eac__DOT____VdfgRegularize_hca792c16_0_0));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__msb_inc__DOT____VdfgRegularize_hb50ef5f9_0_2 
        = ((0x7ffffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U]) 
           + (1U & (IData)((1ULL & (((0xffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[0U])))) 
                                     + (((QData)((IData)(
                                                         (1U 
                                                          & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                                                             >> 0x1dU)))) 
                                         << 0x30U) 
                                        | vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__eac__DOT____VdfgRegularize_hca792c16_0_0)) 
                                    >> 0x30U)))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Sub_Sign 
        = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1 
            >> 0x1fU) ^ (IData)(vlSelfRef.__VdfgRegularize_h6171c202_5_0));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv 
        = (0x3ffU & ((((IData)(0x1bU) - VL_EXTENDS_II(10,9, (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Exp))) 
                      + (VL_EXTENDS_II(10,9, (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Exp)) 
                         + VL_EXTENDS_II(10,9, (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__C_Exp)))) 
                     - (IData)(0x7fU)));
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0 
        = (0x1ffffffU & ((1U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul1x))
                          ? vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant
                          : ((1U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul2x))
                              ? VL_SHIFTL_III(25,25,32, vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant, 1U)
                              : 0U)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[0U] 
        = MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0 
        = (0x1ffffffU & ((2U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul1x))
                          ? vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant
                          : ((2U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul2x))
                              ? VL_SHIFTL_III(25,25,32, vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant, 1U)
                              : 0U)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[1U] 
        = MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0 
        = (0x1ffffffU & ((4U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul1x))
                          ? vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant
                          : ((4U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul2x))
                              ? VL_SHIFTL_III(25,25,32, vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant, 1U)
                              : 0U)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[2U] 
        = MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0 
        = (0x1ffffffU & ((8U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul1x))
                          ? vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant
                          : ((8U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul2x))
                              ? VL_SHIFTL_III(25,25,32, vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant, 1U)
                              : 0U)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[3U] 
        = MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0 
        = (0x1ffffffU & ((0x10U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul1x))
                          ? vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant
                          : ((0x10U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul2x))
                              ? VL_SHIFTL_III(25,25,32, vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant, 1U)
                              : 0U)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[4U] 
        = MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0 
        = (0x1ffffffU & ((0x20U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul1x))
                          ? vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant
                          : ((0x20U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul2x))
                              ? VL_SHIFTL_III(25,25,32, vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant, 1U)
                              : 0U)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[5U] 
        = MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0 
        = (0x1ffffffU & ((0x40U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul1x))
                          ? vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant
                          : ((0x40U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul2x))
                              ? VL_SHIFTL_III(25,25,32, vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant, 1U)
                              : 0U)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[6U] 
        = MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0 
        = (0x1ffffffU & ((0x80U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul1x))
                          ? vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant
                          : ((0x80U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul2x))
                              ? VL_SHIFTL_III(25,25,32, vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant, 1U)
                              : 0U)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[7U] 
        = MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0 
        = (0x1ffffffU & ((0x100U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul1x))
                          ? vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant
                          : ((0x100U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul2x))
                              ? VL_SHIFTL_III(25,25,32, vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant, 1U)
                              : 0U)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[8U] 
        = MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0 
        = (0x1ffffffU & ((0x200U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul1x))
                          ? vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant
                          : ((0x200U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul2x))
                              ? VL_SHIFTL_III(25,25,32, vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant, 1U)
                              : 0U)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[9U] 
        = MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0 
        = (0x1ffffffU & ((0x400U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul1x))
                          ? vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant
                          : ((0x400U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul2x))
                              ? VL_SHIFTL_III(25,25,32, vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant, 1U)
                              : 0U)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[0xaU] 
        = MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0 
        = (0x1ffffffU & ((0x800U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul1x))
                          ? vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant
                          : ((0x800U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul2x))
                              ? VL_SHIFTL_III(25,25,32, vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant, 1U)
                              : 0U)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[0xbU] 
        = MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0 
        = (0x1ffffffU & ((0x1000U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul1x))
                          ? vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant
                          : ((0x1000U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul2x))
                              ? VL_SHIFTL_III(25,25,32, vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant, 1U)
                              : 0U)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[0xcU] 
        = MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____Vlvbound_h050ab4f0__0;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_inc_exp__DOT__C__BRA__4__KET__ 
        = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
            >> 0x1aU) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_inc_exp__DOT__C__BRA__3__KET__));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__2__KET__ 
        = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
            >> 0xeU) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__1__KET__));
    __Vtemp_5[0U] = (0x7fffffeU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                                   << 1U));
    __Vtemp_5[1U] = 0U;
    __Vtemp_5[2U] = 0U;
    __Vtemp_6[0U] = (1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                           >> 0xaU));
    __Vtemp_6[1U] = 0U;
    __Vtemp_6[2U] = 0U;
    VL_SUB_W(3, __Vtemp_7, __Vtemp_5, __Vtemp_6);
    __Vtemp_11[1U] = ((((1U & (IData)((1ULL & ((2ULL 
                                                + (
                                                   (0x1000000000000ULL 
                                                    | (0xffffffffffffULL 
                                                       & (~ 
                                                          (((QData)((IData)(
                                                                            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[0U])))))) 
                                                   + 
                                                   (((QData)((IData)(
                                                                     (1U 
                                                                      & (~ 
                                                                         (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                                                                          >> 0x1dU))))) 
                                                     << 0x30U) 
                                                    | (0xffffffffffffULL 
                                                       & (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__eac__DOT____VdfgRegularize_hca792c16_0_0))))) 
                                               >> 0x30U))))
                         ? (~ (0x7ffffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U]))
                         : ((~ (0x7ffffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U])) 
                            - (IData)(1U))) << 0x10U) 
                      | (IData)(((0xffffffffffffULL 
                                  & (2ULL + ((~ (((QData)((IData)(
                                                                  vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[0U])))) 
                                             + (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__eac__DOT____VdfgRegularize_hca792c16_0_0)))) 
                                 >> 0x20U)));
    __Vtemp_14[2U] = ((0x4000000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__msb_inc__DOT____VdfgRegularize_hb50ef5f9_0_2)
                       ? (0x3ffU & (((1U & (IData)(
                                                   (1ULL 
                                                    & ((2ULL 
                                                        + 
                                                        ((0x1000000000000ULL 
                                                          | (0xffffffffffffULL 
                                                             & (~ 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[0U])))))) 
                                                         + 
                                                         (((QData)((IData)(
                                                                           (1U 
                                                                            & (~ 
                                                                               (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                                                                                >> 0x1dU))))) 
                                                           << 0x30U) 
                                                          | (0xffffffffffffULL 
                                                             & (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__eac__DOT____VdfgRegularize_hca792c16_0_0))))) 
                                                       >> 0x30U))))
                                      ? (~ (0x7ffffffU 
                                            & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U]))
                                      : ((~ (0x7ffffffU 
                                             & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U])) 
                                         - (IData)(1U))) 
                                    >> 0x10U)) : (0x3ffU 
                                                  & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__msb_inc__DOT____VdfgRegularize_hb50ef5f9_0_2 
                                                     >> 0x10U)));
    if ((0x8000000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U])) {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U] 
            = (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__low_sum);
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
            = (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__low_sum 
                       >> 0x20U));
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[2U] = 0U;
    } else if ((0x10000000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U])) {
        if ((0x40000000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U])) {
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U] 
                = __Vtemp_7[0U];
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                = __Vtemp_7[1U];
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[2U] 
                = (0x3ffU & __Vtemp_7[2U]);
        } else {
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U] = 0U;
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                = (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                   << 0x10U);
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[2U] 
                = (0x3ffU & (0x3ffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                                       >> 0x10U)));
        }
    } else {
        if ((0x4000000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__msb_inc__DOT____VdfgRegularize_hb50ef5f9_0_2)) {
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U] 
                = (IData)((0xffffffffffffULL & (2ULL 
                                                + (
                                                   (~ 
                                                    (((QData)((IData)(
                                                                      vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[0U])))) 
                                                   + 
                                                   (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__eac__DOT____VdfgRegularize_hca792c16_0_0)))));
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                = __Vtemp_11[1U];
        } else {
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U] 
                = (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__low_sum);
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__msb_inc__DOT____VdfgRegularize_hb50ef5f9_0_2 
                    << 0x10U) | (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__low_sum 
                                         >> 0x20U)));
        }
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[2U] 
            = (0x3ffU & __Vtemp_14[2U]);
    }
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Mv_halt 
        = (((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                >> 9U)) & (0x49U < (0x1ffU & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv)))) 
           | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Zero));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[0xcU] 
        = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp
        [0xcU];
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP_13 
        = (((QData)((IData)((0xffffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp
                             [0xcU]))) << 0x18U) | (QData)((IData)(
                                                                   ((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0xffU 
                                                                              & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                                                >> 0x17U)))) 
                                                                    << 0x16U))));
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_21 
        = (0x1ffffffU & ((0x80000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)
                          ? (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp
                             [9U]) : vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp
                         [9U]));
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_22 
        = (0x1ffffffU & ((0x200000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)
                          ? (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp
                             [0xaU]) : vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp
                         [0xaU]));
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_23 
        = (0x1ffffffU & ((0U != (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                          >> 0x17U)))
                          ? (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp
                             [0xbU]) : vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp
                         [0xbU]));
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_18 
        = (0x1ffffffU & ((0x2000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)
                          ? (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp
                             [6U]) : vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp
                         [6U]));
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_19 
        = (0x1ffffffU & ((0x8000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)
                          ? (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp
                             [7U]) : vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp
                         [7U]));
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_20 
        = (0x1ffffffU & ((0x20000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)
                          ? (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp
                             [8U]) : vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp
                         [8U]));
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_15 
        = (0x1ffffffU & ((0x80U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)
                          ? (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp
                             [3U]) : vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp
                         [3U]));
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_16 
        = (0x1ffffffU & ((0x200U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)
                          ? (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp
                             [4U]) : vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp
                         [4U]));
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_17 
        = (0x1ffffffU & ((0x800U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)
                          ? (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp
                             [5U]) : vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp
                         [5U]));
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_12 
        = (0x1ffffffU & ((2U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)
                          ? (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp
                             [0U]) : vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp
                         [0U]));
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_13 
        = (0x1ffffffU & ((8U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)
                          ? (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp
                             [1U]) : vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp
                         [1U]));
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_14 
        = (0x1ffffffU & ((0x20U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)
                          ? (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp
                             [2U]) : vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp
                         [2U]));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__3__KET__ 
        = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
            >> 0xfU) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__2__KET__));
    __Vtemp_20[0U] = (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U] 
                      << 2U);
    __Vtemp_20[1U] = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U] 
                       >> 0x1eU) | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                                    << 2U));
    __Vtemp_20[2U] = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                       >> 0x1eU) | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[2U] 
                                    << 2U));
    VL_SHIFTR_WWI(76,76,10, __Vtemp_21, __Vtemp_20, 
                  (0x3ffU & ((IData)(2U) + (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U]))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Rs_Mant[0U] 
        = __Vtemp_21[0U];
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Rs_Mant[1U] 
        = __Vtemp_21[1U];
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Rs_Mant[2U] 
        = (0xfffU & __Vtemp_21[2U]);
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__lzd_grouplv1__group_data_i 
        = (((0U == (0xffU & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                              << 7U) | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U] 
                                        >> 0x19U)))) 
            << 1U) | (0U == (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                                      >> 1U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__lzd_grouplv1__group_data_i 
        = (((0U == (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U] 
                             >> 9U))) << 1U) | (0U 
                                                == 
                                                (0xffU 
                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U] 
                                                    >> 0x11U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__lzd_grouplv1__group_data_i 
        = (((0U == (0xffU & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[2U] 
                              << 7U) | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                                        >> 0x19U)))) 
            << 1U) | (0U == (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[2U] 
                                      >> 1U))));
    __Vtemp_24[0U] = 0U;
    __Vtemp_24[1U] = 0U;
    __Vtemp_24[2U] = (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant 
                      << 0xaU);
    __Vtemp_24[3U] = (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant 
                      >> 0x16U);
    VL_SHIFTR_WWI(98,98,32, __Vtemp_25, __Vtemp_24, 
                  ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Mv_halt)
                    ? 0U : (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0[0U] 
        = __Vtemp_25[0U];
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0[1U] 
        = __Vtemp_25[1U];
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0[2U] 
        = __Vtemp_25[2U];
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0[3U] 
        = (3U & __Vtemp_25[3U]);
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[9U] 
        = MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_21;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
        = (((QData)((IData)((2U | (1U & (~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                            >> 0x13U)))))) 
            << 0x2bU) | (((QData)((IData)(MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_21)) 
                          << 0x12U) | (QData)((IData)(
                                                      (0x10000U 
                                                       & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                          >> 1U))))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[0xaU] 
        = MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_22;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
        = (((QData)((IData)((2U | (1U & (~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                            >> 0x15U)))))) 
            << 0x2dU) | (((QData)((IData)(MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_22)) 
                          << 0x14U) | (QData)((IData)(
                                                      (0x40000U 
                                                       & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                          >> 1U))))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[0xbU] 
        = MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_23;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
        = (((QData)((IData)((2U | (1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                        >> 0x17U))))))))) 
            << 0x2fU) | (((QData)((IData)(MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_23)) 
                          << 0x16U) | (QData)((IData)(
                                                      (0x100000U 
                                                       & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                          >> 1U))))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[6U] 
        = MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_18;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
        = (((QData)((IData)((2U | (1U & (~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                            >> 0xdU)))))) 
            << 0x25U) | (((QData)((IData)(MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_18)) 
                          << 0xcU) | (QData)((IData)(
                                                     (0x400U 
                                                      & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                         >> 1U))))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[7U] 
        = MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_19;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
        = (((QData)((IData)((2U | (1U & (~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                            >> 0xfU)))))) 
            << 0x27U) | (((QData)((IData)(MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_19)) 
                          << 0xeU) | (QData)((IData)(
                                                     (0x1000U 
                                                      & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                         >> 1U))))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[8U] 
        = MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_20;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
        = (((QData)((IData)((2U | (1U & (~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                            >> 0x11U)))))) 
            << 0x29U) | (((QData)((IData)(MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_20)) 
                          << 0x10U) | (QData)((IData)(
                                                      (0x4000U 
                                                       & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                          >> 1U))))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[3U] 
        = MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_15;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
        = (0x100000000ULL | (QData)((IData)((((~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                  >> 7U)) 
                                              << 0x1fU) 
                                             | ((MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_15 
                                                 << 6U) 
                                                | (0x10U 
                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                      >> 1U)))))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[4U] 
        = MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_16;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
        = (((QData)((IData)((2U | (1U & (~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                            >> 9U)))))) 
            << 0x21U) | (((QData)((IData)(MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_16)) 
                          << 8U) | (QData)((IData)(
                                                   (0x40U 
                                                    & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                       >> 1U))))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[5U] 
        = MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_17;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
        = (((QData)((IData)((2U | (1U & (~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                            >> 0xbU)))))) 
            << 0x23U) | (((QData)((IData)(MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_17)) 
                          << 0xaU) | (QData)((IData)(
                                                     (0x100U 
                                                      & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                         >> 1U))))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[0U] 
        = MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_12;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
        = (QData)((IData)(((0x8000000U & ((~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                              >> 1U)) 
                                          << 0x1bU)) 
                           | ((0x6000000U & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                            >> 1U)))) 
                                             << 0x19U)) 
                              | MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_12))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[1U] 
        = MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_13;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
        = (((QData)((IData)((2U | (1U & (~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                            >> 3U)))))) 
            << 0x1bU) | (QData)((IData)(((MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_13 
                                          << 2U) | 
                                         (1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                >> 1U))))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[2U] 
        = MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_14;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
        = (((QData)((IData)((2U | (1U & (~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                            >> 5U)))))) 
            << 0x1dU) | (QData)((IData)(((MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT____VdfgRegularize_h59415cb9_0_14 
                                          << 4U) | 
                                         (4U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                >> 1U))))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__4__KET__ 
        = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
            >> 0x10U) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__3__KET__));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT__base_zeros 
        = (((((0U == (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U] 
                               >> 9U))) << 7U) | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U] 
                                                       >> 0x11U))) 
                                                  << 6U)) 
            | (((0U == (0xffU & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                                  << 7U) | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U] 
                                            >> 0x19U)))) 
                << 5U) | ((0U == (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                                           >> 1U))) 
                          << 4U))) | (((0U == (0xffU 
                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                                                  >> 9U))) 
                                       << 3U) | (((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                                                       >> 0x11U))) 
                                                  << 2U) 
                                                 | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__lzd_grouplv1__group_data_i))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__lzd_grouplv2_0__group_data_i 
        = (((IData)((0U == (0x1fffe00U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U]))) 
            << 1U) | (3U == (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__lzd_grouplv1__group_data_i)));
    __Vtemp_27[0U] = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant;
    __Vtemp_27[1U] = 0U;
    __Vtemp_27[2U] = 0U;
    VL_SHIFTL_WWI(75,75,32, __Vtemp_28, __Vtemp_27, 0x32U);
    if ((0x200U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv))) {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
            = __Vtemp_28[0U];
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
            = __Vtemp_28[1U];
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[2U] 
            = (0x7ffU & __Vtemp_28[2U]);
    } else if (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Mv_halt) {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] = 0U;
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] = 0U;
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[2U] 
            = (0x7ffU & 0U);
    } else {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
            = ((- (IData)((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Sub_Sign))) 
               ^ ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0[1U] 
                   << 8U) | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0[0U] 
                             >> 0x18U)));
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
            = ((- (IData)((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Sub_Sign))) 
               ^ ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0[2U] 
                   << 8U) | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0[1U] 
                             >> 0x18U)));
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[2U] 
            = (0x7ffU & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Sub_Sign) 
                          << 0xaU) | (0x3ffU & ((- (IData)((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Sub_Sign))) 
                                                ^ (
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0[3U] 
                                                    << 8U) 
                                                   | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0[2U] 
                                                      >> 0x18U))))));
    }
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP[9U] 
        = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP[0xaU] 
        = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP[0xbU] 
        = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP[6U] 
        = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP[7U] 
        = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP[8U] 
        = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP[3U] 
        = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP[4U] 
        = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP[5U] 
        = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP[0U] 
        = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP[1U] 
        = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP[2U] 
        = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__5__KET__ 
        = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
            >> 0x11U) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__4__KET__));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT__lv1_zeros 
        = (((IData)((3U == (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__lzd_grouplv1__group_data_i))) 
            << 3U) | (((IData)((3U == (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__lzd_grouplv1__group_data_i))) 
                       << 2U) | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__lzd_grouplv2_0__group_data_i)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT__lv2_zeros 
        = ((((3U == (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__lzd_grouplv1__group_data_i)) 
             & (3U == (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__lzd_grouplv1__group_data_i))) 
            << 1U) | (3U == (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__lzd_grouplv2_0__group_data_i)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__6__KET__ 
        = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
            >> 0x12U) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__5__KET__));
    if ((3U == (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT__lv2_zeros))) {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__allzero 
            = (0U == (0x1ffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U]));
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__shift_num 
            = ((0x100U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                ? 0x40U : ((0x80U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                            ? 0x41U : ((0x40U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                                        ? 0x42U : (
                                                   (0x20U 
                                                    & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                                                    ? 0x43U
                                                    : 
                                                   ((0x10U 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                                                     ? 0x44U
                                                     : 
                                                    ((8U 
                                                      & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                                                      ? 0x45U
                                                      : 
                                                     ((4U 
                                                       & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                                                       ? 0x46U
                                                       : 
                                                      ((2U 
                                                        & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                                                        ? 0x47U
                                                        : 0x48U))))))));
    } else {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__allzero = 0U;
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__shift_num 
            = ((1U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT__lv2_zeros))
                ? ((4U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT__lv1_zeros))
                    ? ((0x40U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT__base_zeros))
                        ? ((0x10000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                            ? 0x38U : ((0x8000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                                        ? 0x39U : (
                                                   (0x4000U 
                                                    & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                                                    ? 0x3aU
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                                                     ? 0x3bU
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                                                      ? 0x3cU
                                                      : 
                                                     ((0x800U 
                                                       & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                                                       ? 0x3dU
                                                       : 
                                                      ((0x400U 
                                                        & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                                                        ? 0x3eU
                                                        : 0x3fU)))))))
                        : ((0x1000000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                            ? 0x30U : ((0x800000U & 
                                        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                                        ? 0x31U : (
                                                   (0x400000U 
                                                    & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                                                    ? 0x32U
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                                                     ? 0x33U
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                                                      ? 0x34U
                                                      : 
                                                     ((0x80000U 
                                                       & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                                                       ? 0x35U
                                                       : 
                                                      ((0x40000U 
                                                        & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                                                        ? 0x36U
                                                        : 0x37U))))))))
                    : ((0x10U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT__base_zeros))
                        ? ((1U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                            ? 0x28U : ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U] 
                                        >> 0x1fU) ? 0x29U
                                        : ((0x40000000U 
                                            & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                                            ? 0x2aU
                                            : ((0x20000000U 
                                                & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                                                ? 0x2bU
                                                : (
                                                   (0x10000000U 
                                                    & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                                                    ? 0x2cU
                                                    : 
                                                   ((0x8000000U 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                                                     ? 0x2dU
                                                     : 
                                                    ((0x4000000U 
                                                      & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U])
                                                      ? 0x2eU
                                                      : 0x2fU)))))))
                        : ((0x100U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                            ? 0x20U : ((0x80U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                                        ? 0x21U : (
                                                   (0x40U 
                                                    & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                                                    ? 0x22U
                                                    : 
                                                   ((0x20U 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                                                     ? 0x23U
                                                     : 
                                                    ((0x10U 
                                                      & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                                                      ? 0x24U
                                                      : 
                                                     ((8U 
                                                       & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                                                       ? 0x25U
                                                       : 
                                                      ((4U 
                                                        & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                                                        ? 0x26U
                                                        : 0x27U)))))))))
                : ((1U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT__lv1_zeros))
                    ? ((4U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT__base_zeros))
                        ? ((0x10000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                            ? 0x18U : ((0x8000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                                        ? 0x19U : (
                                                   (0x4000U 
                                                    & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                                                    ? 0x1aU
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                                                     ? 0x1bU
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                                                      ? 0x1cU
                                                      : 
                                                     ((0x800U 
                                                       & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                                                       ? 0x1dU
                                                       : 
                                                      ((0x400U 
                                                        & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                                                        ? 0x1eU
                                                        : 0x1fU)))))))
                        : ((0x1000000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                            ? 0x10U : ((0x800000U & 
                                        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                                        ? 0x11U : (
                                                   (0x400000U 
                                                    & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                                                    ? 0x12U
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                                                     ? 0x13U
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                                                      ? 0x14U
                                                      : 
                                                     ((0x80000U 
                                                       & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                                                       ? 0x15U
                                                       : 
                                                      ((0x40000U 
                                                        & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                                                        ? 0x16U
                                                        : 0x17U))))))))
                    : ((1U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT__base_zeros))
                        ? ((1U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[2U])
                            ? 8U : ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                                     >> 0x1fU) ? 9U
                                     : ((0x40000000U 
                                         & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                                         ? 0xaU : (
                                                   (0x20000000U 
                                                    & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                                                    ? 0xbU
                                                    : 
                                                   ((0x10000000U 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                                                     ? 0xcU
                                                     : 
                                                    ((0x8000000U 
                                                      & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                                                      ? 0xdU
                                                      : 
                                                     ((0x4000000U 
                                                       & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])
                                                       ? 0xeU
                                                       : 0xfU)))))))
                        : ((0x100U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[2U])
                            ? 0U : ((0x80U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[2U])
                                     ? 1U : ((0x40U 
                                              & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[2U])
                                              ? 2U : 
                                             ((0x20U 
                                               & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[2U])
                                               ? 3U
                                               : ((0x10U 
                                                   & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[2U])
                                                   ? 4U
                                                   : 
                                                  ((8U 
                                                    & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[2U])
                                                    ? 5U
                                                    : 
                                                   ((4U 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[2U])
                                                     ? 6U
                                                     : 7U))))))))));
    }
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__7__KET__ 
        = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
            >> 0x13U) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__6__KET__));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT__Shift_num 
        = ((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                   >> 0x1cU) | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[2U] 
                                >> 9U))) ? 0U : (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__shift_num));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__8__KET__ 
        = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
            >> 0x14U) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__7__KET__));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT____VdfgRegularize_hc99b95d1_0_3 
        = (0x3ffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                     - (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT__Shift_num)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT____VdfgRegularize_hc99b95d1_0_1 
        = ((0x3ffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U]) 
           > (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT__Shift_num));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__9__KET__ 
        = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
            >> 0x15U) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__8__KET__));
    if ((0x200U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])) {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Exp_norm = 0U;
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT__norm_amt = 0U;
    } else if (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT____VdfgRegularize_hc99b95d1_0_1) {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Exp_norm 
            = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT____VdfgRegularize_hc99b95d1_0_3;
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT__norm_amt 
            = (0x1ffU & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT__Shift_num));
    } else {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Exp_norm = 1U;
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT__norm_amt 
            = (0x1ffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                         - (IData)(1U)));
    }
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__10__KET__ 
        = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
            >> 0x16U) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__9__KET__));
    VL_SHIFTL_WWI(74,74,9, __Vtemp_40, vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum, (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT__norm_amt));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[0U] 
        = __Vtemp_40[0U];
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[1U] 
        = __Vtemp_40[1U];
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[2U] 
        = (0x3ffU & __Vtemp_40[2U]);
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__rnd_sum 
        = (((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__10__KET__) 
              << 0xaU) | ((0x200U & ((0x7fe00U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                                  >> 0xdU)) 
                                     ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__9__KET__) 
                                        << 9U))) | 
                          (0x100U & ((0x7ff00U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                                  >> 0xdU)) 
                                     ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__8__KET__) 
                                        << 8U))))) 
            | ((0x80U & ((0x7ff80U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                      >> 0xdU)) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__7__KET__) 
                                                   << 7U))) 
               | ((0x40U & ((0x7ffc0U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                         >> 0xdU)) 
                            ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__6__KET__) 
                               << 6U))) | (0x20U & 
                                           ((0x7ffe0U 
                                             & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                                >> 0xdU)) 
                                            ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__5__KET__) 
                                               << 5U)))))) 
           | (((0x10U & ((0x7fff0U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                      >> 0xdU)) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__4__KET__) 
                                                   << 4U))) 
               | ((8U & ((0x7fff8U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                      >> 0xdU)) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__3__KET__) 
                                                   << 3U))) 
                  | (4U & ((0x7fffcU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                        >> 0xdU)) ^ 
                           ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__2__KET__) 
                            << 2U))))) | ((2U & ((0x7fffeU 
                                                  & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                                     >> 0xdU)) 
                                                 ^ 
                                                 ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__1__KET__) 
                                                  << 1U))) 
                                          | (1U & (
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                                    >> 0xdU) 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__incr))))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Exp_result_norm = 0U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Sticky_one 
        = (1U & ((0U != (0xffffffffffffULL & (((~ (
                                                   vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                                   >> 9U)) 
                                               & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT____VdfgRegularize_hc99b95d1_0_1) 
                                                  & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT____VdfgRegularize_hc99b95d1_0_3) 
                                                     >> 9U)))
                                               ? (((QData)((IData)(
                                                                   vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Rs_Mant[1U])) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(
                                                                      vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Rs_Mant[1U])) 
                                                      << 0x1eU) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Rs_Mant[0U])) 
                                                        >> 2U)))
                                               : ((0U 
                                                   == (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Exp_norm))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[1U])) 
                                                    << 0x3fU) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[1U])) 
                                                       << 0x1fU) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[0U])) 
                                                         >> 1U)))
                                                   : 
                                                  ((0x200U 
                                                    & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[2U])
                                                    ? 
                                                   VL_SHIFTL_QQI(48,48,9, 
                                                                 (((QData)((IData)(
                                                                                vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U]))), (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT__norm_amt))
                                                    : 
                                                   (0xfffffffffffeULL 
                                                    & (VL_SHIFTL_QQI(47,47,9, 
                                                                     (((QData)((IData)(
                                                                                vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U]))), (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT__norm_amt)) 
                                                       << 1U))))))) 
                 | ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                     >> 0xbU) | ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                  >> 0xaU) & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                                              >> 0x1cU)))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__fp32_to_fp16_conv_result 
        = (0x8000U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                      >> 0x10U));
    if ((0xffU == (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                            >> 0x17U)))) {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__fp32_to_fp16_conv_result 
            = (0x7c00U | (0x8000U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                     >> 0x10U)));
        if ((0U != (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2))) {
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__fp32_to_fp16_conv_result 
                = (0x200U | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__fp32_to_fp16_conv_result));
        }
    } else if ((0x67U > (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                  >> 0x17U)))) {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__fp32_to_fp16_conv_result 
            = (0x8000U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                          >> 0x10U));
    } else if ((0x8eU < (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                  >> 0x17U)))) {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__fp32_to_fp16_conv_result 
            = (0x7c00U | (0x8000U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                     >> 0x10U)));
    } else {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__fp32_to_fp16_conv_result 
            = ((0x8000U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                           >> 0x10U)) | ((0x7c00U & 
                                          ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__exp_adj) 
                                           << 0xaU)) 
                                         | (0x3ffU 
                                            & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__rnd_sum))));
        if ((0x400U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__rnd_sum))) {
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__fp32_to_fp16_conv_result 
                = ((0x8000U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__fp32_to_fp16_conv_result)) 
                   | (((0x4000U & (((~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                        >> 0x1bU)) 
                                    ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_inc_exp__DOT__C__BRA__4__KET__)) 
                                   << 0xeU)) | ((0x2000U 
                                                 & ((0x7e000U 
                                                     & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                                        >> 0xdU)) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_inc_exp__DOT__C__BRA__3__KET__) 
                                                     << 0xdU))) 
                                                | (0x1000U 
                                                   & ((0x7f000U 
                                                       & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                                          >> 0xdU)) 
                                                      ^ 
                                                      ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_inc_exp__DOT__C__BRA__2__KET__) 
                                                       << 0xcU))))) 
                      | ((0x800U & (VL_REDXOR_32((0x1800000U 
                                                  & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2)) 
                                    << 0xbU)) | (0x400U 
                                                 & ((~ 
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                                      >> 0x17U)) 
                                                    << 0xaU)))));
        }
    }
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__OF_o = 0U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_result_norm = 0U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_lower = 0U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_sticky = 0U;
    if (vlSelfRef.MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__NV_o) {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Exp_result_norm = 0xffU;
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_result_norm = 0x400000U;
    } else {
        if ((IData)((0U != (0xe00000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])))) {
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Exp_result_norm = 0xffU;
        } else if ((IData)((0U != (0xc0000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])))) {
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Exp_result_norm 
                = (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1 
                            >> 0x17U));
        } else if ((0x10000000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U])) {
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Exp_result_norm 
                = (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1 
                            >> 0x17U));
        } else if ((1U & (~ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__allzero)))) {
            if ((1U & (~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                          >> 9U)))) {
                if ((1U & (~ (((0x100U == (0x1ffU & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Exp_norm))) 
                               & (~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[2U] 
                                     >> 9U))) & (0U 
                                                 != 
                                                 (0xffffffU 
                                                  & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[2U] 
                                                      << 0xfU) 
                                                     | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[1U] 
                                                        >> 0x11U)))))))) {
                    if ((0xffU == (0xffU & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Exp_norm)))) {
                        if ((1U & (~ ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[2U] 
                                       >> 9U) | (0U 
                                                 == 
                                                 (0xffffffU 
                                                  & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[2U] 
                                                      << 0xeU) 
                                                     | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[1U] 
                                                        >> 0x12U)))))))) {
                            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Exp_result_norm = 0xfeU;
                        }
                    } else if ((1U & (~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Exp_norm) 
                                         >> 8U)))) {
                        if ((0U != (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Exp_norm))) {
                            if ((1U == (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Exp_norm))) {
                                if ((0x200U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[2U])) {
                                    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Exp_result_norm = 1U;
                                }
                            } else {
                                vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Exp_result_norm 
                                    = (0xffU & ((0x200U 
                                                 & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[2U])
                                                 ? (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Exp_norm)
                                                 : 
                                                ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT____VdfgRegularize_hc99b95d1_0_3) 
                                                 - (IData)(1U))));
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ (IData)((0U != (0xe00000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])))))) {
            if ((IData)((0U != (0xc0000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])))) {
                vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_result_norm 
                    = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant;
            } else if ((0x10000000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U])) {
                vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_result_norm 
                    = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant;
                vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_sticky 
                    = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Sticky_one;
            } else if ((1U & (~ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__allzero)))) {
                if ((0x200U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])) {
                    if ((0x200U & ((IData)(0x4aU) + 
                                   (0x1ffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])))) {
                        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_result_norm 
                            = (0xffffffU & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Rs_Mant[2U] 
                                             << 0xcU) 
                                            | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Rs_Mant[1U] 
                                               >> 0x14U)));
                        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_lower 
                            = (3U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Rs_Mant[1U] 
                                     >> 0x12U));
                        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_sticky 
                            = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Sticky_one;
                    } else {
                        vlSelfRef.MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__OF_o = 1U;
                    }
                } else if ((((0x100U == (0x1ffU & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Exp_norm))) 
                             & (~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[2U] 
                                   >> 9U))) & (0U != 
                                               (0xffffffU 
                                                & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[2U] 
                                                    << 0xfU) 
                                                   | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[1U] 
                                                      >> 0x11U)))))) {
                    vlSelfRef.MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__OF_o = 1U;
                } else if ((0xffU == (0xffU & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Exp_norm)))) {
                    if ((IData)(((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[2U] 
                                  >> 9U) | (0U == (0xffffffU 
                                                   & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[2U] 
                                                       << 0xeU) 
                                                      | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[1U] 
                                                         >> 0x12U))))))) {
                        vlSelfRef.MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__OF_o = 1U;
                    } else {
                        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_result_norm 
                            = (0x7fffffU & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[2U] 
                                             << 0xfU) 
                                            | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[1U] 
                                               >> 0x11U)));
                        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_lower 
                            = (3U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[1U] 
                                     >> 0xfU));
                        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_sticky 
                            = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Sticky_one;
                        if ((0x7fffffU == (0x7fffffU 
                                           & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_result_norm))) {
                            vlSelfRef.MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__OF_o 
                                = ((0x4000000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                    ? ((1U & (~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                                 >> 0x19U))) 
                                       && ((1U & (~ 
                                                  (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                                   >> 0x18U))) 
                                           && (1U & 
                                               ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_lower) 
                                                >> 1U))))
                                    : ((0x2000000U 
                                        & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                        ? ((0x1000000U 
                                            & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                            ? (((0U 
                                                 != (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_lower)) 
                                                | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_sticky)) 
                                               & (~ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Adder_sign)))
                                            : (((0U 
                                                 != (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_lower)) 
                                                | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_sticky)) 
                                               & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Adder_sign)))
                                        : ((1U & (~ 
                                                  (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                                   >> 0x18U))) 
                                           && (IData)(
                                                      (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_lower) 
                                                        >> 1U) 
                                                       & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_lower) 
                                                           | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_sticky)) 
                                                          | vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_result_norm))))));
                        }
                    }
                } else if ((0x100U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Exp_norm))) {
                    vlSelfRef.MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__OF_o = 1U;
                } else if ((0U == (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Exp_norm))) {
                    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_result_norm 
                        = (0x7fffffU & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[2U] 
                                         << 0xdU) | 
                                        (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[1U] 
                                         >> 0x13U)));
                    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_lower 
                        = (3U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[1U] 
                                 >> 0x11U));
                    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_sticky 
                        = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Sticky_one;
                } else if ((1U == (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Exp_norm))) {
                    if ((0x200U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[2U])) {
                        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_result_norm 
                            = (0xffffffU & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[2U] 
                                             << 0xeU) 
                                            | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[1U] 
                                               >> 0x12U)));
                        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_lower 
                            = (3U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[1U] 
                                     >> 0x10U));
                        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_sticky 
                            = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Sticky_one;
                    } else {
                        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_result_norm 
                            = (0xffffffU & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[2U] 
                                             << 0xeU) 
                                            | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[1U] 
                                               >> 0x12U)));
                        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_lower 
                            = (3U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[1U] 
                                     >> 0x10U));
                        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_sticky 
                            = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Sticky_one;
                    }
                } else if ((0x200U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[2U])) {
                    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_result_norm 
                        = (0xffffffU & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[2U] 
                                         << 0xeU) | 
                                        (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[1U] 
                                         >> 0x12U)));
                    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_lower 
                        = (3U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[1U] 
                                 >> 0x10U));
                    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_sticky 
                        = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Sticky_one;
                } else {
                    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_result_norm 
                        = (0xffffffU & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[2U] 
                                         << 0xfU) | 
                                        (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[1U] 
                                         >> 0x11U)));
                    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_lower 
                        = (3U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[1U] 
                                 >> 0xfU));
                    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_sticky 
                        = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Sticky_one;
                }
            }
        }
    }
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__GRSbits 
        = ((0U != (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_lower)) 
           | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_sticky));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_upper_rounded 
        = (0x1ffffffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_result_norm 
                         + ((0x4000000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                             ? ((1U & (~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                          >> 0x19U))) 
                                && ((1U & (~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                              >> 0x18U))) 
                                    && (1U & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_lower) 
                                              >> 1U))))
                             : ((0x2000000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                 ? ((0x1000000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                     ? ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__GRSbits) 
                                        & (~ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Adder_sign)))
                                     : ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__GRSbits) 
                                        & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Adder_sign)))
                                 : ((1U & (~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                              >> 0x18U))) 
                                    && (IData)((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_lower) 
                                                 >> 1U) 
                                                & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_lower) 
                                                    | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_sticky)) 
                                                   | vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_result_norm))))))));
    vlSelfRef.__VdfgRegularize_h6171c202_6_0 = ((0x7f800000U 
                                                 & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__OF_o)
                                                      ? 
                                                     ((0x4000000U 
                                                       & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                                       ? 
                                                      ((0x2000000U 
                                                        & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                                        ? 0U
                                                        : 
                                                       ((0x1000000U 
                                                         & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                                         ? 0U
                                                         : 0xffU))
                                                       : 
                                                      ((0x2000000U 
                                                        & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                                        ? 
                                                       ((0x1000000U 
                                                         & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                                         ? 
                                                        ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Sign_result)
                                                          ? 0xfeU
                                                          : 0xffU)
                                                         : 
                                                        ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Sign_result)
                                                          ? 0xffU
                                                          : 0xfeU))
                                                        : 
                                                       ((0x1000000U 
                                                         & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                                         ? 0xfeU
                                                         : 0xffU)))
                                                      : 
                                                     ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Exp_result_norm) 
                                                      + 
                                                      (1U 
                                                       & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_upper_rounded 
                                                          >> 0x18U)))) 
                                                    << 0x17U)) 
                                                | (0x7fffffU 
                                                   & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__OF_o)
                                                       ? 
                                                      ((0x4000000U 
                                                        & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                                        ? 0U
                                                        : 
                                                       ((0x2000000U 
                                                         & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                                         ? 
                                                        ((0x1000000U 
                                                          & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                                          ? 
                                                         ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Sign_result)
                                                           ? 0x7fffffU
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Sign_result)
                                                           ? 0U
                                                           : 0x7fffffU))
                                                         : 
                                                        ((0x1000000U 
                                                          & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                                          ? 0x7fffffU
                                                          : 0U)))
                                                       : 
                                                      ((0x1000000U 
                                                        & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_upper_rounded)
                                                        ? 
                                                       (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_upper_rounded 
                                                        >> 1U)
                                                        : vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_upper_rounded))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__UF_o 
        = ((0U == vlSelfRef.__VdfgRegularize_h6171c202_6_0) 
           & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__GRSbits));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__ffs = ((1U 
                                                   & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__ffs)) 
                                                  | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__NV_o) 
                                                       << 4U) 
                                                      | ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__OF_o) 
                                                         << 3U)) 
                                                     | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__UF_o) 
                                                         << 2U) 
                                                        | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__GRSbits) 
                                                            | ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__OF_o) 
                                                               | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__UF_o))) 
                                                           << 1U))));
}

VL_INLINE_OPT void VMAC32_top_tb___024root___nba_sequent__TOP__1(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___nba_sequent__TOP__1\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_sum[3U] 
        = vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3.Sum_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_carry[3U] 
        = vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3.Carry_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_shcy[3U] 
        = (0x1ffffffffffffULL & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3.Carry_o, 1U));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_sum[2U] 
        = vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_carry[2U] 
        = vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_shcy[2U] 
        = (0x1ffffffffffffULL & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_carry[1U] 
        = vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_shcy[1U] 
        = (0x1ffffffffffffULL & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_sum[1U] 
        = vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_sum[0U] 
        = vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_carry[0U] 
        = vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_shcy[0U] 
        = (0x1ffffffffffffULL & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U));
}

VL_INLINE_OPT void VMAC32_top_tb___024root___nba_sequent__TOP__2(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___nba_sequent__TOP__2\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_sum[6U] 
        = vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_2.Sum_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_carry[6U] 
        = vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_2.Carry_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_shcy[6U] 
        = (0x1ffffffffffffULL & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_2.Carry_o, 1U));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_carry[5U] 
        = vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1.Carry_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_shcy[5U] 
        = (0x1ffffffffffffULL & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1.Carry_o, 1U));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_sum[5U] 
        = vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1.Sum_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_sum[4U] 
        = vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0.Sum_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_carry[4U] 
        = vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0.Carry_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_shcy[4U] 
        = (0x1ffffffffffffULL & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0.Carry_o, 1U));
}

VL_INLINE_OPT void VMAC32_top_tb___024root___nba_sequent__TOP__3(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___nba_sequent__TOP__3\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_carry[8U] 
        = vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1.Carry_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_shcy[8U] 
        = (0x1ffffffffffffULL & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1.Carry_o, 1U));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_sum[8U] 
        = vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1.Sum_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_sum[7U] 
        = vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0.Sum_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_carry[7U] 
        = vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0.Carry_o;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_shcy[7U] 
        = (0x1ffffffffffffULL & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0.Carry_o, 1U));
}

VL_INLINE_OPT void VMAC32_top_tb___024root___nba_sequent__TOP__4(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___nba_sequent__TOP__4\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*47:0*/ MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_hdea927a9__0;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_hdea927a9__0 = 0;
    QData/*47:0*/ MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_hdea927a9__1;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_hdea927a9__1 = 0;
    IData/*26:0*/ MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h61a5ef5a__0;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h61a5ef5a__0 = 0;
    CData/*0:0*/ MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__0;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__0 = 0;
    CData/*0:0*/ MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__1;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__1 = 0;
    CData/*0:0*/ MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__2;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__2 = 0;
    CData/*0:0*/ MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__3;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__3 = 0;
    CData/*0:0*/ MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__4;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__4 = 0;
    SData/*9:0*/ MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h4990de99__0;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h4990de99__0 = 0;
    CData/*0:0*/ MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__5;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__5 = 0;
    CData/*0:0*/ MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__6;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__6 = 0;
    SData/*11:0*/ MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h53bbf85e__0;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h53bbf85e__0 = 0;
    CData/*2:0*/ MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h48e074ee__0;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h48e074ee__0 = 0;
    // Body
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 1U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 2U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 3U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 4U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 5U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 6U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 7U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 8U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 9U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0xaU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0xbU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0xcU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0xdU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0xeU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0xfU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x10U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x11U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x12U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x13U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x14U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x15U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x16U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x17U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x18U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x19U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x1aU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x1bU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x1cU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x1dU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x1eU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__32__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x1fU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__33__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x20U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__34__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x21U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__35__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x22U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__36__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x23U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__37__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x24U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__38__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x25U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__39__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x26U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__40__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x27U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__41__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x28U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__42__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x29U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__43__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x2aU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__44__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x2bU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__45__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x2cU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__46__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x2dU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__47__KET____DOT__FA__carry_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                        >> 0x2eU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 1U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 2U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 3U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 4U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 5U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 6U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 7U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 8U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 9U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0xaU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0xbU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0xcU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0xdU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0xeU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0xfU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x10U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x11U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x12U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x13U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x14U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x15U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x16U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x17U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x18U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x19U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x1aU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x1bU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x1cU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x1dU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x1eU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x1fU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__32__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x20U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__33__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x21U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__34__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x22U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__35__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x23U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__36__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x24U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__37__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x25U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__38__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x26U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__39__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x27U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__40__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x28U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__41__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x29U))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__42__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x2aU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__43__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x2bU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__44__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x2cU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__45__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x2dU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__46__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x2eU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__47__KET____DOT__FA__addend_i 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                        >> 0x2fU))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellout__genblk1__BRA__47__KET____DOT__FA__carry_o 
        = (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__47__KET____DOT__FA__addend_i) 
            & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
               >> 0xfU)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__47__KET____DOT__FA__addend_i) 
                             | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                >> 0xfU)) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__47__KET____DOT__FA__carry_i)));
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_hdea927a9__0 
        = (((QData)((IData)(((((((0x80000000U & ((0x80000000U 
                                                  & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                     << 0x10U)) 
                                                 ^ 
                                                 (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__47__KET____DOT__FA__addend_i) 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__47__KET____DOT__FA__carry_i)) 
                                                  << 0x1fU))) 
                                 | (0x40000000U & (
                                                   (0xc0000000U 
                                                    & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                       << 0x10U)) 
                                                   ^ 
                                                   (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__46__KET____DOT__FA__addend_i) 
                                                     ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__46__KET____DOT__FA__carry_i)) 
                                                    << 0x1eU)))) 
                                | ((0x20000000U & (
                                                   (0xe0000000U 
                                                    & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                       << 0x10U)) 
                                                   ^ 
                                                   (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__45__KET____DOT__FA__addend_i) 
                                                     ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__45__KET____DOT__FA__carry_i)) 
                                                    << 0x1dU))) 
                                   | (0x10000000U & 
                                      ((0xf0000000U 
                                        & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                           << 0x10U)) 
                                       ^ (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__44__KET____DOT__FA__addend_i) 
                                           ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__44__KET____DOT__FA__carry_i)) 
                                          << 0x1cU))))) 
                               | (((0x8000000U & ((0xf8000000U 
                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                      << 0x10U)) 
                                                  ^ 
                                                  (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__43__KET____DOT__FA__addend_i) 
                                                    ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__43__KET____DOT__FA__carry_i)) 
                                                   << 0x1bU))) 
                                   | (0x4000000U & 
                                      ((0xfc000000U 
                                        & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                           << 0x10U)) 
                                       ^ (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__42__KET____DOT__FA__addend_i) 
                                           ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__42__KET____DOT__FA__carry_i)) 
                                          << 0x1aU)))) 
                                  | ((0x2000000U & 
                                      ((0xfe000000U 
                                        & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                           << 0x10U)) 
                                       ^ (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__41__KET____DOT__FA__addend_i) 
                                           ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__41__KET____DOT__FA__carry_i)) 
                                          << 0x19U))) 
                                     | (0x1000000U 
                                        & ((0xff000000U 
                                            & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                               << 0x10U)) 
                                           ^ (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__40__KET____DOT__FA__addend_i) 
                                               ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__40__KET____DOT__FA__carry_i)) 
                                              << 0x18U)))))) 
                              | ((((0x800000U & ((0xff800000U 
                                                  & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                     << 0x10U)) 
                                                 ^ 
                                                 (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__39__KET____DOT__FA__addend_i) 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__39__KET____DOT__FA__carry_i)) 
                                                  << 0x17U))) 
                                   | (0x400000U & (
                                                   (0xffc00000U 
                                                    & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                       << 0x10U)) 
                                                   ^ 
                                                   (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__38__KET____DOT__FA__addend_i) 
                                                     ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__38__KET____DOT__FA__carry_i)) 
                                                    << 0x16U)))) 
                                  | ((0x200000U & (
                                                   (0xffe00000U 
                                                    & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                       << 0x10U)) 
                                                   ^ 
                                                   (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__37__KET____DOT__FA__addend_i) 
                                                     ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__37__KET____DOT__FA__carry_i)) 
                                                    << 0x15U))) 
                                     | (0x100000U & 
                                        ((0xfff00000U 
                                          & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                             << 0x10U)) 
                                         ^ (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__36__KET____DOT__FA__addend_i) 
                                             ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__36__KET____DOT__FA__carry_i)) 
                                            << 0x14U))))) 
                                 | (((0x80000U & ((0xfff80000U 
                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                      << 0x10U)) 
                                                  ^ 
                                                  (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__35__KET____DOT__FA__addend_i) 
                                                    ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__35__KET____DOT__FA__carry_i)) 
                                                   << 0x13U))) 
                                     | (0x40000U & 
                                        ((0xfffc0000U 
                                          & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                             << 0x10U)) 
                                         ^ (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__34__KET____DOT__FA__addend_i) 
                                             ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__34__KET____DOT__FA__carry_i)) 
                                            << 0x12U)))) 
                                    | ((0x20000U & 
                                        ((0xfffe0000U 
                                          & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                             << 0x10U)) 
                                         ^ (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__33__KET____DOT__FA__addend_i) 
                                             ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__33__KET____DOT__FA__carry_i)) 
                                            << 0x11U))) 
                                       | (0x10000U 
                                          & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                              ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__32__KET____DOT__FA__addend_i) 
                                                 ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__32__KET____DOT__FA__carry_i))) 
                                             << 0x10U)))))) 
                             | (((((((0x8000U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                 >> 0x10U)) 
                                     ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__FA__addend_i) 
                                        << 0xfU)) ^ 
                                    ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__FA__carry_i) 
                                     << 0xfU)) | (0x4000U 
                                                  & ((0xc000U 
                                                      & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                         >> 0x10U)) 
                                                     ^ 
                                                     (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__FA__addend_i) 
                                                       ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__FA__carry_i)) 
                                                      << 0xeU)))) 
                                  | ((0x2000U & ((0xe000U 
                                                  & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                     >> 0x10U)) 
                                                 ^ 
                                                 (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__FA__addend_i) 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__FA__carry_i)) 
                                                  << 0xdU))) 
                                     | (0x1000U & (
                                                   (0xf000U 
                                                    & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                       >> 0x10U)) 
                                                   ^ 
                                                   (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__FA__addend_i) 
                                                     ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__FA__carry_i)) 
                                                    << 0xcU))))) 
                                 | (((0x800U & ((0xf800U 
                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                    >> 0x10U)) 
                                                ^ (
                                                   ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__FA__addend_i) 
                                                    ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__FA__carry_i)) 
                                                   << 0xbU))) 
                                     | (0x400U & ((0xfc00U 
                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                      >> 0x10U)) 
                                                  ^ 
                                                  (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__FA__addend_i) 
                                                    ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__FA__carry_i)) 
                                                   << 0xaU)))) 
                                    | ((0x200U & ((0xfe00U 
                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                      >> 0x10U)) 
                                                  ^ 
                                                  (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__FA__addend_i) 
                                                    ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__FA__carry_i)) 
                                                   << 9U))) 
                                       | (0x100U & 
                                          ((0xff00U 
                                            & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                               >> 0x10U)) 
                                           ^ (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__FA__addend_i) 
                                               ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__FA__carry_i)) 
                                              << 8U)))))) 
                                | ((((0x80U & ((0xff80U 
                                                & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                   >> 0x10U)) 
                                               ^ (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__FA__addend_i) 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__FA__carry_i)) 
                                                  << 7U))) 
                                     | (0x40U & ((0xffc0U 
                                                  & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                     >> 0x10U)) 
                                                 ^ 
                                                 (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__FA__addend_i) 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__FA__carry_i)) 
                                                  << 6U)))) 
                                    | ((0x20U & ((0xffe0U 
                                                  & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                     >> 0x10U)) 
                                                 ^ 
                                                 (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__FA__addend_i) 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__FA__carry_i)) 
                                                  << 5U))) 
                                       | (0x10U & (
                                                   (0xfff0U 
                                                    & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                       >> 0x10U)) 
                                                   ^ 
                                                   (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__FA__addend_i) 
                                                     ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__FA__carry_i)) 
                                                    << 4U))))) 
                                   | (((8U & ((0xfff8U 
                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                  >> 0x10U)) 
                                              ^ (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__FA__addend_i) 
                                                  ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__FA__carry_i)) 
                                                 << 3U))) 
                                       | (4U & ((0xfffcU 
                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                    >> 0x10U)) 
                                                ^ (
                                                   ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__FA__addend_i) 
                                                    ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__FA__carry_i)) 
                                                   << 2U)))) 
                                      | ((2U & ((0xfffeU 
                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                    >> 0x10U)) 
                                                ^ (
                                                   ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__FA__addend_i) 
                                                    ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__FA__carry_i)) 
                                                   << 1U))) 
                                         | (1U & ((
                                                   vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                   >> 0x10U) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__FA__addend_i) 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__FA__carry_i))))))))))) 
            << 0x10U) | (QData)((IData)((((((0x8000U 
                                             & ((0xffff8000U 
                                                 & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                ^ (
                                                   ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__FA__addend_i) 
                                                    ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__FA__carry_i)) 
                                                   << 0xfU))) 
                                            | (0x4000U 
                                               & ((0xffffc000U 
                                                   & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                  ^ 
                                                  (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__FA__addend_i) 
                                                    ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__FA__carry_i)) 
                                                   << 0xeU)))) 
                                           | ((0x2000U 
                                               & ((0xffffe000U 
                                                   & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                  ^ 
                                                  (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__FA__addend_i) 
                                                    ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__FA__carry_i)) 
                                                   << 0xdU))) 
                                              | (0x1000U 
                                                 & ((0xfffff000U 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                    ^ 
                                                    (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__FA__addend_i) 
                                                      ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__FA__carry_i)) 
                                                     << 0xcU))))) 
                                          | (((0x800U 
                                               & ((0xfffff800U 
                                                   & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                  ^ 
                                                  (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__FA__addend_i) 
                                                    ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__FA__carry_i)) 
                                                   << 0xbU))) 
                                              | (0x400U 
                                                 & ((0xfffffc00U 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                    ^ 
                                                    (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__FA__addend_i) 
                                                      ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__FA__carry_i)) 
                                                     << 0xaU)))) 
                                             | ((0x200U 
                                                 & ((0xfffffe00U 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                    ^ 
                                                    (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__FA__addend_i) 
                                                      ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__FA__carry_i)) 
                                                     << 9U))) 
                                                | (0x100U 
                                                   & ((0xffffff00U 
                                                       & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                      ^ 
                                                      (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__FA__addend_i) 
                                                        ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__FA__carry_i)) 
                                                       << 8U)))))) 
                                         | ((((0x80U 
                                               & ((0xffffff80U 
                                                   & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                  ^ 
                                                  (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__FA__addend_i) 
                                                    ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__FA__carry_i)) 
                                                   << 7U))) 
                                              | (0x40U 
                                                 & ((0xffffffc0U 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                    ^ 
                                                    (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__FA__addend_i) 
                                                      ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__FA__carry_i)) 
                                                     << 6U)))) 
                                             | ((0x20U 
                                                 & ((0xffffffe0U 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                    ^ 
                                                    (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__FA__addend_i) 
                                                      ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__FA__carry_i)) 
                                                     << 5U))) 
                                                | (0x10U 
                                                   & ((0xfffffff0U 
                                                       & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                      ^ 
                                                      (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__FA__addend_i) 
                                                        ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__FA__carry_i)) 
                                                       << 4U))))) 
                                            | (((8U 
                                                 & ((0xfffffff8U 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                    ^ 
                                                    (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__FA__addend_i) 
                                                      ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__FA__carry_i)) 
                                                     << 3U))) 
                                                | (4U 
                                                   & ((0xfffffffcU 
                                                       & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                      ^ 
                                                      (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__FA__addend_i) 
                                                        ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__FA__carry_i)) 
                                                       << 2U)))) 
                                               | ((2U 
                                                   & ((0xfffffffeU 
                                                       & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                      ^ 
                                                      (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__FA__addend_i) 
                                                        ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__FA__carry_i)) 
                                                       << 1U))) 
                                                  | (1U 
                                                     & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                        ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__FA__addend_i))))))))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus[0U] 
        = (IData)(MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_hdea927a9__0);
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus[1U] 
        = ((0xffff0000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus[1U]) 
           | (IData)((MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_hdea927a9__0 
                      >> 0x20U)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx = 0x30U;
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_hdea927a9__1 
        = (((QData)((IData)((((((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellout__genblk1__BRA__47__KET____DOT__FA__carry_o) 
                                  << 0x1fU) | ((0xc0000000U 
                                                & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__46__KET____DOT__FA__addend_i) 
                                                    << 0x1eU) 
                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                      << 0x10U))) 
                                               | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__46__KET____DOT__FA__addend_i) 
                                                    << 0x1eU) 
                                                   | (0xc0000000U 
                                                      & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                         << 0x10U))) 
                                                  & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__46__KET____DOT__FA__carry_i) 
                                                     << 0x1eU)))) 
                                | (((0xe0000000U & 
                                     (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__45__KET____DOT__FA__addend_i) 
                                       << 0x1dU) & 
                                      (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                       << 0x10U))) 
                                    | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__45__KET____DOT__FA__addend_i) 
                                         << 0x1dU) 
                                        | (0xe0000000U 
                                           & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                              << 0x10U))) 
                                       & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__45__KET____DOT__FA__carry_i) 
                                          << 0x1dU))) 
                                   | ((0xf0000000U 
                                       & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__44__KET____DOT__FA__addend_i) 
                                           << 0x1cU) 
                                          & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                             << 0x10U))) 
                                      | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__44__KET____DOT__FA__addend_i) 
                                           << 0x1cU) 
                                          | (0xf0000000U 
                                             & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                << 0x10U))) 
                                         & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__44__KET____DOT__FA__carry_i) 
                                            << 0x1cU))))) 
                               | ((((0xf8000000U & 
                                     (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__43__KET____DOT__FA__addend_i) 
                                       << 0x1bU) & 
                                      (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                       << 0x10U))) 
                                    | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__43__KET____DOT__FA__addend_i) 
                                         << 0x1bU) 
                                        | (0xf8000000U 
                                           & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                              << 0x10U))) 
                                       & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__43__KET____DOT__FA__carry_i) 
                                          << 0x1bU))) 
                                   | ((0xfc000000U 
                                       & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__42__KET____DOT__FA__addend_i) 
                                           << 0x1aU) 
                                          & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                             << 0x10U))) 
                                      | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__42__KET____DOT__FA__addend_i) 
                                           << 0x1aU) 
                                          | (0xfc000000U 
                                             & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                << 0x10U))) 
                                         & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__42__KET____DOT__FA__carry_i) 
                                            << 0x1aU)))) 
                                  | (((0xfe000000U 
                                       & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__41__KET____DOT__FA__addend_i) 
                                           << 0x19U) 
                                          & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                             << 0x10U))) 
                                      | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__41__KET____DOT__FA__addend_i) 
                                           << 0x19U) 
                                          | (0xfe000000U 
                                             & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                << 0x10U))) 
                                         & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__41__KET____DOT__FA__carry_i) 
                                            << 0x19U))) 
                                     | ((0xff000000U 
                                         & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__40__KET____DOT__FA__addend_i) 
                                             << 0x18U) 
                                            & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                               << 0x10U))) 
                                        | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__40__KET____DOT__FA__addend_i) 
                                             << 0x18U) 
                                            | (0xff000000U 
                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                  << 0x10U))) 
                                           & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__40__KET____DOT__FA__carry_i) 
                                              << 0x18U)))))) 
                              | (((((0xff800000U & 
                                     (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__39__KET____DOT__FA__addend_i) 
                                       << 0x17U) & 
                                      (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                       << 0x10U))) 
                                    | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__39__KET____DOT__FA__addend_i) 
                                         << 0x17U) 
                                        | (0xff800000U 
                                           & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                              << 0x10U))) 
                                       & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__39__KET____DOT__FA__carry_i) 
                                          << 0x17U))) 
                                   | ((0xffc00000U 
                                       & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__38__KET____DOT__FA__addend_i) 
                                           << 0x16U) 
                                          & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                             << 0x10U))) 
                                      | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__38__KET____DOT__FA__addend_i) 
                                           << 0x16U) 
                                          | (0xffc00000U 
                                             & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                << 0x10U))) 
                                         & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__38__KET____DOT__FA__carry_i) 
                                            << 0x16U)))) 
                                  | (((0xffe00000U 
                                       & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__37__KET____DOT__FA__addend_i) 
                                           << 0x15U) 
                                          & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                             << 0x10U))) 
                                      | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__37__KET____DOT__FA__addend_i) 
                                           << 0x15U) 
                                          | (0xffe00000U 
                                             & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                << 0x10U))) 
                                         & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__37__KET____DOT__FA__carry_i) 
                                            << 0x15U))) 
                                     | ((0xfff00000U 
                                         & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__36__KET____DOT__FA__addend_i) 
                                             << 0x14U) 
                                            & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                               << 0x10U))) 
                                        | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__36__KET____DOT__FA__addend_i) 
                                             << 0x14U) 
                                            | (0xfff00000U 
                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                  << 0x10U))) 
                                           & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__36__KET____DOT__FA__carry_i) 
                                              << 0x14U))))) 
                                 | ((((0xfff80000U 
                                       & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__35__KET____DOT__FA__addend_i) 
                                           << 0x13U) 
                                          & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                             << 0x10U))) 
                                      | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__35__KET____DOT__FA__addend_i) 
                                           << 0x13U) 
                                          | (0xfff80000U 
                                             & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                << 0x10U))) 
                                         & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__35__KET____DOT__FA__carry_i) 
                                            << 0x13U))) 
                                     | ((0xfffc0000U 
                                         & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__34__KET____DOT__FA__addend_i) 
                                             << 0x12U) 
                                            & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                               << 0x10U))) 
                                        | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__34__KET____DOT__FA__addend_i) 
                                             << 0x12U) 
                                            | (0xfffc0000U 
                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                  << 0x10U))) 
                                           & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__34__KET____DOT__FA__carry_i) 
                                              << 0x12U)))) 
                                    | (((0xfffe0000U 
                                         & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__33__KET____DOT__FA__addend_i) 
                                             << 0x11U) 
                                            & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                               << 0x10U))) 
                                        | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__33__KET____DOT__FA__addend_i) 
                                             << 0x11U) 
                                            | (0xfffe0000U 
                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                  << 0x10U))) 
                                           & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__33__KET____DOT__FA__carry_i) 
                                              << 0x11U))) 
                                       | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__32__KET____DOT__FA__addend_i) 
                                            & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U]) 
                                           | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__32__KET____DOT__FA__addend_i) 
                                               | vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U]) 
                                              & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__32__KET____DOT__FA__carry_i))) 
                                          << 0x10U))))) 
                             | ((((((0x8000U & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__FA__addend_i) 
                                                 << 0xfU) 
                                                & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                   >> 0x10U))) 
                                    | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__FA__addend_i) 
                                         << 0xfU) | 
                                        (0x8000U & 
                                         (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                          >> 0x10U))) 
                                       & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__FA__carry_i) 
                                          << 0xfU))) 
                                   | ((0xc000U & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__FA__addend_i) 
                                                   << 0xeU) 
                                                  & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                     >> 0x10U))) 
                                      | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__FA__addend_i) 
                                           << 0xeU) 
                                          | (0xc000U 
                                             & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                >> 0x10U))) 
                                         & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__FA__carry_i) 
                                            << 0xeU)))) 
                                  | (((0xe000U & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__FA__addend_i) 
                                                   << 0xdU) 
                                                  & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                     >> 0x10U))) 
                                      | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__FA__addend_i) 
                                           << 0xdU) 
                                          | (0xe000U 
                                             & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                >> 0x10U))) 
                                         & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__FA__carry_i) 
                                            << 0xdU))) 
                                     | ((0xf000U & 
                                         (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__FA__addend_i) 
                                           << 0xcU) 
                                          & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                             >> 0x10U))) 
                                        | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__FA__addend_i) 
                                             << 0xcU) 
                                            | (0xf000U 
                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                  >> 0x10U))) 
                                           & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__FA__carry_i) 
                                              << 0xcU))))) 
                                 | ((((0xf800U & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__FA__addend_i) 
                                                   << 0xbU) 
                                                  & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                     >> 0x10U))) 
                                      | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__FA__addend_i) 
                                           << 0xbU) 
                                          | (0xf800U 
                                             & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                >> 0x10U))) 
                                         & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__FA__carry_i) 
                                            << 0xbU))) 
                                     | ((0xfc00U & 
                                         (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__FA__addend_i) 
                                           << 0xaU) 
                                          & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                             >> 0x10U))) 
                                        | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__FA__addend_i) 
                                             << 0xaU) 
                                            | (0xfc00U 
                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                  >> 0x10U))) 
                                           & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__FA__carry_i) 
                                              << 0xaU)))) 
                                    | (((0xfe00U & 
                                         (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__FA__addend_i) 
                                           << 9U) & 
                                          (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                           >> 0x10U))) 
                                        | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__FA__addend_i) 
                                             << 9U) 
                                            | (0xfe00U 
                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                  >> 0x10U))) 
                                           & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__FA__carry_i) 
                                              << 9U))) 
                                       | ((0xff00U 
                                           & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__FA__addend_i) 
                                               << 8U) 
                                              & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                 >> 0x10U))) 
                                          | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__FA__addend_i) 
                                               << 8U) 
                                              | (0xff00U 
                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                    >> 0x10U))) 
                                             & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__FA__carry_i) 
                                                << 8U)))))) 
                                | (((((0xff80U & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__FA__addend_i) 
                                                   << 7U) 
                                                  & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                     >> 0x10U))) 
                                      | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__FA__addend_i) 
                                           << 7U) | 
                                          (0xff80U 
                                           & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                              >> 0x10U))) 
                                         & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__FA__carry_i) 
                                            << 7U))) 
                                     | ((0xffc0U & 
                                         (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__FA__addend_i) 
                                           << 6U) & 
                                          (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                           >> 0x10U))) 
                                        | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__FA__addend_i) 
                                             << 6U) 
                                            | (0xffc0U 
                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                  >> 0x10U))) 
                                           & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__FA__carry_i) 
                                              << 6U)))) 
                                    | (((0xffe0U & 
                                         (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__FA__addend_i) 
                                           << 5U) & 
                                          (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                           >> 0x10U))) 
                                        | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__FA__addend_i) 
                                             << 5U) 
                                            | (0xffe0U 
                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                  >> 0x10U))) 
                                           & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__FA__carry_i) 
                                              << 5U))) 
                                       | ((0xfff0U 
                                           & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__FA__addend_i) 
                                               << 4U) 
                                              & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                 >> 0x10U))) 
                                          | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__FA__addend_i) 
                                               << 4U) 
                                              | (0xfff0U 
                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                    >> 0x10U))) 
                                             & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__FA__carry_i) 
                                                << 4U))))) 
                                   | ((((0xfff8U & 
                                         (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__FA__addend_i) 
                                           << 3U) & 
                                          (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                           >> 0x10U))) 
                                        | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__FA__addend_i) 
                                             << 3U) 
                                            | (0xfff8U 
                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                  >> 0x10U))) 
                                           & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__FA__carry_i) 
                                              << 3U))) 
                                       | ((0xfffcU 
                                           & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__FA__addend_i) 
                                               << 2U) 
                                              & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                 >> 0x10U))) 
                                          | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__FA__addend_i) 
                                               << 2U) 
                                              | (0xfffcU 
                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                    >> 0x10U))) 
                                             & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__FA__carry_i) 
                                                << 2U)))) 
                                      | (((0xfffeU 
                                           & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__FA__addend_i) 
                                               << 1U) 
                                              & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                 >> 0x10U))) 
                                          | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__FA__addend_i) 
                                               << 1U) 
                                              | (0xfffeU 
                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                    >> 0x10U))) 
                                             & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__FA__carry_i) 
                                                << 1U))) 
                                         | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__FA__addend_i) 
                                             & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                >> 0x10U)) 
                                            | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__FA__addend_i) 
                                                | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                   >> 0x10U)) 
                                               & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__FA__carry_i)))))))))) 
            << 0x10U) | (QData)((IData)(((((((0xffff8000U 
                                              & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__FA__addend_i) 
                                                  << 0xfU) 
                                                 & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                             | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__FA__addend_i) 
                                                  << 0xfU) 
                                                 | (0xffff8000U 
                                                    & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__FA__carry_i) 
                                                   << 0xfU))) 
                                            | ((0xffffc000U 
                                                & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__FA__addend_i) 
                                                    << 0xeU) 
                                                   & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                               | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__FA__addend_i) 
                                                    << 0xeU) 
                                                   | (0xffffc000U 
                                                      & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                  & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__FA__carry_i) 
                                                     << 0xeU)))) 
                                           | (((0xffffe000U 
                                                & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__FA__addend_i) 
                                                    << 0xdU) 
                                                   & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                               | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__FA__addend_i) 
                                                    << 0xdU) 
                                                   | (0xffffe000U 
                                                      & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                  & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__FA__carry_i) 
                                                     << 0xdU))) 
                                              | ((0xfffff000U 
                                                  & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__FA__addend_i) 
                                                      << 0xcU) 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                 | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__FA__addend_i) 
                                                      << 0xcU) 
                                                     | (0xfffff000U 
                                                        & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                    & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__FA__carry_i) 
                                                       << 0xcU))))) 
                                          | ((((0xfffff800U 
                                                & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__FA__addend_i) 
                                                    << 0xbU) 
                                                   & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                               | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__FA__addend_i) 
                                                    << 0xbU) 
                                                   | (0xfffff800U 
                                                      & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                  & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__FA__carry_i) 
                                                     << 0xbU))) 
                                              | ((0xfffffc00U 
                                                  & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__FA__addend_i) 
                                                      << 0xaU) 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                 | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__FA__addend_i) 
                                                      << 0xaU) 
                                                     | (0xfffffc00U 
                                                        & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                    & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__FA__carry_i) 
                                                       << 0xaU)))) 
                                             | (((0xfffffe00U 
                                                  & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__FA__addend_i) 
                                                      << 9U) 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                 | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__FA__addend_i) 
                                                      << 9U) 
                                                     | (0xfffffe00U 
                                                        & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                    & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__FA__carry_i) 
                                                       << 9U))) 
                                                | ((0xffffff00U 
                                                    & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__FA__addend_i) 
                                                        << 8U) 
                                                       & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                   | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__FA__addend_i) 
                                                        << 8U) 
                                                       | (0xffffff00U 
                                                          & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                      & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__FA__carry_i) 
                                                         << 8U)))))) 
                                         | (((((0xffffff80U 
                                                & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__FA__addend_i) 
                                                    << 7U) 
                                                   & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                               | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__FA__addend_i) 
                                                    << 7U) 
                                                   | (0xffffff80U 
                                                      & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                  & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__FA__carry_i) 
                                                     << 7U))) 
                                              | ((0xffffffc0U 
                                                  & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__FA__addend_i) 
                                                      << 6U) 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                 | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__FA__addend_i) 
                                                      << 6U) 
                                                     | (0xffffffc0U 
                                                        & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                    & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__FA__carry_i) 
                                                       << 6U)))) 
                                             | (((0xffffffe0U 
                                                  & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__FA__addend_i) 
                                                      << 5U) 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                 | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__FA__addend_i) 
                                                      << 5U) 
                                                     | (0xffffffe0U 
                                                        & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                    & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__FA__carry_i) 
                                                       << 5U))) 
                                                | ((0xfffffff0U 
                                                    & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__FA__addend_i) 
                                                        << 4U) 
                                                       & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                   | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__FA__addend_i) 
                                                        << 4U) 
                                                       | (0xfffffff0U 
                                                          & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                      & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__FA__carry_i) 
                                                         << 4U))))) 
                                            | ((((0xfffffff8U 
                                                  & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__FA__addend_i) 
                                                      << 3U) 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                 | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__FA__addend_i) 
                                                      << 3U) 
                                                     | (0xfffffff8U 
                                                        & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                    & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__FA__carry_i) 
                                                       << 3U))) 
                                                | ((0xfffffffcU 
                                                    & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__FA__addend_i) 
                                                        << 2U) 
                                                       & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                   | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__FA__addend_i) 
                                                        << 2U) 
                                                       | (0xfffffffcU 
                                                          & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                      & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__FA__carry_i) 
                                                         << 2U)))) 
                                               | (((0xfffffffeU 
                                                    & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__FA__addend_i) 
                                                        << 1U) 
                                                       & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                   | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__FA__addend_i) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                      & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__FA__carry_i) 
                                                         << 1U))) 
                                                  | ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__FA__addend_i) 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]))))))));
    VL_ASSIGNSEL_WQ(155,48,(0xffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx), vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus, MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_hdea927a9__1);
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx 
        = ((IData)(0x30U) + vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx);
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h61a5ef5a__0 
        = (0x7ffffffU & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[2U] 
                          << 0x10U) | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                       >> 0x10U)));
    if (VL_LIKELY(((0x9aU >= (0xffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx))))) {
        VL_ASSIGNSEL_WI(155,27,(0xffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx), vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus, MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h61a5ef5a__0);
    }
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx 
        = ((IData)(0x1bU) + vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx);
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__0 
        = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Mv_halt;
    if (VL_LIKELY(((0x9aU >= (0xffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx))))) {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus[(7U 
                                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx 
                                                                  >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx))) 
                & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus[
                (7U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx 
                       >> 5U))]) | ((IData)(MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__0) 
                                    << (0x1fU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx)));
    }
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx);
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__1 
        = (1U & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                 >> 9U));
    if (VL_LIKELY(((0x9aU >= (0xffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx))))) {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus[(7U 
                                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx 
                                                                  >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx))) 
                & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus[
                (7U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx 
                       >> 5U))]) | ((IData)(MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__1) 
                                    << (0x1fU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx)));
    }
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx);
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__2 
        = (1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                     >> 9U)) & ((~ (((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32.Carry_o 
                                              >> 0x30U)) 
                                     | ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1.Carry_o 
                                                 >> 0x30U)) 
                                        | ((IData)(
                                                   (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0.Carry_o 
                                                    >> 0x30U)) 
                                           | ((IData)(
                                                      (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_2.Carry_o 
                                                       >> 0x30U)) 
                                              | ((IData)(
                                                         (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1.Carry_o 
                                                          >> 0x30U)) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0.Carry_o 
                                                             >> 0x30U)) 
                                                    | (IData)(
                                                              (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3.Carry_o 
                                                               >> 0x30U)))))))) 
                                    | (((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                                            >> 9U)) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                                   >> 0x30U))) 
                                       | (IData)(((
                                                   (~ 
                                                    ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                                                     >> 9U)) 
                                                   & (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                                      >> 0x30U)) 
                                                  & (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                                     >> 0x2fU)))))) 
                                ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellout__genblk1__BRA__47__KET____DOT__FA__carry_o))));
    if (VL_LIKELY(((0x9aU >= (0xffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx))))) {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus[(7U 
                                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx 
                                                                  >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx))) 
                & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus[
                (7U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx 
                       >> 5U))]) | ((IData)(MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__2) 
                                    << (0x1fU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx)));
    }
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx);
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__3 
        = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Sub_Sign;
    if (VL_LIKELY(((0x9aU >= (0xffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx))))) {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus[(7U 
                                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx 
                                                                  >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx))) 
                & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus[
                (7U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx 
                       >> 5U))]) | ((IData)(MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__3) 
                                    << (0x1fU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx)));
    }
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx);
    if ((0x200U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv))) {
        MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__4 
            = (1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1 
                     >> 0x1fU));
        MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h4990de99__0 
            = (0x3ffU & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Exp));
    } else {
        MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__4 
            = (1U & (IData)(vlSelfRef.__VdfgRegularize_h6171c202_5_0));
        MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h4990de99__0 
            = (0x3ffU & ((IData)(0x1bU) + (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Exp) 
                                            + (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__C_Exp)) 
                                           - (IData)(0x7fU))));
    }
    if (VL_LIKELY(((0x9aU >= (0xffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx))))) {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus[(7U 
                                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx 
                                                                  >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx))) 
                & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus[
                (7U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx 
                       >> 5U))]) | ((IData)(MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__4) 
                                    << (0x1fU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx)));
    }
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx);
    if (VL_LIKELY(((0x9aU >= (0xffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx))))) {
        VL_ASSIGNSEL_WI(155,10,(0xffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx), vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus, MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h4990de99__0);
    }
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx 
        = ((IData)(0xaU) + vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx);
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__5 
        = (1U & (~ ((((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Inf) 
                        | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__C_Inf)) 
                       | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Zero)) 
                      | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__C_Zero)) 
                     | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_NaN)) 
                    | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__C_NaN))));
    if (VL_LIKELY(((0x9aU >= (0xffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx))))) {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus[(7U 
                                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx 
                                                                  >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx))) 
                & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus[
                (7U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx 
                       >> 5U))]) | ((IData)(MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__5) 
                                    << (0x1fU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx)));
    }
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx);
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__6 
        = ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Sub_Sign)
            ? ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Mv_halt)
                ? (0U != (0xffffffU & ((IData)(1U) 
                                       + (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant))))
                : (0U != (0xffffffU & ((IData)(1U) 
                                       + (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0[0U])))))
            : ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Mv_halt)
                ? (0U != vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant)
                : (0U != (0xffffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0[0U]))));
    if (VL_LIKELY(((0x9aU >= (0xffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx))))) {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus[(7U 
                                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx 
                                                                  >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx))) 
                & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus[
                (7U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx 
                       >> 5U))]) | ((IData)(MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h51be683d__6) 
                                    << (0x1fU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx)));
    }
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx);
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h53bbf85e__0 
        = (((((IData)((0x7f800000U == (0x7fffffffU 
                                       & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1))) 
              << 8U) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Inf) 
                         << 7U) | ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__C_Inf) 
                                   << 6U))) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Zero) 
                                                << 5U) 
                                               | ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Zero) 
                                                  << 4U))) 
           | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__C_Zero) 
                << 3U) | ((IData)(((0x7f800000U == 
                                    (0x7f800000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1)) 
                                   & (0U != (0x7fffffU 
                                             & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1)))) 
                          << 2U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_NaN) 
                                      << 1U) | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__C_NaN))));
    if (VL_LIKELY(((0x9aU >= (0xffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx))))) {
        VL_ASSIGNSEL_WI(155,12,(0xffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx), vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus, MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h53bbf85e__0);
    }
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx 
        = ((IData)(0xcU) + vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx);
    MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h48e074ee__0 
        = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__rm_reg1;
    if (VL_LIKELY(((0x9aU >= (0xffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx))))) {
        VL_ASSIGNSEL_WI(155,3,(0xffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx), vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus, MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vlvbound_h48e074ee__0);
    }
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx 
        = ((IData)(3U) + vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx);
}
