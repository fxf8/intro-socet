// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_copier.h for the primary calling header

#ifndef VERILATED_VTB_COPIER_MEMORY_IF_H_
#define VERILATED_VTB_COPIER_MEMORY_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_copier__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_copier_memory_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ wen;
    CData/*0:0*/ ren;
    CData/*0:0*/ ready;
    CData/*7:0*/ addr;
    CData/*7:0*/ rdata;
    CData/*7:0*/ wdata;

    // INTERNAL VARIABLES
    Vtb_copier__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_copier_memory_if(Vtb_copier__Syms* symsp, const char* v__name);
    ~Vtb_copier_memory_if();
    VL_UNCOPYABLE(Vtb_copier_memory_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtb_copier_memory_if* obj);

#endif  // guard
