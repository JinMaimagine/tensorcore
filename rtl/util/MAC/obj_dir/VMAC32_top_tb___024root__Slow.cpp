// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC32_top_tb.h for the primary calling header

#include "VMAC32_top_tb__pch.h"
#include "VMAC32_top_tb__Syms.h"
#include "VMAC32_top_tb___024root.h"

void VMAC32_top_tb___024root___ctor_var_reset(VMAC32_top_tb___024root* vlSelf);

VMAC32_top_tb___024root::VMAC32_top_tb___024root(VMAC32_top_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMAC32_top_tb___024root___ctor_var_reset(this);
}

void VMAC32_top_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VMAC32_top_tb___024root::~VMAC32_top_tb___024root() {
}
