// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFP32toFP16__Syms.h"


void VFP32toFP16___024root__trace_chg_0_sub_0(VFP32toFP16___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VFP32toFP16___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root__trace_chg_0\n"); );
    // Init
    VFP32toFP16___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFP32toFP16___024root*>(voidSelf);
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VFP32toFP16___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VFP32toFP16___024root__trace_chg_0_sub_0(VFP32toFP16___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root__trace_chg_0_sub_0\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.FP32toFP16__DOT__fp16_conv),32);
        bufp->chgBit(oldp+1,(vlSelfRef.FP32toFP16__DOT__conv_uf));
        bufp->chgBit(oldp+2,(vlSelfRef.FP32toFP16__DOT__conv_of));
        bufp->chgBit(oldp+3,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__sign));
        bufp->chgCData(oldp+4,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__exp32),8);
        bufp->chgIData(oldp+5,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__man32),23);
        bufp->chgSData(oldp+6,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unbiased_exp),9);
        bufp->chgSData(oldp+7,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__half_exp),9);
        bufp->chgSData(oldp+8,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__fp16_tmp),16);
        bufp->chgSData(oldp+9,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__mant16_use_tmp),10);
        bufp->chgIData(oldp+10,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__man24),24);
        bufp->chgIData(oldp+11,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__rshift),32);
        bufp->chgSData(oldp+12,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__half_man),11);
        bufp->chgBit(oldp+13,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__round_bit));
        bufp->chgBit(oldp+14,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__sticky));
        bufp->chgBit(oldp+15,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__incr));
        bufp->chgSData(oldp+16,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__sum11),11);
        bufp->chgCData(oldp+17,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__exp5),5);
        bufp->chgSData(oldp+18,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__mant10),10);
        bufp->chgBit(oldp+19,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__round_bit));
        bufp->chgBit(oldp+20,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__sticky));
        bufp->chgBit(oldp+21,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__incr));
        bufp->chgSData(oldp+22,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__sum11),11);
        bufp->chgCData(oldp+23,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__exp5),8);
    }
    bufp->chgIData(oldp+24,(vlSelfRef.result_i),32);
    bufp->chgBit(oldp+25,(vlSelfRef.mode));
    bufp->chgBit(oldp+26,(vlSelfRef.OF_in));
    bufp->chgBit(oldp+27,(vlSelfRef.UF_in));
    bufp->chgBit(oldp+28,(vlSelfRef.NV_in));
    bufp->chgBit(oldp+29,(vlSelfRef.DZ_in));
    bufp->chgBit(oldp+30,(vlSelfRef.NX_in));
    bufp->chgIData(oldp+31,(vlSelfRef.result_o),32);
    bufp->chgBit(oldp+32,(vlSelfRef.OF_out));
    bufp->chgBit(oldp+33,(vlSelfRef.UF_out));
    bufp->chgBit(oldp+34,(vlSelfRef.NV_out));
    bufp->chgBit(oldp+35,(vlSelfRef.DZ_out));
    bufp->chgBit(oldp+36,(vlSelfRef.NX_out));
    bufp->chgBit(oldp+37,((IData)(((0x7f800000U == 
                                    (0x7f800000U & vlSelfRef.result_i)) 
                                   & (0U != (0x7fffffU 
                                             & vlSelfRef.result_i))))));
    bufp->chgBit(oldp+38,((0U != (0x1fffU & vlSelfRef.result_i))));
    bufp->chgBit(oldp+39,((IData)((0x7f800000U == (0x7fffffffU 
                                                   & vlSelfRef.result_i)))));
}

void VFP32toFP16___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root__trace_cleanup\n"); );
    // Init
    VFP32toFP16___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFP32toFP16___024root*>(voidSelf);
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
