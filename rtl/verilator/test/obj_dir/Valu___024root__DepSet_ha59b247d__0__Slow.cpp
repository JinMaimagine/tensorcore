// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "verilated.h"

#include "Valu___024root.h"

VL_ATTR_COLD void Valu___024root___settle__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->alu__DOT__result = 0U;
    if (vlSelf->alu__DOT__in_valid_r) {
        vlSelf->alu__DOT__result = (0x3fU & ((1U == (IData)(vlSelf->alu__DOT__op_in_r))
                                              ? ((IData)(vlSelf->alu__DOT__a_in_r) 
                                                 + (IData)(vlSelf->alu__DOT__b_in_r))
                                              : ((2U 
                                                  == (IData)(vlSelf->alu__DOT__op_in_r))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + 
                                                  ((IData)(vlSelf->alu__DOT__a_in_r) 
                                                   + 
                                                   (~ (IData)(vlSelf->alu__DOT__b_in_r))))
                                                  : 0U)));
    }
}

VL_ATTR_COLD void Valu___024root___eval_initial(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Valu___024root___eval_settle(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_settle\n"); );
    // Body
    Valu___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Valu___024root___final(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___final\n"); );
}

VL_ATTR_COLD void Valu___024root___ctor_var_reset(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->op_in = VL_RAND_RESET_I(2);
    vlSelf->a_in = VL_RAND_RESET_I(6);
    vlSelf->b_in = VL_RAND_RESET_I(6);
    vlSelf->in_valid = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(6);
    vlSelf->out_valid = VL_RAND_RESET_I(1);
    vlSelf->alu__DOT__op_in_r = VL_RAND_RESET_I(2);
    vlSelf->alu__DOT__a_in_r = VL_RAND_RESET_I(6);
    vlSelf->alu__DOT__b_in_r = VL_RAND_RESET_I(6);
    vlSelf->alu__DOT__in_valid_r = VL_RAND_RESET_I(1);
    vlSelf->alu__DOT__result = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
