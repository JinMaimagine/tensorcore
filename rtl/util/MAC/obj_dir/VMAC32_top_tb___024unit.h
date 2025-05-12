// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMAC32_top_tb.h for the primary calling header

#ifndef VERILATED_VMAC32_TOP_TB___024UNIT_H_
#define VERILATED_VMAC32_TOP_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VMAC32_top_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMAC32_top_tb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    VMAC32_top_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMAC32_top_tb___024unit(VMAC32_top_tb__Syms* symsp, const char* v__name);
    ~VMAC32_top_tb___024unit();
    VL_UNCOPYABLE(VMAC32_top_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
