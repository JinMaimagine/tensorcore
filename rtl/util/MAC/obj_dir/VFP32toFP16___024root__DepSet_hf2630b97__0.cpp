// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFP32toFP16.h for the primary calling header

#include "VFP32toFP16__pch.h"
#include "VFP32toFP16__Syms.h"
#include "VFP32toFP16___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VFP32toFP16___024root___dump_triggers__ico(VFP32toFP16___024root* vlSelf);
#endif  // VL_DEBUG

void VFP32toFP16___024root___eval_triggers__ico(VFP32toFP16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root___eval_triggers__ico\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VFP32toFP16___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFP32toFP16___024root___dump_triggers__act(VFP32toFP16___024root* vlSelf);
#endif  // VL_DEBUG

void VFP32toFP16___024root___eval_triggers__act(VFP32toFP16___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root___eval_triggers__act\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VFP32toFP16___024root___dump_triggers__act(vlSelf);
    }
#endif
}
