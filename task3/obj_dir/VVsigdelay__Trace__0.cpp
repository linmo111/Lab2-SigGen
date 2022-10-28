// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VVsigdelay__Syms.h"


void VVsigdelay___024root__trace_chg_sub_0(VVsigdelay___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VVsigdelay___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVsigdelay___024root__trace_chg_top_0\n"); );
    // Init
    VVsigdelay___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VVsigdelay___024root*>(voidSelf);
    VVsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VVsigdelay___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VVsigdelay___024root__trace_chg_sub_0(VVsigdelay___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VVsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVsigdelay___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst));
    bufp->chgBit(oldp+2,(vlSelf->en));
    bufp->chgBit(oldp+3,(vlSelf->wr_en));
    bufp->chgBit(oldp+4,(vlSelf->rd_en));
    bufp->chgSData(oldp+5,(vlSelf->incr),9);
    bufp->chgSData(oldp+6,(vlSelf->phaseDiff),9);
    bufp->chgCData(oldp+7,(vlSelf->mic_signal),8);
    bufp->chgCData(oldp+8,(vlSelf->delayed_signal),8);
    bufp->chgSData(oldp+9,(vlSelf->Vsigdelay__DOT__rd_addr),9);
    bufp->chgSData(oldp+10,(vlSelf->Vsigdelay__DOT__wr_addr),9);
}

void VVsigdelay___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVsigdelay___024root__trace_cleanup\n"); );
    // Init
    VVsigdelay___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VVsigdelay___024root*>(voidSelf);
    VVsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
