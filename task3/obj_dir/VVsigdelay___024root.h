// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVsigdelay.h for the primary calling header

#ifndef VERILATED_VVSIGDELAY___024ROOT_H_
#define VERILATED_VVSIGDELAY___024ROOT_H_  // guard

#include "verilated.h"

class VVsigdelay__Syms;

class VVsigdelay___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_IN8(wr_en,0,0);
    VL_IN8(rd_en,0,0);
    VL_IN8(mic_signal,7,0);
    VL_OUT8(delayed_signal,7,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN16(incr,8,0);
    VL_IN16(phaseDiff,8,0);
    SData/*8:0*/ Vsigdelay__DOT__rd_addr;
    SData/*8:0*/ Vsigdelay__DOT__wr_addr;
    VlUnpacked<CData/*7:0*/, 512> Vsigdelay__DOT__sineRam__DOT__ram_array;

    // INTERNAL VARIABLES
    VVsigdelay__Syms* const vlSymsp;

    // CONSTRUCTORS
    VVsigdelay___024root(VVsigdelay__Syms* symsp, const char* name);
    ~VVsigdelay___024root();
    VL_UNCOPYABLE(VVsigdelay___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
