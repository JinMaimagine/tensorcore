// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->out = 0U;
        vlSelf->top__DOT__b_in_r = 0U;
        vlSelf->top__DOT__a_in_r = 0U;
        vlSelf->top__DOT__op_in_r = 0U;
    } else {
        vlSelf->out = vlSelf->top__DOT__result;
        vlSelf->top__DOT__b_in_r = vlSelf->b_in;
        vlSelf->top__DOT__a_in_r = vlSelf->a_in;
        vlSelf->top__DOT__op_in_r = vlSelf->op_in;
    }
    vlSelf->out_valid = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->top__DOT__in_valid_r));
    vlSelf->top__DOT__in_valid_r = ((~ (IData)(vlSelf->rst)) 
                                    & (IData)(vlSelf->in_valid));
    vlSelf->top__DOT__result = 0U;
    if (vlSelf->top__DOT__in_valid_r) {
        vlSelf->top__DOT__result = (0x3fU & ((1U == (IData)(vlSelf->top__DOT__op_in_r))
                                              ? ((IData)(vlSelf->top__DOT__a_in_r) 
                                                 + (IData)(vlSelf->top__DOT__b_in_r))
                                              : ((2U 
                                                  == (IData)(vlSelf->top__DOT__op_in_r))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + 
                                                  ((IData)(vlSelf->top__DOT__a_in_r) 
                                                   + 
                                                   (~ (IData)(vlSelf->top__DOT__b_in_r))))
                                                  : 0U)));
    }
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->op_in & 0xfcU))) {
        Verilated::overWidthError("op_in");}
    if (VL_UNLIKELY((vlSelf->a_in & 0xc0U))) {
        Verilated::overWidthError("a_in");}
    if (VL_UNLIKELY((vlSelf->b_in & 0xc0U))) {
        Verilated::overWidthError("b_in");}
    if (VL_UNLIKELY((vlSelf->in_valid & 0xfeU))) {
        Verilated::overWidthError("in_valid");}
}
#endif  // VL_DEBUG
