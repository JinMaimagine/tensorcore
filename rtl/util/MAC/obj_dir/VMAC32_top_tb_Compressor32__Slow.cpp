// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC32_top_tb.h for the primary calling header

#include "VMAC32_top_tb__pch.h"
#include "VMAC32_top_tb_Compressor32.h"
#include "VMAC32_top_tb__Syms.h"

void VMAC32_top_tb_Compressor32___ctor_var_reset(VMAC32_top_tb_Compressor32* vlSelf);

VMAC32_top_tb_Compressor32::VMAC32_top_tb_Compressor32(VMAC32_top_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMAC32_top_tb_Compressor32___ctor_var_reset(this);
}

void VMAC32_top_tb_Compressor32::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VMAC32_top_tb_Compressor32::~VMAC32_top_tb_Compressor32() {
}
