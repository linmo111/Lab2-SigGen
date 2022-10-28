// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VVsigdelay.h"
#include "VVsigdelay__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VVsigdelay::VVsigdelay(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VVsigdelay__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , wr_en{vlSymsp->TOP.wr_en}
    , rd_en{vlSymsp->TOP.rd_en}
    , mic_signal{vlSymsp->TOP.mic_signal}
    , delayed_signal{vlSymsp->TOP.delayed_signal}
    , incr{vlSymsp->TOP.incr}
    , phaseDiff{vlSymsp->TOP.phaseDiff}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VVsigdelay::VVsigdelay(const char* _vcname__)
    : VVsigdelay(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VVsigdelay::~VVsigdelay() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VVsigdelay___024root___eval_initial(VVsigdelay___024root* vlSelf);
void VVsigdelay___024root___eval_settle(VVsigdelay___024root* vlSelf);
void VVsigdelay___024root___eval(VVsigdelay___024root* vlSelf);
#ifdef VL_DEBUG
void VVsigdelay___024root___eval_debug_assertions(VVsigdelay___024root* vlSelf);
#endif  // VL_DEBUG
void VVsigdelay___024root___final(VVsigdelay___024root* vlSelf);

static void _eval_initial_loop(VVsigdelay__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VVsigdelay___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VVsigdelay___024root___eval_settle(&(vlSymsp->TOP));
        VVsigdelay___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VVsigdelay::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VVsigdelay::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VVsigdelay___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VVsigdelay___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VVsigdelay::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VVsigdelay::final() {
    VVsigdelay___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VVsigdelay::hierName() const { return vlSymsp->name(); }
const char* VVsigdelay::modelName() const { return "VVsigdelay"; }
unsigned VVsigdelay::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VVsigdelay::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VVsigdelay___024root__trace_init_top(VVsigdelay___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VVsigdelay___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VVsigdelay___024root*>(voidSelf);
    VVsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VVsigdelay___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VVsigdelay___024root__trace_register(VVsigdelay___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VVsigdelay::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VVsigdelay___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
