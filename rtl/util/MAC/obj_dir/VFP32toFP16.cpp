// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFP32toFP16__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VFP32toFP16::VFP32toFP16(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VFP32toFP16__Syms(contextp(), _vcname__, this)}
    , mode{vlSymsp->TOP.mode}
    , OF_in{vlSymsp->TOP.OF_in}
    , UF_in{vlSymsp->TOP.UF_in}
    , NV_in{vlSymsp->TOP.NV_in}
    , DZ_in{vlSymsp->TOP.DZ_in}
    , NX_in{vlSymsp->TOP.NX_in}
    , OF_out{vlSymsp->TOP.OF_out}
    , UF_out{vlSymsp->TOP.UF_out}
    , NV_out{vlSymsp->TOP.NV_out}
    , DZ_out{vlSymsp->TOP.DZ_out}
    , NX_out{vlSymsp->TOP.NX_out}
    , result_i{vlSymsp->TOP.result_i}
    , result_o{vlSymsp->TOP.result_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VFP32toFP16::VFP32toFP16(const char* _vcname__)
    : VFP32toFP16(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VFP32toFP16::~VFP32toFP16() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VFP32toFP16___024root___eval_debug_assertions(VFP32toFP16___024root* vlSelf);
#endif  // VL_DEBUG
void VFP32toFP16___024root___eval_static(VFP32toFP16___024root* vlSelf);
void VFP32toFP16___024root___eval_initial(VFP32toFP16___024root* vlSelf);
void VFP32toFP16___024root___eval_settle(VFP32toFP16___024root* vlSelf);
void VFP32toFP16___024root___eval(VFP32toFP16___024root* vlSelf);

void VFP32toFP16::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFP32toFP16::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VFP32toFP16___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VFP32toFP16___024root___eval_static(&(vlSymsp->TOP));
        VFP32toFP16___024root___eval_initial(&(vlSymsp->TOP));
        VFP32toFP16___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VFP32toFP16___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VFP32toFP16::eventsPending() { return false; }

uint64_t VFP32toFP16::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VFP32toFP16::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VFP32toFP16___024root___eval_final(VFP32toFP16___024root* vlSelf);

VL_ATTR_COLD void VFP32toFP16::final() {
    VFP32toFP16___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VFP32toFP16::hierName() const { return vlSymsp->name(); }
const char* VFP32toFP16::modelName() const { return "VFP32toFP16"; }
unsigned VFP32toFP16::threads() const { return 1; }
void VFP32toFP16::prepareClone() const { contextp()->prepareClone(); }
void VFP32toFP16::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VFP32toFP16::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VFP32toFP16___024root__trace_decl_types(VerilatedVcd* tracep);

void VFP32toFP16___024root__trace_init_top(VFP32toFP16___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VFP32toFP16___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFP32toFP16___024root*>(voidSelf);
    VFP32toFP16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VFP32toFP16___024root__trace_decl_types(tracep);
    VFP32toFP16___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VFP32toFP16___024root__trace_register(VFP32toFP16___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VFP32toFP16::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VFP32toFP16::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VFP32toFP16___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
