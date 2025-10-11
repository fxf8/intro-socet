// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_eight_bit_adder.h for the primary calling header

#ifndef VERILATED_VTB_EIGHT_BIT_ADDER___024ROOT_H_
#define VERILATED_VTB_EIGHT_BIT_ADDER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_eight_bit_adder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_eight_bit_adder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ tb_eight_bit_adder__DOT__a;
    CData/*7:0*/ tb_eight_bit_adder__DOT__b;
    CData/*0:0*/ tb_eight_bit_adder__DOT__DUT__DOT__carries__BRA__0__KET__;
    CData/*0:0*/ tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__0__KET____DOT__gen_first_iteration__DOT__fa__s;
    CData/*0:0*/ tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__cout;
    CData/*0:0*/ tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__s;
    CData/*0:0*/ tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__cout;
    CData/*0:0*/ tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__s;
    CData/*0:0*/ tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__cout;
    CData/*0:0*/ tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__s;
    CData/*0:0*/ tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__cout;
    CData/*0:0*/ tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__s;
    CData/*0:0*/ tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__cout;
    CData/*0:0*/ tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__s;
    CData/*0:0*/ tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__cout;
    CData/*0:0*/ tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__s;
    CData/*0:0*/ tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__cout;
    CData/*0:0*/ tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__s;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_eight_bit_adder__DOT__num_passed;
    IData/*31:0*/ tb_eight_bit_adder__DOT__num_tests;
    IData/*31:0*/ tb_eight_bit_adder__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ tb_eight_bit_adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__in_a;
    IData/*31:0*/ tb_eight_bit_adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__in_b;
    IData/*31:0*/ tb_eight_bit_adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__expected;
    IData/*31:0*/ tb_eight_bit_adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_eight_bit_adder__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_eight_bit_adder___024root(Vtb_eight_bit_adder__Syms* symsp, const char* v__name);
    ~Vtb_eight_bit_adder___024root();
    VL_UNCOPYABLE(Vtb_eight_bit_adder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
