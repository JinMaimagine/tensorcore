// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC32_top_tb.h for the primary calling header

#include "VMAC32_top_tb__pch.h"
#include "VMAC32_top_tb_Compressor32.h"

VL_ATTR_COLD void VMAC32_top_tb_Compressor32___ctor_var_reset(VMAC32_top_tb_Compressor32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VMAC32_top_tb_Compressor32___ctor_var_reset\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->A_i = VL_RAND_RESET_Q(49);
    vlSelf->B_i = VL_RAND_RESET_Q(49);
    vlSelf->C_i = VL_RAND_RESET_Q(49);
    vlSelf->Sum_o = VL_RAND_RESET_Q(49);
    vlSelf->Carry_o = VL_RAND_RESET_Q(49);
}
