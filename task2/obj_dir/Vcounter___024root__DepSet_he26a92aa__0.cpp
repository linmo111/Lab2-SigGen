// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter.h for the primary calling header

#include "verilated.h"

#include "Vcounter___024root.h"

VL_INLINE_OPT void Vcounter___024root___sequent__TOP__0(Vcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__sinegen__DOT__address1;
    CData/*7:0*/ __Vdly__sinegen__DOT__address2;
    // Body
    __Vdly__sinegen__DOT__address1 = vlSelf->sinegen__DOT__address1;
    __Vdly__sinegen__DOT__address2 = vlSelf->sinegen__DOT__address2;
    vlSelf->dout1 = vlSelf->sinegen__DOT__sineRom__DOT__rom_array
        [vlSelf->sinegen__DOT__address1];
    vlSelf->dout2 = vlSelf->sinegen__DOT__sineRom__DOT__rom_array
        [vlSelf->sinegen__DOT__address2];
    if (vlSelf->rst) {
        __Vdly__sinegen__DOT__address1 = 0U;
        __Vdly__sinegen__DOT__address2 = vlSelf->phaseDiff;
    } else if (vlSelf->en) {
        __Vdly__sinegen__DOT__address1 = (0xffU & ((IData)(vlSelf->sinegen__DOT__address1) 
                                                   + (IData)(vlSelf->incr)));
        __Vdly__sinegen__DOT__address2 = (0xffU & ((IData)(vlSelf->sinegen__DOT__address2) 
                                                   + (IData)(vlSelf->incr)));
    }
    vlSelf->sinegen__DOT__address1 = __Vdly__sinegen__DOT__address1;
    vlSelf->sinegen__DOT__address2 = __Vdly__sinegen__DOT__address2;
}

void Vcounter___024root___eval(Vcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcounter___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vcounter___024root___eval_debug_assertions(Vcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
