// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVsigdelay.h for the primary calling header

#include "verilated.h"

#include "VVsigdelay__Syms.h"
#include "VVsigdelay___024root.h"

void VVsigdelay___024root___ctor_var_reset(VVsigdelay___024root* vlSelf);

VVsigdelay___024root::VVsigdelay___024root(VVsigdelay__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVsigdelay___024root___ctor_var_reset(this);
}

void VVsigdelay___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VVsigdelay___024root::~VVsigdelay___024root() {
}
