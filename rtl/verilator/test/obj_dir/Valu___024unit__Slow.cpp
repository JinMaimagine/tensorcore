// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "verilated.h"

#include "Valu__Syms.h"
#include "Valu___024unit.h"

void Valu___024unit___ctor_var_reset(Valu___024unit* vlSelf);

Valu___024unit::Valu___024unit(Valu__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Valu___024unit___ctor_var_reset(this);
}

void Valu___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Valu___024unit::~Valu___024unit() {
}
