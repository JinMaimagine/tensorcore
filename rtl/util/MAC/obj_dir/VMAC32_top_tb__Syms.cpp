// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VMAC32_top_tb__pch.h"
#include "VMAC32_top_tb.h"
#include "VMAC32_top_tb___024root.h"
#include "VMAC32_top_tb_Compressor32.h"

// FUNCTIONS
VMAC32_top_tb__Syms::~VMAC32_top_tb__Syms()
{
}

VMAC32_top_tb__Syms::VMAC32_top_tb__Syms(VerilatedContext* contextp, const char* namep, VMAC32_top_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0{this, Verilated::catName(namep, "MAC32_top_tb.dut.u_s1.wtree.LV1_0")}
    , TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1{this, Verilated::catName(namep, "MAC32_top_tb.dut.u_s1.wtree.LV1_1")}
    , TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2{this, Verilated::catName(namep, "MAC32_top_tb.dut.u_s1.wtree.LV1_2")}
    , TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3{this, Verilated::catName(namep, "MAC32_top_tb.dut.u_s1.wtree.LV1_3")}
    , TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0{this, Verilated::catName(namep, "MAC32_top_tb.dut.u_s1.wtree.LV2_0")}
    , TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1{this, Verilated::catName(namep, "MAC32_top_tb.dut.u_s1.wtree.LV2_1")}
    , TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_2{this, Verilated::catName(namep, "MAC32_top_tb.dut.u_s1.wtree.LV2_2")}
    , TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0{this, Verilated::catName(namep, "MAC32_top_tb.dut.u_s1.wtree.LV3_0")}
    , TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1{this, Verilated::catName(namep, "MAC32_top_tb.dut.u_s1.wtree.LV3_1")}
    , TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32{this, Verilated::catName(namep, "MAC32_top_tb.dut.u_s1.wtree.LV4_Final.down32")}
    , TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32{this, Verilated::catName(namep, "MAC32_top_tb.dut.u_s1.wtree.LV4_Final.top32")}
{
        // Check resources
        Verilated::stackCheck(1372);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0 = &TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0;
    TOP.__PVT__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1 = &TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1;
    TOP.__PVT__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2 = &TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2;
    TOP.__PVT__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3 = &TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3;
    TOP.__PVT__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0 = &TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0;
    TOP.__PVT__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1 = &TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1;
    TOP.__PVT__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_2 = &TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_2;
    TOP.__PVT__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0 = &TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0;
    TOP.__PVT__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1 = &TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1;
    TOP.__PVT__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32 = &TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32;
    TOP.__PVT__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32 = &TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_0.__Vconfigure(true);
    TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_1.__Vconfigure(false);
    TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_2.__Vconfigure(false);
    TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV1_3.__Vconfigure(false);
    TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_0.__Vconfigure(false);
    TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_1.__Vconfigure(false);
    TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV2_2.__Vconfigure(false);
    TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_0.__Vconfigure(false);
    TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV3_1.__Vconfigure(false);
    TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__down32.__Vconfigure(false);
    TOP__MAC32_top_tb__DOT__dut__DOT__u_s1__DOT__wtree__DOT__LV4_Final__DOT__top32.__Vconfigure(false);
    // Setup scopes
    __Vscope_MAC32_top_tb.configure(this, name(), "MAC32_top_tb", "MAC32_top_tb", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_MAC32_top_tb__unnamedblk1.configure(this, name(), "MAC32_top_tb.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
