// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMAC32_top_tb.h for the primary calling header

#ifndef VERILATED_VMAC32_TOP_TB_COMPRESSOR32_H_
#define VERILATED_VMAC32_TOP_TB_COMPRESSOR32_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VMAC32_top_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMAC32_top_tb_Compressor32 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN64(A_i,48,0);
    VL_IN64(B_i,48,0);
    VL_IN64(C_i,48,0);
    VL_OUT64(Sum_o,48,0);
    VL_OUT64(Carry_o,48,0);

    // INTERNAL VARIABLES
    VMAC32_top_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMAC32_top_tb_Compressor32(VMAC32_top_tb__Syms* symsp, const char* v__name);
    ~VMAC32_top_tb_Compressor32();
    VL_UNCOPYABLE(VMAC32_top_tb_Compressor32);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
