// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFP32toFP16.h for the primary calling header

#include "VFP32toFP16__pch.h"
#include "VFP32toFP16___024root.h"

void VFP32toFP16___024root___ico_sequent__TOP__0(VFP32toFP16___024root* vlSelf);

void VFP32toFP16___024root___eval_ico(VFP32toFP16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root___eval_ico\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VFP32toFP16___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void VFP32toFP16___024root___ico_sequent__TOP__0(VFP32toFP16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root___ico_sequent__TOP__0\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.DZ_out = vlSelfRef.DZ_in;
    vlSelfRef.NV_out = ((IData)(vlSelfRef.NV_in) | 
                        ((~ (IData)(vlSelfRef.mode)) 
                         & (IData)(((0x7f800000U == 
                                     (0x7f800000U & vlSelfRef.result_i)) 
                                    & (0U != (0x7fffffU 
                                              & vlSelfRef.result_i))))));
    vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__sign 
        = (vlSelfRef.result_i >> 0x1fU);
    vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__exp32 
        = (0xffU & (vlSelfRef.result_i >> 0x17U));
    vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__man32 
        = (0x7fffffU & vlSelfRef.result_i);
    vlSelfRef.FP32toFP16__DOT__conv_uf = 0U;
    vlSelfRef.FP32toFP16__DOT__conv_of = 0U;
    vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__fp16_tmp = 0U;
    vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unbiased_exp = 0U;
    vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__half_exp = 0U;
    if ((0xffU == (IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__exp32))) {
        vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__mant16_use_tmp 
            = ((0U == vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__man32)
                ? 0U : ((0U == (0x3ffU & (vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__man32 
                                          >> 0xdU)))
                         ? 0x200U : (0x3ffU & (vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__man32 
                                               >> 0xdU))));
        vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__fp16_tmp 
            = (0x7c00U | (((IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__sign) 
                           << 0xfU) | (IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__mant16_use_tmp)));
        vlSelfRef.FP32toFP16__DOT__conv_of = (0U == vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__man32);
    } else {
        vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unbiased_exp 
            = (0x1ffU & ((IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__exp32) 
                         - (IData)(0x7fU)));
        vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__half_exp 
            = (0x1ffU & ((IData)(0xfU) + VL_EXTENDS_II(9,9, (IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unbiased_exp))));
        if (VL_LTES_III(32, 0x1fU, VL_EXTENDS_II(32,9, (IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__half_exp)))) {
            vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__fp16_tmp = 0x7bffU;
            vlSelfRef.FP32toFP16__DOT__conv_of = 1U;
        } else if (VL_GTES_III(32, 0U, VL_EXTENDS_II(32,9, (IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__half_exp)))) {
            if (VL_GTS_III(32, 0xfffffff7U, VL_EXTENDS_II(32,9, (IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__half_exp)))) {
                vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__fp16_tmp 
                    = ((IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__sign) 
                       << 0xfU);
                vlSelfRef.FP32toFP16__DOT__conv_uf = 1U;
            } else {
                vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__man24 
                    = (0x800000U | vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__man32);
                vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__rshift 
                    = ((IData)(0xeU) - VL_EXTENDS_II(32,9, (IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__half_exp)));
                vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__half_man 
                    = (0x7ffU & VL_SHIFTR_III(24,24,32, vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__man24, vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__rshift));
                vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__round_bit 
                    = ((0x17U >= (0x1fU & (vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__rshift 
                                           - (IData)(1U)))) 
                       && (1U & (vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__man24 
                                 >> (0x1fU & (vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__rshift 
                                              - (IData)(1U))))));
                vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__sticky 
                    = (0U != (vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__man24 
                              & (VL_SHIFTL_III(32,32,32, (IData)(1U), 
                                               (vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__rshift 
                                                - (IData)(1U))) 
                                 - (IData)(1U))));
                vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__incr 
                    = (((IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__round_bit) 
                        & (IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__sticky)) 
                       | (((IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__half_man) 
                           & (IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__round_bit)) 
                          & (~ (IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__sticky))));
                vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__sum11 
                    = (0x7ffU & ((IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__half_man) 
                                 + (IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__incr)));
                vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__exp5 = 0U;
                if ((0x400U & (IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__sum11))) {
                    vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__sum11 = 0U;
                    vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__exp5 = 1U;
                }
                vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__fp16_tmp 
                    = (((IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__sign) 
                        << 0xfU) | (((IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__exp5) 
                                     << 0xaU) | (0x3ffU 
                                                 & (IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__sum11))));
            }
        } else {
            vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__mant10 
                = (0x3ffU & (vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__man32 
                             >> 0xdU));
            vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__round_bit 
                = (1U & (vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__man32 
                         >> 0xcU));
            vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__sticky 
                = (0U != (0xfffU & vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__man32));
            vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__incr 
                = (((IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__round_bit) 
                    & (IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__sticky)) 
                   | (((IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__mant10) 
                       & (IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__round_bit)) 
                      & (~ (IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__sticky))));
            vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__sum11 
                = (0x7ffU & ((IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__mant10) 
                             + (IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__incr)));
            vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__exp5 
                = (0xffU & (IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__half_exp));
            if ((0x400U & (IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__sum11))) {
                vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__exp5 
                    = (0xffU & ((IData)(1U) + VL_EXTENDS_II(8,8, (IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__exp5))));
                vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__sum11 = 0U;
            }
            if (VL_LTES_III(32, 0x1fU, VL_EXTENDS_II(32,8, (IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__exp5)))) {
                vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__fp16_tmp 
                    = (0x7c00U | ((IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__sign) 
                                  << 0xfU));
                vlSelfRef.FP32toFP16__DOT__conv_of = 1U;
            } else {
                vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__fp16_tmp 
                    = (((IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__sign) 
                        << 0xfU) | ((0x7c00U & ((IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__exp5) 
                                                << 0xaU)) 
                                    | (0x3ffU & (IData)(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__sum11))));
            }
        }
    }
    vlSelfRef.FP32toFP16__DOT__fp16_conv = vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__fp16_tmp;
    if (vlSelfRef.mode) {
        vlSelfRef.result_o = vlSelfRef.result_i;
        vlSelfRef.UF_out = vlSelfRef.UF_in;
        vlSelfRef.OF_out = vlSelfRef.OF_in;
    } else {
        vlSelfRef.result_o = vlSelfRef.FP32toFP16__DOT__fp16_conv;
        vlSelfRef.UF_out = vlSelfRef.FP32toFP16__DOT__conv_uf;
        vlSelfRef.OF_out = vlSelfRef.FP32toFP16__DOT__conv_of;
    }
    vlSelfRef.NX_out = ((IData)(vlSelfRef.NX_in) | 
                        (((~ (IData)(vlSelfRef.mode)) 
                          & ((~ (IData)(vlSelfRef.NV_out)) 
                             & (0U != (0x1fffU & vlSelfRef.result_i)))) 
                         | (((~ (IData)((0x7f800000U 
                                         == (0x7fffffffU 
                                             & vlSelfRef.result_i)))) 
                             & (IData)(vlSelfRef.FP32toFP16__DOT__conv_of)) 
                            | (IData)(vlSelfRef.FP32toFP16__DOT__conv_uf))));
}

void VFP32toFP16___024root___eval_triggers__ico(VFP32toFP16___024root* vlSelf);

bool VFP32toFP16___024root___eval_phase__ico(VFP32toFP16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root___eval_phase__ico\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VFP32toFP16___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VFP32toFP16___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VFP32toFP16___024root___eval_act(VFP32toFP16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root___eval_act\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VFP32toFP16___024root___eval_nba(VFP32toFP16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root___eval_nba\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VFP32toFP16___024root___eval_triggers__act(VFP32toFP16___024root* vlSelf);

bool VFP32toFP16___024root___eval_phase__act(VFP32toFP16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root___eval_phase__act\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VFP32toFP16___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VFP32toFP16___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VFP32toFP16___024root___eval_phase__nba(VFP32toFP16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root___eval_phase__nba\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VFP32toFP16___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFP32toFP16___024root___dump_triggers__ico(VFP32toFP16___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VFP32toFP16___024root___dump_triggers__nba(VFP32toFP16___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VFP32toFP16___024root___dump_triggers__act(VFP32toFP16___024root* vlSelf);
#endif  // VL_DEBUG

void VFP32toFP16___024root___eval(VFP32toFP16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root___eval\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VFP32toFP16___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/include/FP32toFP16.v", 143, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VFP32toFP16___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VFP32toFP16___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/include/FP32toFP16.v", 143, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VFP32toFP16___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/include/FP32toFP16.v", 143, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VFP32toFP16___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VFP32toFP16___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VFP32toFP16___024root___eval_debug_assertions(VFP32toFP16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root___eval_debug_assertions\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.mode & 0xfeU)))) {
        Verilated::overWidthError("mode");}
    if (VL_UNLIKELY(((vlSelfRef.OF_in & 0xfeU)))) {
        Verilated::overWidthError("OF_in");}
    if (VL_UNLIKELY(((vlSelfRef.UF_in & 0xfeU)))) {
        Verilated::overWidthError("UF_in");}
    if (VL_UNLIKELY(((vlSelfRef.NV_in & 0xfeU)))) {
        Verilated::overWidthError("NV_in");}
    if (VL_UNLIKELY(((vlSelfRef.DZ_in & 0xfeU)))) {
        Verilated::overWidthError("DZ_in");}
    if (VL_UNLIKELY(((vlSelfRef.NX_in & 0xfeU)))) {
        Verilated::overWidthError("NX_in");}
}
#endif  // VL_DEBUG
