// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VVsigdelay__Syms.h"


VL_ATTR_COLD void VVsigdelay___024root__trace_init_sub__TOP__0(VVsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VVsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVsigdelay___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBit(c+4,"wr_en", false,-1);
    tracep->declBit(c+5,"rd_en", false,-1);
    tracep->declBus(c+6,"incr", false,-1, 8,0);
    tracep->declBus(c+7,"phaseDiff", false,-1, 8,0);
    tracep->declBus(c+8,"mic_signal", false,-1, 7,0);
    tracep->declBus(c+9,"delayed_signal", false,-1, 7,0);
    tracep->pushNamePrefix("Vsigdelay ");
    tracep->declBus(c+12,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+13,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBit(c+4,"wr_en", false,-1);
    tracep->declBit(c+5,"rd_en", false,-1);
    tracep->declBus(c+6,"incr", false,-1, 8,0);
    tracep->declBus(c+7,"phaseDiff", false,-1, 8,0);
    tracep->declBus(c+8,"mic_signal", false,-1, 7,0);
    tracep->declBus(c+9,"delayed_signal", false,-1, 7,0);
    tracep->declBus(c+10,"rd_addr", false,-1, 8,0);
    tracep->declBus(c+11,"wr_addr", false,-1, 8,0);
    tracep->pushNamePrefix("addrConter ");
    tracep->declBus(c+12,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+6,"incr", false,-1, 8,0);
    tracep->declBus(c+7,"phaseDiff", false,-1, 8,0);
    tracep->declBus(c+11,"wr_addr", false,-1, 8,0);
    tracep->declBus(c+10,"rd_addr", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sineRam ");
    tracep->declBus(c+12,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+13,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+4,"wr_en", false,-1);
    tracep->declBit(c+5,"rd_en", false,-1);
    tracep->declBus(c+11,"wr_addr", false,-1, 8,0);
    tracep->declBus(c+8,"din", false,-1, 7,0);
    tracep->declBus(c+10,"rd_addr", false,-1, 8,0);
    tracep->declBus(c+9,"dout", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VVsigdelay___024root__trace_init_top(VVsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VVsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVsigdelay___024root__trace_init_top\n"); );
    // Body
    VVsigdelay___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VVsigdelay___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VVsigdelay___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VVsigdelay___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VVsigdelay___024root__trace_register(VVsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VVsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVsigdelay___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VVsigdelay___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VVsigdelay___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VVsigdelay___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VVsigdelay___024root__trace_full_sub_0(VVsigdelay___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VVsigdelay___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVsigdelay___024root__trace_full_top_0\n"); );
    // Init
    VVsigdelay___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VVsigdelay___024root*>(voidSelf);
    VVsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VVsigdelay___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VVsigdelay___024root__trace_full_sub_0(VVsigdelay___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VVsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVsigdelay___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullBit(oldp+3,(vlSelf->en));
    bufp->fullBit(oldp+4,(vlSelf->wr_en));
    bufp->fullBit(oldp+5,(vlSelf->rd_en));
    bufp->fullSData(oldp+6,(vlSelf->incr),9);
    bufp->fullSData(oldp+7,(vlSelf->phaseDiff),9);
    bufp->fullCData(oldp+8,(vlSelf->mic_signal),8);
    bufp->fullCData(oldp+9,(vlSelf->delayed_signal),8);
    bufp->fullSData(oldp+10,(vlSelf->Vsigdelay__DOT__rd_addr),9);
    bufp->fullSData(oldp+11,(vlSelf->Vsigdelay__DOT__wr_addr),9);
    bufp->fullIData(oldp+12,(9U),32);
    bufp->fullIData(oldp+13,(8U),32);
}
