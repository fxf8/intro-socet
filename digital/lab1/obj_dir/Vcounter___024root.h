// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcounter.h for the primary calling header

#ifndef VERILATED_VCOUNTER___024ROOT_H_
#define VERILATED_VCOUNTER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcounter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcounter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_counter__DOT__clk;
    CData/*0:0*/ tb_counter__DOT__rst_n;
    CData/*2:0*/ tb_counter__DOT__count;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_counter__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_counter__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_counter__DOT__num_tests;
    IData/*31:0*/ tb_counter__DOT__num_passed;
    IData/*31:0*/ tb_counter__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hbc3715bf__0;
    VlTriggerScheduler __VtrigSched_hbc371cfe__0;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcounter__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcounter___024root(Vcounter__Syms* symsp, const char* v__name);
    ~Vcounter___024root();
    VL_UNCOPYABLE(Vcounter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
