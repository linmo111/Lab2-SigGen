// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcounter.h for the primary calling header

#ifndef VERILATED_VCOUNTER___024ROOT_H_
#define VERILATED_VCOUNTER___024ROOT_H_  // guard

#include "verilated.h"

class Vcounter__Syms;

class Vcounter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_IN8(incr,7,0);
    VL_IN8(phaseDiff,7,0);
    VL_OUT8(dout1,7,0);
    VL_OUT8(dout2,7,0);
    CData/*7:0*/ sinegen__DOT__address1;
    CData/*7:0*/ sinegen__DOT__address2;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*7:0*/, 256> sinegen__DOT__sineRom__DOT__rom_array;

    // INTERNAL VARIABLES
    Vcounter__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcounter___024root(Vcounter__Syms* symsp, const char* name);
    ~Vcounter___024root();
    VL_UNCOPYABLE(Vcounter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
