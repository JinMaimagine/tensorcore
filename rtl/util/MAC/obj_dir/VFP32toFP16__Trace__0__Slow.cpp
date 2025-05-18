// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFP32toFP16__Syms.h"


VL_ATTR_COLD void VFP32toFP16___024root__trace_init_sub__TOP__0(VFP32toFP16___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root__trace_init_sub__TOP__0\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+25,0,"result_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+26,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"OF_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"UF_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"NV_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"DZ_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"NX_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+33,0,"OF_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"UF_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"NV_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"DZ_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"NX_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("FP32toFP16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+25,0,"result_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+26,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"OF_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"UF_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"NV_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"DZ_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"NX_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+33,0,"OF_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"UF_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"NV_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"DZ_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"NX_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"fp16_conv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"conv_uf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"conv_of",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"isnan_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"inexact_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"is_inf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_fp32_to_fp16_conv", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+25,0,"fp32_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"underflow_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"overflow_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"exp32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"man32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+7,0,"unbiased_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+8,0,"half_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+9,0,"fp16_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+10,0,"mant16_use_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"man24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+12,0,"rshift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+13,0,"half_man",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+14,0,"round_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"sticky",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"incr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"sum11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+18,0,"exp5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+19,0,"mant10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+20,0,"round_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"sticky",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"incr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"sum11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+24,0,"exp5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VFP32toFP16___024root__trace_init_top(VFP32toFP16___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root__trace_init_top\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VFP32toFP16___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VFP32toFP16___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VFP32toFP16___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VFP32toFP16___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VFP32toFP16___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VFP32toFP16___024root__trace_register(VFP32toFP16___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root__trace_register\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VFP32toFP16___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VFP32toFP16___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VFP32toFP16___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VFP32toFP16___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VFP32toFP16___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root__trace_const_0\n"); );
    // Init
    VFP32toFP16___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFP32toFP16___024root*>(voidSelf);
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VFP32toFP16___024root__trace_full_0_sub_0(VFP32toFP16___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VFP32toFP16___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root__trace_full_0\n"); );
    // Init
    VFP32toFP16___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFP32toFP16___024root*>(voidSelf);
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VFP32toFP16___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VFP32toFP16___024root__trace_full_0_sub_0(VFP32toFP16___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFP32toFP16___024root__trace_full_0_sub_0\n"); );
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.FP32toFP16__DOT__fp16_conv),32);
    bufp->fullBit(oldp+2,(vlSelfRef.FP32toFP16__DOT__conv_uf));
    bufp->fullBit(oldp+3,(vlSelfRef.FP32toFP16__DOT__conv_of));
    bufp->fullBit(oldp+4,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__sign));
    bufp->fullCData(oldp+5,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__exp32),8);
    bufp->fullIData(oldp+6,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__man32),23);
    bufp->fullSData(oldp+7,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unbiased_exp),9);
    bufp->fullSData(oldp+8,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__half_exp),9);
    bufp->fullSData(oldp+9,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__fp16_tmp),16);
    bufp->fullSData(oldp+10,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__mant16_use_tmp),10);
    bufp->fullIData(oldp+11,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__man24),24);
    bufp->fullIData(oldp+12,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__rshift),32);
    bufp->fullSData(oldp+13,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__half_man),11);
    bufp->fullBit(oldp+14,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__round_bit));
    bufp->fullBit(oldp+15,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__sticky));
    bufp->fullBit(oldp+16,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__incr));
    bufp->fullSData(oldp+17,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__sum11),11);
    bufp->fullCData(oldp+18,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk1__DOT__exp5),5);
    bufp->fullSData(oldp+19,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__mant10),10);
    bufp->fullBit(oldp+20,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__round_bit));
    bufp->fullBit(oldp+21,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__sticky));
    bufp->fullBit(oldp+22,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__incr));
    bufp->fullSData(oldp+23,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__sum11),11);
    bufp->fullCData(oldp+24,(vlSelfRef.FP32toFP16__DOT__u_fp32_to_fp16_conv__DOT__unnamedblk2__DOT__exp5),8);
    bufp->fullIData(oldp+25,(vlSelfRef.result_i),32);
    bufp->fullBit(oldp+26,(vlSelfRef.mode));
    bufp->fullBit(oldp+27,(vlSelfRef.OF_in));
    bufp->fullBit(oldp+28,(vlSelfRef.UF_in));
    bufp->fullBit(oldp+29,(vlSelfRef.NV_in));
    bufp->fullBit(oldp+30,(vlSelfRef.DZ_in));
    bufp->fullBit(oldp+31,(vlSelfRef.NX_in));
    bufp->fullIData(oldp+32,(vlSelfRef.result_o),32);
    bufp->fullBit(oldp+33,(vlSelfRef.OF_out));
    bufp->fullBit(oldp+34,(vlSelfRef.UF_out));
    bufp->fullBit(oldp+35,(vlSelfRef.NV_out));
    bufp->fullBit(oldp+36,(vlSelfRef.DZ_out));
    bufp->fullBit(oldp+37,(vlSelfRef.NX_out));
    bufp->fullBit(oldp+38,((IData)(((0x7f800000U == 
                                     (0x7f800000U & vlSelfRef.result_i)) 
                                    & (0U != (0x7fffffU 
                                              & vlSelfRef.result_i))))));
    bufp->fullBit(oldp+39,((0U != (0x1fffU & vlSelfRef.result_i))));
    bufp->fullBit(oldp+40,((IData)((0x7f800000U == 
                                    (0x7fffffffU & vlSelfRef.result_i)))));
}
