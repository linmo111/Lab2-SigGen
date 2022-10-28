// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVsigdelay.h for the primary calling header

#include "verilated.h"

#include "VVsigdelay___024root.h"

VL_INLINE_OPT void VVsigdelay___024root___sequent__TOP__0(VVsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVsigdelay___024root___sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vdly__Vsigdelay__DOT__rd_addr;
    SData/*8:0*/ __Vdlyvdim0__Vsigdelay__DOT__sineRam__DOT__ram_array__v0;
    CData/*7:0*/ __Vdlyvval__Vsigdelay__DOT__sineRam__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__Vsigdelay__DOT__sineRam__DOT__ram_array__v0;
    // Body
    __Vdly__Vsigdelay__DOT__rd_addr = vlSelf->Vsigdelay__DOT__rd_addr;
    __Vdlyvset__Vsigdelay__DOT__sineRam__DOT__ram_array__v0 = 0U;
    if (vlSelf->rd_en) {
        vlSelf->delayed_signal = vlSelf->Vsigdelay__DOT__sineRam__DOT__ram_array
            [vlSelf->Vsigdelay__DOT__rd_addr];
    }
    if (vlSelf->wr_en) {
        __Vdlyvval__Vsigdelay__DOT__sineRam__DOT__ram_array__v0 
            = vlSelf->mic_signal;
        __Vdlyvset__Vsigdelay__DOT__sineRam__DOT__ram_array__v0 = 1U;
        __Vdlyvdim0__Vsigdelay__DOT__sineRam__DOT__ram_array__v0 
            = vlSelf->Vsigdelay__DOT__wr_addr;
    }
    if (__Vdlyvset__Vsigdelay__DOT__sineRam__DOT__ram_array__v0) {
        vlSelf->Vsigdelay__DOT__sineRam__DOT__ram_array[__Vdlyvdim0__Vsigdelay__DOT__sineRam__DOT__ram_array__v0] 
            = __Vdlyvval__Vsigdelay__DOT__sineRam__DOT__ram_array__v0;
    }
    if (vlSelf->rst) {
        __Vdly__Vsigdelay__DOT__rd_addr = 0U;
    } else if (vlSelf->en) {
        __Vdly__Vsigdelay__DOT__rd_addr = (0x1ffU & 
                                           ((IData)(vlSelf->Vsigdelay__DOT__rd_addr) 
                                            + (IData)(vlSelf->incr)));
        vlSelf->Vsigdelay__DOT__wr_addr = (0x1ffU & 
                                           ((IData)(vlSelf->Vsigdelay__DOT__rd_addr) 
                                            + (IData)(vlSelf->phaseDiff)));
    }
    vlSelf->Vsigdelay__DOT__rd_addr = __Vdly__Vsigdelay__DOT__rd_addr;
}

void VVsigdelay___024root___eval(VVsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVsigdelay___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VVsigdelay___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void VVsigdelay___024root___eval_debug_assertions(VVsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVsigdelay___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->wr_en & 0xfeU))) {
        Verilated::overWidthError("wr_en");}
    if (VL_UNLIKELY((vlSelf->rd_en & 0xfeU))) {
        Verilated::overWidthError("rd_en");}
    if (VL_UNLIKELY((vlSelf->incr & 0xfe00U))) {
        Verilated::overWidthError("incr");}
    if (VL_UNLIKELY((vlSelf->phaseDiff & 0xfe00U))) {
        Verilated::overWidthError("phaseDiff");}
}
#endif  // VL_DEBUG
