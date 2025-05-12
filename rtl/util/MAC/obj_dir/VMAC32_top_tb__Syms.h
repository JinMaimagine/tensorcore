// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMAC32_TOP_TB__SYMS_H_
#define VERILATED_VMAC32_TOP_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VMAC32_top_tb.h"

// INCLUDE MODULE CLASSES
#include "VMAC32_top_tb___024root.h"
#include "VMAC32_top_tb_Compressor32.h"
#include "VMAC32_top_tb___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VMAC32_top_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VMAC32_top_tb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VMAC32_top_tb___024root        TOP;
    VMAC32_top_tb_Compressor32     TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0;
    VMAC32_top_tb_Compressor32     TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1;
    VMAC32_top_tb_Compressor32     TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2;
    VMAC32_top_tb_Compressor32     TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3;
    VMAC32_top_tb_Compressor32     TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0;
    VMAC32_top_tb_Compressor32     TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1;
    VMAC32_top_tb_Compressor32     TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_2;
    VMAC32_top_tb_Compressor32     TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0;
    VMAC32_top_tb_Compressor32     TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1;
    VMAC32_top_tb_Compressor32     TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32;
    VMAC32_top_tb_Compressor32     TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32;
    VMAC32_top_tb___024unit        TOP____024unit;

    // CONSTRUCTORS
    VMAC32_top_tb__Syms(VerilatedContext* contextp, const char* namep, VMAC32_top_tb* modelp);
    ~VMAC32_top_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
