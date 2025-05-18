// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFP32toFP16.h for the primary calling header

#include "VFP32toFP16__pch.h"
#include "VFP32toFP16___024root.h"

VL_ATTR_COLD void VFP32toFP16___024root___eval_static(VFP32toFP16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root___eval_static\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VFP32toFP16___024root___eval_initial(VFP32toFP16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root___eval_initial\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VFP32toFP16___024root___eval_final(VFP32toFP16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root___eval_final\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFP32toFP16___024root___dump_triggers__stl(VFP32toFP16___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VFP32toFP16___024root___eval_phase__stl(VFP32toFP16___024root* vlSelf);

VL_ATTR_COLD void VFP32toFP16___024root___eval_settle(VFP32toFP16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root___eval_settle\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VFP32toFP16___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/include/FP32toFP16.v", 143, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VFP32toFP16___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFP32toFP16___024root___dump_triggers__stl(VFP32toFP16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root___dump_triggers__stl\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void VFP32toFP16___024root___ico_sequent__TOP__0(VFP32toFP16___024root* vlSelf);
VL_ATTR_COLD void VFP32toFP16___024root____Vm_traceActivitySetAll(VFP32toFP16___024root* vlSelf);

VL_ATTR_COLD void VFP32toFP16___024root___eval_stl(VFP32toFP16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root___eval_stl\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VFP32toFP16___024root___ico_sequent__TOP__0(vlSelf);
        VFP32toFP16___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void VFP32toFP16___024root___eval_triggers__stl(VFP32toFP16___024root* vlSelf);

VL_ATTR_COLD bool VFP32toFP16___024root___eval_phase__stl(VFP32toFP16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root___eval_phase__stl\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VFP32toFP16___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VFP32toFP16___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFP32toFP16___024root___dump_triggers__ico(VFP32toFP16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root___dump_triggers__ico\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VFP32toFP16___024root___dump_triggers__act(VFP32toFP16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root___dump_triggers__act\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VFP32toFP16___024root___dump_triggers__nba(VFP32toFP16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root___dump_triggers__nba\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VFP32toFP16___024root____Vm_traceActivitySetAll(VFP32toFP16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root____Vm_traceActivitySetAll\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void VFP32toFP16___024root___ctor_var_reset(VFP32toFP16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root___ctor_var_reset\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->result_i = VL_RAND_RESET_I(32);
    vlSelf->mode = VL_RAND_RESET_I(1);
    vlSelf->OF_in = VL_RAND_RESET_I(1);
    vlSelf->UF_in = VL_RAND_RESET_I(1);
    vlSelf->NV_in = VL_RAND_RESET_I(1);
    vlSelf->DZ_in = VL_RAND_RESET_I(1);
    vlSelf->NX_in = VL_RAND_RESET_I(1);
    vlSelf->result_o = VL_RAND_RESET_I(32);
    vlSelf->OF_out = VL_RAND_RESET_I(1);
    vlSelf->UF_out = VL_RAND_RESET_I(1);
    vlSelf->NV_out = VL_RAND_RESET_I(1);
    vlSelf->DZ_out = VL_RAND_RESET_I(1);
    vlSelf->NX_out = VL_RAND_RESET_I(1);
    vlSelf->FP32toFP16__DOT__fp16_conv = VL_RAND_RESET_I(32);
    vlSelf->FP32toFP16__DOT__conv_uf = VL_RAND_RESET_I(1);
    vlSelf->FP32toFP16__DOT__conv_of = VL_RAND_RESET_I(1);
    vlSelf->FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__exp32 = VL_RAND_RESET_I(8);
    vlSelf->FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__man32 = VL_RAND_RESET_I(23);
    vlSelf->FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unbiased_exp = VL_RAND_RESET_I(9);
    vlSelf->FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__half_exp = VL_RAND_RESET_I(9);
    vlSelf->FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__fp16_tmp = VL_RAND_RESET_I(16);
    vlSelf->FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__mant16_use_tmp = VL_RAND_RESET_I(10);
    vlSelf->FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__man24 = VL_RAND_RESET_I(24);
    vlSelf->FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__rshift = 0;
    vlSelf->FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__half_man = VL_RAND_RESET_I(11);
    vlSelf->FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__round_bit = VL_RAND_RESET_I(1);
    vlSelf->FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__sticky = VL_RAND_RESET_I(1);
    vlSelf->FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__incr = VL_RAND_RESET_I(1);
    vlSelf->FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__sum11 = VL_RAND_RESET_I(11);
    vlSelf->FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__exp5 = VL_RAND_RESET_I(5);
    vlSelf->FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__mant10 = VL_RAND_RESET_I(10);
    vlSelf->FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__round_bit = VL_RAND_RESET_I(1);
    vlSelf->FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__sticky = VL_RAND_RESET_I(1);
    vlSelf->FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__incr = VL_RAND_RESET_I(1);
    vlSelf->FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__sum11 = VL_RAND_RESET_I(11);
    vlSelf->FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__exp5 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
