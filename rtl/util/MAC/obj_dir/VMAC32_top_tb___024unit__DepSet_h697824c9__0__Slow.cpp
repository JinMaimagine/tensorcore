// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC32_top_tb.h for the primary calling header

#include "VMAC32_top_tb__pch.h"
#include "VMAC32_top_tb___024unit.h"

VL_ATTR_COLD void VMAC32_top_tb___024unit___ctor_var_reset(VMAC32_top_tb___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VMAC32_top_tb___024unit___ctor_var_reset\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VmonitorNum = VL_RAND_RESET_Q(64);
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
