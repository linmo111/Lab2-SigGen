// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVsigdelay.h for the primary calling header

#include "verilated.h"

#include "VVsigdelay___024root.h"

VL_ATTR_COLD void VVsigdelay___024root___eval_initial(VVsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVsigdelay___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VVsigdelay___024root___eval_settle(VVsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVsigdelay___024root___eval_settle\n"); );
}

VL_ATTR_COLD void VVsigdelay___024root___final(VVsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVsigdelay___024root___final\n"); );
}

VL_ATTR_COLD void VVsigdelay___024root___ctor_var_reset(VVsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVsigdelay___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->wr_en = VL_RAND_RESET_I(1);
    vlSelf->rd_en = VL_RAND_RESET_I(1);
    vlSelf->incr = VL_RAND_RESET_I(9);
    vlSelf->phaseDiff = VL_RAND_RESET_I(9);
    vlSelf->mic_signal = VL_RAND_RESET_I(8);
    vlSelf->delayed_signal = VL_RAND_RESET_I(8);
    vlSelf->Vsigdelay__DOT__rd_addr = VL_RAND_RESET_I(9);
    vlSelf->Vsigdelay__DOT__wr_addr = VL_RAND_RESET_I(9);
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        vlSelf->Vsigdelay__DOT__sineRam__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(8);
    }
}
