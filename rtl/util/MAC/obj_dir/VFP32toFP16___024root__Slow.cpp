// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFP32toFP16.h for the primary calling header

#include "VFP32toFP16__pch.h"
#include "VFP32toFP16__Syms.h"
#include "VFP32toFP16___024root.h"

void VFP32toFP16___024root___ctor_var_reset(VFP32toFP16___024root* vlSelf);

VFP32toFP16___024root::VFP32toFP16___024root(VFP32toFP16__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VFP32toFP16___024root___ctor_var_reset(this);
}

void VFP32toFP16___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VFP32toFP16___024root::~VFP32toFP16___024root() {
}
