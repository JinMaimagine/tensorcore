// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC32_top_tb.h for the primary calling header

#include "VMAC32_top_tb__pch.h"
#include "VMAC32_top_tb___024root.h"

VlCoroutine VMAC32_top_tb___024root___eval_initial__TOP__Vtiming__0(VMAC32_top_tb___024root* vlSelf);
VlCoroutine VMAC32_top_tb___024root___eval_initial__TOP__Vtiming__1(VMAC32_top_tb___024root* vlSelf);
VlCoroutine VMAC32_top_tb___024root___eval_initial__TOP__Vtiming__2(VMAC32_top_tb___024root* vlSelf);

void VMAC32_top_tb___024root___eval_initial(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___eval_initial\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VMAC32_top_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VMAC32_top_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    VMAC32_top_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VL_INLINE_OPT VlCoroutine VMAC32_top_tb___024root___eval_initial__TOP__Vtiming__0(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.MAC32_top_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "testbench_MAC32/MAC32_top_tb.sv", 
                                             51);
        vlSelfRef.MAC32_top_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.MAC32_top_tb__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine VMAC32_top_tb___024root___eval_initial__TOP__Vtiming__1(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.MAC32_top_tb__DOT__rst_n = 0U;
    co_await vlSelfRef.__VtrigSched_h5ef408c0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge MAC32_top_tb.clk)", 
                                                         "testbench_MAC32/MAC32_top_tb.sv", 
                                                         57);
    co_await vlSelfRef.__VtrigSched_h5ef408c0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge MAC32_top_tb.clk)", 
                                                         "testbench_MAC32/MAC32_top_tb.sv", 
                                                         57);
    vlSelfRef.MAC32_top_tb__DOT__rst_n = 1U;
}

void VMAC32_top_tb___024root____Vdpiimwrap_MAC32_top_tb__DOT__float_to_half_TOP(double r, IData/*31:0*/ &float_to_half__Vfuncrtn);

VL_INLINE_OPT VlCoroutine VMAC32_top_tb___024root___eval_initial__TOP__Vtiming__2(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ MAC32_top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    MAC32_top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ MAC32_top_tb__DOT__unnamedblk1_3__DOT____Vrepeat2;
    MAC32_top_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ MAC32_top_tb__DOT__unnamedblk1_4__DOT____Vrepeat3;
    MAC32_top_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    double __Vtask_MAC32_top_tb__DOT__drive_fp32__0__a;
    __Vtask_MAC32_top_tb__DOT__drive_fp32__0__a = 0;
    double __Vtask_MAC32_top_tb__DOT__drive_fp32__0__b;
    __Vtask_MAC32_top_tb__DOT__drive_fp32__0__b = 0;
    double __Vtask_MAC32_top_tb__DOT__drive_fp32__0__c;
    __Vtask_MAC32_top_tb__DOT__drive_fp32__0__c = 0;
    QData/*35:0*/ __Vtask_MAC32_top_tb__DOT__drive_fp32__0__golden;
    __Vtask_MAC32_top_tb__DOT__drive_fp32__0__golden = 0;
    double __Vtask_MAC32_top_tb__DOT__drive_fp32__0__res_real;
    __Vtask_MAC32_top_tb__DOT__drive_fp32__0__res_real = 0;
    IData/*31:0*/ __Vfunc_MAC32_top_tb__DOT__real_to_fp32__1__Vfuncout;
    __Vfunc_MAC32_top_tb__DOT__real_to_fp32__1__Vfuncout = 0;
    double __Vfunc_MAC32_top_tb__DOT__real_to_fp32__1__r;
    __Vfunc_MAC32_top_tb__DOT__real_to_fp32__1__r = 0;
    IData/*31:0*/ __Vfunc_MAC32_top_tb__DOT__real_to_fp32__2__Vfuncout;
    __Vfunc_MAC32_top_tb__DOT__real_to_fp32__2__Vfuncout = 0;
    double __Vfunc_MAC32_top_tb__DOT__real_to_fp32__2__r;
    __Vfunc_MAC32_top_tb__DOT__real_to_fp32__2__r = 0;
    IData/*31:0*/ __Vfunc_MAC32_top_tb__DOT__real_to_fp32__3__Vfuncout;
    __Vfunc_MAC32_top_tb__DOT__real_to_fp32__3__Vfuncout = 0;
    double __Vfunc_MAC32_top_tb__DOT__real_to_fp32__3__r;
    __Vfunc_MAC32_top_tb__DOT__real_to_fp32__3__r = 0;
    IData/*31:0*/ __Vfunc_MAC32_top_tb__DOT__real_to_fp32__4__Vfuncout;
    __Vfunc_MAC32_top_tb__DOT__real_to_fp32__4__Vfuncout = 0;
    double __Vfunc_MAC32_top_tb__DOT__real_to_fp32__4__r;
    __Vfunc_MAC32_top_tb__DOT__real_to_fp32__4__r = 0;
    double __Vtask_MAC32_top_tb__DOT__drive_fp16_norm__5__a;
    __Vtask_MAC32_top_tb__DOT__drive_fp16_norm__5__a = 0;
    double __Vtask_MAC32_top_tb__DOT__drive_fp16_norm__5__b;
    __Vtask_MAC32_top_tb__DOT__drive_fp16_norm__5__b = 0;
    double __Vtask_MAC32_top_tb__DOT__drive_fp16_norm__5__c;
    __Vtask_MAC32_top_tb__DOT__drive_fp16_norm__5__c = 0;
    QData/*35:0*/ __Vtask_MAC32_top_tb__DOT__drive_fp16_norm__5__golden;
    __Vtask_MAC32_top_tb__DOT__drive_fp16_norm__5__golden = 0;
    double __Vtask_MAC32_top_tb__DOT__drive_fp16_norm__5__res_real;
    __Vtask_MAC32_top_tb__DOT__drive_fp16_norm__5__res_real = 0;
    IData/*31:0*/ __Vfunc_MAC32_top_tb__DOT__float_to_half__6__Vfuncout;
    __Vfunc_MAC32_top_tb__DOT__float_to_half__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MAC32_top_tb__DOT__float_to_half__7__Vfuncout;
    __Vfunc_MAC32_top_tb__DOT__float_to_half__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MAC32_top_tb__DOT__float_to_half__8__Vfuncout;
    __Vfunc_MAC32_top_tb__DOT__float_to_half__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MAC32_top_tb__DOT__float_to_half__9__Vfuncout;
    __Vfunc_MAC32_top_tb__DOT__float_to_half__9__Vfuncout = 0;
    double __Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__a_fp32;
    __Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__a_fp32 = 0;
    double __Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__b;
    __Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__b = 0;
    double __Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__c;
    __Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__c = 0;
    QData/*35:0*/ __Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__golden;
    __Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__golden = 0;
    double __Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__res_real;
    __Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__res_real = 0;
    IData/*31:0*/ __Vfunc_MAC32_top_tb__DOT__real_to_fp32__11__Vfuncout;
    __Vfunc_MAC32_top_tb__DOT__real_to_fp32__11__Vfuncout = 0;
    double __Vfunc_MAC32_top_tb__DOT__real_to_fp32__11__r;
    __Vfunc_MAC32_top_tb__DOT__real_to_fp32__11__r = 0;
    IData/*31:0*/ __Vfunc_MAC32_top_tb__DOT__float_to_half__12__Vfuncout;
    __Vfunc_MAC32_top_tb__DOT__float_to_half__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MAC32_top_tb__DOT__float_to_half__13__Vfuncout;
    __Vfunc_MAC32_top_tb__DOT__float_to_half__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_MAC32_top_tb__DOT__real_to_fp32__14__Vfuncout;
    __Vfunc_MAC32_top_tb__DOT__real_to_fp32__14__Vfuncout = 0;
    double __Vfunc_MAC32_top_tb__DOT__real_to_fp32__14__r;
    __Vfunc_MAC32_top_tb__DOT__real_to_fp32__14__r = 0;
    // Body
    vlSelfRef.MAC32_top_tb__DOT__Rounding_mode_i = 0U;
    vlSelfRef.MAC32_top_tb__DOT__vec_cnt = 0U;
    co_await vlSelfRef.__VtrigSched_h96d11fad__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge MAC32_top_tb.rst_n)", 
                                                         "testbench_MAC32/MAC32_top_tb.sv", 
                                                         223);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    MAC32_top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x3e8U;
    while (VL_LTS_III(32, 0U, MAC32_top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_2__DOT__unnamedblk2__DOT__a 
            = (VL_ITOR_D_I(32, ((IData)(VL_URANDOM_RANGE_I(0U, 0x3e8U)) 
                                - (IData)(0x1f4U))) 
               / 10.0);
        vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_2__DOT__unnamedblk2__DOT__b 
            = (VL_ITOR_D_I(32, ((IData)(VL_URANDOM_RANGE_I(0U, 0x3e8U)) 
                                - (IData)(0x1f4U))) 
               / 10.0);
        vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_2__DOT__unnamedblk2__DOT__c 
            = (VL_ITOR_D_I(32, ((IData)(VL_URANDOM_RANGE_I(0U, 0x3e8U)) 
                                - (IData)(0x1f4U))) 
               / 10.0);
        __Vtask_MAC32_top_tb__DOT__drive_fp32__0__c 
            = vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_2__DOT__unnamedblk2__DOT__c;
        __Vtask_MAC32_top_tb__DOT__drive_fp32__0__b 
            = vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_2__DOT__unnamedblk2__DOT__b;
        __Vtask_MAC32_top_tb__DOT__drive_fp32__0__a 
            = vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_2__DOT__unnamedblk2__DOT__a;
        __Vtask_MAC32_top_tb__DOT__drive_fp32__0__golden = 0;
        __Vtask_MAC32_top_tb__DOT__drive_fp32__0__res_real = 0;
        vlSelfRef.MAC32_top_tb__DOT__fp_mode = 0U;
        __Vfunc_MAC32_top_tb__DOT__real_to_fp32__1__r 
            = __Vtask_MAC32_top_tb__DOT__drive_fp32__0__a;
        __Vfunc_MAC32_top_tb__DOT__real_to_fp32__1__Vfuncout 
            = (IData)(VL_CVT_Q_D(__Vfunc_MAC32_top_tb__DOT__real_to_fp32__1__r));
        vlSelfRef.MAC32_top_tb__DOT__A_i = __Vfunc_MAC32_top_tb__DOT__real_to_fp32__1__Vfuncout;
        __Vfunc_MAC32_top_tb__DOT__real_to_fp32__2__r 
            = __Vtask_MAC32_top_tb__DOT__drive_fp32__0__b;
        __Vfunc_MAC32_top_tb__DOT__real_to_fp32__2__Vfuncout 
            = (IData)(VL_CVT_Q_D(__Vfunc_MAC32_top_tb__DOT__real_to_fp32__2__r));
        vlSelfRef.MAC32_top_tb__DOT__B_i = __Vfunc_MAC32_top_tb__DOT__real_to_fp32__2__Vfuncout;
        __Vfunc_MAC32_top_tb__DOT__real_to_fp32__3__r 
            = __Vtask_MAC32_top_tb__DOT__drive_fp32__0__c;
        __Vfunc_MAC32_top_tb__DOT__real_to_fp32__3__Vfuncout 
            = (IData)(VL_CVT_Q_D(__Vfunc_MAC32_top_tb__DOT__real_to_fp32__3__r));
        vlSelfRef.MAC32_top_tb__DOT__C_i = __Vfunc_MAC32_top_tb__DOT__real_to_fp32__3__Vfuncout;
        __Vtask_MAC32_top_tb__DOT__drive_fp32__0__res_real 
            = (__Vtask_MAC32_top_tb__DOT__drive_fp32__0__a 
               + (__Vtask_MAC32_top_tb__DOT__drive_fp32__0__b 
                  * __Vtask_MAC32_top_tb__DOT__drive_fp32__0__c));
        VL_ASSIGNSEL_QQ(36,33,3U, __Vtask_MAC32_top_tb__DOT__drive_fp32__0__golden, 
                        ((QData)((IData)(([&]() {
                                __Vfunc_MAC32_top_tb__DOT__real_to_fp32__4__r 
                                    = __Vtask_MAC32_top_tb__DOT__drive_fp32__0__res_real;
                                __Vfunc_MAC32_top_tb__DOT__real_to_fp32__4__Vfuncout 
                                    = (IData)(VL_CVT_Q_D(__Vfunc_MAC32_top_tb__DOT__real_to_fp32__4__r));
                            }(), __Vfunc_MAC32_top_tb__DOT__real_to_fp32__4__Vfuncout))) 
                         << 1U));
        __Vtask_MAC32_top_tb__DOT__drive_fp32__0__golden 
            = (0xffffffff8ULL & __Vtask_MAC32_top_tb__DOT__drive_fp32__0__golden);
        vlSelfRef.MAC32_top_tb__DOT__exp_q.push_back(__Vtask_MAC32_top_tb__DOT__drive_fp32__0__golden);
        vlSelfRef.MAC32_top_tb__DOT__vec_cnt = ((IData)(1U) 
                                                + vlSelfRef.MAC32_top_tb__DOT__vec_cnt);
        co_await vlSelfRef.__VtrigSched_h5ef408c0__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge MAC32_top_tb.clk)", 
                                                             "testbench_MAC32/MAC32_top_tb.sv", 
                                                             231);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        MAC32_top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (MAC32_top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    MAC32_top_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x3e8U;
    while (VL_LTS_III(32, 0U, MAC32_top_tb__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_3__DOT__unnamedblk3__DOT__a 
            = (VL_ITOR_D_I(32, ((IData)(VL_URANDOM_RANGE_I(0U, 0x3e8U)) 
                                - (IData)(0x1f4U))) 
               / 10.0);
        vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_3__DOT__unnamedblk3__DOT__b 
            = (VL_ITOR_D_I(32, ((IData)(VL_URANDOM_RANGE_I(0U, 0x3e8U)) 
                                - (IData)(0x1f4U))) 
               / 10.0);
        vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_3__DOT__unnamedblk3__DOT__c 
            = (VL_ITOR_D_I(32, ((IData)(VL_URANDOM_RANGE_I(0U, 0x3e8U)) 
                                - (IData)(0x1f4U))) 
               / 10.0);
        __Vtask_MAC32_top_tb__DOT__drive_fp16_norm__5__c 
            = vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_3__DOT__unnamedblk3__DOT__c;
        __Vtask_MAC32_top_tb__DOT__drive_fp16_norm__5__b 
            = vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_3__DOT__unnamedblk3__DOT__b;
        __Vtask_MAC32_top_tb__DOT__drive_fp16_norm__5__a 
            = vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_3__DOT__unnamedblk3__DOT__a;
        __Vtask_MAC32_top_tb__DOT__drive_fp16_norm__5__golden = 0;
        __Vtask_MAC32_top_tb__DOT__drive_fp16_norm__5__res_real = 0;
        vlSelfRef.MAC32_top_tb__DOT__fp_mode = 1U;
        VMAC32_top_tb___024root____Vdpiimwrap_MAC32_top_tb__DOT__float_to_half_TOP(__Vtask_MAC32_top_tb__DOT__drive_fp16_norm__5__a, __Vfunc_MAC32_top_tb__DOT__float_to_half__6__Vfuncout);
        vlSelfRef.MAC32_top_tb__DOT__A_i = __Vfunc_MAC32_top_tb__DOT__float_to_half__6__Vfuncout;
        VMAC32_top_tb___024root____Vdpiimwrap_MAC32_top_tb__DOT__float_to_half_TOP(__Vtask_MAC32_top_tb__DOT__drive_fp16_norm__5__b, __Vfunc_MAC32_top_tb__DOT__float_to_half__7__Vfuncout);
        vlSelfRef.MAC32_top_tb__DOT__B_i = __Vfunc_MAC32_top_tb__DOT__float_to_half__7__Vfuncout;
        VMAC32_top_tb___024root____Vdpiimwrap_MAC32_top_tb__DOT__float_to_half_TOP(__Vtask_MAC32_top_tb__DOT__drive_fp16_norm__5__c, __Vfunc_MAC32_top_tb__DOT__float_to_half__8__Vfuncout);
        vlSelfRef.MAC32_top_tb__DOT__C_i = __Vfunc_MAC32_top_tb__DOT__float_to_half__8__Vfuncout;
        __Vtask_MAC32_top_tb__DOT__drive_fp16_norm__5__res_real 
            = (__Vtask_MAC32_top_tb__DOT__drive_fp16_norm__5__a 
               + (__Vtask_MAC32_top_tb__DOT__drive_fp16_norm__5__b 
                  * __Vtask_MAC32_top_tb__DOT__drive_fp16_norm__5__c));
        VMAC32_top_tb___024root____Vdpiimwrap_MAC32_top_tb__DOT__float_to_half_TOP(__Vtask_MAC32_top_tb__DOT__drive_fp16_norm__5__res_real, __Vfunc_MAC32_top_tb__DOT__float_to_half__9__Vfuncout);
        __Vtask_MAC32_top_tb__DOT__drive_fp16_norm__5__golden 
            = ((QData)((IData)(__Vfunc_MAC32_top_tb__DOT__float_to_half__9__Vfuncout)) 
               << 4U);
        vlSelfRef.MAC32_top_tb__DOT__exp_q.push_back(__Vtask_MAC32_top_tb__DOT__drive_fp16_norm__5__golden);
        vlSelfRef.MAC32_top_tb__DOT__vec_cnt = ((IData)(1U) 
                                                + vlSelfRef.MAC32_top_tb__DOT__vec_cnt);
        co_await vlSelfRef.__VtrigSched_h5ef408c0__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge MAC32_top_tb.clk)", 
                                                             "testbench_MAC32/MAC32_top_tb.sv", 
                                                             240);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        MAC32_top_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (MAC32_top_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    MAC32_top_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x3e8U;
    while (VL_LTS_III(32, 0U, MAC32_top_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_4__DOT__unnamedblk4__DOT__aP 
            = (VL_ITOR_D_I(32, ((IData)(VL_URANDOM_RANGE_I(0U, 0x3e8U)) 
                                - (IData)(0x1f4U))) 
               / 10.0);
        vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_4__DOT__unnamedblk4__DOT__b 
            = (VL_ITOR_D_I(32, ((IData)(VL_URANDOM_RANGE_I(0U, 0x3e8U)) 
                                - (IData)(0x1f4U))) 
               / 10.0);
        vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_4__DOT__unnamedblk4__DOT__c 
            = (VL_ITOR_D_I(32, ((IData)(VL_URANDOM_RANGE_I(0U, 0x3e8U)) 
                                - (IData)(0x1f4U))) 
               / 10.0);
        __Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__c 
            = vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_4__DOT__unnamedblk4__DOT__c;
        __Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__b 
            = vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_4__DOT__unnamedblk4__DOT__b;
        __Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__a_fp32 
            = vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_4__DOT__unnamedblk4__DOT__aP;
        __Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__golden = 0;
        __Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__res_real = 0;
        vlSelfRef.MAC32_top_tb__DOT__fp_mode = 2U;
        __Vfunc_MAC32_top_tb__DOT__real_to_fp32__11__r 
            = __Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__a_fp32;
        __Vfunc_MAC32_top_tb__DOT__real_to_fp32__11__Vfuncout 
            = (IData)(VL_CVT_Q_D(__Vfunc_MAC32_top_tb__DOT__real_to_fp32__11__r));
        vlSelfRef.MAC32_top_tb__DOT__A_i = __Vfunc_MAC32_top_tb__DOT__real_to_fp32__11__Vfuncout;
        VMAC32_top_tb___024root____Vdpiimwrap_MAC32_top_tb__DOT__float_to_half_TOP(__Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__b, __Vfunc_MAC32_top_tb__DOT__float_to_half__12__Vfuncout);
        vlSelfRef.MAC32_top_tb__DOT__B_i = __Vfunc_MAC32_top_tb__DOT__float_to_half__12__Vfuncout;
        VMAC32_top_tb___024root____Vdpiimwrap_MAC32_top_tb__DOT__float_to_half_TOP(__Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__c, __Vfunc_MAC32_top_tb__DOT__float_to_half__13__Vfuncout);
        vlSelfRef.MAC32_top_tb__DOT__C_i = __Vfunc_MAC32_top_tb__DOT__float_to_half__13__Vfuncout;
        __Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__res_real 
            = (__Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__a_fp32 
               + (__Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__b 
                  * __Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__c));
        VL_ASSIGNSEL_QQ(36,33,3U, __Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__golden, 
                        ((QData)((IData)(([&]() {
                                __Vfunc_MAC32_top_tb__DOT__real_to_fp32__14__r 
                                    = __Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__res_real;
                                __Vfunc_MAC32_top_tb__DOT__real_to_fp32__14__Vfuncout 
                                    = (IData)(VL_CVT_Q_D(__Vfunc_MAC32_top_tb__DOT__real_to_fp32__14__r));
                            }(), __Vfunc_MAC32_top_tb__DOT__real_to_fp32__14__Vfuncout))) 
                         << 1U));
        __Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__golden 
            = (0xffffffff8ULL & __Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__golden);
        vlSelfRef.MAC32_top_tb__DOT__exp_q.push_back(__Vtask_MAC32_top_tb__DOT__drive_fp16_mixed__10__golden);
        vlSelfRef.MAC32_top_tb__DOT__vec_cnt = ((IData)(1U) 
                                                + vlSelfRef.MAC32_top_tb__DOT__vec_cnt);
        co_await vlSelfRef.__VtrigSched_h5ef408c0__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge MAC32_top_tb.clk)", 
                                                             "testbench_MAC32/MAC32_top_tb.sv", 
                                                             249);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        MAC32_top_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (MAC32_top_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VtrigSched_h5ef408c0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge MAC32_top_tb.clk)", 
                                                         "testbench_MAC32/MAC32_top_tb.sv", 
                                                         255);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5ef408c0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge MAC32_top_tb.clk)", 
                                                         "testbench_MAC32/MAC32_top_tb.sv", 
                                                         255);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h5ef408c0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge MAC32_top_tb.clk)", 
                                                         "testbench_MAC32/MAC32_top_tb.sv", 
                                                         255);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n========================================================\n  Test complete : %0d vectors, %0d errors\n========================================================\n\n",0,
                 32,vlSelfRef.MAC32_top_tb__DOT__vec_cnt,
                 32,vlSelfRef.MAC32_top_tb__DOT__err_cnt);
    VL_FINISH_MT("testbench_MAC32/MAC32_top_tb.sv", 259, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void VMAC32_top_tb___024root___act_comb__TOP__0(VMAC32_top_tb___024root* vlSelf);

void VMAC32_top_tb___024root___eval_act(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___eval_act\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((9ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VMAC32_top_tb___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void VMAC32_top_tb___024root___act_comb__TOP__0(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___act_comb__TOP__0\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
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
    // Body
    vlSelfRef.MAC32_top_tb__DOT__Result_o = ((1U == (IData)(vlSelfRef.MAC32_top_tb__DOT__fp_mode))
                                              ? (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__fp32_to_fp16_conv_result)
                                              : vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2);
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
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_add1__DOT__C__BRA__2__KET__ 
        = (IData)((3U == (3U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_add1__DOT__C__BRA__2__KET__ 
        = (IData)((3U == (3U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_add1__DOT__C__BRA__2__KET__ 
        = (IData)((3U == (3U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_add1__DOT__C__BRA__3__KET__ 
        = (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc) 
            >> 2U) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_add1__DOT__C__BRA__2__KET__));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_add1__DOT__C__BRA__3__KET__ 
        = (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc) 
            >> 2U) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_add1__DOT__C__BRA__2__KET__));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_add1__DOT__C__BRA__3__KET__ 
        = (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc) 
            >> 2U) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_add1__DOT__C__BRA__2__KET__));
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
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__ 
        = (IData)((0U == (6U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__shift))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__ 
        = (IData)((0U == (6U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__shift))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__ 
        = (IData)((0U == (6U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__shift))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__4__KET__ 
        = ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__shift) 
               >> 3U)) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__4__KET__ 
        = ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__shift) 
               >> 3U)) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__4__KET__ 
        = ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__shift) 
               >> 3U)) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__5__KET__ = 1U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__5__KET__ = 1U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__5__KET__ = 1U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__6__KET__ = 1U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__6__KET__ = 1U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__6__KET__ = 1U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__ = 1U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__ = 1U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__ = 1U;
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
}

VL_INLINE_OPT void VMAC32_top_tb___024root___nba_comb__TOP__0(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___nba_comb__TOP__0\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
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
    // Body
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
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_add1__DOT__C__BRA__2__KET__ 
        = (IData)((3U == (3U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_add1__DOT__C__BRA__2__KET__ 
        = (IData)((3U == (3U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_add1__DOT__C__BRA__2__KET__ 
        = (IData)((3U == (3U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_add1__DOT__C__BRA__3__KET__ 
        = (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc) 
            >> 2U) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_add1__DOT__C__BRA__2__KET__));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_add1__DOT__C__BRA__3__KET__ 
        = (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc) 
            >> 2U) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_add1__DOT__C__BRA__2__KET__));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_add1__DOT__C__BRA__3__KET__ 
        = (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc) 
            >> 2U) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_add1__DOT__C__BRA__2__KET__));
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
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__ 
        = (IData)((0U == (6U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__shift))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__ 
        = (IData)((0U == (6U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__shift))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__ 
        = (IData)((0U == (6U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__shift))));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__4__KET__ 
        = ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__shift) 
               >> 3U)) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__4__KET__ 
        = ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__shift) 
               >> 3U)) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__4__KET__ 
        = ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__shift) 
               >> 3U)) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__));
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__5__KET__ = 1U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__5__KET__ = 1U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__5__KET__ = 1U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__6__KET__ = 1U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__6__KET__ = 1U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__6__KET__ = 1U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__ = 1U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__ = 1U;
    vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__ = 1U;
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
}

VL_INLINE_OPT void VMAC32_top_tb___024root___nba_comb__TOP__1(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___nba_comb__TOP__1\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.MAC32_top_tb__DOT__Result_o = ((1U == (IData)(vlSelfRef.MAC32_top_tb__DOT__fp_mode))
                                              ? (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__fp32_to_fp16_conv_result)
                                              : vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2);
}

void VMAC32_top_tb___024root___timing_commit(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___timing_commit\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h5ef408c0__0.commit(
                                                   "@(posedge MAC32_top_tb.clk)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h96d11fad__0.commit(
                                                   "@(posedge MAC32_top_tb.rst_n)");
    }
}

void VMAC32_top_tb___024root___timing_resume(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___timing_resume\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h5ef408c0__0.resume(
                                                   "@(posedge MAC32_top_tb.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h96d11fad__0.resume(
                                                   "@(posedge MAC32_top_tb.rst_n)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VMAC32_top_tb___024root___eval_triggers__act(VMAC32_top_tb___024root* vlSelf);

bool VMAC32_top_tb___024root___eval_phase__act(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___eval_phase__act\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VMAC32_top_tb___024root___eval_triggers__act(vlSelf);
    VMAC32_top_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VMAC32_top_tb___024root___timing_resume(vlSelf);
        VMAC32_top_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VMAC32_top_tb___024root___eval_nba(VMAC32_top_tb___024root* vlSelf);

bool VMAC32_top_tb___024root___eval_phase__nba(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___eval_phase__nba\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VMAC32_top_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC32_top_tb___024root___dump_triggers__nba(VMAC32_top_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC32_top_tb___024root___dump_triggers__act(VMAC32_top_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VMAC32_top_tb___024root___eval(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___eval\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VMAC32_top_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench_MAC32/MAC32_top_tb.sv", 40, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VMAC32_top_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench_MAC32/MAC32_top_tb.sv", 40, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VMAC32_top_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VMAC32_top_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VMAC32_top_tb___024root___eval_debug_assertions(VMAC32_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root___eval_debug_assertions\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
