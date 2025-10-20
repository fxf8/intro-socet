// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_copier.h for the primary calling header

#include "Vtb_copier__pch.h"
#include "Vtb_copier__Syms.h"
#include "Vtb_copier_memory_if.h"

void Vtb_copier_memory_if___ctor_var_reset(Vtb_copier_memory_if* vlSelf);

Vtb_copier_memory_if::Vtb_copier_memory_if(Vtb_copier__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_copier_memory_if___ctor_var_reset(this);
}

void Vtb_copier_memory_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_copier_memory_if::~Vtb_copier_memory_if() {
}
