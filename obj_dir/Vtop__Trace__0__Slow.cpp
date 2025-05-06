// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+7,"rst", false,-1);
    tracep->declBus(c+8,"op_in", false,-1, 1,0);
    tracep->declBus(c+9,"a_in", false,-1, 5,0);
    tracep->declBus(c+10,"b_in", false,-1, 5,0);
    tracep->declBit(c+11,"in_valid", false,-1);
    tracep->declBus(c+12,"out", false,-1, 5,0);
    tracep->declBit(c+13,"out_valid", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+14,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+7,"rst", false,-1);
    tracep->declBus(c+8,"op_in", false,-1, 1,0);
    tracep->declBus(c+9,"a_in", false,-1, 5,0);
    tracep->declBus(c+10,"b_in", false,-1, 5,0);
    tracep->declBit(c+11,"in_valid", false,-1);
    tracep->declBus(c+12,"out", false,-1, 5,0);
    tracep->declBit(c+13,"out_valid", false,-1);
    tracep->declBus(c+1,"op_in_r", false,-1, 1,0);
    tracep->declBus(c+2,"a_in_r", false,-1, 5,0);
    tracep->declBus(c+3,"b_in_r", false,-1, 5,0);
    tracep->declBit(c+4,"in_valid_r", false,-1);
    tracep->declBus(c+5,"result", false,-1, 5,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf, nullptr);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf, nullptr);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__op_in_r),2);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__a_in_r),6);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__b_in_r),6);
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__in_valid_r));
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__result),6);
    bufp->fullBit(oldp+6,(vlSelf->clk));
    bufp->fullBit(oldp+7,(vlSelf->rst));
    bufp->fullCData(oldp+8,(vlSelf->op_in),2);
    bufp->fullCData(oldp+9,(vlSelf->a_in),6);
    bufp->fullCData(oldp+10,(vlSelf->b_in),6);
    bufp->fullBit(oldp+11,(vlSelf->in_valid));
    bufp->fullCData(oldp+12,(vlSelf->out),6);
    bufp->fullBit(oldp+13,(vlSelf->out_valid));
    bufp->fullIData(oldp+14,(6U),32);
}
