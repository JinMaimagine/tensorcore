// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC32_top_tb.h for the primary calling header

#include "VMAC32_top_tb__pch.h"
#include "VMAC32_top_tb__Syms.h"
#include "VMAC32_top_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC32_top_tb___024root___dump_triggers__stl(VMAC32_top_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VMAC32_top_tb___024root___eval_triggers__stl(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___eval_triggers__stl\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMAC32_top_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VMAC32_top_tb___024root___stl_sequent__TOP__0(VMAC32_top_tb___024root* vlSelf);
VL_ATTR_COLD void VMAC32_top_tb___024root____Vm_traceActivitySetAll(VMAC32_top_tb___024root* vlSelf);
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

VL_ATTR_COLD void VMAC32_top_tb___024root___eval_stl(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___eval_stl\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VMAC32_top_tb___024root___stl_sequent__TOP__0(vlSelf);
        VMAC32_top_tb___024root____Vm_traceActivitySetAll(vlSelf);
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
}
