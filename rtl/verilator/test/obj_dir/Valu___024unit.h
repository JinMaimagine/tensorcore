// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu.h for the primary calling header

#ifndef VERILATED_VALU___024UNIT_H_
#define VERILATED_VALU___024UNIT_H_  // guard

#include "verilated.h"

class Valu__Syms;
VL_MODULE(Valu___024unit) {
  public:

    // ENUMS (that were declared public)
    enum operation_t {
        add = 1U,
        sub = 2U,
        nop = 0U
    };

    // INTERNAL VARIABLES
    Valu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valu___024unit(Valu__Syms* symsp, const char* name);
    ~Valu___024unit();
    VL_UNCOPYABLE(Valu___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
