// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC32_top_tb.h for the primary calling header

#include "VMAC32_top_tb__pch.h"
#include "VMAC32_top_tb_Compressor32.h"
#include "VMAC32_top_tb__Syms.h"

VL_INLINE_OPT void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0__0(VMAC32_top_tb_Compressor32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0__0\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Sum_o = (vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o 
                       ^ (vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                          ^ vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o));
    vlSelfRef.Carry_o = ((vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                          & vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o) 
                         | ((vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_01_o 
                             | vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_00_o) 
                            & vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_02_o));
}

VL_INLINE_OPT void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1__0(VMAC32_top_tb_Compressor32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1__0\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Carry_o = ((vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                          & vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o) 
                         | ((vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                             | vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o) 
                            & vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o));
    vlSelfRef.Sum_o = (vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_03_o 
                       ^ (vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_04_o 
                          ^ vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_05_o));
}

VL_INLINE_OPT void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2__0(VMAC32_top_tb_Compressor32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2__0\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Sum_o = (vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o 
                       ^ (vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                          ^ vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o));
    vlSelfRef.Carry_o = ((vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                          & vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o) 
                         | ((vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_07_o 
                             | vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_06_o) 
                            & vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_08_o));
}

VL_INLINE_OPT void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3__0(VMAC32_top_tb_Compressor32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3__0\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Sum_o = (vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o 
                       ^ (vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                          ^ vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o));
    vlSelfRef.Carry_o = ((vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                          & vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o) 
                         | ((vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_10_o 
                             | vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_09_o) 
                            & vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT____Vcellout__booth__pp_11_o));
}

VL_INLINE_OPT void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0__0(VMAC32_top_tb_Compressor32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0__0\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Sum_o = (0x1ffffffffffffULL & (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o 
                                             ^ (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                                                ^ vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o)));
    vlSelfRef.Carry_o = ((VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                          & vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o) 
                         | ((VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Carry_o, 1U) 
                             | vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.Sum_o) 
                            & vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Sum_o));
}

VL_INLINE_OPT void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1__0(VMAC32_top_tb_Compressor32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1__0\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Carry_o = (0x1ffffffffffffULL & ((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U)) 
                                               | ((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                   | VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U)) 
                                                  & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U))));
    vlSelfRef.Sum_o = (0x1ffffffffffffULL & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.Carry_o, 1U) 
                                             ^ (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Sum_o 
                                                ^ VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.Carry_o, 1U))));
}

VL_INLINE_OPT void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_2__0(VMAC32_top_tb_Compressor32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_2__0\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Sum_o = (((QData)((IData)((1U & (IData)(
                                                      (1ULL 
                                                       & ((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3.Sum_o 
                                                           >> 0x30U) 
                                                          ^ 
                                                          (1ULL 
                                                           & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3.Carry_o, 1U) 
                                                              >> 0x30U)))))))) 
                        << 0x30U) | (0xffffffffffffULL 
                                     & (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3.Sum_o 
                                        ^ ((0x1ffffffffffffULL 
                                            & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3.Carry_o, 1U)) 
                                           ^ vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP_13))));
    vlSelfRef.Carry_o = (((QData)((IData)(((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3.Sum_o 
                                            >> 0x30U) 
                                           & (1ULL 
                                              & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3.Carry_o, 1U) 
                                                 >> 0x30U))))) 
                          << 0x30U) | (0xffffffffffffULL 
                                       & ((0x1ffffffffffffULL 
                                           & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3.Carry_o, 1U) 
                                              & vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3.Sum_o)) 
                                          | (((0x1ffffffffffffULL 
                                               & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3.Carry_o, 1U)) 
                                              | vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3.Sum_o) 
                                             & vlSymsp->TOP.MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__booth_PP_13))));
}

VL_INLINE_OPT void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0__0(VMAC32_top_tb_Compressor32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0__0\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Sum_o = (0x1ffffffffffffULL & (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0.Sum_o 
                                             ^ (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0.Carry_o, 1U) 
                                                ^ vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1.Sum_o)));
    vlSelfRef.Carry_o = ((VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0.Carry_o, 1U) 
                          & vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0.Sum_o) 
                         | ((VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0.Carry_o, 1U) 
                             | vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0.Sum_o) 
                            & vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1.Sum_o));
}

VL_INLINE_OPT void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1__0(VMAC32_top_tb_Compressor32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1__0\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Carry_o = (0x1ffffffffffffULL & ((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_2.Sum_o 
                                                & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1.Carry_o, 1U)) 
                                               | ((vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_2.Sum_o 
                                                   | VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1.Carry_o, 1U)) 
                                                  & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_2.Carry_o, 1U))));
    vlSelfRef.Sum_o = (0x1ffffffffffffULL & (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1.Carry_o, 1U) 
                                             ^ (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_2.Sum_o 
                                                ^ VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_2.Carry_o, 1U))));
}

VL_INLINE_OPT void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32__0(VMAC32_top_tb_Compressor32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32__0\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Sum_o = (0x1ffffffffffffULL & (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0.Sum_o 
                                             ^ (VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0.Carry_o, 1U) 
                                                ^ vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1.Sum_o)));
    vlSelfRef.Carry_o = ((VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0.Carry_o, 1U) 
                          & vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0.Sum_o) 
                         | ((VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0.Carry_o, 1U) 
                             | vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0.Sum_o) 
                            & vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1.Sum_o));
}

VL_INLINE_OPT void VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32__0(VMAC32_top_tb_Compressor32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VMAC32_top_tb_Compressor32___nba_sequent__TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32__0\n"); );
    VMAC32_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Carry_o = (0x1ffffffffffffULL & ((VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32.Carry_o, 1U) 
                                                & vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32.Sum_o) 
                                               | ((VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32.Carry_o, 1U) 
                                                   | vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32.Sum_o) 
                                                  & VL_SHIFTL_QQI(49,49,32, vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1.Carry_o, 1U))));
    vlSelfRef.Sum_o = (0x1ffffffffffffULL & (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32.Sum_o 
                                             ^ VL_SHIFTL_QQI(49,49,32, 
                                                             (vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32.Carry_o 
                                                              ^ vlSymsp->TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1.Carry_o), 1U)));
}
