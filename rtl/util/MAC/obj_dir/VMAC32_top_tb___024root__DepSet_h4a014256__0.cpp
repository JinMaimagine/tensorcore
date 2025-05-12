// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC32_top_tb.h for the primary calling header

#include "VMAC32_top_tb__pch.h"
#include "VMAC32_top_tb__Syms.h"
#include "VMAC32_top_tb___024root.h"

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
    vlSelfRef.__VactTriggered.setBit(2U, (vlSelfRef.MAC32_top_tb__DOT__A_i 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__A_i__0));
    vlSelfRef.__VactTriggered.setBit(3U, (vlSelfRef.MAC32_top_tb__DOT__B_i 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__B_i__0));
    vlSelfRef.__VactTriggered.setBit(4U, (vlSelfRef.MAC32_top_tb__DOT__C_i 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__C_i__0));
    vlSelfRef.__VactTriggered.setBit(5U, ((IData)(vlSelfRef.MAC32_top_tb__DOT__NV_o) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__NV_o__0)));
    vlSelfRef.__VactTriggered.setBit(6U, ((IData)(vlSelfRef.MAC32_top_tb__DOT__NX_o) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__NX_o__0)));
    vlSelfRef.__VactTriggered.setBit(7U, ((IData)(vlSelfRef.MAC32_top_tb__DOT__OF_o) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__OF_o__0)));
    vlSelfRef.__VactTriggered.setBit(8U, ((IData)(vlSelfRef.MAC32_top_tb__DOT__UF_o) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__UF_o__0)));
    vlSelfRef.__VactTriggered.setBit(9U, ((IData)(vlSelfRef.MAC32_top_tb__DOT__clk) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(0xaU, ((IData)(vlSelfRef.MAC32_top_tb__DOT__rst_n) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(0xbU, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(0xcU, ((IData)(vlSelfRef.MAC32_top_tb__DOT__rst_n) 
                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__rst_n__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__clk__0 
        = vlSelfRef.MAC32_top_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__rst_n__0 
        = vlSelfRef.MAC32_top_tb__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__A_i__0 
        = vlSelfRef.MAC32_top_tb__DOT__A_i;
    vlSelfRef.__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__B_i__0 
        = vlSelfRef.MAC32_top_tb__DOT__B_i;
    vlSelfRef.__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__C_i__0 
        = vlSelfRef.MAC32_top_tb__DOT__C_i;
    vlSelfRef.__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__NV_o__0 
        = vlSelfRef.MAC32_top_tb__DOT__NV_o;
    vlSelfRef.__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__NX_o__0 
        = vlSelfRef.MAC32_top_tb__DOT__NX_o;
    vlSelfRef.__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__OF_o__0 
        = vlSelfRef.MAC32_top_tb__DOT__OF_o;
    vlSelfRef.__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__UF_o__0 
        = vlSelfRef.MAC32_top_tb__DOT__UF_o;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(2U, 1U);
        vlSelfRef.__VactTriggered.setBit(3U, 1U);
        vlSelfRef.__VactTriggered.setBit(4U, 1U);
        vlSelfRef.__VactTriggered.setBit(5U, 1U);
        vlSelfRef.__VactTriggered.setBit(6U, 1U);
        vlSelfRef.__VactTriggered.setBit(7U, 1U);
        vlSelfRef.__VactTriggered.setBit(8U, 1U);
        vlSelfRef.__VactTriggered.setBit(9U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xaU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMAC32_top_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VMAC32_top_tb___024root___nba_sequent__TOP__0(VMAC32_top_tb___024root* vlSelf);
void VMAC32_top_tb___024root___nba_sequent__TOP__1(VMAC32_top_tb___024root* vlSelf);
void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3__0(VMAC32_top_tb_Compressor32* vlSelf);
void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2__0(VMAC32_top_tb_Compressor32* vlSelf);
void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1__0(VMAC32_top_tb_Compressor32* vlSelf);
void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0__0(VMAC32_top_tb_Compressor32* vlSelf);
void VMAC32_top_tb___024root___nba_sequent__TOP__2(VMAC32_top_tb___024root* vlSelf);
void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_2__0(VMAC32_top_tb_Compressor32* vlSelf);
void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1__0(VMAC32_top_tb_Compressor32* vlSelf);
void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0__0(VMAC32_top_tb_Compressor32* vlSelf);
void VMAC32_top_tb___024root___nba_sequent__TOP__3(VMAC32_top_tb___024root* vlSelf);
void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1__0(VMAC32_top_tb_Compressor32* vlSelf);
void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0__0(VMAC32_top_tb_Compressor32* vlSelf);
void VMAC32_top_tb___024root___nba_sequent__TOP__4(VMAC32_top_tb___024root* vlSelf);
void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32__0(VMAC32_top_tb_Compressor32* vlSelf);
void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32__0(VMAC32_top_tb_Compressor32* vlSelf);
void VMAC32_top_tb___024root___nba_sequent__TOP__5(VMAC32_top_tb___024root* vlSelf);
void VMAC32_top_tb___024root___nba_comb__TOP__0(VMAC32_top_tb___024root* vlSelf);
void VMAC32_top_tb___024root___nba_comb__TOP__1(VMAC32_top_tb___024root* vlSelf);

void VMAC32_top_tb___024root___eval_nba(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___eval_nba\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x7fcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VMAC32_top_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VMAC32_top_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3__0((&vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3));
        VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2__0((&vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2));
        VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1__0((&vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1));
        VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0__0((&vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0));
        VMAC32_top_tb___024root___nba_sequent__TOP__2(vlSelf);
        VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_2__0((&vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_2));
        VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1__0((&vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1));
        VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0__0((&vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0));
        VMAC32_top_tb___024root___nba_sequent__TOP__3(vlSelf);
        VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1__0((&vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1));
        VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0__0((&vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0));
        VMAC32_top_tb___024root___nba_sequent__TOP__4(vlSelf);
        VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32__0((&vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32));
        VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32__0((&vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32));
        VMAC32_top_tb___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x1001ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VMAC32_top_tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0x1003ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VMAC32_top_tb___024root___nba_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void VMAC32_top_tb___024root___nba_sequent__TOP__0(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___nba_sequent__TOP__0\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("[%0t] clk=%b rst_n=%b A=%x B=%x C=%x OF=%b UF=%b NX=%b NV=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.MAC32_top_tb__DOT__clk),
                     1,vlSelfRef.MAC32_top_tb__DOT__rst_n,
                     32,vlSelfRef.MAC32_top_tb__DOT__A_i,
                     32,vlSelfRef.MAC32_top_tb__DOT__B_i,
                     32,vlSelfRef.MAC32_top_tb__DOT__C_i,
                     1,(IData)(vlSelfRef.MAC32_top_tb__DOT__OF_o),
                     1,vlSelfRef.MAC32_top_tb__DOT__UF_o,
                     1,(IData)(vlSelfRef.MAC32_top_tb__DOT__NX_o),
                     1,vlSelfRef.MAC32_top_tb__DOT__NV_o);
    }
}

VL_INLINE_OPT void VMAC32_top_tb___024root___nba_sequent__TOP__2(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___nba_sequent__TOP__2\n"); );
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

VL_INLINE_OPT void VMAC32_top_tb___024root___nba_sequent__TOP__3(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___nba_sequent__TOP__3\n"); );
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

VL_INLINE_OPT void VMAC32_top_tb___024root___nba_sequent__TOP__4(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___nba_sequent__TOP__4\n"); );
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

VL_INLINE_OPT void VMAC32_top_tb___024root___nba_sequent__TOP__5(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___nba_sequent__TOP__5\n"); );
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
