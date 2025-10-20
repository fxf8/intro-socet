// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_copier.h for the primary calling header

#ifndef VERILATED_VTB_COPIER___024ROOT_H_
#define VERILATED_VTB_COPIER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_copier_memory_if;


class Vtb_copier__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_copier___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_copier_memory_if* __PVT__tb_copier__DOT__testif;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_copier__DOT__CLK;
    CData/*0:0*/ tb_copier__DOT__nRST;
    CData/*7:0*/ tb_copier__DOT__src_addr;
    CData/*7:0*/ tb_copier__DOT__dst_addr;
    CData/*7:0*/ tb_copier__DOT__copy_size;
    CData/*0:0*/ tb_copier__DOT__start;
    CData/*0:0*/ tb_copier__DOT__finished;
    CData/*7:0*/ tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__expected;
    CData/*7:0*/ tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__actual;
    CData/*1:0*/ tb_copier__DOT__DUT__DOT__current_state;
    CData/*1:0*/ tb_copier__DOT__DUT__DOT__next_state;
    CData/*7:0*/ tb_copier__DOT__DUT__DOT__copied_word;
    CData/*0:0*/ tb_copier__DOT__DUT__DOT__rollover_flag;
    CData/*0:0*/ tb_copier__DOT__DUT__DOT__count_enable;
    CData/*0:0*/ tb_copier__DOT__DUT__DOT__clear_counter;
    CData/*0:0*/ tb_copier__DOT__DUT__DOT__register_write_enable;
    CData/*7:0*/ tb_copier__DOT__DUT__DOT__counter__DOT__temp_counter;
    CData/*7:0*/ tb_copier__DOT__DUT__DOT__counter__DOT__next_state;
    CData/*0:0*/ tb_copier__DOT__DUT__DOT__counter__DOT__rollover_flag_c;
    VlWide<64>/*2047:0*/ tb_copier__DOT__MEM__DOT__memory;
    VlWide<64>/*2047:0*/ tb_copier__DOT__MEM__DOT__memory_n;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_copier__DOT__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_copier__DOT__nRST__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hfcca6429__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_copier__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_copier___024root(Vtb_copier__Syms* symsp, const char* v__name);
    ~Vtb_copier___024root();
    VL_UNCOPYABLE(Vtb_copier___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
