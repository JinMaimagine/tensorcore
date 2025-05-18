// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VFP32toFP16__pch.h"
#include "VFP32toFP16.h"
#include "VFP32toFP16___024root.h"

// FUNCTIONS
VFP32toFP16__Syms::~VFP32toFP16__Syms()
{
}

VFP32toFP16__Syms::VFP32toFP16__Syms(VerilatedContext* contextp, const char* namep, VFP32toFP16* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(25);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
