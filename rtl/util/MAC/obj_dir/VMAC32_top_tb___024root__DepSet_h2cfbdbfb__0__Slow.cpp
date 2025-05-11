// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC32_top_tb.h for the primary calling header

#include "VMAC32_top_tb__pch.h"
#include "VMAC32_top_tb___024root.h"

VL_ATTR_COLD void VMAC32_top_tb___024root___eval_static__TOP(VMAC32_top_tb___024root* vlSelf);
VL_ATTR_COLD void VMAC32_top_tb___024root____Vm_traceActivitySetAll(VMAC32_top_tb___024root* vlSelf);

VL_ATTR_COLD void VMAC32_top_tb___024root___eval_static(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___eval_static\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VMAC32_top_tb___024root___eval_static__TOP(vlSelf);
    VMAC32_top_tb___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__clk__0 
        = vlSelfRef.MAC32_top_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__rst_n__0 
        = vlSelfRef.MAC32_top_tb__DOT__rst_n;
}

VL_ATTR_COLD void VMAC32_top_tb___024root___eval_static__TOP(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___eval_static__TOP\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Adder_sign 
        = (1U & ((0x10000000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U])
                  ? (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                     >> 0x1fU) : ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__msb_inc__DOT____VdfgRegularize_hb50ef5f9_0_2 
                                   >> 0x1aU) ^ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                                                >> 0x1fU))));
}

VL_ATTR_COLD void VMAC32_top_tb___024root___eval_final(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___eval_final\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC32_top_tb___024root___dump_triggers__stl(VMAC32_top_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VMAC32_top_tb___024root___eval_phase__stl(VMAC32_top_tb___024root* vlSelf);

VL_ATTR_COLD void VMAC32_top_tb___024root___eval_settle(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___eval_settle\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VMAC32_top_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("testbench_MAC32/MAC32_top_tb.sv", 40, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VMAC32_top_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC32_top_tb___024root___dump_triggers__stl(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___dump_triggers__stl\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMAC32_top_tb___024root___stl_sequent__TOP__0(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___stl_sequent__TOP__0\n"); );
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
    CData/*3:0*/ __Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc10__15__Vfuncout;
    __Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc10__15__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc10__15__x;
    __Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc10__15__x = 0;
    CData/*3:0*/ __Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc10__16__Vfuncout;
    __Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc10__16__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc10__16__x;
    __Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc10__16__x = 0;
    CData/*3:0*/ __Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc10__17__Vfuncout;
    __Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc10__17__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc10__17__x;
    __Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc10__17__x = 0;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_19;
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_38;
    // Body
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
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Inf 
        = (IData)((0x7f800000U == (0x7fffffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__C_Inf 
        = (IData)((0x7f800000U == (0x7fffffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Zero 
        = ((~ (IData)((0U != (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1 
                                       >> 0x17U))))) 
           & (0U == (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__C_Zero 
        = ((~ (IData)((0U != (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                       >> 0x17U))))) 
           & (0U == (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_NaN 
        = (IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1)) 
                   & (0U != (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__C_NaN 
        = (IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)) 
                   & (0U != (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1))));
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
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__incr 
        = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
            >> 0xcU) & (0U != (0x2fffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2)));
    vlSelfRef.__VdfgRegularize_h6171c202_5_0 = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1 
                                                 ^ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1) 
                                                >> 0x1fU);
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Zero 
        = ((~ (IData)((0U != (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1 
                                       >> 0x17U))))) 
           & (0U == (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant 
        = (((IData)((0U != (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1 
                                     >> 0x17U)))) << 0x17U) 
           | (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1));
    __Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc10__15__x 
        = (0x3ffU & vlSelfRef.MAC32_top_tb__DOT__A_i);
    __Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc10__15__Vfuncout 
        = (((((((((0x200U == (0x200U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc10__15__x))) 
                  | (0x100U == (0x300U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc10__15__x)))) 
                 | (0x80U == (0x380U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc10__15__x)))) 
                | (0x40U == (0x3c0U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc10__15__x)))) 
               | (0x20U == (0x3e0U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc10__15__x)))) 
              | (0x10U == (0x3f0U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc10__15__x)))) 
             | (8U == (0x3f8U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc10__15__x)))) 
            | (4U == (0x3fcU & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc10__15__x))))
            ? ((0x200U == (0x200U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc10__15__x)))
                ? 0U : ((0x100U == (0x300U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc10__15__x)))
                         ? 1U : ((0x80U == (0x380U 
                                            & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc10__15__x)))
                                  ? 2U : ((0x40U == 
                                           (0x3c0U 
                                            & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc10__15__x)))
                                           ? 3U : (
                                                   (0x20U 
                                                    == 
                                                    (0x3e0U 
                                                     & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc10__15__x)))
                                                    ? 4U
                                                    : 
                                                   ((0x10U 
                                                     == 
                                                     (0x3f0U 
                                                      & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc10__15__x)))
                                                     ? 5U
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0x3f8U 
                                                       & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc10__15__x)))
                                                      ? 6U
                                                      : 7U)))))))
            : ((2U == (0x3feU & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc10__15__x)))
                ? 8U : 9U));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc 
        = __Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc10__15__Vfuncout;
    __Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc10__16__x 
        = (0x3ffU & vlSelfRef.MAC32_top_tb__DOT__B_i);
    __Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc10__16__Vfuncout 
        = (((((((((0x200U == (0x200U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc10__16__x))) 
                  | (0x100U == (0x300U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc10__16__x)))) 
                 | (0x80U == (0x380U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc10__16__x)))) 
                | (0x40U == (0x3c0U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc10__16__x)))) 
               | (0x20U == (0x3e0U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc10__16__x)))) 
              | (0x10U == (0x3f0U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc10__16__x)))) 
             | (8U == (0x3f8U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc10__16__x)))) 
            | (4U == (0x3fcU & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc10__16__x))))
            ? ((0x200U == (0x200U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc10__16__x)))
                ? 0U : ((0x100U == (0x300U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc10__16__x)))
                         ? 1U : ((0x80U == (0x380U 
                                            & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc10__16__x)))
                                  ? 2U : ((0x40U == 
                                           (0x3c0U 
                                            & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc10__16__x)))
                                           ? 3U : (
                                                   (0x20U 
                                                    == 
                                                    (0x3e0U 
                                                     & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc10__16__x)))
                                                    ? 4U
                                                    : 
                                                   ((0x10U 
                                                     == 
                                                     (0x3f0U 
                                                      & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc10__16__x)))
                                                     ? 5U
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0x3f8U 
                                                       & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc10__16__x)))
                                                      ? 6U
                                                      : 7U)))))))
            : ((2U == (0x3feU & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc10__16__x)))
                ? 8U : 9U));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc 
        = __Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc10__16__Vfuncout;
    __Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc10__17__x 
        = (0x3ffU & vlSelfRef.MAC32_top_tb__DOT__C_i);
    __Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc10__17__Vfuncout 
        = (((((((((0x200U == (0x200U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc10__17__x))) 
                  | (0x100U == (0x300U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc10__17__x)))) 
                 | (0x80U == (0x380U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc10__17__x)))) 
                | (0x40U == (0x3c0U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc10__17__x)))) 
               | (0x20U == (0x3e0U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc10__17__x)))) 
              | (0x10U == (0x3f0U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc10__17__x)))) 
             | (8U == (0x3f8U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc10__17__x)))) 
            | (4U == (0x3fcU & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc10__17__x))))
            ? ((0x200U == (0x200U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc10__17__x)))
                ? 0U : ((0x100U == (0x300U & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc10__17__x)))
                         ? 1U : ((0x80U == (0x380U 
                                            & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc10__17__x)))
                                  ? 2U : ((0x40U == 
                                           (0x3c0U 
                                            & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc10__17__x)))
                                           ? 3U : (
                                                   (0x20U 
                                                    == 
                                                    (0x3e0U 
                                                     & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc10__17__x)))
                                                    ? 4U
                                                    : 
                                                   ((0x10U 
                                                     == 
                                                     (0x3f0U 
                                                      & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc10__17__x)))
                                                     ? 5U
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0x3f8U 
                                                       & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc10__17__x)))
                                                      ? 6U
                                                      : 7U)))))))
            : ((2U == (0x3feU & (IData)(__Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc10__17__x)))
                ? 8U : 9U));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc 
        = __Vfunc_MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc10__17__Vfuncout;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Exp 
        = (((~ (IData)((0U != (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1 
                                        >> 0x17U))))) 
            & (0U != (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1)))
            ? 1U : (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1 
                             >> 0x17U)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Exp 
        = (((~ (IData)((0U != (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1 
                                        >> 0x17U))))) 
            & (0U != (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1)))
            ? 1U : (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1 
                             >> 0x17U)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__C_Exp 
        = (((~ (IData)((0U != (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                        >> 0x17U))))) 
            & (0U != (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)))
            ? 1U : (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                             >> 0x17U)));
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
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant 
        = (((IData)((0U != (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1 
                                     >> 0x17U)))) << 0x17U) 
           | (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1));
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
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__1__KET__ 
        = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
            >> 0xdU) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__incr));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Sub_Sign 
        = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1 
            >> 0x1fU) ^ (IData)(vlSelfRef.__VdfgRegularize_h6171c202_5_0));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_add1__DOT__C__BRA__2__KET__ 
        = (IData)((3U == (3U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_add1__DOT__C__BRA__2__KET__ 
        = (IData)((3U == (3U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_add1__DOT__C__BRA__2__KET__ 
        = (IData)((3U == (3U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv 
        = (0x3ffU & ((((IData)(0x1bU) - VL_EXTENDS_II(10,9, (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Exp))) 
                      + (VL_EXTENDS_II(10,9, (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Exp)) 
                         + VL_EXTENDS_II(10,9, (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__C_Exp)))) 
                     - (IData)(0x7fU)));
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
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_add1__DOT__C__BRA__3__KET__ 
        = (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc) 
            >> 2U) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_add1__DOT__C__BRA__2__KET__));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_add1__DOT__C__BRA__3__KET__ 
        = (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc) 
            >> 2U) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_add1__DOT__C__BRA__2__KET__));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_add1__DOT__C__BRA__3__KET__ 
        = (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc) 
            >> 2U) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_add1__DOT__C__BRA__2__KET__));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Mv_halt 
        = (((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                >> 9U)) & (0x49U < (0x1ffU & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv)))) 
           | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Zero));
    __Vtemp_3[0U] = (0x7fffffeU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                                   << 1U));
    __Vtemp_3[1U] = 0U;
    __Vtemp_3[2U] = 0U;
    __Vtemp_4[0U] = (1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                           >> 0xaU));
    __Vtemp_4[1U] = 0U;
    __Vtemp_4[2U] = 0U;
    VL_SUB_W(3, __Vtemp_5, __Vtemp_3, __Vtemp_4);
    __Vtemp_9[1U] = ((((1U & (IData)((1ULL & ((2ULL 
                                               + ((0x1000000000000ULL 
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
    __Vtemp_12[2U] = ((0x4000000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__msb_inc__DOT____VdfgRegularize_hb50ef5f9_0_2)
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
                = __Vtemp_5[0U];
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                = __Vtemp_5[1U];
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[2U] 
                = (0x3ffU & __Vtemp_5[2U]);
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
                = __Vtemp_9[1U];
        } else {
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U] 
                = (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__low_sum);
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__msb_inc__DOT____VdfgRegularize_hb50ef5f9_0_2 
                    << 0x10U) | (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__low_sum 
                                         >> 0x20U)));
        }
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[2U] 
            = (0x3ffU & __Vtemp_12[2U]);
    }
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
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__shift 
        = ((((IData)((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc) 
                       >> 3U) ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_add1__DOT__C__BRA__3__KET__))) 
             << 3U) | (4U & ((0xfffffffcU & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc)) 
                             ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_add1__DOT__C__BRA__2__KET__) 
                                << 2U)))) | ((2U & 
                                              ((0xfffffffeU 
                                                & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc)) 
                                               ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc) 
                                                  << 1U))) 
                                             | (1U 
                                                & (~ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc)))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__shift 
        = ((((IData)((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc) 
                       >> 3U) ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_add1__DOT__C__BRA__3__KET__))) 
             << 3U) | (4U & ((0xfffffffcU & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc)) 
                             ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_add1__DOT__C__BRA__2__KET__) 
                                << 2U)))) | ((2U & 
                                              ((0xfffffffeU 
                                                & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc)) 
                                               ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc) 
                                                  << 1U))) 
                                             | (1U 
                                                & (~ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc)))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__shift 
        = ((((IData)((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc) 
                       >> 3U) ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_add1__DOT__C__BRA__3__KET__))) 
             << 3U) | (4U & ((0xfffffffcU & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc)) 
                             ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_add1__DOT__C__BRA__2__KET__) 
                                << 2U)))) | ((2U & 
                                              ((0xfffffffeU 
                                                & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc)) 
                                               ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc) 
                                                  << 1U))) 
                                             | (1U 
                                                & (~ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc)))));
    __Vtemp_19[0U] = 0U;
    __Vtemp_19[1U] = 0U;
    __Vtemp_19[2U] = (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant 
                      << 0xaU);
    __Vtemp_19[3U] = (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant 
                      >> 0x16U);
    VL_SHIFTR_WWI(98,98,32, __Vtemp_20, __Vtemp_19, 
                  ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Mv_halt)
                    ? 0U : (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0[0U] 
        = __Vtemp_20[0U];
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0[1U] 
        = __Vtemp_20[1U];
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0[2U] 
        = __Vtemp_20[2U];
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0[3U] 
        = (3U & __Vtemp_20[3U]);
    __Vtemp_22[0U] = (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U] 
                      << 2U);
    __Vtemp_22[1U] = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U] 
                       >> 0x1eU) | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                                    << 2U));
    __Vtemp_22[2U] = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                       >> 0x1eU) | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[2U] 
                                    << 2U));
    VL_SHIFTR_WWI(76,76,10, __Vtemp_23, __Vtemp_22, 
                  (0x3ffU & ((IData)(2U) + (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U]))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Rs_Mant[0U] 
        = __Vtemp_23[0U];
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Rs_Mant[1U] 
        = __Vtemp_23[1U];
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Rs_Mant[2U] 
        = (0xfffU & __Vtemp_23[2U]);
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
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__ 
        = (IData)((0U == (6U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__shift))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__ 
        = (IData)((0U == (6U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__shift))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__ 
        = (IData)((0U == (6U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__shift))));
    __Vtemp_25[0U] = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant;
    __Vtemp_25[1U] = 0U;
    __Vtemp_25[2U] = 0U;
    VL_SHIFTL_WWI(75,75,32, __Vtemp_26, __Vtemp_25, 0x32U);
    if ((0x200U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv))) {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
            = __Vtemp_26[0U];
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
            = __Vtemp_26[1U];
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[2U] 
            = (0x7ffU & __Vtemp_26[2U]);
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
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__4__KET__ 
        = ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__shift) 
               >> 3U)) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__4__KET__ 
        = ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__shift) 
               >> 3U)) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__4__KET__ 
        = ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__shift) 
               >> 3U)) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__));
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
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__5__KET__ = 1U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__5__KET__ = 1U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__5__KET__ = 1U;
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
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__6__KET__ = 1U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__6__KET__ = 1U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__6__KET__ = 1U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT__Shift_num 
        = ((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                   >> 0x1cU) | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[2U] 
                                >> 9U))) ? 0U : (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__shift_num));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__8__KET__ 
        = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
            >> 0x14U) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__7__KET__));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__ = 1U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__ = 1U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__ = 1U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT____VdfgRegularize_hc99b95d1_0_3 
        = (0x3ffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                     - (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT__Shift_num)));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT____VdfgRegularize_hc99b95d1_0_1 
        = ((0x3ffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U]) 
           > (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT__Shift_num));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__9__KET__ 
        = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
            >> 0x15U) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__8__KET__));
    if ((0x1fU == (0x1fU & (vlSelfRef.MAC32_top_tb__DOT__A_i 
                            >> 0xaU)))) {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_i_fp32 
            = (0x7f800000U | (0x80000000U & (vlSelfRef.MAC32_top_tb__DOT__A_i 
                                             << 0x10U)));
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_i_fp32 
            = ((0xff800000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_i_fp32) 
               | (((IData)((0U != (0x3ffU & vlSelfRef.MAC32_top_tb__DOT__A_i))) 
                   << 0x16U) | (0x3ff000U & (vlSelfRef.MAC32_top_tb__DOT__A_i 
                                             << 0xcU))));
    } else if ((0U == (0x1fU & (vlSelfRef.MAC32_top_tb__DOT__A_i 
                                >> 0xaU)))) {
        if ((0U == (0x3ffU & vlSelfRef.MAC32_top_tb__DOT__A_i))) {
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_i_fp32 
                = (0x80000000U & (vlSelfRef.MAC32_top_tb__DOT__A_i 
                                  << 0x10U));
        } else {
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__unnamedblk1__DOT__sig24 
                = (0xffffffU & ((0x7fe000U & (vlSelfRef.MAC32_top_tb__DOT__A_i 
                                              << 0xdU)) 
                                << (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__shift)));
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_i_fp32 
                = ((((0x80000000U & (vlSelfRef.MAC32_top_tb__DOT__A_i 
                                     << 0x10U)) | (
                                                   (0x40000000U 
                                                    & (0x40000000U 
                                                       ^ 
                                                       ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__) 
                                                        << 0x1eU))) 
                                                   | (0x20000000U 
                                                      & ((~ 
                                                          (1U 
                                                           ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__6__KET__))) 
                                                         << 0x1dU)))) 
                    | ((0x10000000U & ((~ (1U ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__5__KET__))) 
                                       << 0x1cU)) | 
                       (0x8000000U & ((~ (1U ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__4__KET__))) 
                                      << 0x1bU)))) 
                   | ((((1U ^ (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__shift) 
                                >> 3U) ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__))) 
                        << 0x1aU) | (0x2000000U & (
                                                   VL_REDXOR_4(
                                                               (6U 
                                                                & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__shift))) 
                                                   << 0x19U))) 
                      | ((0x1000000U & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__shift) 
                                        << 0x17U)) 
                         | ((0x800000U & ((~ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__shift)) 
                                          << 0x17U)) 
                            | (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__unnamedblk1__DOT__sig24)))));
        }
    } else {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_i_fp32 
            = ((((0xc0000000U & (vlSelfRef.MAC32_top_tb__DOT__A_i 
                                 << 0x10U)) | (0x20000000U 
                                               & ((~ 
                                                   (vlSelfRef.MAC32_top_tb__DOT__A_i 
                                                    >> 0xeU)) 
                                                  << 0x1dU))) 
                | ((0x10000000U & ((~ (vlSelfRef.MAC32_top_tb__DOT__A_i 
                                       >> 0xeU)) << 0x1cU)) 
                   | ((0x8000000U & ((~ (vlSelfRef.MAC32_top_tb__DOT__A_i 
                                         >> 0xeU)) 
                                     << 0x1bU)) | (0x7800000U 
                                                   & (vlSelfRef.MAC32_top_tb__DOT__A_i 
                                                      << 0xdU))))) 
               | (0x7fe000U & (vlSelfRef.MAC32_top_tb__DOT__A_i 
                               << 0xdU)));
    }
    if ((0x1fU == (0x1fU & (vlSelfRef.MAC32_top_tb__DOT__B_i 
                            >> 0xaU)))) {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_i_fp32 
            = (0x7f800000U | (0x80000000U & (vlSelfRef.MAC32_top_tb__DOT__B_i 
                                             << 0x10U)));
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_i_fp32 
            = ((0xff800000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_i_fp32) 
               | (((IData)((0U != (0x3ffU & vlSelfRef.MAC32_top_tb__DOT__B_i))) 
                   << 0x16U) | (0x3ff000U & (vlSelfRef.MAC32_top_tb__DOT__B_i 
                                             << 0xcU))));
    } else if ((0U == (0x1fU & (vlSelfRef.MAC32_top_tb__DOT__B_i 
                                >> 0xaU)))) {
        if ((0U == (0x3ffU & vlSelfRef.MAC32_top_tb__DOT__B_i))) {
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_i_fp32 
                = (0x80000000U & (vlSelfRef.MAC32_top_tb__DOT__B_i 
                                  << 0x10U));
        } else {
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__unnamedblk1__DOT__sig24 
                = (0xffffffU & ((0x7fe000U & (vlSelfRef.MAC32_top_tb__DOT__B_i 
                                              << 0xdU)) 
                                << (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__shift)));
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_i_fp32 
                = ((((0x80000000U & (vlSelfRef.MAC32_top_tb__DOT__B_i 
                                     << 0x10U)) | (
                                                   (0x40000000U 
                                                    & (0x40000000U 
                                                       ^ 
                                                       ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__) 
                                                        << 0x1eU))) 
                                                   | (0x20000000U 
                                                      & ((~ 
                                                          (1U 
                                                           ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__6__KET__))) 
                                                         << 0x1dU)))) 
                    | ((0x10000000U & ((~ (1U ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__5__KET__))) 
                                       << 0x1cU)) | 
                       (0x8000000U & ((~ (1U ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__4__KET__))) 
                                      << 0x1bU)))) 
                   | ((((1U ^ (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__shift) 
                                >> 3U) ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__))) 
                        << 0x1aU) | (0x2000000U & (
                                                   VL_REDXOR_4(
                                                               (6U 
                                                                & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__shift))) 
                                                   << 0x19U))) 
                      | ((0x1000000U & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__shift) 
                                        << 0x17U)) 
                         | ((0x800000U & ((~ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__shift)) 
                                          << 0x17U)) 
                            | (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__unnamedblk1__DOT__sig24)))));
        }
    } else {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_i_fp32 
            = ((((0xc0000000U & (vlSelfRef.MAC32_top_tb__DOT__B_i 
                                 << 0x10U)) | (0x20000000U 
                                               & ((~ 
                                                   (vlSelfRef.MAC32_top_tb__DOT__B_i 
                                                    >> 0xeU)) 
                                                  << 0x1dU))) 
                | ((0x10000000U & ((~ (vlSelfRef.MAC32_top_tb__DOT__B_i 
                                       >> 0xeU)) << 0x1cU)) 
                   | ((0x8000000U & ((~ (vlSelfRef.MAC32_top_tb__DOT__B_i 
                                         >> 0xeU)) 
                                     << 0x1bU)) | (0x7800000U 
                                                   & (vlSelfRef.MAC32_top_tb__DOT__B_i 
                                                      << 0xdU))))) 
               | (0x7fe000U & (vlSelfRef.MAC32_top_tb__DOT__B_i 
                               << 0xdU)));
    }
    if ((0x1fU == (0x1fU & (vlSelfRef.MAC32_top_tb__DOT__C_i 
                            >> 0xaU)))) {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_i_fp32 
            = (0x7f800000U | (0x80000000U & (vlSelfRef.MAC32_top_tb__DOT__C_i 
                                             << 0x10U)));
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_i_fp32 
            = ((0xff800000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_i_fp32) 
               | (((IData)((0U != (0x3ffU & vlSelfRef.MAC32_top_tb__DOT__C_i))) 
                   << 0x16U) | (0x3ff000U & (vlSelfRef.MAC32_top_tb__DOT__C_i 
                                             << 0xcU))));
    } else if ((0U == (0x1fU & (vlSelfRef.MAC32_top_tb__DOT__C_i 
                                >> 0xaU)))) {
        if ((0U == (0x3ffU & vlSelfRef.MAC32_top_tb__DOT__C_i))) {
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_i_fp32 
                = (0x80000000U & (vlSelfRef.MAC32_top_tb__DOT__C_i 
                                  << 0x10U));
        } else {
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__unnamedblk1__DOT__sig24 
                = (0xffffffU & ((0x7fe000U & (vlSelfRef.MAC32_top_tb__DOT__C_i 
                                              << 0xdU)) 
                                << (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__shift)));
            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_i_fp32 
                = ((((0x80000000U & (vlSelfRef.MAC32_top_tb__DOT__C_i 
                                     << 0x10U)) | (
                                                   (0x40000000U 
                                                    & (0x40000000U 
                                                       ^ 
                                                       ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__) 
                                                        << 0x1eU))) 
                                                   | (0x20000000U 
                                                      & ((~ 
                                                          (1U 
                                                           ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__6__KET__))) 
                                                         << 0x1dU)))) 
                    | ((0x10000000U & ((~ (1U ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__5__KET__))) 
                                       << 0x1cU)) | 
                       (0x8000000U & ((~ (1U ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__4__KET__))) 
                                      << 0x1bU)))) 
                   | ((((1U ^ (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__shift) 
                                >> 3U) ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__))) 
                        << 0x1aU) | (0x2000000U & (
                                                   VL_REDXOR_4(
                                                               (6U 
                                                                & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__shift))) 
                                                   << 0x19U))) 
                      | ((0x1000000U & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__shift) 
                                        << 0x17U)) 
                         | ((0x800000U & ((~ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__shift)) 
                                          << 0x17U)) 
                            | (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__unnamedblk1__DOT__sig24)))));
        }
    } else {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_i_fp32 
            = ((((0xc0000000U & (vlSelfRef.MAC32_top_tb__DOT__C_i 
                                 << 0x10U)) | (0x20000000U 
                                               & ((~ 
                                                   (vlSelfRef.MAC32_top_tb__DOT__C_i 
                                                    >> 0xeU)) 
                                                  << 0x1dU))) 
                | ((0x10000000U & ((~ (vlSelfRef.MAC32_top_tb__DOT__C_i 
                                       >> 0xeU)) << 0x1cU)) 
                   | ((0x8000000U & ((~ (vlSelfRef.MAC32_top_tb__DOT__C_i 
                                         >> 0xeU)) 
                                     << 0x1bU)) | (0x7800000U 
                                                   & (vlSelfRef.MAC32_top_tb__DOT__C_i 
                                                      << 0xdU))))) 
               | (0x7fe000U & (vlSelfRef.MAC32_top_tb__DOT__C_i 
                               << 0xdU)));
    }
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
    if ((0U == (IData)(vlSelfRef.MAC32_top_tb__DOT__fp_mode))) {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_true_input 
            = vlSelfRef.MAC32_top_tb__DOT__A_i;
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_true_input 
            = vlSelfRef.MAC32_top_tb__DOT__B_i;
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_true_input 
            = vlSelfRef.MAC32_top_tb__DOT__C_i;
    } else {
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_true_input 
            = ((1U == (IData)(vlSelfRef.MAC32_top_tb__DOT__fp_mode))
                ? vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_i_fp32
                : vlSelfRef.MAC32_top_tb__DOT__A_i);
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_true_input 
            = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_i_fp32;
        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_true_input 
            = vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_i_fp32;
    }
    VL_SHIFTL_WWI(74,74,9, __Vtemp_38, vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum, (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT__norm_amt));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[0U] 
        = __Vtemp_38[0U];
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[1U] 
        = __Vtemp_38[1U];
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[2U] 
        = (0x3ffU & __Vtemp_38[2U]);
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
    vlSelfRef.MAC32_top_tb__DOT__Result_o = ((1U == (IData)(vlSelfRef.MAC32_top_tb__DOT__fp_mode))
                                              ? (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__fp32_to_fp16_conv_result)
                                              : vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2);
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

VL_ATTR_COLD void VMAC32_top_tb___024root___eval_triggers__stl(VMAC32_top_tb___024root* vlSelf);
VL_ATTR_COLD void VMAC32_top_tb___024root___eval_stl(VMAC32_top_tb___024root* vlSelf);

VL_ATTR_COLD bool VMAC32_top_tb___024root___eval_phase__stl(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___eval_phase__stl\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VMAC32_top_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VMAC32_top_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC32_top_tb___024root___dump_triggers__act(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___dump_triggers__act\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge MAC32_top_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge MAC32_top_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge MAC32_top_tb.rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC32_top_tb___024root___dump_triggers__nba(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___dump_triggers__nba\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge MAC32_top_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge MAC32_top_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge MAC32_top_tb.rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMAC32_top_tb___024root____Vm_traceActivitySetAll(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root____Vm_traceActivitySetAll\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void VMAC32_top_tb___024root___ctor_var_reset(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___ctor_var_reset\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->MAC32_top_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__fp_mode = VL_RAND_RESET_I(2);
    vlSelf->MAC32_top_tb__DOT__Rounding_mode_i = VL_RAND_RESET_I(3);
    vlSelf->MAC32_top_tb__DOT__A_i = VL_RAND_RESET_I(32);
    vlSelf->MAC32_top_tb__DOT__B_i = VL_RAND_RESET_I(32);
    vlSelf->MAC32_top_tb__DOT__C_i = VL_RAND_RESET_I(32);
    vlSelf->MAC32_top_tb__DOT__Result_o = VL_RAND_RESET_I(32);
    vlSelf->MAC32_top_tb__DOT__exp_q.atDefault() = VL_RAND_RESET_Q(36);
    vlSelf->MAC32_top_tb__DOT__err_cnt = 0;
    vlSelf->MAC32_top_tb__DOT__vec_cnt = 0;
    vlSelf->MAC32_top_tb__DOT__cycle = 0;
    vlSelf->MAC32_top_tb__DOT__unnamedblk1__DOT__exp = VL_RAND_RESET_Q(36);
    vlSelf->MAC32_top_tb__DOT__unnamedblk1_2__DOT__unnamedblk2__DOT__a = 0;
    vlSelf->MAC32_top_tb__DOT__unnamedblk1_2__DOT__unnamedblk2__DOT__b = 0;
    vlSelf->MAC32_top_tb__DOT__unnamedblk1_2__DOT__unnamedblk2__DOT__c = 0;
    vlSelf->MAC32_top_tb__DOT__unnamedblk1_3__DOT__unnamedblk3__DOT__a = 0;
    vlSelf->MAC32_top_tb__DOT__unnamedblk1_3__DOT__unnamedblk3__DOT__b = 0;
    vlSelf->MAC32_top_tb__DOT__unnamedblk1_3__DOT__unnamedblk3__DOT__c = 0;
    vlSelf->MAC32_top_tb__DOT__unnamedblk1_4__DOT__unnamedblk4__DOT__aP = 0;
    vlSelf->MAC32_top_tb__DOT__unnamedblk1_4__DOT__unnamedblk4__DOT__b = 0;
    vlSelf->MAC32_top_tb__DOT__unnamedblk1_4__DOT__unnamedblk4__DOT__c = 0;
    vlSelf->MAC32_top_tb__DOT__dut__DOT__A_reg1 = VL_RAND_RESET_I(32);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__B_reg1 = VL_RAND_RESET_I(32);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__C_reg1 = VL_RAND_RESET_I(32);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__rm_reg1 = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(155, vlSelf->MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__A_i_fp32 = VL_RAND_RESET_I(32);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__B_i_fp32 = VL_RAND_RESET_I(32);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__C_i_fp32 = VL_RAND_RESET_I(32);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__A_true_input = VL_RAND_RESET_I(32);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__B_true_input = VL_RAND_RESET_I(32);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__C_true_input = VL_RAND_RESET_I(32);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__result32_reg2 = VL_RAND_RESET_I(32);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__flags_reg2 = VL_RAND_RESET_I(5);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__ffs = VL_RAND_RESET_I(5);
    vlSelf->MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__UF_o = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__OF_o = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__NV_o = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__fp32_to_fp16_conv_underflow = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__fp32_to_fp16_conv_overflow = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__fp32_to_fp16_conv_result = VL_RAND_RESET_I(16);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Inf = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__C_Inf = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Zero = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Zero = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__C_Zero = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_NaN = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__C_NaN = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Sub_Sign = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Exp = VL_RAND_RESET_I(8);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Exp = VL_RAND_RESET_I(8);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__C_Exp = VL_RAND_RESET_I(8);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant = VL_RAND_RESET_I(24);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant = VL_RAND_RESET_I(24);
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP[__Vi0] = VL_RAND_RESET_Q(49);
    }
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP_13 = VL_RAND_RESET_Q(48);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o = VL_RAND_RESET_Q(49);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o = VL_RAND_RESET_Q(49);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o = VL_RAND_RESET_Q(49);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o = VL_RAND_RESET_Q(49);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o = VL_RAND_RESET_Q(49);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o = VL_RAND_RESET_Q(49);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o = VL_RAND_RESET_Q(49);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o = VL_RAND_RESET_Q(49);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o = VL_RAND_RESET_Q(49);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o = VL_RAND_RESET_Q(49);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o = VL_RAND_RESET_Q(49);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o = VL_RAND_RESET_Q(49);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv = VL_RAND_RESET_I(10);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Mv_halt = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(75, vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned);
    VL_RAND_RESET_W(155, vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx = 0;
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul1x = VL_RAND_RESET_I(13);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul2x = VL_RAND_RESET_I(13);
    for (int __Vi0 = 0; __Vi0 < 13; ++__Vi0) {
        vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[__Vi0] = VL_RAND_RESET_I(25);
    }
    for (int __Vi0 = 0; __Vi0 < 13; ++__Vi0) {
        vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[__Vi0] = VL_RAND_RESET_I(25);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_sum[__Vi0] = VL_RAND_RESET_Q(49);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_carry[__Vi0] = VL_RAND_RESET_Q(49);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_shcy[__Vi0] = VL_RAND_RESET_Q(49);
    }
    VL_RAND_RESET_W(98, vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__32__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__32__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__33__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__33__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__34__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__34__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__35__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__35__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__36__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__36__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__37__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__37__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__38__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__38__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__39__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__39__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__40__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__40__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__41__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__41__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__42__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__42__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__43__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__43__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__44__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__44__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__45__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__45__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__46__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__46__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellout__genblk1__BRA__47__KET____DOT__FA__carry_o = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__47__KET____DOT__FA__carry_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__47__KET____DOT__FA__addend_i = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc = VL_RAND_RESET_I(4);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__shift = VL_RAND_RESET_I(4);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__unnamedblk1__DOT__sig24 = VL_RAND_RESET_I(24);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_add1__DOT__C__BRA__3__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_add1__DOT__C__BRA__2__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__6__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__5__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__4__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc = VL_RAND_RESET_I(4);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__shift = VL_RAND_RESET_I(4);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__unnamedblk1__DOT__sig24 = VL_RAND_RESET_I(24);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_add1__DOT__C__BRA__3__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_add1__DOT__C__BRA__2__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__6__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__5__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__4__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc = VL_RAND_RESET_I(4);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__shift = VL_RAND_RESET_I(4);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__unnamedblk1__DOT__sig24 = VL_RAND_RESET_I(24);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_add1__DOT__C__BRA__3__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_add1__DOT__C__BRA__2__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__6__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__5__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__4__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__low_sum = VL_RAND_RESET_Q(48);
    VL_RAND_RESET_W(74, vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Adder_sign = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__shift_num = VL_RAND_RESET_I(7);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__allzero = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(74, vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Exp_norm = VL_RAND_RESET_I(10);
    VL_RAND_RESET_W(76, vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Rs_Mant);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Sign_result = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__eac__DOT____VdfgRegularize_hca792c16_0_0 = VL_RAND_RESET_Q(48);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__msb_inc__DOT____VdfgRegularize_hb50ef5f9_0_2 = VL_RAND_RESET_I(32);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT__base_zeros = VL_RAND_RESET_I(8);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT__lv1_zeros = VL_RAND_RESET_I(4);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT__lv2_zeros = VL_RAND_RESET_I(2);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__lzd_grouplv2_0__group_data_i = VL_RAND_RESET_I(2);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__lzd_grouplv1__group_data_i = VL_RAND_RESET_I(2);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__lzd_grouplv1__group_data_i = VL_RAND_RESET_I(2);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__lzd_grouplv1__group_data_i = VL_RAND_RESET_I(2);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT__Shift_num = VL_RAND_RESET_I(7);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT__norm_amt = VL_RAND_RESET_I(9);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT____VdfgRegularize_hc99b95d1_0_1 = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT____VdfgRegularize_hc99b95d1_0_3 = VL_RAND_RESET_I(10);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Sticky_one = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_sticky = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_result_norm = VL_RAND_RESET_I(24);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Exp_result_norm = VL_RAND_RESET_I(8);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_lower = VL_RAND_RESET_I(2);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__GRSbits = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_upper_rounded = VL_RAND_RESET_I(25);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__exp_adj = VL_RAND_RESET_I(6);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__incr = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__rnd_sum = VL_RAND_RESET_I(11);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_sub112__DOT__u_sub__DOT__C__BRA__7__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_sub112__DOT__u_sub__DOT__C__BRA__6__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__10__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__9__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__8__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__7__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__6__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__5__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__4__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__3__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__2__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__1__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_inc_exp__DOT__C__BRA__4__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_inc_exp__DOT__C__BRA__3__KET__ = VL_RAND_RESET_I(1);
    vlSelf->MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_inc_exp__DOT__C__BRA__2__KET__ = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h6171c202_5_0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h6171c202_6_0 = VL_RAND_RESET_I(31);
    vlSelf->__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__MAC32_top_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
