// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu__Syms.h"


void Valu___024root__trace_chg_sub_0(Valu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Valu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_chg_top_0\n"); );
    // Init
    Valu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Valu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Valu___024root__trace_chg_sub_0(Valu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->alu__DOT__op_in_r),2);
        bufp->chgCData(oldp+1,(vlSelf->alu__DOT__a_in_r),6);
        bufp->chgCData(oldp+2,(vlSelf->alu__DOT__b_in_r),6);
        bufp->chgBit(oldp+3,(vlSelf->alu__DOT__in_valid_r));
        bufp->chgCData(oldp+4,(vlSelf->alu__DOT__result),6);
    }
    bufp->chgBit(oldp+5,(vlSelf->clk));
    bufp->chgBit(oldp+6,(vlSelf->rst));
    bufp->chgCData(oldp+7,(vlSelf->op_in),2);
    bufp->chgCData(oldp+8,(vlSelf->a_in),6);
    bufp->chgCData(oldp+9,(vlSelf->b_in),6);
    bufp->chgBit(oldp+10,(vlSelf->in_valid));
    bufp->chgCData(oldp+11,(vlSelf->out),6);
    bufp->chgBit(oldp+12,(vlSelf->out_valid));
}

void Valu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_cleanup\n"); );
    // Init
    Valu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
