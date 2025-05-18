// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFP32toFP16.h for the primary calling header

#ifndef VERILATED_VFP32TOFP16___024ROOT_H_
#define VERILATED_VFP32TOFP16___024ROOT_H_  // guard

#include "verilated.h"


class VFP32toFP16__Syms;

class alignas(VL_CACHE_LINE_BYTES) VFP32toFP16___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(mode,0,0);
    VL_IN8(OF_in,0,0);
    VL_IN8(UF_in,0,0);
    VL_IN8(NV_in,0,0);
    VL_IN8(DZ_in,0,0);
    VL_IN8(NX_in,0,0);
    VL_OUT8(OF_out,0,0);
    VL_OUT8(UF_out,0,0);
    VL_OUT8(NV_out,0,0);
    VL_OUT8(DZ_out,0,0);
    VL_OUT8(NX_out,0,0);
    CData/*0:0*/ FP32toFP16__DOT__conv_uf;
    CData/*0:0*/ FP32toFP16__DOT__conv_of;
    CData/*0:0*/ FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__sign;
    CData/*7:0*/ FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__exp32;
    CData/*0:0*/ FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__round_bit;
    CData/*0:0*/ FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__sticky;
    CData/*0:0*/ FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__incr;
    CData/*4:0*/ FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__exp5;
    CData/*0:0*/ FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__round_bit;
    CData/*0:0*/ FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__sticky;
    CData/*0:0*/ FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__incr;
    CData/*7:0*/ FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__exp5;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unbiased_exp;
    SData/*8:0*/ FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__half_exp;
    SData/*15:0*/ FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__fp16_tmp;
    SData/*9:0*/ FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__mant16_use_tmp;
    SData/*10:0*/ FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__half_man;
    SData/*10:0*/ FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__sum11;
    SData/*9:0*/ FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__mant10;
    SData/*10:0*/ FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__sum11;
    VL_IN(result_i,31,0);
    VL_OUT(result_o,31,0);
    IData/*31:0*/ FP32toFP16__DOT__fp16_conv;
    IData/*22:0*/ FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__man32;
    IData/*23:0*/ FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__man24;
    IData/*31:0*/ FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__rshift;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VFP32toFP16__Syms* const vlSymsp;

    // CONSTRUCTORS
    VFP32toFP16___024root(VFP32toFP16__Syms* symsp, const char* v__name);
    ~VFP32toFP16___024root();
    VL_UNCOPYABLE(VFP32toFP16___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
