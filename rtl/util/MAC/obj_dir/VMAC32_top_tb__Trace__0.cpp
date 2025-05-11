// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMAC32_top_tb__Syms.h"


void VMAC32_top_tb___024root__trace_chg_0_sub_0(VMAC32_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void VMAC32_top_tb___024root__trace_chg_0_sub_1(VMAC32_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VMAC32_top_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root__trace_chg_0\n"); );
    // Init
    VMAC32_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMAC32_top_tb___024root*>(voidSelf);
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMAC32_top_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
    VMAC32_top_tb___024root__trace_chg_0_sub_1((&vlSymsp->TOP), bufp);
}

void VMAC32_top_tb___024root__trace_chg_0_sub_0(VMAC32_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC32_top_tb___024root__trace_chg_0_sub_0\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Adder_sign));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgCData(oldp+1,(vlSelfRef.MAC32_top_tb__DOT__fp_mode),2);
        bufp->chgCData(oldp+2,(vlSelfRef.MAC32_top_tb__DOT__Rounding_mode_i),3);
        bufp->chgIData(oldp+3,(vlSelfRef.MAC32_top_tb__DOT__A_i),32);
        bufp->chgIData(oldp+4,(vlSelfRef.MAC32_top_tb__DOT__B_i),32);
        bufp->chgIData(oldp+5,(vlSelfRef.MAC32_top_tb__DOT__C_i),32);
        bufp->chgIData(oldp+6,(vlSelfRef.MAC32_top_tb__DOT__vec_cnt),32);
        bufp->chgSData(oldp+7,((0xffffU & vlSelfRef.MAC32_top_tb__DOT__A_i)),16);
        bufp->chgBit(oldp+8,((1U & (vlSelfRef.MAC32_top_tb__DOT__A_i 
                                    >> 0xfU))));
        bufp->chgCData(oldp+9,((0x1fU & (vlSelfRef.MAC32_top_tb__DOT__A_i 
                                         >> 0xaU))),5);
        bufp->chgSData(oldp+10,((0x3ffU & vlSelfRef.MAC32_top_tb__DOT__A_i)),10);
        bufp->chgCData(oldp+11,((((0x80U & (vlSelfRef.MAC32_top_tb__DOT__A_i 
                                            >> 7U)) 
                                  | (0x40U & ((~ (vlSelfRef.MAC32_top_tb__DOT__A_i 
                                                  >> 0xeU)) 
                                              << 6U))) 
                                 | ((0x20U & ((~ (vlSelfRef.MAC32_top_tb__DOT__A_i 
                                                  >> 0xeU)) 
                                              << 5U)) 
                                    | ((0x10U & ((~ 
                                                  (vlSelfRef.MAC32_top_tb__DOT__A_i 
                                                   >> 0xeU)) 
                                                 << 4U)) 
                                       | (0xfU & (vlSelfRef.MAC32_top_tb__DOT__A_i 
                                                  >> 0xaU)))))),8);
        bufp->chgCData(oldp+12,((0x1fU & (vlSelfRef.MAC32_top_tb__DOT__A_i 
                                          >> 0xaU))),8);
        bufp->chgSData(oldp+13,(((0x80U & (vlSelfRef.MAC32_top_tb__DOT__A_i 
                                           >> 7U)) 
                                 | ((0x40U & (vlSelfRef.MAC32_top_tb__DOT__A_i 
                                              >> 8U)) 
                                    | (0x20U & (vlSelfRef.MAC32_top_tb__DOT__A_i 
                                                >> 9U))))),9);
        bufp->chgSData(oldp+14,((0xffffU & vlSelfRef.MAC32_top_tb__DOT__B_i)),16);
        bufp->chgBit(oldp+15,((1U & (vlSelfRef.MAC32_top_tb__DOT__B_i 
                                     >> 0xfU))));
        bufp->chgCData(oldp+16,((0x1fU & (vlSelfRef.MAC32_top_tb__DOT__B_i 
                                          >> 0xaU))),5);
        bufp->chgSData(oldp+17,((0x3ffU & vlSelfRef.MAC32_top_tb__DOT__B_i)),10);
        bufp->chgCData(oldp+18,((((0x80U & (vlSelfRef.MAC32_top_tb__DOT__B_i 
                                            >> 7U)) 
                                  | (0x40U & ((~ (vlSelfRef.MAC32_top_tb__DOT__B_i 
                                                  >> 0xeU)) 
                                              << 6U))) 
                                 | ((0x20U & ((~ (vlSelfRef.MAC32_top_tb__DOT__B_i 
                                                  >> 0xeU)) 
                                              << 5U)) 
                                    | ((0x10U & ((~ 
                                                  (vlSelfRef.MAC32_top_tb__DOT__B_i 
                                                   >> 0xeU)) 
                                                 << 4U)) 
                                       | (0xfU & (vlSelfRef.MAC32_top_tb__DOT__B_i 
                                                  >> 0xaU)))))),8);
        bufp->chgCData(oldp+19,((0x1fU & (vlSelfRef.MAC32_top_tb__DOT__B_i 
                                          >> 0xaU))),8);
        bufp->chgSData(oldp+20,(((0x80U & (vlSelfRef.MAC32_top_tb__DOT__B_i 
                                           >> 7U)) 
                                 | ((0x40U & (vlSelfRef.MAC32_top_tb__DOT__B_i 
                                              >> 8U)) 
                                    | (0x20U & (vlSelfRef.MAC32_top_tb__DOT__B_i 
                                                >> 9U))))),9);
        bufp->chgSData(oldp+21,((0xffffU & vlSelfRef.MAC32_top_tb__DOT__C_i)),16);
        bufp->chgBit(oldp+22,((1U & (vlSelfRef.MAC32_top_tb__DOT__C_i 
                                     >> 0xfU))));
        bufp->chgCData(oldp+23,((0x1fU & (vlSelfRef.MAC32_top_tb__DOT__C_i 
                                          >> 0xaU))),5);
        bufp->chgSData(oldp+24,((0x3ffU & vlSelfRef.MAC32_top_tb__DOT__C_i)),10);
        bufp->chgCData(oldp+25,((((0x80U & (vlSelfRef.MAC32_top_tb__DOT__C_i 
                                            >> 7U)) 
                                  | (0x40U & ((~ (vlSelfRef.MAC32_top_tb__DOT__C_i 
                                                  >> 0xeU)) 
                                              << 6U))) 
                                 | ((0x20U & ((~ (vlSelfRef.MAC32_top_tb__DOT__C_i 
                                                  >> 0xeU)) 
                                              << 5U)) 
                                    | ((0x10U & ((~ 
                                                  (vlSelfRef.MAC32_top_tb__DOT__C_i 
                                                   >> 0xeU)) 
                                                 << 4U)) 
                                       | (0xfU & (vlSelfRef.MAC32_top_tb__DOT__C_i 
                                                  >> 0xaU)))))),8);
        bufp->chgCData(oldp+26,((0x1fU & (vlSelfRef.MAC32_top_tb__DOT__C_i 
                                          >> 0xaU))),8);
        bufp->chgSData(oldp+27,(((0x80U & (vlSelfRef.MAC32_top_tb__DOT__C_i 
                                           >> 7U)) 
                                 | ((0x40U & (vlSelfRef.MAC32_top_tb__DOT__C_i 
                                              >> 8U)) 
                                    | (0x20U & (vlSelfRef.MAC32_top_tb__DOT__C_i 
                                                >> 9U))))),9);
        bufp->chgDouble(oldp+28,(vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_2__DOT__unnamedblk2__DOT__a));
        bufp->chgDouble(oldp+30,(vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_2__DOT__unnamedblk2__DOT__b));
        bufp->chgDouble(oldp+32,(vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_2__DOT__unnamedblk2__DOT__c));
        bufp->chgDouble(oldp+34,(vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_3__DOT__unnamedblk3__DOT__a));
        bufp->chgDouble(oldp+36,(vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_3__DOT__unnamedblk3__DOT__b));
        bufp->chgDouble(oldp+38,(vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_3__DOT__unnamedblk3__DOT__c));
        bufp->chgDouble(oldp+40,(vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_4__DOT__unnamedblk4__DOT__aP));
        bufp->chgDouble(oldp+42,(vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_4__DOT__unnamedblk4__DOT__b));
        bufp->chgDouble(oldp+44,(vlSelfRef.MAC32_top_tb__DOT__unnamedblk1_4__DOT__unnamedblk4__DOT__c));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgIData(oldp+46,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_i_fp32),32);
        bufp->chgIData(oldp+47,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_i_fp32),32);
        bufp->chgIData(oldp+48,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_i_fp32),32);
        bufp->chgIData(oldp+49,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_true_input),32);
        bufp->chgIData(oldp+50,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_true_input),32);
        bufp->chgIData(oldp+51,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_true_input),32);
        bufp->chgCData(oldp+52,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc),4);
        bufp->chgCData(oldp+53,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__shift),4);
        bufp->chgBit(oldp+54,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc) 
                                >> 3U) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_add1__DOT__C__BRA__3__KET__))));
        bufp->chgCData(oldp+55,(((((0x80U & (0x80U 
                                             ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__) 
                                                << 7U))) 
                                   | (0x40U & ((~ (1U 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__6__KET__))) 
                                               << 6U))) 
                                  | ((0x20U & ((~ (1U 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__5__KET__))) 
                                               << 5U)) 
                                     | (0x10U & ((~ 
                                                  (1U 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__4__KET__))) 
                                                 << 4U)))) 
                                 | ((((1U ^ (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__shift) 
                                              >> 3U) 
                                             ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__))) 
                                      << 3U) | (4U 
                                                & (VL_REDXOR_4(
                                                               (6U 
                                                                & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__shift))) 
                                                   << 2U))) 
                                    | ((2U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__shift)) 
                                       | (1U & (~ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__shift))))))),8);
        bufp->chgCData(oldp+56,((((0xfffffff0U & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_add1__DOT__C__BRA__3__KET__) 
                                                     << 4U))) 
                                  | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_add1__DOT__C__BRA__3__KET__) 
                                      << 3U) | ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_add1__DOT__C__BRA__2__KET__) 
                                                << 2U))) 
                                 | (2U & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__lzc) 
                                          << 1U)))),5);
        bufp->chgCData(oldp+57,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__shift),8);
        bufp->chgBit(oldp+58,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__));
        bufp->chgCData(oldp+59,((0xffU & (~ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__shift)))),8);
        bufp->chgSData(oldp+60,((3U | (((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__) 
                                          << 8U) | 
                                         (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__) 
                                           << 7U) | 
                                          ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__6__KET__) 
                                           << 6U))) 
                                        | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__5__KET__) 
                                            << 5U) 
                                           | ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__4__KET__) 
                                              << 4U))) 
                                       | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__) 
                                           << 3U) | 
                                          (4U & ((~ 
                                                  ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__shift) 
                                                   >> 1U)) 
                                                 << 2U)))))),9);
        bufp->chgIData(oldp+61,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_0__DOT__unnamedblk1__DOT__sig24),24);
        bufp->chgCData(oldp+62,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc),4);
        bufp->chgCData(oldp+63,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__shift),4);
        bufp->chgBit(oldp+64,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc) 
                                >> 3U) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_add1__DOT__C__BRA__3__KET__))));
        bufp->chgCData(oldp+65,(((((0x80U & (0x80U 
                                             ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__) 
                                                << 7U))) 
                                   | (0x40U & ((~ (1U 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__6__KET__))) 
                                               << 6U))) 
                                  | ((0x20U & ((~ (1U 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__5__KET__))) 
                                               << 5U)) 
                                     | (0x10U & ((~ 
                                                  (1U 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__4__KET__))) 
                                                 << 4U)))) 
                                 | ((((1U ^ (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__shift) 
                                              >> 3U) 
                                             ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__))) 
                                      << 3U) | (4U 
                                                & (VL_REDXOR_4(
                                                               (6U 
                                                                & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__shift))) 
                                                   << 2U))) 
                                    | ((2U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__shift)) 
                                       | (1U & (~ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__shift))))))),8);
        bufp->chgCData(oldp+66,((((0xfffffff0U & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_add1__DOT__C__BRA__3__KET__) 
                                                     << 4U))) 
                                  | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_add1__DOT__C__BRA__3__KET__) 
                                      << 3U) | ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_add1__DOT__C__BRA__2__KET__) 
                                                << 2U))) 
                                 | (2U & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__lzc) 
                                          << 1U)))),5);
        bufp->chgCData(oldp+67,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__shift),8);
        bufp->chgBit(oldp+68,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__));
        bufp->chgCData(oldp+69,((0xffU & (~ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__shift)))),8);
        bufp->chgSData(oldp+70,((3U | (((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__) 
                                          << 8U) | 
                                         (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__) 
                                           << 7U) | 
                                          ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__6__KET__) 
                                           << 6U))) 
                                        | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__5__KET__) 
                                            << 5U) 
                                           | ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__4__KET__) 
                                              << 4U))) 
                                       | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__) 
                                           << 3U) | 
                                          (4U & ((~ 
                                                  ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__shift) 
                                                   >> 1U)) 
                                                 << 2U)))))),9);
        bufp->chgIData(oldp+71,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_1__DOT__unnamedblk1__DOT__sig24),24);
        bufp->chgCData(oldp+72,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc),4);
        bufp->chgCData(oldp+73,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__shift),4);
        bufp->chgBit(oldp+74,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc) 
                                >> 3U) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_add1__DOT__C__BRA__3__KET__))));
        bufp->chgCData(oldp+75,(((((0x80U & (0x80U 
                                             ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__) 
                                                << 7U))) 
                                   | (0x40U & ((~ (1U 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__6__KET__))) 
                                               << 6U))) 
                                  | ((0x20U & ((~ (1U 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__5__KET__))) 
                                               << 5U)) 
                                     | (0x10U & ((~ 
                                                  (1U 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__4__KET__))) 
                                                 << 4U)))) 
                                 | ((((1U ^ (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__shift) 
                                              >> 3U) 
                                             ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__))) 
                                      << 3U) | (4U 
                                                & (VL_REDXOR_4(
                                                               (6U 
                                                                & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__shift))) 
                                                   << 2U))) 
                                    | ((2U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__shift)) 
                                       | (1U & (~ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__shift))))))),8);
        bufp->chgCData(oldp+76,((((0xfffffff0U & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_add1__DOT__C__BRA__3__KET__) 
                                                     << 4U))) 
                                  | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_add1__DOT__C__BRA__3__KET__) 
                                      << 3U) | ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_add1__DOT__C__BRA__2__KET__) 
                                                << 2U))) 
                                 | (2U & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__lzc) 
                                          << 1U)))),5);
        bufp->chgCData(oldp+77,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__shift),8);
        bufp->chgBit(oldp+78,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__));
        bufp->chgCData(oldp+79,((0xffU & (~ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__shift)))),8);
        bufp->chgSData(oldp+80,((3U | (((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__) 
                                          << 8U) | 
                                         (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__7__KET__) 
                                           << 7U) | 
                                          ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__6__KET__) 
                                           << 6U))) 
                                        | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__5__KET__) 
                                            << 5U) 
                                           | ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__4__KET__) 
                                              << 4U))) 
                                       | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__u_sub113__DOT__u_sub__DOT__C__BRA__3__KET__) 
                                           << 3U) | 
                                          (4U & ((~ 
                                                  ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__shift) 
                                                   >> 1U)) 
                                                 << 2U)))))),9);
        bufp->chgIData(oldp+81,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp16_to_fp32_2__DOT__unnamedblk1__DOT__sig24),24);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+82,((1U & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__flags_reg2) 
                                      >> 3U) | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__fp32_to_fp16_conv_overflow)))));
        bufp->chgBit(oldp+83,((1U & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__flags_reg2) 
                                      >> 2U) | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__fp32_to_fp16_conv_underflow)))));
        bufp->chgBit(oldp+84,((1U & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__flags_reg2) 
                                     >> 1U))));
        bufp->chgBit(oldp+85,((1U & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__flags_reg2) 
                                     >> 4U))));
        bufp->chgIData(oldp+86,(vlSelfRef.MAC32_top_tb__DOT__err_cnt),32);
        bufp->chgIData(oldp+87,(vlSelfRef.MAC32_top_tb__DOT__cycle),32);
        bufp->chgIData(oldp+88,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1),32);
        bufp->chgIData(oldp+89,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1),32);
        bufp->chgIData(oldp+90,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1),32);
        bufp->chgCData(oldp+91,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__rm_reg1),3);
        bufp->chgWData(oldp+92,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1),155);
        bufp->chgWData(oldp+97,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__bus),155);
        bufp->chgIData(oldp+102,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2),32);
        bufp->chgCData(oldp+103,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__flags_reg2),5);
        bufp->chgIData(oldp+104,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Sign_result) 
                                   << 0x1fU) | vlSelfRef.__VdfgRegularize_h6171c202_6_0)),32);
        bufp->chgCData(oldp+105,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__ffs),5);
        bufp->chgBit(oldp+106,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__fp32_to_fp16_conv_underflow));
        bufp->chgBit(oldp+107,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__fp32_to_fp16_conv_overflow));
        bufp->chgSData(oldp+108,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__fp32_to_fp16_conv_result),16);
        bufp->chgBit(oldp+109,((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                >> 0x1fU)));
        bufp->chgCData(oldp+110,((0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+111,((0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2)),23);
        bufp->chgCData(oldp+112,(((0x80U & (((~ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_sub112__DOT__u_sub__DOT__C__BRA__7__KET__)) 
                                             << 7U) 
                                            ^ (0x180U 
                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                                  >> 0x17U)))) 
                                  | ((0x40U & ((0x1c0U 
                                                & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                                   >> 0x17U)) 
                                               ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_sub112__DOT__u_sub__DOT__C__BRA__6__KET__) 
                                                  << 6U))) 
                                     | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__exp_adj)))),8);
        bufp->chgCData(oldp+113,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__exp_adj),6);
        bufp->chgBit(oldp+114,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                      >> 0xcU))));
        bufp->chgBit(oldp+115,((0U != (0xfffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2))));
        bufp->chgBit(oldp+116,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__incr));
        bufp->chgSData(oldp+117,((0x3ffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                            >> 0xdU))),11);
        bufp->chgSData(oldp+118,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__rnd_sum),11);
        bufp->chgCData(oldp+119,((((0x10U & (((~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                                  >> 0x1bU)) 
                                              ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_inc_exp__DOT__C__BRA__4__KET__)) 
                                             << 4U)) 
                                   | ((8U & ((0x1f8U 
                                              & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                                 >> 0x17U)) 
                                             ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_inc_exp__DOT__C__BRA__3__KET__) 
                                                << 3U))) 
                                      | (4U & ((0x1fcU 
                                                & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                                   >> 0x17U)) 
                                               ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_inc_exp__DOT__C__BRA__2__KET__) 
                                                  << 2U))))) 
                                  | ((2U & (VL_REDXOR_32(
                                                         (0x1800000U 
                                                          & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2)) 
                                            << 1U)) 
                                     | (1U & (~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                                 >> 0x17U)))))),5);
        bufp->chgBit(oldp+120,(((~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                    >> 0x1bU)) & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_inc_exp__DOT__C__BRA__4__KET__))));
        bufp->chgSData(oldp+121,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__incr),11);
        bufp->chgSData(oldp+122,((((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__10__KET__) 
                                     << 0xaU) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__9__KET__) 
                                                  << 9U) 
                                                 | ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__8__KET__) 
                                                    << 8U))) 
                                   | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__7__KET__) 
                                       << 7U) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__6__KET__) 
                                                  << 6U) 
                                                 | ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__5__KET__) 
                                                    << 5U)))) 
                                  | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__4__KET__) 
                                       << 4U) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__3__KET__) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__2__KET__) 
                                                    << 2U))) 
                                     | ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_add_rnd__DOT__C__BRA__1__KET__) 
                                        << 1U)))),12);
        bufp->chgCData(oldp+123,(((0x10U & ((~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                                >> 0x1bU)) 
                                            << 4U)) 
                                  | (0xfU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                             >> 0x17U)))),5);
        bufp->chgCData(oldp+124,((((((~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                         >> 0x1bU)) 
                                     & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_inc_exp__DOT__C__BRA__4__KET__)) 
                                    << 5U) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_inc_exp__DOT__C__BRA__4__KET__) 
                                               << 4U) 
                                              | ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_inc_exp__DOT__C__BRA__3__KET__) 
                                                 << 3U))) 
                                  | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_inc_exp__DOT__C__BRA__2__KET__) 
                                      << 2U) | (2U 
                                                & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                                   >> 0x16U))))),6);
        bufp->chgBit(oldp+125,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                       >> 0x1eU) | 
                                      (((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                         >> 0x1eU) 
                                        & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_sub112__DOT__u_sub__DOT__C__BRA__7__KET__)) 
                                       | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_sub112__DOT__u_sub__DOT__C__BRA__7__KET__))))));
        bufp->chgSData(oldp+126,((0x1fU | (((0x100U 
                                             & ((0x300U 
                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                                    >> 0x16U)) 
                                                | ((0x300U 
                                                    & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                                        >> 0x16U) 
                                                       & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_sub112__DOT__u_sub__DOT__C__BRA__7__KET__) 
                                                          << 8U))) 
                                                   | ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_sub112__DOT__u_sub__DOT__C__BRA__7__KET__) 
                                                      << 8U)))) 
                                            | ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_sub112__DOT__u_sub__DOT__C__BRA__7__KET__) 
                                               << 7U)) 
                                           | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_fp32_to_fp16__DOT__u_sub112__DOT__u_sub__DOT__C__BRA__6__KET__) 
                                               << 6U) 
                                              | (0x20U 
                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__result32_reg2 
                                                    >> 0x16U)))))),9);
        bufp->chgBit(oldp+127,((IData)((0x7f800000U 
                                        == (0x7fffffffU 
                                            & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1)))));
        bufp->chgBit(oldp+128,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Inf));
        bufp->chgBit(oldp+129,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__C_Inf));
        bufp->chgBit(oldp+130,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Zero));
        bufp->chgBit(oldp+131,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Zero));
        bufp->chgBit(oldp+132,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__C_Zero));
        bufp->chgBit(oldp+133,((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1))))));
        bufp->chgBit(oldp+134,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_NaN));
        bufp->chgBit(oldp+135,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__C_NaN));
        bufp->chgBit(oldp+136,(((~ (IData)((0U != (0xffU 
                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1 
                                                      >> 0x17U))))) 
                                & (0U != (0x7fffffU 
                                          & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1)))));
        bufp->chgBit(oldp+137,(((~ (IData)((0U != (0xffU 
                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1 
                                                      >> 0x17U))))) 
                                & (0U != (0x7fffffU 
                                          & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1)))));
        bufp->chgBit(oldp+138,(((~ (IData)((0U != (0xffU 
                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                      >> 0x17U))))) 
                                & (0U != (0x7fffffU 
                                          & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1)))));
        bufp->chgBit(oldp+139,((0U != (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+140,((0U != (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+141,((0U != (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+142,((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1 
                                >> 0x1fU)));
        bufp->chgBit(oldp+143,((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1 
                                >> 0x1fU)));
        bufp->chgBit(oldp+144,((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                >> 0x1fU)));
        bufp->chgBit(oldp+145,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Sub_Sign));
        bufp->chgCData(oldp+146,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Exp),8);
        bufp->chgCData(oldp+147,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Exp),8);
        bufp->chgCData(oldp+148,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__C_Exp),8);
        bufp->chgIData(oldp+149,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant),24);
        bufp->chgIData(oldp+150,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Mant),24);
        bufp->chgIData(oldp+151,((((IData)((0U != (0xffU 
                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                      >> 0x17U)))) 
                                   << 0x17U) | (0x7fffffU 
                                                & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1))),24);
        bufp->chgQData(oldp+152,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP[0]),49);
        bufp->chgQData(oldp+154,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP[1]),49);
        bufp->chgQData(oldp+156,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP[2]),49);
        bufp->chgQData(oldp+158,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP[3]),49);
        bufp->chgQData(oldp+160,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP[4]),49);
        bufp->chgQData(oldp+162,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP[5]),49);
        bufp->chgQData(oldp+164,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP[6]),49);
        bufp->chgQData(oldp+166,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP[7]),49);
        bufp->chgQData(oldp+168,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP[8]),49);
        bufp->chgQData(oldp+170,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP[9]),49);
        bufp->chgQData(oldp+172,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP[10]),49);
        bufp->chgQData(oldp+174,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP[11]),49);
        bufp->chgQData(oldp+176,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP_13),48);
        bufp->chgQData(oldp+178,(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o),49);
        bufp->chgQData(oldp+180,(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o),49);
        bufp->chgBit(oldp+182,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32.Carry_o 
                                               >> 0x30U)) 
                                      | ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1.Carry_o 
                                                  >> 0x30U)) 
                                         | ((IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0.Carry_o 
                                                     >> 0x30U)) 
                                            | ((IData)(
                                                       (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_2.Carry_o 
                                                        >> 0x30U)) 
                                               | ((IData)(
                                                          (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1.Carry_o 
                                                           >> 0x30U)) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0.Carry_o 
                                                              >> 0x30U)) 
                                                     | (IData)(
                                                               (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3.Carry_o 
                                                                >> 0x30U)))))))))));
        bufp->chgSData(oldp+183,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv),10);
        bufp->chgBit(oldp+184,((1U & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                                      >> 9U))));
        bufp->chgBit(oldp+185,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Mv_halt));
        bufp->chgWData(oldp+186,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned),75);
        bufp->chgSData(oldp+189,((0x3ffU & ((0x200U 
                                             & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv))
                                             ? (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Exp)
                                             : ((IData)(0x1bU) 
                                                + (
                                                   ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__B_Exp) 
                                                    + (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__C_Exp)) 
                                                   - (IData)(0x7fU)))))),10);
        bufp->chgBit(oldp+190,((1U & ((0x200U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv))
                                       ? (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1 
                                          >> 0x1fU)
                                       : (IData)(vlSelfRef.__VdfgRegularize_h6171c202_5_0)))));
        bufp->chgBit(oldp+191,(((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Sub_Sign)
                                 ? ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Mv_halt)
                                     ? (0U != (0xffffffU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant))))
                                     : (0U != (0xffffffU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ 
                                                   vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0[0U])))))
                                 : ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Mv_halt)
                                     ? (0U != vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant)
                                     : (0U != (0xffffffU 
                                               & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0[0U]))))));
        bufp->chgQData(oldp+192,(((0x200U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv))
                                   ? 0ULL : vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o)),49);
        bufp->chgQData(oldp+194,(((0x200U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv))
                                   ? 0ULL : vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o)),49);
        bufp->chgQData(oldp+196,((((QData)((IData)(
                                                   ((((((0x80000000U 
                                                         & ((0x80000000U 
                                                             & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                << 0x10U)) 
                                                            ^ 
                                                            (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__47__KET____DOT__FA__addend_i) 
                                                              ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__47__KET____DOT__FA__carry_i)) 
                                                             << 0x1fU))) 
                                                        | (0x40000000U 
                                                           & ((0xc0000000U 
                                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                  << 0x10U)) 
                                                              ^ 
                                                              (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__46__KET____DOT__FA__addend_i) 
                                                                ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__46__KET____DOT__FA__carry_i)) 
                                                               << 0x1eU)))) 
                                                       | ((0x20000000U 
                                                           & ((0xe0000000U 
                                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                  << 0x10U)) 
                                                              ^ 
                                                              (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__45__KET____DOT__FA__addend_i) 
                                                                ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__45__KET____DOT__FA__carry_i)) 
                                                               << 0x1dU))) 
                                                          | (0x10000000U 
                                                             & ((0xf0000000U 
                                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                    << 0x10U)) 
                                                                ^ 
                                                                (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__44__KET____DOT__FA__addend_i) 
                                                                  ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__44__KET____DOT__FA__carry_i)) 
                                                                 << 0x1cU))))) 
                                                      | (((0x8000000U 
                                                           & ((0xf8000000U 
                                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                  << 0x10U)) 
                                                              ^ 
                                                              (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__43__KET____DOT__FA__addend_i) 
                                                                ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__43__KET____DOT__FA__carry_i)) 
                                                               << 0x1bU))) 
                                                          | (0x4000000U 
                                                             & ((0xfc000000U 
                                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                    << 0x10U)) 
                                                                ^ 
                                                                (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__42__KET____DOT__FA__addend_i) 
                                                                  ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__42__KET____DOT__FA__carry_i)) 
                                                                 << 0x1aU)))) 
                                                         | ((0x2000000U 
                                                             & ((0xfe000000U 
                                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                    << 0x10U)) 
                                                                ^ 
                                                                (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__41__KET____DOT__FA__addend_i) 
                                                                  ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__41__KET____DOT__FA__carry_i)) 
                                                                 << 0x19U))) 
                                                            | (0x1000000U 
                                                               & ((0xff000000U 
                                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                      << 0x10U)) 
                                                                  ^ 
                                                                  (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__40__KET____DOT__FA__addend_i) 
                                                                    ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__40__KET____DOT__FA__carry_i)) 
                                                                   << 0x18U)))))) 
                                                     | ((((0x800000U 
                                                           & ((0xff800000U 
                                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                  << 0x10U)) 
                                                              ^ 
                                                              (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__39__KET____DOT__FA__addend_i) 
                                                                ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__39__KET____DOT__FA__carry_i)) 
                                                               << 0x17U))) 
                                                          | (0x400000U 
                                                             & ((0xffc00000U 
                                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                    << 0x10U)) 
                                                                ^ 
                                                                (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__38__KET____DOT__FA__addend_i) 
                                                                  ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__38__KET____DOT__FA__carry_i)) 
                                                                 << 0x16U)))) 
                                                         | ((0x200000U 
                                                             & ((0xffe00000U 
                                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                    << 0x10U)) 
                                                                ^ 
                                                                (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__37__KET____DOT__FA__addend_i) 
                                                                  ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__37__KET____DOT__FA__carry_i)) 
                                                                 << 0x15U))) 
                                                            | (0x100000U 
                                                               & ((0xfff00000U 
                                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                      << 0x10U)) 
                                                                  ^ 
                                                                  (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__36__KET____DOT__FA__addend_i) 
                                                                    ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__36__KET____DOT__FA__carry_i)) 
                                                                   << 0x14U))))) 
                                                        | (((0x80000U 
                                                             & ((0xfff80000U 
                                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                    << 0x10U)) 
                                                                ^ 
                                                                (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__35__KET____DOT__FA__addend_i) 
                                                                  ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__35__KET____DOT__FA__carry_i)) 
                                                                 << 0x13U))) 
                                                            | (0x40000U 
                                                               & ((0xfffc0000U 
                                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                      << 0x10U)) 
                                                                  ^ 
                                                                  (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__34__KET____DOT__FA__addend_i) 
                                                                    ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__34__KET____DOT__FA__carry_i)) 
                                                                   << 0x12U)))) 
                                                           | ((0x20000U 
                                                               & ((0xfffe0000U 
                                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                      << 0x10U)) 
                                                                  ^ 
                                                                  (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__33__KET____DOT__FA__addend_i) 
                                                                    ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__33__KET____DOT__FA__carry_i)) 
                                                                   << 0x11U))) 
                                                              | (0x10000U 
                                                                 & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                     ^ 
                                                                     ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__32__KET____DOT__FA__addend_i) 
                                                                      ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__32__KET____DOT__FA__carry_i))) 
                                                                    << 0x10U)))))) 
                                                    | (((((((0x8000U 
                                                             & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                >> 0x10U)) 
                                                            ^ 
                                                            ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__FA__addend_i) 
                                                             << 0xfU)) 
                                                           ^ 
                                                           ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__FA__carry_i) 
                                                            << 0xfU)) 
                                                          | (0x4000U 
                                                             & ((0xc000U 
                                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                    >> 0x10U)) 
                                                                ^ 
                                                                (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__FA__addend_i) 
                                                                  ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__FA__carry_i)) 
                                                                 << 0xeU)))) 
                                                         | ((0x2000U 
                                                             & ((0xe000U 
                                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                    >> 0x10U)) 
                                                                ^ 
                                                                (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__FA__addend_i) 
                                                                  ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__FA__carry_i)) 
                                                                 << 0xdU))) 
                                                            | (0x1000U 
                                                               & ((0xf000U 
                                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                      >> 0x10U)) 
                                                                  ^ 
                                                                  (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__FA__addend_i) 
                                                                    ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__FA__carry_i)) 
                                                                   << 0xcU))))) 
                                                        | (((0x800U 
                                                             & ((0xf800U 
                                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                    >> 0x10U)) 
                                                                ^ 
                                                                (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__FA__addend_i) 
                                                                  ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__FA__carry_i)) 
                                                                 << 0xbU))) 
                                                            | (0x400U 
                                                               & ((0xfc00U 
                                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                      >> 0x10U)) 
                                                                  ^ 
                                                                  (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__FA__addend_i) 
                                                                    ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__FA__carry_i)) 
                                                                   << 0xaU)))) 
                                                           | ((0x200U 
                                                               & ((0xfe00U 
                                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                      >> 0x10U)) 
                                                                  ^ 
                                                                  (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__FA__addend_i) 
                                                                    ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__FA__carry_i)) 
                                                                   << 9U))) 
                                                              | (0x100U 
                                                                 & ((0xff00U 
                                                                     & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                        >> 0x10U)) 
                                                                    ^ 
                                                                    (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__FA__addend_i) 
                                                                      ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__FA__carry_i)) 
                                                                     << 8U)))))) 
                                                       | ((((0x80U 
                                                             & ((0xff80U 
                                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                    >> 0x10U)) 
                                                                ^ 
                                                                (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__FA__addend_i) 
                                                                  ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__FA__carry_i)) 
                                                                 << 7U))) 
                                                            | (0x40U 
                                                               & ((0xffc0U 
                                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                      >> 0x10U)) 
                                                                  ^ 
                                                                  (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__FA__addend_i) 
                                                                    ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__FA__carry_i)) 
                                                                   << 6U)))) 
                                                           | ((0x20U 
                                                               & ((0xffe0U 
                                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                      >> 0x10U)) 
                                                                  ^ 
                                                                  (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__FA__addend_i) 
                                                                    ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__FA__carry_i)) 
                                                                   << 5U))) 
                                                              | (0x10U 
                                                                 & ((0xfff0U 
                                                                     & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                        >> 0x10U)) 
                                                                    ^ 
                                                                    (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__FA__addend_i) 
                                                                      ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__FA__carry_i)) 
                                                                     << 4U))))) 
                                                          | (((8U 
                                                               & ((0xfff8U 
                                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                      >> 0x10U)) 
                                                                  ^ 
                                                                  (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__FA__addend_i) 
                                                                    ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__FA__carry_i)) 
                                                                   << 3U))) 
                                                              | (4U 
                                                                 & ((0xfffcU 
                                                                     & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                        >> 0x10U)) 
                                                                    ^ 
                                                                    (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__FA__addend_i) 
                                                                      ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__FA__carry_i)) 
                                                                     << 2U)))) 
                                                             | ((2U 
                                                                 & ((0xfffeU 
                                                                     & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                        >> 0x10U)) 
                                                                    ^ 
                                                                    (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__FA__addend_i) 
                                                                      ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__FA__carry_i)) 
                                                                     << 1U))) 
                                                                | (1U 
                                                                   & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                       >> 0x10U) 
                                                                      ^ 
                                                                      ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__FA__addend_i) 
                                                                       ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__FA__carry_i))))))))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (((((0x8000U 
                                                                    & ((0xffff8000U 
                                                                        & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                                       ^ 
                                                                       (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__FA__addend_i) 
                                                                         ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__FA__carry_i)) 
                                                                        << 0xfU))) 
                                                                   | (0x4000U 
                                                                      & ((0xffffc000U 
                                                                          & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                                         ^ 
                                                                         (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__FA__addend_i) 
                                                                           ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__FA__carry_i)) 
                                                                          << 0xeU)))) 
                                                                  | ((0x2000U 
                                                                      & ((0xffffe000U 
                                                                          & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                                         ^ 
                                                                         (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__FA__addend_i) 
                                                                           ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__FA__carry_i)) 
                                                                          << 0xdU))) 
                                                                     | (0x1000U 
                                                                        & ((0xfffff000U 
                                                                            & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                                           ^ 
                                                                           (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__FA__addend_i) 
                                                                             ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__FA__carry_i)) 
                                                                            << 0xcU))))) 
                                                                 | (((0x800U 
                                                                      & ((0xfffff800U 
                                                                          & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                                         ^ 
                                                                         (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__FA__addend_i) 
                                                                           ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__FA__carry_i)) 
                                                                          << 0xbU))) 
                                                                     | (0x400U 
                                                                        & ((0xfffffc00U 
                                                                            & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                                           ^ 
                                                                           (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__FA__addend_i) 
                                                                             ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__FA__carry_i)) 
                                                                            << 0xaU)))) 
                                                                    | ((0x200U 
                                                                        & ((0xfffffe00U 
                                                                            & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                                           ^ 
                                                                           (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__FA__addend_i) 
                                                                             ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__FA__carry_i)) 
                                                                            << 9U))) 
                                                                       | (0x100U 
                                                                          & ((0xffffff00U 
                                                                              & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                                             ^ 
                                                                             (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__FA__addend_i) 
                                                                               ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__FA__carry_i)) 
                                                                              << 8U)))))) 
                                                                | ((((0x80U 
                                                                      & ((0xffffff80U 
                                                                          & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                                         ^ 
                                                                         (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__FA__addend_i) 
                                                                           ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__FA__carry_i)) 
                                                                          << 7U))) 
                                                                     | (0x40U 
                                                                        & ((0xffffffc0U 
                                                                            & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                                           ^ 
                                                                           (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__FA__addend_i) 
                                                                             ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__FA__carry_i)) 
                                                                            << 6U)))) 
                                                                    | ((0x20U 
                                                                        & ((0xffffffe0U 
                                                                            & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                                           ^ 
                                                                           (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__FA__addend_i) 
                                                                             ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__FA__carry_i)) 
                                                                            << 5U))) 
                                                                       | (0x10U 
                                                                          & ((0xfffffff0U 
                                                                              & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                                             ^ 
                                                                             (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__FA__addend_i) 
                                                                               ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__FA__carry_i)) 
                                                                              << 4U))))) 
                                                                   | (((8U 
                                                                        & ((0xfffffff8U 
                                                                            & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                                           ^ 
                                                                           (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__FA__addend_i) 
                                                                             ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__FA__carry_i)) 
                                                                            << 3U))) 
                                                                       | (4U 
                                                                          & ((0xfffffffcU 
                                                                              & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                                             ^ 
                                                                             (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__FA__addend_i) 
                                                                               ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__FA__carry_i)) 
                                                                              << 2U)))) 
                                                                      | ((2U 
                                                                          & ((0xfffffffeU 
                                                                              & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]) 
                                                                             ^ 
                                                                             (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__FA__addend_i) 
                                                                               ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__FA__carry_i)) 
                                                                              << 1U))) 
                                                                         | (1U 
                                                                            & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                               ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__FA__addend_i))))))))))),48);
        bufp->chgQData(oldp+198,((((QData)((IData)(
                                                   (((((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellout__genblk1__BRA__47__KET____DOT__FA__carry_o) 
                                                         << 0x1fU) 
                                                        | ((0xc0000000U 
                                                            & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__46__KET____DOT__FA__addend_i) 
                                                                << 0x1eU) 
                                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                  << 0x10U))) 
                                                           | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__46__KET____DOT__FA__addend_i) 
                                                                << 0x1eU) 
                                                               | (0xc0000000U 
                                                                  & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                     << 0x10U))) 
                                                              & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__46__KET____DOT__FA__carry_i) 
                                                                 << 0x1eU)))) 
                                                       | (((0xe0000000U 
                                                            & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__45__KET____DOT__FA__addend_i) 
                                                                << 0x1dU) 
                                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                  << 0x10U))) 
                                                           | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__45__KET____DOT__FA__addend_i) 
                                                                << 0x1dU) 
                                                               | (0xe0000000U 
                                                                  & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                     << 0x10U))) 
                                                              & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__45__KET____DOT__FA__carry_i) 
                                                                 << 0x1dU))) 
                                                          | ((0xf0000000U 
                                                              & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__44__KET____DOT__FA__addend_i) 
                                                                  << 0x1cU) 
                                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                    << 0x10U))) 
                                                             | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__44__KET____DOT__FA__addend_i) 
                                                                  << 0x1cU) 
                                                                 | (0xf0000000U 
                                                                    & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                       << 0x10U))) 
                                                                & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__44__KET____DOT__FA__carry_i) 
                                                                   << 0x1cU))))) 
                                                      | ((((0xf8000000U 
                                                            & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__43__KET____DOT__FA__addend_i) 
                                                                << 0x1bU) 
                                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                  << 0x10U))) 
                                                           | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__43__KET____DOT__FA__addend_i) 
                                                                << 0x1bU) 
                                                               | (0xf8000000U 
                                                                  & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                     << 0x10U))) 
                                                              & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__43__KET____DOT__FA__carry_i) 
                                                                 << 0x1bU))) 
                                                          | ((0xfc000000U 
                                                              & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__42__KET____DOT__FA__addend_i) 
                                                                  << 0x1aU) 
                                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                    << 0x10U))) 
                                                             | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__42__KET____DOT__FA__addend_i) 
                                                                  << 0x1aU) 
                                                                 | (0xfc000000U 
                                                                    & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                       << 0x10U))) 
                                                                & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__42__KET____DOT__FA__carry_i) 
                                                                   << 0x1aU)))) 
                                                         | (((0xfe000000U 
                                                              & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__41__KET____DOT__FA__addend_i) 
                                                                  << 0x19U) 
                                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                    << 0x10U))) 
                                                             | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__41__KET____DOT__FA__addend_i) 
                                                                  << 0x19U) 
                                                                 | (0xfe000000U 
                                                                    & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                       << 0x10U))) 
                                                                & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__41__KET____DOT__FA__carry_i) 
                                                                   << 0x19U))) 
                                                            | ((0xff000000U 
                                                                & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__40__KET____DOT__FA__addend_i) 
                                                                    << 0x18U) 
                                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                      << 0x10U))) 
                                                               | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__40__KET____DOT__FA__addend_i) 
                                                                    << 0x18U) 
                                                                   | (0xff000000U 
                                                                      & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                         << 0x10U))) 
                                                                  & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__40__KET____DOT__FA__carry_i) 
                                                                     << 0x18U)))))) 
                                                     | (((((0xff800000U 
                                                            & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__39__KET____DOT__FA__addend_i) 
                                                                << 0x17U) 
                                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                  << 0x10U))) 
                                                           | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__39__KET____DOT__FA__addend_i) 
                                                                << 0x17U) 
                                                               | (0xff800000U 
                                                                  & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                     << 0x10U))) 
                                                              & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__39__KET____DOT__FA__carry_i) 
                                                                 << 0x17U))) 
                                                          | ((0xffc00000U 
                                                              & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__38__KET____DOT__FA__addend_i) 
                                                                  << 0x16U) 
                                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                    << 0x10U))) 
                                                             | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__38__KET____DOT__FA__addend_i) 
                                                                  << 0x16U) 
                                                                 | (0xffc00000U 
                                                                    & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                       << 0x10U))) 
                                                                & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__38__KET____DOT__FA__carry_i) 
                                                                   << 0x16U)))) 
                                                         | (((0xffe00000U 
                                                              & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__37__KET____DOT__FA__addend_i) 
                                                                  << 0x15U) 
                                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                    << 0x10U))) 
                                                             | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__37__KET____DOT__FA__addend_i) 
                                                                  << 0x15U) 
                                                                 | (0xffe00000U 
                                                                    & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                       << 0x10U))) 
                                                                & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__37__KET____DOT__FA__carry_i) 
                                                                   << 0x15U))) 
                                                            | ((0xfff00000U 
                                                                & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__36__KET____DOT__FA__addend_i) 
                                                                    << 0x14U) 
                                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                      << 0x10U))) 
                                                               | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__36__KET____DOT__FA__addend_i) 
                                                                    << 0x14U) 
                                                                   | (0xfff00000U 
                                                                      & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                         << 0x10U))) 
                                                                  & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__36__KET____DOT__FA__carry_i) 
                                                                     << 0x14U))))) 
                                                        | ((((0xfff80000U 
                                                              & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__35__KET____DOT__FA__addend_i) 
                                                                  << 0x13U) 
                                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                    << 0x10U))) 
                                                             | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__35__KET____DOT__FA__addend_i) 
                                                                  << 0x13U) 
                                                                 | (0xfff80000U 
                                                                    & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                       << 0x10U))) 
                                                                & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__35__KET____DOT__FA__carry_i) 
                                                                   << 0x13U))) 
                                                            | ((0xfffc0000U 
                                                                & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__34__KET____DOT__FA__addend_i) 
                                                                    << 0x12U) 
                                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                      << 0x10U))) 
                                                               | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__34__KET____DOT__FA__addend_i) 
                                                                    << 0x12U) 
                                                                   | (0xfffc0000U 
                                                                      & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                         << 0x10U))) 
                                                                  & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__34__KET____DOT__FA__carry_i) 
                                                                     << 0x12U)))) 
                                                           | (((0xfffe0000U 
                                                                & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__33__KET____DOT__FA__addend_i) 
                                                                    << 0x11U) 
                                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                      << 0x10U))) 
                                                               | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__33__KET____DOT__FA__addend_i) 
                                                                    << 0x11U) 
                                                                   | (0xfffe0000U 
                                                                      & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                                         << 0x10U))) 
                                                                  & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__33__KET____DOT__FA__carry_i) 
                                                                     << 0x11U))) 
                                                              | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__32__KET____DOT__FA__addend_i) 
                                                                   & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U]) 
                                                                  | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__32__KET____DOT__FA__addend_i) 
                                                                      | vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U]) 
                                                                     & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__32__KET____DOT__FA__carry_i))) 
                                                                 << 0x10U))))) 
                                                    | ((((((0x8000U 
                                                            & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__FA__addend_i) 
                                                                << 0xfU) 
                                                               & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                  >> 0x10U))) 
                                                           | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__FA__addend_i) 
                                                                << 0xfU) 
                                                               | (0x8000U 
                                                                  & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                     >> 0x10U))) 
                                                              & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__FA__carry_i) 
                                                                 << 0xfU))) 
                                                          | ((0xc000U 
                                                              & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__FA__addend_i) 
                                                                  << 0xeU) 
                                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                    >> 0x10U))) 
                                                             | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__FA__addend_i) 
                                                                  << 0xeU) 
                                                                 | (0xc000U 
                                                                    & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                       >> 0x10U))) 
                                                                & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__FA__carry_i) 
                                                                   << 0xeU)))) 
                                                         | (((0xe000U 
                                                              & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__FA__addend_i) 
                                                                  << 0xdU) 
                                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                    >> 0x10U))) 
                                                             | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__FA__addend_i) 
                                                                  << 0xdU) 
                                                                 | (0xe000U 
                                                                    & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                       >> 0x10U))) 
                                                                & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__FA__carry_i) 
                                                                   << 0xdU))) 
                                                            | ((0xf000U 
                                                                & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__FA__addend_i) 
                                                                    << 0xcU) 
                                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                      >> 0x10U))) 
                                                               | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__FA__addend_i) 
                                                                    << 0xcU) 
                                                                   | (0xf000U 
                                                                      & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                         >> 0x10U))) 
                                                                  & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__FA__carry_i) 
                                                                     << 0xcU))))) 
                                                        | ((((0xf800U 
                                                              & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__FA__addend_i) 
                                                                  << 0xbU) 
                                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                    >> 0x10U))) 
                                                             | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__FA__addend_i) 
                                                                  << 0xbU) 
                                                                 | (0xf800U 
                                                                    & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                       >> 0x10U))) 
                                                                & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__FA__carry_i) 
                                                                   << 0xbU))) 
                                                            | ((0xfc00U 
                                                                & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__FA__addend_i) 
                                                                    << 0xaU) 
                                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                      >> 0x10U))) 
                                                               | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__FA__addend_i) 
                                                                    << 0xaU) 
                                                                   | (0xfc00U 
                                                                      & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                         >> 0x10U))) 
                                                                  & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__FA__carry_i) 
                                                                     << 0xaU)))) 
                                                           | (((0xfe00U 
                                                                & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__FA__addend_i) 
                                                                    << 9U) 
                                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                      >> 0x10U))) 
                                                               | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__FA__addend_i) 
                                                                    << 9U) 
                                                                   | (0xfe00U 
                                                                      & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                         >> 0x10U))) 
                                                                  & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__FA__carry_i) 
                                                                     << 9U))) 
                                                              | ((0xff00U 
                                                                  & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__FA__addend_i) 
                                                                      << 8U) 
                                                                     & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                        >> 0x10U))) 
                                                                 | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__FA__addend_i) 
                                                                      << 8U) 
                                                                     | (0xff00U 
                                                                        & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                           >> 0x10U))) 
                                                                    & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__FA__carry_i) 
                                                                       << 8U)))))) 
                                                       | (((((0xff80U 
                                                              & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__FA__addend_i) 
                                                                  << 7U) 
                                                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                    >> 0x10U))) 
                                                             | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__FA__addend_i) 
                                                                  << 7U) 
                                                                 | (0xff80U 
                                                                    & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                       >> 0x10U))) 
                                                                & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__FA__carry_i) 
                                                                   << 7U))) 
                                                            | ((0xffc0U 
                                                                & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__FA__addend_i) 
                                                                    << 6U) 
                                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                      >> 0x10U))) 
                                                               | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__FA__addend_i) 
                                                                    << 6U) 
                                                                   | (0xffc0U 
                                                                      & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                         >> 0x10U))) 
                                                                  & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__FA__carry_i) 
                                                                     << 6U)))) 
                                                           | (((0xffe0U 
                                                                & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__FA__addend_i) 
                                                                    << 5U) 
                                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                      >> 0x10U))) 
                                                               | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__FA__addend_i) 
                                                                    << 5U) 
                                                                   | (0xffe0U 
                                                                      & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                         >> 0x10U))) 
                                                                  & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__FA__carry_i) 
                                                                     << 5U))) 
                                                              | ((0xfff0U 
                                                                  & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__FA__addend_i) 
                                                                      << 4U) 
                                                                     & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                        >> 0x10U))) 
                                                                 | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__FA__addend_i) 
                                                                      << 4U) 
                                                                     | (0xfff0U 
                                                                        & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                           >> 0x10U))) 
                                                                    & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__FA__carry_i) 
                                                                       << 4U))))) 
                                                          | ((((0xfff8U 
                                                                & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__FA__addend_i) 
                                                                    << 3U) 
                                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                      >> 0x10U))) 
                                                               | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__FA__addend_i) 
                                                                    << 3U) 
                                                                   | (0xfff8U 
                                                                      & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                         >> 0x10U))) 
                                                                  & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__FA__carry_i) 
                                                                     << 3U))) 
                                                              | ((0xfffcU 
                                                                  & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__FA__addend_i) 
                                                                      << 2U) 
                                                                     & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                        >> 0x10U))) 
                                                                 | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__FA__addend_i) 
                                                                      << 2U) 
                                                                     | (0xfffcU 
                                                                        & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                           >> 0x10U))) 
                                                                    & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__FA__carry_i) 
                                                                       << 2U)))) 
                                                             | (((0xfffeU 
                                                                  & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__FA__addend_i) 
                                                                      << 1U) 
                                                                     & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                        >> 0x10U))) 
                                                                 | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__FA__addend_i) 
                                                                      << 1U) 
                                                                     | (0xfffeU 
                                                                        & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                           >> 0x10U))) 
                                                                    & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__FA__carry_i) 
                                                                       << 1U))) 
                                                                | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__FA__addend_i) 
                                                                    & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                       >> 0x10U)) 
                                                                   | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__FA__addend_i) 
                                                                       | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                                          >> 0x10U)) 
                                                                      & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__FA__carry_i)))))))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               ((((((0xffff8000U 
                                                                     & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__FA__addend_i) 
                                                                         << 0xfU) 
                                                                        & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                    | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__FA__addend_i) 
                                                                         << 0xfU) 
                                                                        | (0xffff8000U 
                                                                           & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                       & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__FA__carry_i) 
                                                                          << 0xfU))) 
                                                                   | ((0xffffc000U 
                                                                       & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__FA__addend_i) 
                                                                           << 0xeU) 
                                                                          & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                      | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__FA__addend_i) 
                                                                           << 0xeU) 
                                                                          | (0xffffc000U 
                                                                             & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                         & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__FA__carry_i) 
                                                                            << 0xeU)))) 
                                                                  | (((0xffffe000U 
                                                                       & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__FA__addend_i) 
                                                                           << 0xdU) 
                                                                          & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                      | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__FA__addend_i) 
                                                                           << 0xdU) 
                                                                          | (0xffffe000U 
                                                                             & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                         & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__FA__carry_i) 
                                                                            << 0xdU))) 
                                                                     | ((0xfffff000U 
                                                                         & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__FA__addend_i) 
                                                                             << 0xcU) 
                                                                            & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                        | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__FA__addend_i) 
                                                                             << 0xcU) 
                                                                            | (0xfffff000U 
                                                                               & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                           & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__FA__carry_i) 
                                                                              << 0xcU))))) 
                                                                 | ((((0xfffff800U 
                                                                       & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__FA__addend_i) 
                                                                           << 0xbU) 
                                                                          & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                      | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__FA__addend_i) 
                                                                           << 0xbU) 
                                                                          | (0xfffff800U 
                                                                             & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                         & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__FA__carry_i) 
                                                                            << 0xbU))) 
                                                                     | ((0xfffffc00U 
                                                                         & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__FA__addend_i) 
                                                                             << 0xaU) 
                                                                            & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                        | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__FA__addend_i) 
                                                                             << 0xaU) 
                                                                            | (0xfffffc00U 
                                                                               & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                           & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__FA__carry_i) 
                                                                              << 0xaU)))) 
                                                                    | (((0xfffffe00U 
                                                                         & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__FA__addend_i) 
                                                                             << 9U) 
                                                                            & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                        | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__FA__addend_i) 
                                                                             << 9U) 
                                                                            | (0xfffffe00U 
                                                                               & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                           & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__FA__carry_i) 
                                                                              << 9U))) 
                                                                       | ((0xffffff00U 
                                                                           & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__FA__addend_i) 
                                                                               << 8U) 
                                                                              & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                          | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__FA__addend_i) 
                                                                               << 8U) 
                                                                              | (0xffffff00U 
                                                                                & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                             & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__FA__carry_i) 
                                                                                << 8U)))))) 
                                                                | (((((0xffffff80U 
                                                                       & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__FA__addend_i) 
                                                                           << 7U) 
                                                                          & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                      | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__FA__addend_i) 
                                                                           << 7U) 
                                                                          | (0xffffff80U 
                                                                             & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                         & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__FA__carry_i) 
                                                                            << 7U))) 
                                                                     | ((0xffffffc0U 
                                                                         & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__FA__addend_i) 
                                                                             << 6U) 
                                                                            & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                        | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__FA__addend_i) 
                                                                             << 6U) 
                                                                            | (0xffffffc0U 
                                                                               & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                           & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__FA__carry_i) 
                                                                              << 6U)))) 
                                                                    | (((0xffffffe0U 
                                                                         & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__FA__addend_i) 
                                                                             << 5U) 
                                                                            & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                        | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__FA__addend_i) 
                                                                             << 5U) 
                                                                            | (0xffffffe0U 
                                                                               & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                           & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__FA__carry_i) 
                                                                              << 5U))) 
                                                                       | ((0xfffffff0U 
                                                                           & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__FA__addend_i) 
                                                                               << 4U) 
                                                                              & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                          | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__FA__addend_i) 
                                                                               << 4U) 
                                                                              | (0xfffffff0U 
                                                                                & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                             & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__FA__carry_i) 
                                                                                << 4U))))) 
                                                                   | ((((0xfffffff8U 
                                                                         & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__FA__addend_i) 
                                                                             << 3U) 
                                                                            & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                        | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__FA__addend_i) 
                                                                             << 3U) 
                                                                            | (0xfffffff8U 
                                                                               & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                           & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__FA__carry_i) 
                                                                              << 3U))) 
                                                                       | ((0xfffffffcU 
                                                                           & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__FA__addend_i) 
                                                                               << 2U) 
                                                                              & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                          | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__FA__addend_i) 
                                                                               << 2U) 
                                                                              | (0xfffffffcU 
                                                                                & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                             & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__FA__carry_i) 
                                                                                << 2U)))) 
                                                                      | (((0xfffffffeU 
                                                                           & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__FA__addend_i) 
                                                                               << 1U) 
                                                                              & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                          | ((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__FA__addend_i) 
                                                                               << 1U) 
                                                                              | (0xfffffffeU 
                                                                                & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])) 
                                                                             & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__FA__carry_i) 
                                                                                << 1U))) 
                                                                         | ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__FA__addend_i) 
                                                                            & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]))))))))),48);
        bufp->chgBit(oldp+200,((1U & (IData)((((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                                                   >> 9U)) 
                                               & (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                                  >> 0x30U)) 
                                              & (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                                 >> 0x2fU))))));
        bufp->chgBit(oldp+201,((1U & (((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32.Carry_o 
                                                >> 0x30U)) 
                                       | ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1.Carry_o 
                                                   >> 0x30U)) 
                                          | ((IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0.Carry_o 
                                                      >> 0x30U)) 
                                             | ((IData)(
                                                        (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_2.Carry_o 
                                                         >> 0x30U)) 
                                                | ((IData)(
                                                           (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1.Carry_o 
                                                            >> 0x30U)) 
                                                   | ((IData)(
                                                              (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0.Carry_o 
                                                               >> 0x30U)) 
                                                      | (IData)(
                                                                (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3.Carry_o 
                                                                 >> 0x30U)))))))) 
                                      | (((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                                              >> 9U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                                     >> 0x30U))) 
                                         | (IData)(
                                                   (((~ 
                                                      ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                                                       >> 9U)) 
                                                     & (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                                        >> 0x30U)) 
                                                    & (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                                       >> 0x2fU))))))));
        bufp->chgBit(oldp+202,((1U & ((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                                          >> 9U)) & 
                                      ((~ (((IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32.Carry_o 
                                                     >> 0x30U)) 
                                            | ((IData)(
                                                       (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1.Carry_o 
                                                        >> 0x30U)) 
                                               | ((IData)(
                                                          (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0.Carry_o 
                                                           >> 0x30U)) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_2.Carry_o 
                                                              >> 0x30U)) 
                                                     | ((IData)(
                                                                (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1.Carry_o 
                                                                 >> 0x30U)) 
                                                        | ((IData)(
                                                                   (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0.Carry_o 
                                                                    >> 0x30U)) 
                                                           | (IData)(
                                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3.Carry_o 
                                                                      >> 0x30U)))))))) 
                                           | (((~ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                                                   >> 9U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                                          >> 0x30U))) 
                                              | (IData)(
                                                        (((~ 
                                                           ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv) 
                                                            >> 9U)) 
                                                          & (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o 
                                                             >> 0x30U)) 
                                                         & (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o 
                                                            >> 0x2fU)))))) 
                                       ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellout__genblk1__BRA__47__KET____DOT__FA__carry_o))))));
        bufp->chgQData(oldp+203,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o),49);
        bufp->chgQData(oldp+205,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o),49);
        bufp->chgQData(oldp+207,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o),49);
        bufp->chgQData(oldp+209,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o),49);
        bufp->chgQData(oldp+211,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o),49);
        bufp->chgQData(oldp+213,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o),49);
        bufp->chgQData(oldp+215,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o),49);
        bufp->chgQData(oldp+217,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o),49);
        bufp->chgQData(oldp+219,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o),49);
        bufp->chgQData(oldp+221,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o),49);
        bufp->chgQData(oldp+223,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o),49);
        bufp->chgQData(oldp+225,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o),49);
        bufp->chgIData(oldp+227,((((IData)((0U != (0xffU 
                                                   & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                      >> 0x17U)))) 
                                   << 0x18U) | (0xfffffeU 
                                                & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                   << 1U)))),27);
        bufp->chgSData(oldp+228,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul1x),13);
        bufp->chgSData(oldp+229,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__mul2x),13);
        bufp->chgSData(oldp+230,(((((((IData)((0U != 
                                               (0xffU 
                                                & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                   >> 0x17U)))) 
                                      << 2U) << 9U) 
                                    | ((0x400U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                  >> 0xbU)) 
                                       | (0x200U & 
                                          (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                           >> 0xaU)))) 
                                   | ((0x100U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                 >> 9U)) 
                                      | ((0x80U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                   >> 8U)) 
                                         | (0x40U & 
                                            (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                             >> 7U))))) 
                                  | (((0x20U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                >> 6U)) 
                                      | ((0x10U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                   >> 5U)) 
                                         | (8U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                  >> 4U)))) 
                                     | ((4U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                               >> 3U)) 
                                        | ((2U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                  >> 2U)) 
                                           | (1U & 
                                              (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                               >> 1U))))))),13);
        bufp->chgIData(oldp+231,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[0]),25);
        bufp->chgIData(oldp+232,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[1]),25);
        bufp->chgIData(oldp+233,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[2]),25);
        bufp->chgIData(oldp+234,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[3]),25);
        bufp->chgIData(oldp+235,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[4]),25);
        bufp->chgIData(oldp+236,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[5]),25);
        bufp->chgIData(oldp+237,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[6]),25);
        bufp->chgIData(oldp+238,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[7]),25);
        bufp->chgIData(oldp+239,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[8]),25);
        bufp->chgIData(oldp+240,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[9]),25);
        bufp->chgIData(oldp+241,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[10]),25);
        bufp->chgIData(oldp+242,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[11]),25);
        bufp->chgIData(oldp+243,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP_tmp[12]),25);
        bufp->chgIData(oldp+244,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[0]),25);
        bufp->chgIData(oldp+245,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[1]),25);
        bufp->chgIData(oldp+246,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[2]),25);
        bufp->chgIData(oldp+247,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[3]),25);
        bufp->chgIData(oldp+248,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[4]),25);
        bufp->chgIData(oldp+249,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[5]),25);
        bufp->chgIData(oldp+250,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[6]),25);
        bufp->chgIData(oldp+251,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[7]),25);
        bufp->chgIData(oldp+252,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[8]),25);
        bufp->chgIData(oldp+253,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[9]),25);
        bufp->chgIData(oldp+254,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[10]),25);
        bufp->chgIData(oldp+255,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[11]),25);
        bufp->chgIData(oldp+256,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth__DOT__booth_PP[12]),25);
        bufp->chgQData(oldp+257,((0xffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U]))))),48);
        bufp->chgQData(oldp+259,(((0x200U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv))
                                   ? 0ULL : (0xffffffffffffULL 
                                             & vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Sum_o))),48);
        bufp->chgQData(oldp+261,((((0x200U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__Exp_mv))
                                    ? 0ULL : (0x7fffffffffffULL 
                                              & vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.Carry_o)) 
                                  << 1U)),48);
        bufp->chgBit(oldp+263,((1U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])));
        bufp->chgBit(oldp+264,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+265,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__FA__addend_i)))));
        bufp->chgBit(oldp+266,(((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__FA__addend_i) 
                                & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U])));
        bufp->chgBit(oldp+267,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+268,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+269,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+270,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 0xaU) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__FA__addend_i) 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+271,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 0xaU)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__FA__addend_i) 
                                                  | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                     >> 0xaU)) 
                                                 & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+272,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+273,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+274,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+275,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 0xbU) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__FA__addend_i) 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+276,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 0xbU)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__FA__addend_i) 
                                                  | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                     >> 0xbU)) 
                                                 & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+277,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+278,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+279,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+280,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 0xcU) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__FA__addend_i) 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+281,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 0xcU)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__FA__addend_i) 
                                                  | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                     >> 0xcU)) 
                                                 & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+282,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+283,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+284,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+285,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 0xdU) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__FA__addend_i) 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+286,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 0xdU)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__FA__addend_i) 
                                                  | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                     >> 0xdU)) 
                                                 & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+287,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+288,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+289,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+290,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 0xeU) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__FA__addend_i) 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+291,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 0xeU)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__FA__addend_i) 
                                                  | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                     >> 0xeU)) 
                                                 & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+292,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+293,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+294,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+295,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 0xfU) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__FA__addend_i) 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+296,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 0xfU)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__FA__addend_i) 
                                                  | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                     >> 0xfU)) 
                                                 & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+297,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+298,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+299,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+300,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 0x10U) ^ 
                                      ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__FA__addend_i) 
                                       ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+301,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 0x10U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__FA__addend_i) 
                                                   | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                      >> 0x10U)) 
                                                  & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+302,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+303,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+304,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+305,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 0x11U) ^ 
                                      ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__FA__addend_i) 
                                       ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+306,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 0x11U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__FA__addend_i) 
                                                   | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                      >> 0x11U)) 
                                                  & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+307,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+308,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+309,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+310,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 0x12U) ^ 
                                      ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__FA__addend_i) 
                                       ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+311,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 0x12U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__FA__addend_i) 
                                                   | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                      >> 0x12U)) 
                                                  & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+312,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+313,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+314,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+315,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 0x13U) ^ 
                                      ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__FA__addend_i) 
                                       ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+316,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 0x13U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__FA__addend_i) 
                                                   | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                      >> 0x13U)) 
                                                  & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+317,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+318,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+319,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+320,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 1U) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__FA__addend_i) 
                                                 ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+321,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 1U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__FA__addend_i) 
                                                | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                   >> 1U)) 
                                               & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+322,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+323,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+324,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+325,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 0x14U) ^ 
                                      ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__FA__addend_i) 
                                       ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+326,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 0x14U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__FA__addend_i) 
                                                   | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                      >> 0x14U)) 
                                                  & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+327,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+328,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+329,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+330,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 0x15U) ^ 
                                      ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__FA__addend_i) 
                                       ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+331,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 0x15U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__FA__addend_i) 
                                                   | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                      >> 0x15U)) 
                                                  & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+332,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+333,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+334,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+335,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 0x16U) ^ 
                                      ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__FA__addend_i) 
                                       ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+336,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 0x16U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__FA__addend_i) 
                                                   | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                      >> 0x16U)) 
                                                  & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+337,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+338,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+339,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+340,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 0x17U) ^ 
                                      ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__FA__addend_i) 
                                       ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+341,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 0x17U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__FA__addend_i) 
                                                   | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                      >> 0x17U)) 
                                                  & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+342,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+343,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+344,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+345,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 0x18U) ^ 
                                      ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__FA__addend_i) 
                                       ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+346,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 0x18U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__FA__addend_i) 
                                                   | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                      >> 0x18U)) 
                                                  & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+347,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+348,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+349,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+350,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 0x19U) ^ 
                                      ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__FA__addend_i) 
                                       ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+351,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 0x19U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__FA__addend_i) 
                                                   | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                      >> 0x19U)) 
                                                  & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+352,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+353,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+354,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+355,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 0x1aU) ^ 
                                      ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__FA__addend_i) 
                                       ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+356,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 0x1aU)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__FA__addend_i) 
                                                   | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                      >> 0x1aU)) 
                                                  & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+357,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+358,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+359,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+360,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 0x1bU) ^ 
                                      ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__FA__addend_i) 
                                       ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+361,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 0x1bU)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__FA__addend_i) 
                                                   | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                      >> 0x1bU)) 
                                                  & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+362,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+363,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+364,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+365,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 0x1cU) ^ 
                                      ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__FA__addend_i) 
                                       ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+366,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 0x1cU)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__FA__addend_i) 
                                                   | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                      >> 0x1cU)) 
                                                  & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+367,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+368,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+369,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+370,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 0x1dU) ^ 
                                      ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__FA__addend_i) 
                                       ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+371,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 0x1dU)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__FA__addend_i) 
                                                   | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                      >> 0x1dU)) 
                                                  & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+372,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+373,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+374,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+375,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 2U) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__FA__addend_i) 
                                                 ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+376,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 2U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__FA__addend_i) 
                                                | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                   >> 2U)) 
                                               & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+377,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+378,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+379,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+380,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 0x1eU) ^ 
                                      ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__FA__addend_i) 
                                       ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+381,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 0x1eU)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__FA__addend_i) 
                                                   | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                      >> 0x1eU)) 
                                                  & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+382,((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+383,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+384,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+385,((((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                  >> 0x1fU) ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__FA__addend_i)) 
                                ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__FA__carry_i))));
        bufp->chgBit(oldp+386,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 0x1fU)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__FA__addend_i) 
                                                   | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                      >> 0x1fU)) 
                                                  & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+387,((1U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U])));
        bufp->chgBit(oldp+388,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__32__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+389,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__32__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+390,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                      ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__32__KET____DOT__FA__addend_i) 
                                         ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__32__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+391,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__32__KET____DOT__FA__addend_i) 
                                 & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U]) 
                                | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__32__KET____DOT__FA__addend_i) 
                                    | vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U]) 
                                   & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__32__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+392,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                      >> 1U))));
        bufp->chgBit(oldp+393,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__33__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+394,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__33__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+395,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                       >> 1U) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__33__KET____DOT__FA__addend_i) 
                                                 ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__33__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+396,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__33__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                    >> 1U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__33__KET____DOT__FA__addend_i) 
                                                | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                   >> 1U)) 
                                               & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__33__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+397,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                      >> 2U))));
        bufp->chgBit(oldp+398,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__34__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+399,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__34__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+400,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                       >> 2U) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__34__KET____DOT__FA__addend_i) 
                                                 ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__34__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+401,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__34__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                    >> 2U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__34__KET____DOT__FA__addend_i) 
                                                | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                   >> 2U)) 
                                               & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__34__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+402,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                      >> 3U))));
        bufp->chgBit(oldp+403,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__35__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+404,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__35__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+405,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                       >> 3U) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__35__KET____DOT__FA__addend_i) 
                                                 ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__35__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+406,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__35__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                    >> 3U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__35__KET____DOT__FA__addend_i) 
                                                | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                   >> 3U)) 
                                               & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__35__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+407,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                      >> 4U))));
        bufp->chgBit(oldp+408,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__36__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+409,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__36__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+410,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                       >> 4U) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__36__KET____DOT__FA__addend_i) 
                                                 ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__36__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+411,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__36__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                    >> 4U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__36__KET____DOT__FA__addend_i) 
                                                | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                   >> 4U)) 
                                               & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__36__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+412,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                      >> 5U))));
        bufp->chgBit(oldp+413,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__37__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+414,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__37__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+415,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                       >> 5U) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__37__KET____DOT__FA__addend_i) 
                                                 ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__37__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+416,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__37__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                    >> 5U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__37__KET____DOT__FA__addend_i) 
                                                | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                   >> 5U)) 
                                               & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__37__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+417,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                      >> 6U))));
        bufp->chgBit(oldp+418,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__38__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+419,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__38__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+420,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                       >> 6U) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__38__KET____DOT__FA__addend_i) 
                                                 ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__38__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+421,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__38__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                    >> 6U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__38__KET____DOT__FA__addend_i) 
                                                | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                   >> 6U)) 
                                               & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__38__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+422,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                      >> 7U))));
        bufp->chgBit(oldp+423,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__39__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+424,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__39__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+425,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                       >> 7U) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__39__KET____DOT__FA__addend_i) 
                                                 ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__39__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+426,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__39__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                    >> 7U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__39__KET____DOT__FA__addend_i) 
                                                | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                   >> 7U)) 
                                               & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__39__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+427,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+428,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+429,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+430,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 3U) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__FA__addend_i) 
                                                 ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+431,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 3U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__FA__addend_i) 
                                                | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                   >> 3U)) 
                                               & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+432,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                      >> 8U))));
        bufp->chgBit(oldp+433,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__40__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+434,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__40__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+435,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                       >> 8U) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__40__KET____DOT__FA__addend_i) 
                                                 ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__40__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+436,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__40__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                    >> 8U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__40__KET____DOT__FA__addend_i) 
                                                | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                   >> 8U)) 
                                               & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__40__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+437,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                      >> 9U))));
        bufp->chgBit(oldp+438,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__41__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+439,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__41__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+440,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                       >> 9U) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__41__KET____DOT__FA__addend_i) 
                                                 ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__41__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+441,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__41__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                    >> 9U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__41__KET____DOT__FA__addend_i) 
                                                | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                   >> 9U)) 
                                               & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__41__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+442,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+443,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__42__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+444,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__42__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+445,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                       >> 0xaU) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__42__KET____DOT__FA__addend_i) 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__42__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+446,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__42__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                    >> 0xaU)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__42__KET____DOT__FA__addend_i) 
                                                  | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                     >> 0xaU)) 
                                                 & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__42__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+447,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+448,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__43__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+449,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__43__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+450,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                       >> 0xbU) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__43__KET____DOT__FA__addend_i) 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__43__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+451,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__43__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                    >> 0xbU)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__43__KET____DOT__FA__addend_i) 
                                                  | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                     >> 0xbU)) 
                                                 & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__43__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+452,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+453,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__44__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+454,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__44__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+455,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                       >> 0xcU) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__44__KET____DOT__FA__addend_i) 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__44__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+456,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__44__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                    >> 0xcU)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__44__KET____DOT__FA__addend_i) 
                                                  | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                     >> 0xcU)) 
                                                 & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__44__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+457,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+458,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__45__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+459,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__45__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+460,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                       >> 0xdU) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__45__KET____DOT__FA__addend_i) 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__45__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+461,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__45__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                    >> 0xdU)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__45__KET____DOT__FA__addend_i) 
                                                  | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                     >> 0xdU)) 
                                                 & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__45__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+462,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+463,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__46__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+464,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__46__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+465,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                       >> 0xeU) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__46__KET____DOT__FA__addend_i) 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__46__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+466,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__46__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                    >> 0xeU)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__46__KET____DOT__FA__addend_i) 
                                                  | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                                     >> 0xeU)) 
                                                 & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__46__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+467,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+468,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__47__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+469,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__47__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+470,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[1U] 
                                       >> 0xfU) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__47__KET____DOT__FA__addend_i) 
                                                   ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__47__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+471,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellout__genblk1__BRA__47__KET____DOT__FA__carry_o));
        bufp->chgBit(oldp+472,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 4U))));
        bufp->chgBit(oldp+473,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+474,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+475,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 4U) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__FA__addend_i) 
                                                 ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+476,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 4U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__FA__addend_i) 
                                                | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                   >> 4U)) 
                                               & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+477,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 5U))));
        bufp->chgBit(oldp+478,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+479,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+480,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 5U) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__FA__addend_i) 
                                                 ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+481,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 5U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__FA__addend_i) 
                                                | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                   >> 5U)) 
                                               & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+482,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+483,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+484,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+485,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 6U) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__FA__addend_i) 
                                                 ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+486,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 6U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__FA__addend_i) 
                                                | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                   >> 6U)) 
                                               & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+487,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 7U))));
        bufp->chgBit(oldp+488,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+489,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+490,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 7U) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__FA__addend_i) 
                                                 ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+491,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 7U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__FA__addend_i) 
                                                | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                   >> 7U)) 
                                               & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+492,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 8U))));
        bufp->chgBit(oldp+493,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+494,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+495,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 8U) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__FA__addend_i) 
                                                 ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+496,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 8U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__FA__addend_i) 
                                                | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                   >> 8U)) 
                                               & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__FA__carry_i)))));
        bufp->chgBit(oldp+497,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                      >> 9U))));
        bufp->chgBit(oldp+498,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__FA__addend_i));
        bufp->chgBit(oldp+499,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__FA__carry_i));
        bufp->chgBit(oldp+500,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                       >> 9U) ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__FA__addend_i) 
                                                 ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__FA__carry_i))))));
        bufp->chgBit(oldp+501,((((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__FA__addend_i) 
                                 & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                    >> 9U)) | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__FA__addend_i) 
                                                | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant_aligned[0U] 
                                                   >> 9U)) 
                                               & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__csa__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__FA__carry_i)))));
        __Vtemp_3[0U] = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0[1U] 
                          << 8U) | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0[0U] 
                                    >> 0x18U));
        __Vtemp_3[1U] = ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0[2U] 
                          << 8U) | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0[1U] 
                                    >> 0x18U));
        __Vtemp_3[2U] = (0x3ffU & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0[3U] 
                                    << 8U) | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0[2U] 
                                              >> 0x18U)));
        bufp->chgWData(oldp+502,(__Vtemp_3),74);
        bufp->chgIData(oldp+505,((0xffffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0[0U])),24);
        bufp->chgIData(oldp+506,((0xffffffU & ((IData)(1U) 
                                               + (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__A_Mant)))),24);
        bufp->chgIData(oldp+507,((0xffffffU & ((IData)(1U) 
                                               + (~ 
                                                  vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__prenorm__DOT____VdfgRegularize_hd548ac0c_0_0[0U])))),24);
        bufp->chgBit(oldp+508,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xffU 
                                                  & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1 
                                                     >> 0x17U))))))));
        bufp->chgBit(oldp+509,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xffU 
                                                  & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1 
                                                     >> 0x17U))))))));
        bufp->chgBit(oldp+510,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xffU 
                                                  & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                     >> 0x17U))))))));
        bufp->chgBit(oldp+511,((0xffU == (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1 
                                                   >> 0x17U)))));
        bufp->chgBit(oldp+512,((0xffU == (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1 
                                                   >> 0x17U)))));
        bufp->chgBit(oldp+513,((0xffU == (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1 
                                                   >> 0x17U)))));
        bufp->chgBit(oldp+514,((0U == (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1))));
        bufp->chgBit(oldp+515,((0U == (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__B_reg1))));
        bufp->chgBit(oldp+516,((0U == (0x7fffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__C_reg1))));
        bufp->chgIData(oldp+517,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__unnamedblk1__DOT__idx),32);
        bufp->chgQData(oldp+518,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_sum[0]),49);
        bufp->chgQData(oldp+520,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_sum[1]),49);
        bufp->chgQData(oldp+522,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_sum[2]),49);
        bufp->chgQData(oldp+524,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_sum[3]),49);
        bufp->chgQData(oldp+526,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_sum[4]),49);
        bufp->chgQData(oldp+528,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_sum[5]),49);
        bufp->chgQData(oldp+530,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_sum[6]),49);
        bufp->chgQData(oldp+532,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_sum[7]),49);
        bufp->chgQData(oldp+534,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_sum[8]),49);
        bufp->chgQData(oldp+536,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_carry[0]),49);
        bufp->chgQData(oldp+538,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_carry[1]),49);
        bufp->chgQData(oldp+540,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_carry[2]),49);
        bufp->chgQData(oldp+542,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_carry[3]),49);
        bufp->chgQData(oldp+544,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_carry[4]),49);
        bufp->chgQData(oldp+546,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_carry[5]),49);
        bufp->chgQData(oldp+548,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_carry[6]),49);
        bufp->chgQData(oldp+550,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_carry[7]),49);
        bufp->chgQData(oldp+552,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_carry[8]),49);
        bufp->chgQData(oldp+554,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_shcy[0]),49);
        bufp->chgQData(oldp+556,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_shcy[1]),49);
        bufp->chgQData(oldp+558,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_shcy[2]),49);
        bufp->chgQData(oldp+560,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_shcy[3]),49);
        bufp->chgQData(oldp+562,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_shcy[4]),49);
        bufp->chgQData(oldp+564,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_shcy[5]),49);
        bufp->chgQData(oldp+566,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_shcy[6]),49);
        bufp->chgQData(oldp+568,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_shcy[7]),49);
        bufp->chgQData(oldp+570,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__csa_shcy[8]),49);
        bufp->chgCData(oldp+572,(((((0x40U & ((IData)(
                                                      (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32.Carry_o 
                                                       >> 0x30U)) 
                                              << 6U)) 
                                    | (0x20U & ((IData)(
                                                        (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1.Carry_o 
                                                         >> 0x30U)) 
                                                << 5U))) 
                                   | ((0x10U & ((IData)(
                                                        (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0.Carry_o 
                                                         >> 0x30U)) 
                                                << 4U)) 
                                      | (8U & ((IData)(
                                                       (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_2.Carry_o 
                                                        >> 0x30U)) 
                                               << 3U)))) 
                                  | ((4U & ((IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1.Carry_o 
                                                     >> 0x30U)) 
                                            << 2U)) 
                                     | ((2U & ((IData)(
                                                       (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0.Carry_o 
                                                        >> 0x30U)) 
                                               << 1U)) 
                                        | (1U & (IData)(
                                                        (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3.Carry_o 
                                                         >> 0x30U))))))),7);
        bufp->chgQData(oldp+573,(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0.Sum_o),49);
        bufp->chgQData(oldp+575,((0x1ffffffffffffULL 
                                  & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0.Carry_o, 1U))),49);
        bufp->chgQData(oldp+577,(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1.Sum_o),49);
        bufp->chgQData(oldp+579,((0x1ffffffffffffULL 
                                  & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1.Carry_o, 1U))),49);
        bufp->chgBit(oldp+581,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32.Carry_o 
                                              >> 0x30U)))));
        bufp->chgQData(oldp+582,(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32.Sum_o),49);
        bufp->chgQData(oldp+584,(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32.Carry_o),49);
        bufp->chgBit(oldp+586,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__NV_o));
        bufp->chgBit(oldp+587,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__OF_o));
        bufp->chgBit(oldp+588,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__UF_o));
        bufp->chgBit(oldp+589,(((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__GRSbits) 
                                | ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__OF_o) 
                                   | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__UF_o)))));
        bufp->chgQData(oldp+590,((0xffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[0U]))))),48);
        bufp->chgQData(oldp+592,((0xffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[2U])) 
                                      << 0x10U) | ((QData)((IData)(
                                                                   vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[1U])) 
                                                   >> 0x10U)))),48);
        bufp->chgIData(oldp+594,((0x7ffffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U])),27);
        bufp->chgBit(oldp+595,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+596,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+597,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+598,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+599,((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                                >> 0x1fU)));
        bufp->chgSData(oldp+600,((0x3ffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])),10);
        bufp->chgBit(oldp+601,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+602,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                      >> 0xbU))));
        bufp->chgSData(oldp+603,((0xfffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                            >> 0xcU))),12);
        bufp->chgCData(oldp+604,((7U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                        >> 0x18U))),3);
        bufp->chgQData(oldp+605,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__low_sum),48);
        bufp->chgQData(oldp+607,((0xffffffffffffULL 
                                  & (2ULL + ((~ (((QData)((IData)(
                                                                  vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[0U])))) 
                                             + (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__eac__DOT____VdfgRegularize_hca792c16_0_0))))),48);
        bufp->chgBit(oldp+609,((1U & (IData)((1ULL 
                                              & (((0xffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[0U])))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                                                                        >> 0x1dU)))) 
                                                    << 0x30U) 
                                                   | vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__eac__DOT____VdfgRegularize_hca792c16_0_0)) 
                                                 >> 0x30U))))));
        bufp->chgBit(oldp+610,((1U & (IData)((1ULL 
                                              & ((2ULL 
                                                  + 
                                                  ((0x1000000000000ULL 
                                                    | (0xffffffffffffULL 
                                                       & (~ 
                                                          (((QData)((IData)(
                                                                            vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[0U])))))) 
                                                   + 
                                                   (((QData)((IData)(
                                                                     (1U 
                                                                      & (~ 
                                                                         (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                                                                          >> 0x1dU))))) 
                                                     << 0x30U) 
                                                    | (0xffffffffffffULL 
                                                       & (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__eac__DOT____VdfgRegularize_hca792c16_0_0))))) 
                                                 >> 0x30U))))));
        bufp->chgIData(oldp+611,((0x7ffffffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__msb_inc__DOT____VdfgRegularize_hb50ef5f9_0_2)),27);
        bufp->chgIData(oldp+612,((0x7ffffffU & ((1U 
                                                 & (IData)(
                                                           (1ULL 
                                                            & ((2ULL 
                                                                + 
                                                                ((0x1000000000000ULL 
                                                                  | (0xffffffffffffULL 
                                                                     & (~ 
                                                                        (((QData)((IData)(
                                                                                vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[1U])) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(
                                                                                vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[0U])))))) 
                                                                 + 
                                                                 (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                                                                                >> 0x1dU))))) 
                                                                   << 0x30U) 
                                                                  | (0xffffffffffffULL 
                                                                     & (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__eac__DOT____VdfgRegularize_hca792c16_0_0))))) 
                                                               >> 0x30U))))
                                                 ? 
                                                (~ 
                                                 (0x7ffffffU 
                                                  & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U]))
                                                 : 
                                                ((~ 
                                                  (0x7ffffffU 
                                                   & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U])) 
                                                 - (IData)(1U))))),27);
        bufp->chgWData(oldp+613,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum),74);
        bufp->chgBit(oldp+616,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__msb_inc__DOT____VdfgRegularize_hb50ef5f9_0_2 
                                      >> 0x1aU))));
        __Vtemp_5[0U] = (0x7fffffeU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                                       << 1U));
        __Vtemp_5[1U] = 0U;
        __Vtemp_5[2U] = 0U;
        __Vtemp_6[0U] = (1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                               >> 0xaU));
        __Vtemp_6[1U] = 0U;
        __Vtemp_6[2U] = 0U;
        VL_SUB_W(3, __Vtemp_7, __Vtemp_5, __Vtemp_6);
        __Vtemp_8[0U] = __Vtemp_7[0U];
        __Vtemp_8[1U] = __Vtemp_7[1U];
        __Vtemp_8[2U] = (0x3ffU & __Vtemp_7[2U]);
        bufp->chgWData(oldp+617,(__Vtemp_8),74);
        bufp->chgCData(oldp+620,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__shift_num),7);
        bufp->chgBit(oldp+621,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__allzero));
        bufp->chgWData(oldp+622,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm),74);
        bufp->chgSData(oldp+625,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Exp_norm),10);
        bufp->chgSData(oldp+626,((0x3ffU & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT____VdfgRegularize_hc99b95d1_0_3) 
                                            - (IData)(1U)))),10);
        bufp->chgSData(oldp+627,((0x3ffU & ((IData)(0x4aU) 
                                            + (0x1ffU 
                                               & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])))),10);
        bufp->chgWData(oldp+628,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Rs_Mant),76);
        bufp->chgBit(oldp+631,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Sign_result));
        bufp->chgCData(oldp+632,((0xffU & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__OF_o)
                                            ? ((0x4000000U 
                                                & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                                ? (
                                                   (0x2000000U 
                                                    & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                                    ? 0U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                                     ? 0U
                                                     : 0xffU))
                                                : (
                                                   (0x2000000U 
                                                    & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                                    ? 
                                                   ((0x1000000U 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                                     ? 
                                                    ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Sign_result)
                                                      ? 0xfeU
                                                      : 0xffU)
                                                     : 
                                                    ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Sign_result)
                                                      ? 0xffU
                                                      : 0xfeU))
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                                     ? 0xfeU
                                                     : 0xffU)))
                                            : ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Exp_result_norm) 
                                               + (1U 
                                                  & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_upper_rounded 
                                                     >> 0x18U)))))),8);
        bufp->chgIData(oldp+633,((0x7fffffU & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT____Vcellout__u_s2__OF_o)
                                                ? (
                                                   (0x4000000U 
                                                    & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                                     ? 
                                                    ((0x1000000U 
                                                      & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                                      ? 
                                                     ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Sign_result)
                                                       ? 0x7fffffU
                                                       : 0U)
                                                      : 
                                                     ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Sign_result)
                                                       ? 0U
                                                       : 0x7fffffU))
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                                      ? 0x7fffffU
                                                      : 0U)))
                                                : (
                                                   (0x1000000U 
                                                    & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_upper_rounded)
                                                    ? 
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_upper_rounded 
                                                    >> 1U)
                                                    : vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_upper_rounded)))),23);
        bufp->chgBit(oldp+634,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+635,((1U & ((~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                          >> 0x15U)) 
                                      & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                                         >> 0x1eU)))));
        bufp->chgCData(oldp+636,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT__base_zeros),8);
        bufp->chgCData(oldp+637,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT__lv1_zeros),4);
        bufp->chgCData(oldp+638,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT__lv2_zeros),2);
        bufp->chgBit(oldp+639,((3U == (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT__lv2_zeros))));
        bufp->chgBit(oldp+640,((0U == (0x1ffU & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U]))));
        bufp->chgCData(oldp+641,((0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[2U] 
                                           >> 1U))),8);
        bufp->chgBit(oldp+642,((0U == (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[2U] 
                                                >> 1U)))));
        bufp->chgCData(oldp+643,((0xffU & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[2U] 
                                            << 7U) 
                                           | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                                              >> 0x19U)))),8);
        bufp->chgBit(oldp+644,((0U == (0xffU & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[2U] 
                                                 << 7U) 
                                                | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                                                   >> 0x19U))))));
        bufp->chgCData(oldp+645,((0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                                           >> 0x11U))),8);
        bufp->chgBit(oldp+646,((0U == (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                                                >> 0x11U)))));
        bufp->chgCData(oldp+647,((0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                                           >> 9U))),8);
        bufp->chgBit(oldp+648,((0U == (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                                                >> 9U)))));
        bufp->chgCData(oldp+649,((0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                                           >> 1U))),8);
        bufp->chgBit(oldp+650,((0U == (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                                                >> 1U)))));
        bufp->chgCData(oldp+651,((0xffU & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                                            << 7U) 
                                           | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U] 
                                              >> 0x19U)))),8);
        bufp->chgBit(oldp+652,((0U == (0xffU & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                                                 << 7U) 
                                                | (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U] 
                                                   >> 0x19U))))));
        bufp->chgCData(oldp+653,((0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U] 
                                           >> 0x11U))),8);
        bufp->chgBit(oldp+654,((0U == (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U] 
                                                >> 0x11U)))));
        bufp->chgCData(oldp+655,((0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U] 
                                           >> 9U))),8);
        bufp->chgBit(oldp+656,((0U == (0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U] 
                                                >> 9U)))));
        bufp->chgCData(oldp+657,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__lzd_grouplv1__group_data_i),2);
        bufp->chgBit(oldp+658,((3U == (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__lzd_grouplv1__group_data_i))));
        bufp->chgCData(oldp+659,((((0U == (0xffU & 
                                           (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                                            >> 9U))) 
                                   << 1U) | (0U == 
                                             (0xffU 
                                              & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U] 
                                                 >> 0x11U))))),2);
        bufp->chgBit(oldp+660,((IData)((0U == (0x1fffe00U 
                                               & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])))));
        bufp->chgCData(oldp+661,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__lzd_grouplv1__group_data_i),2);
        bufp->chgBit(oldp+662,((3U == (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__lzd_grouplv1__group_data_i))));
        bufp->chgCData(oldp+663,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__lzd_grouplv1__group_data_i),2);
        bufp->chgBit(oldp+664,((3U == (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__lzd_grouplv1__group_data_i))));
        bufp->chgCData(oldp+665,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__lzd_grouplv2_0__group_data_i),2);
        bufp->chgBit(oldp+666,((3U == (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__lzd_grouplv2_0__group_data_i))));
        bufp->chgCData(oldp+667,((((IData)((3U == (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__lzd_grouplv1__group_data_i))) 
                                   << 1U) | (3U == (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__lzd_grouplv1__group_data_i)))),2);
        bufp->chgBit(oldp+668,(((3U == (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__lzd_grouplv1__group_data_i)) 
                                & (3U == (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__lod__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__lzd_grouplv1__group_data_i)))));
        bufp->chgBit(oldp+669,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__msb_inc__DOT____VdfgRegularize_hb50ef5f9_0_2 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+670,((1U & (((1U & (IData)(
                                                     (1ULL 
                                                      & ((2ULL 
                                                          + 
                                                          ((0x1000000000000ULL 
                                                            | (0xffffffffffffULL 
                                                               & (~ 
                                                                  (((QData)((IData)(
                                                                                vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[0U])))))) 
                                                           + 
                                                           (((QData)((IData)(
                                                                             (1U 
                                                                              & (~ 
                                                                                (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                                                                                >> 0x1dU))))) 
                                                             << 0x30U) 
                                                            | (0xffffffffffffULL 
                                                               & (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__eac__DOT____VdfgRegularize_hca792c16_0_0))))) 
                                                         >> 0x30U))))
                                        ? (~ (0x7ffffffU 
                                              & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U]))
                                        : ((~ (0x7ffffffU 
                                               & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U])) 
                                           - (IData)(1U))) 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+671,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT__Shift_num),7);
        bufp->chgSData(oldp+672,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT__norm_amt),9);
        bufp->chgSData(oldp+673,((0x3ffU & ((IData)(2U) 
                                            + (~ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])))),10);
        bufp->chgCData(oldp+674,((0xffU & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__A_reg1 
                                           >> 0x17U))),8);
        bufp->chgBit(oldp+675,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+676,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+677,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+678,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+679,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+680,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+681,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+682,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+683,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+684,((1U & ((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                       >> 0xaU) & (
                                                   vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                                                   >> 0x1cU)))));
        bufp->chgQData(oldp+685,((0xffffffffffffULL 
                                  & (((~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                          >> 9U)) & 
                                      ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT____VdfgRegularize_hc99b95d1_0_1) 
                                       & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT____VdfgRegularize_hc99b95d1_0_3) 
                                          >> 9U))) ? 
                                     (((QData)((IData)(
                                                       vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Rs_Mant[1U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Rs_Mant[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Rs_Mant[0U])) 
                                        >> 2U))) : 
                                     ((0U == (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Exp_norm))
                                       ? (((QData)((IData)(
                                                           vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[1U])) 
                                           << 0x3fU) 
                                          | (((QData)((IData)(
                                                              vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[1U])) 
                                              << 0x1fU) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[0U])) 
                                                >> 1U)))
                                       : ((0x200U & 
                                           vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Mant_norm[2U])
                                           ? VL_SHIFTL_QQI(48,48,9, 
                                                           (((QData)((IData)(
                                                                             vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U]))), (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT__norm_amt))
                                           : (0xfffffffffffeULL 
                                              & (VL_SHIFTL_QQI(47,47,9, 
                                                               (((QData)((IData)(
                                                                                vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__PosSum[0U]))), (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__norm__DOT__norm_amt)) 
                                                 << 1U))))))),48);
        bufp->chgBit(oldp+687,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Sticky_one));
        bufp->chgBit(oldp+688,((IData)((0U != (0x38000U 
                                               & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])))));
        bufp->chgBit(oldp+689,((1U & ((IData)((0x280000U 
                                               == (0x280000U 
                                                   & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U]))) 
                                      | (IData)((0x440000U 
                                                 == 
                                                 (0x440000U 
                                                  & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])))))));
        bufp->chgBit(oldp+690,((((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[3U] 
                                  >> 0x1eU) & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                               >> 0x17U)) 
                                & (0U != (0x600000U 
                                          & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])))));
        bufp->chgBit(oldp+691,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_sticky));
        bufp->chgIData(oldp+692,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_result_norm),24);
        bufp->chgCData(oldp+693,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Exp_result_norm),8);
        bufp->chgCData(oldp+694,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_lower),2);
        bufp->chgBit(oldp+695,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__GRSbits));
        bufp->chgBit(oldp+696,(((0x4000000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                 ? ((1U & (~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                              >> 0x19U))) 
                                    && ((1U & (~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                                  >> 0x18U))) 
                                        && (1U & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_lower) 
                                                  >> 1U))))
                                 : ((0x2000000U & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                     ? ((0x1000000U 
                                         & vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U])
                                         ? ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__GRSbits) 
                                            & (~ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Adder_sign)))
                                         : ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__GRSbits) 
                                            & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__Adder_sign)))
                                     : ((1U & (~ (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__stage1_bus_reg1[4U] 
                                                  >> 0x18U))) 
                                        && (IData)(
                                                   (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_lower) 
                                                     >> 1U) 
                                                    & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_lower) 
                                                        | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_sticky)) 
                                                       | vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_result_norm))))))));
        bufp->chgIData(oldp+697,(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_upper_rounded),25);
        bufp->chgBit(oldp+698,((1U & (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s2__DOT__rnd__DOT__Mant_upper_rounded 
                                      >> 0x18U))));
        bufp->chgQData(oldp+699,(vlSelfRef.MAC32_top_tb__DOT__unnamedblk1__DOT__exp),36);
        bufp->chgQData(oldp+701,(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o),49);
        bufp->chgQData(oldp+703,(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o),49);
        bufp->chgBit(oldp+705,((1U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o))));
        bufp->chgBit(oldp+706,((1U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o))));
        bufp->chgBit(oldp+707,((1U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o))));
        bufp->chgBit(oldp+708,((1U & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o) 
                                      ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o) 
                                         ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o))))));
        bufp->chgBit(oldp+709,((1U & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o) 
                                       & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o)) 
                                      | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o) 
                                          | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o)) 
                                         & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o))))));
        bufp->chgBit(oldp+710,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+711,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+712,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+713,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0xaU)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0xaU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+714,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0xaU)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0xaU))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0xaU)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0xaU))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+715,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+716,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+717,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+718,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0xbU)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0xbU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+719,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0xbU)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0xbU))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0xbU)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0xbU))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+720,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+721,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+722,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+723,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0xcU)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0xcU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+724,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0xcU)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0xcU))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0xcU)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0xcU))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+725,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+726,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+727,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+728,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0xdU)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0xdU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+729,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0xdU)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0xdU))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0xdU)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0xdU))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+730,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+731,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+732,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+733,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0xeU)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0xeU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+734,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0xeU)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0xeU))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0xeU)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0xeU))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+735,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+736,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+737,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+738,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0xfU)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0xfU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+739,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0xfU)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0xfU))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0xfU)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0xfU))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+740,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+741,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+742,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+743,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x10U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x10U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+744,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x10U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x10U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x10U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x10U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+745,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+746,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+747,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+748,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x11U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x11U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+749,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x11U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x11U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x11U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x11U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+750,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+751,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+752,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+753,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x12U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x12U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+754,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x12U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x12U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x12U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x12U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+755,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+756,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+757,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+758,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x13U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x13U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+759,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x13U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x13U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x13U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x13U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+760,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 1U)))));
        bufp->chgBit(oldp+761,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 1U)))));
        bufp->chgBit(oldp+762,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 1U)))));
        bufp->chgBit(oldp+763,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 1U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 1U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+764,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 1U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 1U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 1U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 1U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+765,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+766,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+767,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+768,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x14U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x14U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+769,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x14U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x14U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x14U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x14U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+770,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+771,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+772,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+773,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x15U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x15U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+774,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x15U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x15U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x15U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x15U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+775,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+776,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+777,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+778,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x16U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x16U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+779,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x16U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x16U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x16U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x16U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+780,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+781,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+782,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+783,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x17U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x17U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+784,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x17U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x17U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x17U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x17U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+785,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+786,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+787,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+788,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x18U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x18U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+789,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x18U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x18U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x18U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x18U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+790,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+791,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+792,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+793,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x19U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x19U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+794,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x19U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x19U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x19U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x19U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+795,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+796,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+797,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+798,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x1aU)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x1aU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+799,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x1aU)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x1aU))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x1aU)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x1aU))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+800,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+801,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+802,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+803,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x1bU)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x1bU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+804,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x1bU)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x1bU))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x1bU)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x1bU))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+805,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+806,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+807,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+808,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x1cU)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x1cU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+809,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x1cU)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x1cU))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x1cU)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x1cU))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+810,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+811,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+812,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+813,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x1dU)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x1dU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+814,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x1dU)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x1dU))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x1dU)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x1dU))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+815,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 2U)))));
        bufp->chgBit(oldp+816,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 2U)))));
        bufp->chgBit(oldp+817,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 2U)))));
        bufp->chgBit(oldp+818,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 2U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 2U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+819,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 2U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 2U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 2U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 2U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+820,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+821,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+822,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+823,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x1eU)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x1eU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+824,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x1eU)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x1eU))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x1eU)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x1eU))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+825,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+826,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+827,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+828,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x1fU)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x1fU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+829,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x1fU)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x1fU))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x1fU)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x1fU))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+830,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+831,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+832,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+833,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x20U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x20U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+834,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x20U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x20U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x20U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x20U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+835,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+836,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+837,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+838,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x21U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x21U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+839,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x21U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x21U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x21U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x21U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+840,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+841,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+842,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+843,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x22U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x22U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+844,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x22U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x22U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x22U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x22U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+845,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+846,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+847,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+848,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x23U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x23U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+849,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x23U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x23U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x23U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x23U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+850,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+851,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+852,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+853,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x24U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x24U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+854,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x24U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x24U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x24U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x24U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+855,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+856,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+857,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+858,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x25U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x25U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+859,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x25U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x25U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x25U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x25U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+860,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+861,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+862,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+863,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x26U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x26U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x26U)))))));
        bufp->chgBit(oldp+864,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x26U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x26U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x26U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x26U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x26U)))))));
        bufp->chgBit(oldp+865,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+866,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+867,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+868,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x27U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x27U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x27U)))))));
        bufp->chgBit(oldp+869,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x27U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x27U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x27U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x27U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x27U)))))));
        bufp->chgBit(oldp+870,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 3U)))));
        bufp->chgBit(oldp+871,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 3U)))));
        bufp->chgBit(oldp+872,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 3U)))));
        bufp->chgBit(oldp+873,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 3U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 3U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+874,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 3U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 3U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 3U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 3U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+875,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+876,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+877,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+878,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x28U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x28U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x28U)))))));
        bufp->chgBit(oldp+879,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x28U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x28U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x28U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x28U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x28U)))))));
        bufp->chgBit(oldp+880,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+881,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+882,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+883,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x29U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x29U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x29U)))))));
        bufp->chgBit(oldp+884,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x29U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x29U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x29U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x29U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x29U)))))));
        bufp->chgBit(oldp+885,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+886,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+887,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+888,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x2aU)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x2aU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x2aU)))))));
        bufp->chgBit(oldp+889,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x2aU)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x2aU))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x2aU)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x2aU))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x2aU)))))));
        bufp->chgBit(oldp+890,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+891,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+892,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+893,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x2bU)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x2bU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x2bU)))))));
        bufp->chgBit(oldp+894,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x2bU)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x2bU))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x2bU)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x2bU))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x2bU)))))));
        bufp->chgBit(oldp+895,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+896,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+897,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+898,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x2cU)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x2cU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x2cU)))))));
        bufp->chgBit(oldp+899,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x2cU)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x2cU))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x2cU)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x2cU))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x2cU)))))));
        bufp->chgBit(oldp+900,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+901,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+902,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+903,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x2dU)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x2dU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x2dU)))))));
        bufp->chgBit(oldp+904,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x2dU)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x2dU))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x2dU)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x2dU))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x2dU)))))));
        bufp->chgBit(oldp+905,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+906,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+907,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+908,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x2eU)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x2eU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x2eU)))))));
        bufp->chgBit(oldp+909,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x2eU)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x2eU))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x2eU)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x2eU))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x2eU)))))));
        bufp->chgBit(oldp+910,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+911,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+912,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+913,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 0x2fU)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 0x2fU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x2fU)))))));
        bufp->chgBit(oldp+914,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x2fU)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x2fU))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x2fU)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x2fU))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x2fU)))))));
        bufp->chgBit(oldp+915,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+916,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+917,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+918,((IData)((((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                          ^ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o) 
                                         ^ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o) 
                                        >> 0x30U))));
        bufp->chgBit(oldp+919,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 0x30U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 0x30U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 0x30U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 0x30U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 0x30U)))))));
        bufp->chgBit(oldp+920,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 4U)))));
        bufp->chgBit(oldp+921,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 4U)))));
        bufp->chgBit(oldp+922,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 4U)))));
        bufp->chgBit(oldp+923,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 4U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 4U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+924,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 4U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 4U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 4U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 4U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+925,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 5U)))));
        bufp->chgBit(oldp+926,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 5U)))));
        bufp->chgBit(oldp+927,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 5U)))));
        bufp->chgBit(oldp+928,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 5U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 5U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+929,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 5U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 5U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 5U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 5U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+930,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 6U)))));
        bufp->chgBit(oldp+931,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 6U)))));
        bufp->chgBit(oldp+932,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 6U)))));
        bufp->chgBit(oldp+933,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 6U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 6U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+934,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 6U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 6U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 6U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 6U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+935,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 7U)))));
        bufp->chgBit(oldp+936,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 7U)))));
        bufp->chgBit(oldp+937,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 7U)))));
        bufp->chgBit(oldp+938,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 7U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 7U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+939,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 7U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 7U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 7U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 7U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+940,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 8U)))));
        bufp->chgBit(oldp+941,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 8U)))));
        bufp->chgBit(oldp+942,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 8U)))));
        bufp->chgBit(oldp+943,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 8U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 8U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+944,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 8U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 8U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 8U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 8U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+945,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                              >> 9U)))));
        bufp->chgBit(oldp+946,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                              >> 9U)))));
        bufp->chgBit(oldp+947,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                              >> 9U)))));
        bufp->chgBit(oldp+948,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                               >> 9U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                  >> 9U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+949,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                >> 9U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                  >> 9U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                                                   >> 9U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                                                     >> 9U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o 
                                                    >> 9U)))))));
        bufp->chgQData(oldp+950,(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o),49);
        bufp->chgQData(oldp+952,(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o),49);
        bufp->chgBit(oldp+954,((1U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o))));
        bufp->chgBit(oldp+955,((1U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o))));
        bufp->chgBit(oldp+956,((1U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o))));
        bufp->chgBit(oldp+957,((1U & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o) 
                                      ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o) 
                                         ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o))))));
        bufp->chgBit(oldp+958,((1U & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o) 
                                       & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o)) 
                                      | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o) 
                                          | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o)) 
                                         & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o))))));
        bufp->chgBit(oldp+959,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+960,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+961,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+962,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0xaU)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                  >> 0xaU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+963,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                >> 0xaU)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                  >> 0xaU))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0xaU)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                     >> 0xaU))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+964,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+965,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+966,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+967,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0xbU)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                  >> 0xbU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+968,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                >> 0xbU)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                  >> 0xbU))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0xbU)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                     >> 0xbU))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+969,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+970,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+971,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+972,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0xcU)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                  >> 0xcU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+973,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                >> 0xcU)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                  >> 0xcU))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0xcU)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                     >> 0xcU))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+974,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+975,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+976,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+977,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0xdU)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                  >> 0xdU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+978,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                >> 0xdU)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                  >> 0xdU))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0xdU)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                     >> 0xdU))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+979,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+980,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+981,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+982,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0xeU)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                  >> 0xeU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+983,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                >> 0xeU)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                  >> 0xeU))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0xeU)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                     >> 0xeU))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+984,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+985,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+986,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+987,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0xfU)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                  >> 0xfU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+988,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                >> 0xfU)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                  >> 0xfU))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0xfU)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                     >> 0xfU))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+989,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+990,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+991,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+992,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x10U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                  >> 0x10U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+993,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                >> 0x10U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                  >> 0x10U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x10U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                     >> 0x10U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+994,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+995,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+996,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+997,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x11U)) 
                                      ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                  >> 0x11U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+998,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                >> 0x11U)) 
                                       & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                  >> 0x11U))) 
                                      | (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x11U)) 
                                          | (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                     >> 0x11U))) 
                                         & (IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+999,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+1000,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1001,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1002,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x12U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1003,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x12U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x12U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x12U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x12U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1004,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1005,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1006,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1007,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x13U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x13U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1008,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x13U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x13U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x13U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x13U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1009,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 1U)))));
        bufp->chgBit(oldp+1010,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 1U)))));
        bufp->chgBit(oldp+1011,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 1U)))));
        bufp->chgBit(oldp+1012,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 1U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 1U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1013,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 1U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 1U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 1U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 1U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1014,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1015,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1016,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1017,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x14U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x14U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1018,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x14U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x14U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x14U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x14U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1019,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1020,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1021,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1022,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x15U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1023,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x15U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x15U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x15U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x15U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1024,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1025,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1026,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1027,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x16U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x16U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1028,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x16U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x16U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x16U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x16U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1029,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1030,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1031,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1032,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x17U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x17U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1033,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x17U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x17U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x17U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x17U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1034,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1035,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1036,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1037,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x18U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x18U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1038,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x18U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x18U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x18U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x18U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1039,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1040,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1041,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1042,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x19U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x19U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1043,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x19U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x19U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x19U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x19U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1044,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1045,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1046,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1047,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x1aU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x1aU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1048,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x1aU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x1aU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x1aU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x1aU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1049,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1050,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1051,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1052,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x1bU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x1bU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1053,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x1bU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x1bU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x1bU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x1bU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1054,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1055,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1056,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1057,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x1cU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x1cU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1058,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x1cU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x1cU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x1cU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x1cU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1059,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1060,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1061,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1062,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x1dU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x1dU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1063,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x1dU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x1dU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x1dU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x1dU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1064,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 2U)))));
        bufp->chgBit(oldp+1065,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 2U)))));
        bufp->chgBit(oldp+1066,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 2U)))));
        bufp->chgBit(oldp+1067,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 2U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 2U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1068,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 2U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 2U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 2U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 2U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1069,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1070,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1071,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1072,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x1eU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x1eU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1073,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x1eU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x1eU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x1eU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x1eU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1074,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1075,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1076,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1077,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x1fU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x1fU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1078,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x1fU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x1fU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x1fU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x1fU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1079,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1080,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1081,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1082,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x20U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x20U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1083,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x20U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x20U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x20U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x20U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1084,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1085,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1086,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1087,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x21U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x21U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1088,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x21U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x21U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x21U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x21U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1089,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1090,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1091,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1092,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x22U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x22U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1093,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x22U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x22U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x22U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x22U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1094,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1095,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1096,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1097,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x23U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x23U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1098,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x23U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x23U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x23U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x23U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1099,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1100,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1101,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1102,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x24U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x24U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1103,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x24U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x24U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x24U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x24U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1104,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1105,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1106,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1107,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x25U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x25U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1108,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x25U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x25U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x25U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x25U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1109,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1110,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1111,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1112,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x26U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x26U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1113,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x26U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x26U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x26U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x26U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1114,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1115,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1116,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1117,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x27U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x27U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1118,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x27U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x27U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x27U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x27U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1119,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 3U)))));
        bufp->chgBit(oldp+1120,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 3U)))));
        bufp->chgBit(oldp+1121,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 3U)))));
        bufp->chgBit(oldp+1122,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 3U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 3U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1123,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 3U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 3U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 3U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 3U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1124,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1125,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1126,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1127,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x28U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x28U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1128,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x28U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x28U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x28U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x28U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1129,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1130,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1131,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1132,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x29U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x29U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1133,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x29U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x29U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x29U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x29U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1134,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1135,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1136,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1137,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x2aU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x2aU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1138,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x2aU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x2aU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x2aU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x2aU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1139,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1140,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1141,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1142,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x2bU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x2bU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1143,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x2bU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x2bU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x2bU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x2bU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1144,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1145,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1146,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1147,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x2cU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x2cU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1148,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x2cU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x2cU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x2cU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x2cU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1149,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1150,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1151,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1152,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x2dU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x2dU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1153,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x2dU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x2dU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x2dU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x2dU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1154,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1155,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1156,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1157,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x2eU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x2eU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1158,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x2eU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x2eU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x2eU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x2eU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1159,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1160,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1161,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1162,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 0x2fU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 0x2fU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1163,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x2fU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x2fU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x2fU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x2fU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1164,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1165,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1166,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1167,((IData)((((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                           ^ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o) 
                                          ^ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o) 
                                         >> 0x30U))));
        bufp->chgBit(oldp+1168,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 0x30U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 0x30U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 0x30U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 0x30U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+1169,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 4U)))));
        bufp->chgBit(oldp+1170,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 4U)))));
        bufp->chgBit(oldp+1171,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 4U)))));
        bufp->chgBit(oldp+1172,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 4U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 4U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1173,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 4U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 4U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 4U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 4U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1174,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 5U)))));
        bufp->chgBit(oldp+1175,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 5U)))));
        bufp->chgBit(oldp+1176,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 5U)))));
        bufp->chgBit(oldp+1177,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 5U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 5U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1178,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 5U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 5U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 5U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 5U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1179,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 6U)))));
        bufp->chgBit(oldp+1180,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 6U)))));
        bufp->chgBit(oldp+1181,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 6U)))));
        bufp->chgBit(oldp+1182,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 6U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 6U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1183,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 6U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 6U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 6U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 6U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1184,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 7U)))));
        bufp->chgBit(oldp+1185,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 7U)))));
        bufp->chgBit(oldp+1186,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 7U)))));
        bufp->chgBit(oldp+1187,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 7U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 7U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1188,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 7U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 7U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 7U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 7U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1189,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 8U)))));
        bufp->chgBit(oldp+1190,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 8U)))));
        bufp->chgBit(oldp+1191,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 8U)))));
        bufp->chgBit(oldp+1192,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 8U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 8U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1193,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 8U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 8U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 8U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 8U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1194,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                               >> 9U)))));
        bufp->chgBit(oldp+1195,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                               >> 9U)))));
        bufp->chgBit(oldp+1196,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                               >> 9U)))));
        bufp->chgBit(oldp+1197,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                >> 9U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                   >> 9U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+1198,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                 >> 9U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                   >> 9U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                                                    >> 9U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                                                      >> 9U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o 
                                                     >> 9U)))))));
        bufp->chgQData(oldp+1199,(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o),49);
        bufp->chgQData(oldp+1201,(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o),49);
        bufp->chgBit(oldp+1203,((1U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o))));
        bufp->chgBit(oldp+1204,((1U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o))));
        bufp->chgBit(oldp+1205,((1U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o))));
        bufp->chgBit(oldp+1206,((1U & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o) 
                                       ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o) 
                                          ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o))))));
        bufp->chgBit(oldp+1207,((1U & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o) 
                                        & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o)) 
                                       | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o) 
                                           | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o)) 
                                          & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o))))));
        bufp->chgBit(oldp+1208,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1209,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1210,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1211,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0xaU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0xaU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1212,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0xaU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0xaU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0xaU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0xaU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1213,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1214,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1215,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1216,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0xbU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0xbU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1217,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0xbU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0xbU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0xbU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0xbU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1218,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1219,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1220,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1221,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0xcU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1222,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0xcU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0xcU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0xcU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0xcU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1223,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1224,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1225,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1226,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0xdU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0xdU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1227,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0xdU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0xdU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0xdU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0xdU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1228,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1229,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1230,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1231,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0xeU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0xeU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1232,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0xeU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0xeU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0xeU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0xeU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1233,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1234,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1235,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1236,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0xfU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1237,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0xfU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0xfU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0xfU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0xfU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1238,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1239,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1240,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1241,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x10U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x10U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1242,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x10U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x10U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x10U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x10U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1243,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1244,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1245,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1246,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x11U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x11U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1247,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x11U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x11U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x11U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x11U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1248,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1249,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1250,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1251,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x12U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1252,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x12U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x12U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x12U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x12U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1253,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1254,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1255,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1256,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x13U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x13U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1257,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x13U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x13U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x13U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x13U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1258,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 1U)))));
        bufp->chgBit(oldp+1259,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 1U)))));
        bufp->chgBit(oldp+1260,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 1U)))));
        bufp->chgBit(oldp+1261,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 1U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 1U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1262,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 1U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 1U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 1U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 1U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1263,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1264,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1265,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1266,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x14U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x14U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1267,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x14U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x14U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x14U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x14U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1268,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1269,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1270,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1271,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x15U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1272,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x15U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x15U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x15U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x15U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1273,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1274,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1275,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1276,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x16U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x16U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1277,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x16U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x16U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x16U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x16U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1278,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1279,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1280,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1281,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x17U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x17U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1282,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x17U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x17U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x17U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x17U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1283,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1284,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1285,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1286,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x18U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x18U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1287,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x18U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x18U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x18U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x18U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1288,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1289,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1290,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1291,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x19U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x19U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1292,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x19U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x19U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x19U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x19U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1293,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1294,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1295,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1296,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x1aU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x1aU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1297,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x1aU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x1aU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x1aU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x1aU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1298,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1299,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1300,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1301,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x1bU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x1bU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1302,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x1bU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x1bU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x1bU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x1bU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1303,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1304,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1305,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1306,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x1cU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x1cU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1307,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x1cU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x1cU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x1cU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x1cU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1308,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1309,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1310,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1311,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x1dU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x1dU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1312,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x1dU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x1dU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x1dU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x1dU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1313,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 2U)))));
        bufp->chgBit(oldp+1314,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 2U)))));
        bufp->chgBit(oldp+1315,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 2U)))));
        bufp->chgBit(oldp+1316,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 2U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 2U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1317,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 2U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 2U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 2U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 2U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1318,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1319,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1320,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1321,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x1eU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x1eU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1322,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x1eU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x1eU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x1eU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x1eU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1323,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1324,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1325,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1326,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x1fU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x1fU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1327,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x1fU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x1fU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x1fU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x1fU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1328,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1329,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1330,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1331,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x20U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x20U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1332,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x20U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x20U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x20U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x20U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1333,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1334,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1335,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1336,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x21U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x21U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1337,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x21U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x21U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x21U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x21U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1338,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1339,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1340,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1341,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x22U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x22U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1342,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x22U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x22U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x22U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x22U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1343,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1344,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1345,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1346,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x23U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x23U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1347,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x23U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x23U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x23U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x23U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1348,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1349,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1350,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1351,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x24U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x24U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1352,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x24U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x24U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x24U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x24U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1353,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1354,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1355,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1356,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x25U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x25U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1357,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x25U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x25U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x25U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x25U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1358,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1359,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1360,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1361,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x26U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x26U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1362,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x26U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x26U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x26U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x26U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1363,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1364,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1365,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1366,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x27U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x27U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1367,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x27U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x27U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x27U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x27U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1368,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 3U)))));
        bufp->chgBit(oldp+1369,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 3U)))));
        bufp->chgBit(oldp+1370,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 3U)))));
        bufp->chgBit(oldp+1371,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 3U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 3U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1372,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 3U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 3U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 3U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 3U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1373,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1374,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1375,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1376,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x28U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x28U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1377,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x28U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x28U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x28U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x28U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1378,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1379,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1380,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1381,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x29U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x29U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1382,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x29U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x29U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x29U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x29U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1383,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1384,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1385,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1386,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x2aU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x2aU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1387,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x2aU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x2aU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x2aU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x2aU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1388,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1389,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1390,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1391,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x2bU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x2bU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1392,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x2bU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x2bU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x2bU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x2bU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1393,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1394,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1395,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1396,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x2cU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x2cU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1397,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x2cU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x2cU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x2cU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x2cU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1398,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1399,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1400,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1401,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x2dU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x2dU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1402,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x2dU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x2dU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x2dU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x2dU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1403,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1404,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1405,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1406,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x2eU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x2eU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1407,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x2eU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x2eU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x2eU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x2eU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1408,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1409,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1410,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1411,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 0x2fU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 0x2fU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1412,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x2fU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x2fU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x2fU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x2fU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1413,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1414,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1415,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1416,((IData)((((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                           ^ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o) 
                                          ^ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o) 
                                         >> 0x30U))));
        bufp->chgBit(oldp+1417,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 0x30U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 0x30U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 0x30U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 0x30U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+1418,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 4U)))));
        bufp->chgBit(oldp+1419,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 4U)))));
        bufp->chgBit(oldp+1420,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 4U)))));
        bufp->chgBit(oldp+1421,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 4U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 4U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1422,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 4U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 4U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 4U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 4U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1423,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 5U)))));
        bufp->chgBit(oldp+1424,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 5U)))));
        bufp->chgBit(oldp+1425,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 5U)))));
        bufp->chgBit(oldp+1426,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 5U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 5U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1427,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 5U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 5U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 5U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 5U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1428,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 6U)))));
        bufp->chgBit(oldp+1429,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 6U)))));
        bufp->chgBit(oldp+1430,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 6U)))));
        bufp->chgBit(oldp+1431,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 6U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 6U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1432,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 6U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 6U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 6U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 6U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1433,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 7U)))));
        bufp->chgBit(oldp+1434,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 7U)))));
        bufp->chgBit(oldp+1435,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 7U)))));
        bufp->chgBit(oldp+1436,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 7U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 7U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1437,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 7U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 7U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 7U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 7U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1438,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 8U)))));
        bufp->chgBit(oldp+1439,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 8U)))));
        bufp->chgBit(oldp+1440,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 8U)))));
        bufp->chgBit(oldp+1441,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 8U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 8U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1442,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 8U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 8U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 8U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 8U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1443,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                               >> 9U)))));
        bufp->chgBit(oldp+1444,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                               >> 9U)))));
        bufp->chgBit(oldp+1445,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                               >> 9U)))));
        bufp->chgBit(oldp+1446,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                >> 9U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                   >> 9U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+1447,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                 >> 9U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                   >> 9U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                                                    >> 9U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                                                      >> 9U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o 
                                                     >> 9U)))))));
        bufp->chgQData(oldp+1448,(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3.Sum_o),49);
        bufp->chgQData(oldp+1450,(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3.Carry_o),49);
        bufp->chgBit(oldp+1452,((1U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o))));
        bufp->chgBit(oldp+1453,((1U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o))));
        bufp->chgBit(oldp+1454,((1U & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o))));
        bufp->chgBit(oldp+1455,((1U & ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o) 
                                       ^ ((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o) 
                                          ^ (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o))))));
        bufp->chgBit(oldp+1456,((1U & (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o) 
                                        & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o)) 
                                       | (((IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o) 
                                           | (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o)) 
                                          & (IData)(vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o))))));
        bufp->chgBit(oldp+1457,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1458,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1459,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1460,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0xaU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0xaU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1461,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0xaU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0xaU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0xaU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0xaU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1462,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1463,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1464,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1465,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0xbU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0xbU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1466,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0xbU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0xbU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0xbU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0xbU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1467,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1468,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1469,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1470,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0xcU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1471,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0xcU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0xcU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0xcU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0xcU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1472,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1473,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1474,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1475,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0xdU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0xdU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1476,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0xdU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0xdU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0xdU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0xdU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1477,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1478,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1479,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1480,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0xeU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0xeU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1481,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0xeU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0xeU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0xeU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0xeU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1482,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1483,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1484,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1485,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0xfU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1486,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0xfU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0xfU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0xfU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0xfU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1487,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1488,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1489,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1490,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x10U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x10U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1491,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x10U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x10U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x10U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x10U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1492,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1493,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1494,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1495,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x11U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x11U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1496,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x11U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x11U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x11U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x11U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1497,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1498,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1499,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1500,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x12U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1501,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x12U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x12U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x12U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x12U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1502,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1503,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1504,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1505,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x13U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x13U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1506,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x13U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x13U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x13U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x13U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1507,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 1U)))));
        bufp->chgBit(oldp+1508,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 1U)))));
        bufp->chgBit(oldp+1509,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 1U)))));
        bufp->chgBit(oldp+1510,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 1U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 1U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1511,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 1U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 1U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 1U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 1U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1512,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1513,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1514,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1515,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x14U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x14U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1516,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x14U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x14U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x14U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x14U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1517,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1518,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1519,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1520,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x15U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1521,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x15U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x15U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x15U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x15U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1522,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1523,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1524,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1525,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x16U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x16U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1526,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x16U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x16U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x16U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x16U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1527,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1528,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1529,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1530,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x17U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x17U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1531,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x17U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x17U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x17U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x17U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1532,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1533,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1534,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1535,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x18U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x18U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1536,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x18U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x18U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x18U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x18U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1537,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1538,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1539,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1540,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x19U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x19U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1541,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x19U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x19U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x19U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x19U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1542,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1543,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1544,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1545,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x1aU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x1aU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1546,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x1aU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x1aU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x1aU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x1aU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1547,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1548,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1549,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1550,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x1bU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x1bU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1551,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x1bU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x1bU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x1bU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x1bU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1552,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1553,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1554,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1555,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x1cU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x1cU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1556,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x1cU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x1cU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x1cU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x1cU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1557,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1558,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1559,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1560,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x1dU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x1dU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1561,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x1dU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x1dU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x1dU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x1dU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1562,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 2U)))));
        bufp->chgBit(oldp+1563,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 2U)))));
        bufp->chgBit(oldp+1564,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 2U)))));
        bufp->chgBit(oldp+1565,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 2U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 2U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1566,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 2U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 2U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 2U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 2U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1567,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1568,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1569,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1570,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x1eU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x1eU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1571,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x1eU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x1eU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x1eU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x1eU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1572,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1573,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1574,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1575,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x1fU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x1fU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1576,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x1fU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x1fU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x1fU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x1fU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1577,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1578,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1579,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1580,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x20U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x20U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1581,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x20U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x20U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x20U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x20U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1582,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1583,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1584,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1585,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x21U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x21U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1586,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x21U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x21U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x21U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x21U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1587,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1588,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1589,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1590,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x22U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x22U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1591,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x22U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x22U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x22U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x22U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1592,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1593,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1594,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1595,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x23U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x23U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1596,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x23U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x23U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x23U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x23U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1597,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1598,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1599,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1600,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x24U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x24U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1601,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x24U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x24U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x24U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x24U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1602,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1603,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1604,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1605,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x25U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x25U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1606,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x25U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x25U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x25U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x25U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1607,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1608,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1609,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1610,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x26U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x26U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1611,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x26U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x26U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x26U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x26U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1612,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1613,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1614,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1615,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x27U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x27U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1616,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x27U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x27U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x27U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x27U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1617,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 3U)))));
        bufp->chgBit(oldp+1618,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 3U)))));
        bufp->chgBit(oldp+1619,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 3U)))));
        bufp->chgBit(oldp+1620,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 3U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 3U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1621,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 3U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 3U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 3U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 3U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1622,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1623,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1624,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1625,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x28U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x28U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1626,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x28U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x28U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x28U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x28U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1627,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1628,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1629,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1630,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x29U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x29U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1631,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x29U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x29U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x29U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x29U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1632,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1633,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1634,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1635,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x2aU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x2aU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1636,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x2aU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x2aU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x2aU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x2aU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1637,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1638,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1639,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1640,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x2bU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x2bU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1641,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x2bU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x2bU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x2bU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x2bU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1642,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1643,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1644,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1645,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x2cU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x2cU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1646,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x2cU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x2cU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x2cU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x2cU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1647,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1648,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1649,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1650,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x2dU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x2dU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1651,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x2dU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x2dU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x2dU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x2dU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1652,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1653,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1654,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1655,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x2eU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x2eU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1656,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x2eU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x2eU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x2eU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x2eU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1657,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1658,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1659,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1660,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 0x2fU)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 0x2fU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1661,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x2fU)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x2fU))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x2fU)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x2fU))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1662,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1663,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1664,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1665,((IData)((((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                           ^ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o) 
                                          ^ vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o) 
                                         >> 0x30U))));
        bufp->chgBit(oldp+1666,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 0x30U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 0x30U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 0x30U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 0x30U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+1667,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 4U)))));
        bufp->chgBit(oldp+1668,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 4U)))));
        bufp->chgBit(oldp+1669,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 4U)))));
        bufp->chgBit(oldp+1670,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 4U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 4U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1671,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 4U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 4U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 4U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 4U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1672,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 5U)))));
        bufp->chgBit(oldp+1673,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 5U)))));
        bufp->chgBit(oldp+1674,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 5U)))));
        bufp->chgBit(oldp+1675,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 5U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 5U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1676,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 5U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 5U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 5U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 5U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1677,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 6U)))));
        bufp->chgBit(oldp+1678,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 6U)))));
        bufp->chgBit(oldp+1679,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 6U)))));
        bufp->chgBit(oldp+1680,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 6U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 6U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1681,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 6U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 6U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 6U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 6U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1682,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 7U)))));
        bufp->chgBit(oldp+1683,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 7U)))));
        bufp->chgBit(oldp+1684,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 7U)))));
        bufp->chgBit(oldp+1685,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 7U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 7U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1686,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 7U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 7U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 7U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 7U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1687,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 8U)))));
        bufp->chgBit(oldp+1688,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 8U)))));
        bufp->chgBit(oldp+1689,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 8U)))));
        bufp->chgBit(oldp+1690,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 8U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 8U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1691,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 8U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 8U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 8U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 8U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1692,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                               >> 9U)))));
        bufp->chgBit(oldp+1693,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                               >> 9U)))));
        bufp->chgBit(oldp+1694,((1U & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                               >> 9U)))));
        bufp->chgBit(oldp+1695,((1U & ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                >> 9U)) 
                                       ^ ((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                   >> 9U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+1696,((1U & (((IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                 >> 9U)) 
                                        & (IData)((vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                   >> 9U))) 
                                       | (((IData)(
                                                   (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                                                    >> 9U)) 
                                           | (IData)(
                                                     (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                                                      >> 9U))) 
                                          & (IData)(
                                                    (vlSelfRef.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o 
                                                     >> 9U)))))));
        bufp->chgQData(oldp+1697,((0x1ffffffffffffULL 
                                   & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U))),49);
        bufp->chgQData(oldp+1699,(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0.Sum_o),49);
        bufp->chgQData(oldp+1701,(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0.Carry_o),49);
        bufp->chgBit(oldp+1703,((1U & (IData)(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o))));
        bufp->chgBit(oldp+1704,((1U & (IData)((0x1ffffffffffffULL 
                                               & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U))))));
        bufp->chgBit(oldp+1705,((1U & (IData)(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o))));
        bufp->chgBit(oldp+1706,((1U & ((IData)(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o) 
                                       ^ ((IData)((0x1ffffffffffffULL 
                                                   & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U))) 
                                          ^ (IData)(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o))))));
        bufp->chgBit(oldp+1707,((1U & (((IData)((0x1ffffffffffffULL 
                                                 & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U))) 
                                        & (IData)(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o)) 
                                       | (((IData)(
                                                   (0x1ffffffffffffULL 
                                                    & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U))) 
                                           | (IData)(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o)) 
                                          & (IData)(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o))))));
        bufp->chgBit(oldp+1708,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1709,((1U & (IData)((0x7fffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1710,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1711,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0xaU)) 
                                       ^ ((IData)((0x7fffffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0xaU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1712,((1U & (((IData)((0x7fffffffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0xaU))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0xaU))) 
                                       | (((IData)(
                                                   (0x7fffffffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0xaU))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0xaU))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1713,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1714,((1U & (IData)((0x3fffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1715,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1716,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0xbU)) 
                                       ^ ((IData)((0x3fffffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0xbU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1717,((1U & (((IData)((0x3fffffffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0xbU))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0xbU))) 
                                       | (((IData)(
                                                   (0x3fffffffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0xbU))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0xbU))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1718,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1719,((1U & (IData)((0x1fffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1720,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1721,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0xcU)) 
                                       ^ ((IData)((0x1fffffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0xcU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1722,((1U & (((IData)((0x1fffffffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0xcU))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0xcU))) 
                                       | (((IData)(
                                                   (0x1fffffffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0xcU))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0xcU))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1723,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1724,((1U & (IData)((0xfffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1725,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1726,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0xdU)) 
                                       ^ ((IData)((0xfffffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0xdU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1727,((1U & (((IData)((0xfffffffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0xdU))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0xdU))) 
                                       | (((IData)(
                                                   (0xfffffffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0xdU))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0xdU))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1728,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1729,((1U & (IData)((0x7ffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1730,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1731,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0xeU)) 
                                       ^ ((IData)((0x7ffffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0xeU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1732,((1U & (((IData)((0x7ffffffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0xeU))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0xeU))) 
                                       | (((IData)(
                                                   (0x7ffffffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0xeU))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0xeU))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1733,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1734,((1U & (IData)((0x3ffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1735,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1736,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0xfU)) 
                                       ^ ((IData)((0x3ffffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0xfU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1737,((1U & (((IData)((0x3ffffffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0xfU))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0xfU))) 
                                       | (((IData)(
                                                   (0x3ffffffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0xfU))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0xfU))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1738,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1739,((1U & (IData)((0x1ffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1740,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1741,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x10U)) 
                                       ^ ((IData)((0x1ffffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x10U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1742,((1U & (((IData)((0x1ffffffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x10U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x10U))) 
                                       | (((IData)(
                                                   (0x1ffffffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x10U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x10U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1743,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1744,((1U & (IData)((0xffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1745,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1746,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x11U)) 
                                       ^ ((IData)((0xffffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x11U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1747,((1U & (((IData)((0xffffffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x11U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x11U))) 
                                       | (((IData)(
                                                   (0xffffffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x11U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x11U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1748,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1749,((1U & (IData)((0x7fffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1750,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1751,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x12U)) 
                                       ^ ((IData)((0x7fffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x12U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1752,((1U & (((IData)((0x7fffffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x12U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x12U))) 
                                       | (((IData)(
                                                   (0x7fffffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x12U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x12U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1753,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1754,((1U & (IData)((0x3fffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1755,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1756,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x13U)) 
                                       ^ ((IData)((0x3fffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x13U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1757,((1U & (((IData)((0x3fffffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x13U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x13U))) 
                                       | (((IData)(
                                                   (0x3fffffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x13U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x13U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1758,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 1U)))));
        bufp->chgBit(oldp+1759,((1U & (IData)((0xffffffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1760,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 1U)))));
        bufp->chgBit(oldp+1761,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 1U)) 
                                       ^ ((IData)((0xffffffffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 1U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1762,((1U & (((IData)((0xffffffffffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 1U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 1U))) 
                                       | (((IData)(
                                                   (0xffffffffffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 1U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 1U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1763,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1764,((1U & (IData)((0x1fffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1765,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1766,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x14U)) 
                                       ^ ((IData)((0x1fffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x14U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1767,((1U & (((IData)((0x1fffffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x14U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x14U))) 
                                       | (((IData)(
                                                   (0x1fffffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x14U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x14U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1768,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1769,((1U & (IData)((0xfffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1770,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1771,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x15U)) 
                                       ^ ((IData)((0xfffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x15U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1772,((1U & (((IData)((0xfffffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x15U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x15U))) 
                                       | (((IData)(
                                                   (0xfffffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x15U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x15U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1773,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1774,((1U & (IData)((0x7ffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1775,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1776,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x16U)) 
                                       ^ ((IData)((0x7ffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x16U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1777,((1U & (((IData)((0x7ffffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x16U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x16U))) 
                                       | (((IData)(
                                                   (0x7ffffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x16U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x16U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1778,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1779,((1U & (IData)((0x3ffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1780,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1781,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x17U)) 
                                       ^ ((IData)((0x3ffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x17U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1782,((1U & (((IData)((0x3ffffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x17U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x17U))) 
                                       | (((IData)(
                                                   (0x3ffffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x17U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x17U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1783,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1784,((1U & (IData)((0x1ffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1785,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1786,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x18U)) 
                                       ^ ((IData)((0x1ffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x18U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1787,((1U & (((IData)((0x1ffffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x18U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x18U))) 
                                       | (((IData)(
                                                   (0x1ffffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x18U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x18U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1788,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1789,((1U & (IData)((0xffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1790,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1791,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x19U)) 
                                       ^ ((IData)((0xffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x19U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1792,((1U & (((IData)((0xffffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x19U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x19U))) 
                                       | (((IData)(
                                                   (0xffffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x19U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x19U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1793,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1794,((1U & (IData)((0x7fffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1795,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1796,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x1aU)) 
                                       ^ ((IData)((0x7fffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x1aU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1797,((1U & (((IData)((0x7fffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x1aU))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x1aU))) 
                                       | (((IData)(
                                                   (0x7fffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x1aU))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x1aU))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1798,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1799,((1U & (IData)((0x3fffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1800,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1801,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x1bU)) 
                                       ^ ((IData)((0x3fffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x1bU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1802,((1U & (((IData)((0x3fffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x1bU))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x1bU))) 
                                       | (((IData)(
                                                   (0x3fffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x1bU))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x1bU))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1803,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1804,((1U & (IData)((0x1fffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1805,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1806,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x1cU)) 
                                       ^ ((IData)((0x1fffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x1cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1807,((1U & (((IData)((0x1fffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x1cU))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x1cU))) 
                                       | (((IData)(
                                                   (0x1fffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x1cU))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x1cU))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1808,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1809,((1U & (IData)((0xfffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1810,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1811,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x1dU)) 
                                       ^ ((IData)((0xfffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x1dU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1812,((1U & (((IData)((0xfffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x1dU))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x1dU))) 
                                       | (((IData)(
                                                   (0xfffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x1dU))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x1dU))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1813,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 2U)))));
        bufp->chgBit(oldp+1814,((1U & (IData)((0x7fffffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1815,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 2U)))));
        bufp->chgBit(oldp+1816,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 2U)) 
                                       ^ ((IData)((0x7fffffffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 2U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1817,((1U & (((IData)((0x7fffffffffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 2U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 2U))) 
                                       | (((IData)(
                                                   (0x7fffffffffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 2U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 2U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1818,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1819,((1U & (IData)((0x7ffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1820,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1821,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x1eU)) 
                                       ^ ((IData)((0x7ffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x1eU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1822,((1U & (((IData)((0x7ffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x1eU))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x1eU))) 
                                       | (((IData)(
                                                   (0x7ffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x1eU))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x1eU))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1823,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1824,((1U & (IData)((0x3ffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1825,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1826,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x1fU)) 
                                       ^ ((IData)((0x3ffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x1fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1827,((1U & (((IData)((0x3ffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x1fU))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x1fU))) 
                                       | (((IData)(
                                                   (0x3ffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x1fU))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x1fU))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1828,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1829,((1U & (IData)((0x1ffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1830,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1831,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x20U)) 
                                       ^ ((IData)((0x1ffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x20U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1832,((1U & (((IData)((0x1ffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x20U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x20U))) 
                                       | (((IData)(
                                                   (0x1ffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x20U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x20U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1833,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1834,((1U & (IData)((0xffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1835,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1836,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x21U)) 
                                       ^ ((IData)((0xffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x21U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1837,((1U & (((IData)((0xffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x21U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x21U))) 
                                       | (((IData)(
                                                   (0xffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x21U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x21U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1838,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1839,((1U & (IData)((0x7fffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1840,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1841,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x22U)) 
                                       ^ ((IData)((0x7fffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x22U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1842,((1U & (((IData)((0x7fffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x22U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x22U))) 
                                       | (((IData)(
                                                   (0x7fffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x22U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x22U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1843,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1844,((1U & (IData)((0x3fffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1845,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1846,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x23U)) 
                                       ^ ((IData)((0x3fffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x23U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1847,((1U & (((IData)((0x3fffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x23U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x23U))) 
                                       | (((IData)(
                                                   (0x3fffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x23U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x23U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1848,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1849,((1U & (IData)((0x1fffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1850,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1851,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x24U)) 
                                       ^ ((IData)((0x1fffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x24U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1852,((1U & (((IData)((0x1fffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x24U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x24U))) 
                                       | (((IData)(
                                                   (0x1fffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x24U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x24U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1853,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1854,((1U & (IData)((0xfffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1855,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1856,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x25U)) 
                                       ^ ((IData)((0xfffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x25U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1857,((1U & (((IData)((0xfffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x25U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x25U))) 
                                       | (((IData)(
                                                   (0xfffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x25U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x25U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1858,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1859,((1U & (IData)((0x7ffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+1860,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1861,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x26U)) 
                                       ^ ((IData)((0x7ffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x26U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1862,((1U & (((IData)((0x7ffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x26U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x26U))) 
                                       | (((IData)(
                                                   (0x7ffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x26U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x26U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1863,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1864,((1U & (IData)((0x3ffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+1865,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1866,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x27U)) 
                                       ^ ((IData)((0x3ffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x27U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1867,((1U & (((IData)((0x3ffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x27U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x27U))) 
                                       | (((IData)(
                                                   (0x3ffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x27U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x27U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1868,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 3U)))));
        bufp->chgBit(oldp+1869,((1U & (IData)((0x3fffffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1870,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 3U)))));
        bufp->chgBit(oldp+1871,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 3U)) 
                                       ^ ((IData)((0x3fffffffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 3U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1872,((1U & (((IData)((0x3fffffffffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 3U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 3U))) 
                                       | (((IData)(
                                                   (0x3fffffffffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 3U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 3U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1873,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1874,((1U & (IData)((0x1ffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+1875,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1876,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x28U)) 
                                       ^ ((IData)((0x1ffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x28U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1877,((1U & (((IData)((0x1ffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x28U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x28U))) 
                                       | (((IData)(
                                                   (0x1ffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x28U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x28U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1878,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1879,((1U & (IData)((0xffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+1880,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1881,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x29U)) 
                                       ^ ((IData)((0xffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x29U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1882,((1U & (((IData)((0xffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x29U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x29U))) 
                                       | (((IData)(
                                                   (0xffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x29U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x29U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1883,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1884,((1U & (IData)((0x7fULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+1885,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1886,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x2aU)) 
                                       ^ ((IData)((0x7fULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x2aU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1887,((1U & (((IData)((0x7fULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x2aU))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x2aU))) 
                                       | (((IData)(
                                                   (0x7fULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x2aU))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x2aU))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1888,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1889,((1U & (IData)((0x3fULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+1890,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1891,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x2bU)) 
                                       ^ ((IData)((0x3fULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x2bU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1892,((1U & (((IData)((0x3fULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x2bU))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x2bU))) 
                                       | (((IData)(
                                                   (0x3fULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x2bU))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x2bU))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1893,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1894,((1U & (IData)((0x1fULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+1895,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1896,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x2cU)) 
                                       ^ ((IData)((0x1fULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x2cU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1897,((1U & (((IData)((0x1fULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x2cU))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x2cU))) 
                                       | (((IData)(
                                                   (0x1fULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x2cU))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x2cU))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1898,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1899,((1U & (IData)((0xfULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+1900,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1901,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x2dU)) 
                                       ^ ((IData)((0xfULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x2dU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1902,((1U & (((IData)((0xfULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x2dU))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x2dU))) 
                                       | (((IData)(
                                                   (0xfULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x2dU))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x2dU))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1903,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1904,((1U & (IData)((7ULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+1905,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1906,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x2eU)) 
                                       ^ ((IData)((7ULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x2eU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1907,((1U & (((IData)((7ULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x2eU))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x2eU))) 
                                       | (((IData)(
                                                   (7ULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x2eU))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x2eU))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1908,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1909,((1U & (IData)((3ULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+1910,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1911,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x2fU)) 
                                       ^ ((IData)((3ULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x2fU))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1912,((1U & (((IData)((3ULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x2fU))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x2fU))) 
                                       | (((IData)(
                                                   (3ULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x2fU))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x2fU))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1913,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1914,((1U & (IData)((1ULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+1915,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1916,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 0x30U)) 
                                       ^ ((IData)((1ULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 0x30U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+1917,((1U & (((IData)((1ULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 0x30U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 0x30U))) 
                                       | (((IData)(
                                                   (1ULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 0x30U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 0x30U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+1918,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 4U)))));
        bufp->chgBit(oldp+1919,((1U & (IData)((0x1fffffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1920,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 4U)))));
        bufp->chgBit(oldp+1921,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 4U)) 
                                       ^ ((IData)((0x1fffffffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 4U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1922,((1U & (((IData)((0x1fffffffffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 4U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 4U))) 
                                       | (((IData)(
                                                   (0x1fffffffffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 4U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 4U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1923,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 5U)))));
        bufp->chgBit(oldp+1924,((1U & (IData)((0xfffffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1925,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 5U)))));
        bufp->chgBit(oldp+1926,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 5U)) 
                                       ^ ((IData)((0xfffffffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 5U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1927,((1U & (((IData)((0xfffffffffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 5U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 5U))) 
                                       | (((IData)(
                                                   (0xfffffffffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 5U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 5U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1928,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 6U)))));
        bufp->chgBit(oldp+1929,((1U & (IData)((0x7ffffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1930,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 6U)))));
        bufp->chgBit(oldp+1931,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 6U)) 
                                       ^ ((IData)((0x7ffffffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 6U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1932,((1U & (((IData)((0x7ffffffffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 6U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 6U))) 
                                       | (((IData)(
                                                   (0x7ffffffffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 6U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 6U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1933,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 7U)))));
        bufp->chgBit(oldp+1934,((1U & (IData)((0x3ffffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1935,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 7U)))));
        bufp->chgBit(oldp+1936,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 7U)) 
                                       ^ ((IData)((0x3ffffffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 7U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1937,((1U & (((IData)((0x3ffffffffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 7U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 7U))) 
                                       | (((IData)(
                                                   (0x3ffffffffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 7U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 7U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1938,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 8U)))));
        bufp->chgBit(oldp+1939,((1U & (IData)((0x1ffffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 8U))))));
        bufp->chgBit(oldp+1940,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 8U)))));
        bufp->chgBit(oldp+1941,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 8U)) 
                                       ^ ((IData)((0x1ffffffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 8U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1942,((1U & (((IData)((0x1ffffffffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 8U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 8U))) 
                                       | (((IData)(
                                                   (0x1ffffffffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 8U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 8U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1943,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                               >> 9U)))));
        bufp->chgBit(oldp+1944,((1U & (IData)((0xffffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                  >> 9U))))));
        bufp->chgBit(oldp+1945,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                               >> 9U)))));
        bufp->chgBit(oldp+1946,((1U & ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                >> 9U)) 
                                       ^ ((IData)((0xffffffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                      >> 9U))) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+1947,((1U & (((IData)((0xffffffffffULL 
                                                 & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                    >> 9U))) 
                                        & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                   >> 9U))) 
                                       | (((IData)(
                                                   (0xffffffffffULL 
                                                    & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                       >> 9U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                                      >> 9U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o 
                                                     >> 9U)))))));
        bufp->chgQData(oldp+1948,((0x1ffffffffffffULL 
                                   & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U))),49);
        bufp->chgQData(oldp+1950,((0x1ffffffffffffULL 
                                   & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U))),49);
        bufp->chgQData(oldp+1952,(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1.Sum_o),49);
        bufp->chgQData(oldp+1954,(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1.Carry_o),49);
        bufp->chgBit(oldp+1956,((1U & (IData)((0x1ffffffffffffULL 
                                               & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U))))));
        bufp->chgBit(oldp+1957,((1U & (IData)(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o))));
        bufp->chgBit(oldp+1958,((1U & (IData)((0x1ffffffffffffULL 
                                               & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U))))));
        bufp->chgBit(oldp+1959,((1U & ((IData)((0x1ffffffffffffULL 
                                                & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U))) 
                                       ^ ((IData)(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o) 
                                          ^ (IData)(
                                                    (0x1ffffffffffffULL 
                                                     & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U))))))));
        bufp->chgBit(oldp+1960,((1U & (((IData)(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o) 
                                        & (IData)((0x1ffffffffffffULL 
                                                   & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U)))) 
                                       | (((IData)(vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o) 
                                           | (IData)(
                                                     (0x1ffffffffffffULL 
                                                      & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U)))) 
                                          & (IData)(
                                                    (0x1ffffffffffffULL 
                                                     & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U))))))));
        bufp->chgBit(oldp+1961,((1U & (IData)((0x7fffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1962,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1963,((1U & (IData)((0x7fffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1964,((1U & ((IData)((0x7fffffffffULL 
                                                & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                   >> 0xaU))) 
                                       ^ ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                   >> 0xaU)) 
                                          ^ (IData)(
                                                    (0x7fffffffffULL 
                                                     & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                        >> 0xaU))))))));
        bufp->chgBit(oldp+1965,((1U & (((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                 >> 0xaU)) 
                                        & (IData)((0x7fffffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                      >> 0xaU)))) 
                                       | (((IData)(
                                                   (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                    >> 0xaU)) 
                                           | (IData)(
                                                     (0x7fffffffffULL 
                                                      & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                         >> 0xaU)))) 
                                          & (IData)(
                                                    (0x7fffffffffULL 
                                                     & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                        >> 0xaU))))))));
        bufp->chgBit(oldp+1966,((1U & (IData)((0x3fffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1967,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1968,((1U & (IData)((0x3fffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1969,((1U & ((IData)((0x3fffffffffULL 
                                                & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                   >> 0xbU))) 
                                       ^ ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                   >> 0xbU)) 
                                          ^ (IData)(
                                                    (0x3fffffffffULL 
                                                     & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                        >> 0xbU))))))));
        bufp->chgBit(oldp+1970,((1U & (((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                 >> 0xbU)) 
                                        & (IData)((0x3fffffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                      >> 0xbU)))) 
                                       | (((IData)(
                                                   (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                    >> 0xbU)) 
                                           | (IData)(
                                                     (0x3fffffffffULL 
                                                      & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                         >> 0xbU)))) 
                                          & (IData)(
                                                    (0x3fffffffffULL 
                                                     & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                        >> 0xbU))))))));
        bufp->chgBit(oldp+1971,((1U & (IData)((0x1fffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1972,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1973,((1U & (IData)((0x1fffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1974,((1U & ((IData)((0x1fffffffffULL 
                                                & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                   >> 0xcU))) 
                                       ^ ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (0x1fffffffffULL 
                                                     & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                        >> 0xcU))))))));
        bufp->chgBit(oldp+1975,((1U & (((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                 >> 0xcU)) 
                                        & (IData)((0x1fffffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                      >> 0xcU)))) 
                                       | (((IData)(
                                                   (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                    >> 0xcU)) 
                                           | (IData)(
                                                     (0x1fffffffffULL 
                                                      & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                         >> 0xcU)))) 
                                          & (IData)(
                                                    (0x1fffffffffULL 
                                                     & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                        >> 0xcU))))))));
        bufp->chgBit(oldp+1976,((1U & (IData)((0xfffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1977,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1978,((1U & (IData)((0xfffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1979,((1U & ((IData)((0xfffffffffULL 
                                                & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                   >> 0xdU))) 
                                       ^ ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                   >> 0xdU)) 
                                          ^ (IData)(
                                                    (0xfffffffffULL 
                                                     & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                        >> 0xdU))))))));
        bufp->chgBit(oldp+1980,((1U & (((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                 >> 0xdU)) 
                                        & (IData)((0xfffffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                      >> 0xdU)))) 
                                       | (((IData)(
                                                   (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                    >> 0xdU)) 
                                           | (IData)(
                                                     (0xfffffffffULL 
                                                      & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                         >> 0xdU)))) 
                                          & (IData)(
                                                    (0xfffffffffULL 
                                                     & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                        >> 0xdU))))))));
        bufp->chgBit(oldp+1981,((1U & (IData)((0x7ffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1982,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1983,((1U & (IData)((0x7ffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1984,((1U & ((IData)((0x7ffffffffULL 
                                                & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                   >> 0xeU))) 
                                       ^ ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                   >> 0xeU)) 
                                          ^ (IData)(
                                                    (0x7ffffffffULL 
                                                     & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                        >> 0xeU))))))));
        bufp->chgBit(oldp+1985,((1U & (((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                 >> 0xeU)) 
                                        & (IData)((0x7ffffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                      >> 0xeU)))) 
                                       | (((IData)(
                                                   (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                    >> 0xeU)) 
                                           | (IData)(
                                                     (0x7ffffffffULL 
                                                      & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                         >> 0xeU)))) 
                                          & (IData)(
                                                    (0x7ffffffffULL 
                                                     & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                        >> 0xeU))))))));
        bufp->chgBit(oldp+1986,((1U & (IData)((0x3ffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1987,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1988,((1U & (IData)((0x3ffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1989,((1U & ((IData)((0x3ffffffffULL 
                                                & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                   >> 0xfU))) 
                                       ^ ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                        >> 0xfU))))))));
        bufp->chgBit(oldp+1990,((1U & (((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                 >> 0xfU)) 
                                        & (IData)((0x3ffffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                      >> 0xfU)))) 
                                       | (((IData)(
                                                   (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                    >> 0xfU)) 
                                           | (IData)(
                                                     (0x3ffffffffULL 
                                                      & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                         >> 0xfU)))) 
                                          & (IData)(
                                                    (0x3ffffffffULL 
                                                     & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                        >> 0xfU))))))));
        bufp->chgBit(oldp+1991,((1U & (IData)((0x1ffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1992,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1993,((1U & (IData)((0x1ffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1994,((1U & ((IData)((0x1ffffffffULL 
                                                & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                   >> 0x10U))) 
                                       ^ ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                   >> 0x10U)) 
                                          ^ (IData)(
                                                    (0x1ffffffffULL 
                                                     & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                        >> 0x10U))))))));
        bufp->chgBit(oldp+1995,((1U & (((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                 >> 0x10U)) 
                                        & (IData)((0x1ffffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                      >> 0x10U)))) 
                                       | (((IData)(
                                                   (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                    >> 0x10U)) 
                                           | (IData)(
                                                     (0x1ffffffffULL 
                                                      & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                         >> 0x10U)))) 
                                          & (IData)(
                                                    (0x1ffffffffULL 
                                                     & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                        >> 0x10U))))))));
        bufp->chgBit(oldp+1996,((1U & (IData)((0xffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1997,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1998,((1U & (IData)((0xffffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1999,((1U & ((IData)((0xffffffffULL 
                                                & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                   >> 0x11U))) 
                                       ^ ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                   >> 0x11U)) 
                                          ^ (IData)(
                                                    (0xffffffffULL 
                                                     & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                        >> 0x11U))))))));
        bufp->chgBit(oldp+2000,((1U & (((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                 >> 0x11U)) 
                                        & (IData)((0xffffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                      >> 0x11U)))) 
                                       | (((IData)(
                                                   (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                    >> 0x11U)) 
                                           | (IData)(
                                                     (0xffffffffULL 
                                                      & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                         >> 0x11U)))) 
                                          & (IData)(
                                                    (0xffffffffULL 
                                                     & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                        >> 0x11U))))))));
        bufp->chgBit(oldp+2001,((1U & (IData)((0x7fffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+2002,((1U & (IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+2003,((1U & (IData)((0x7fffffffULL 
                                               & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+2004,((1U & ((IData)((0x7fffffffULL 
                                                & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                   >> 0x12U))) 
                                       ^ ((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (0x7fffffffULL 
                                                     & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                        >> 0x12U))))))));
        bufp->chgBit(oldp+2005,((1U & (((IData)((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                 >> 0x12U)) 
                                        & (IData)((0x7fffffffULL 
                                                   & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                      >> 0x12U)))) 
                                       | (((IData)(
                                                   (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                    >> 0x12U)) 
                                           | (IData)(
                                                     (0x7fffffffULL 
                                                      & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                                         >> 0x12U)))) 
                                          & (IData)(
                                                    (0x7fffffffULL 
                                                     & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U) 
                                                        >> 0x12U))))))));
    }
}
