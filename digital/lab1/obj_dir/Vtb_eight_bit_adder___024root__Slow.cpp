// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_eight_bit_adder.h for the primary calling header

#include "Vtb_eight_bit_adder__pch.h"
#include "Vtb_eight_bit_adder__Syms.h"
#include "Vtb_eight_bit_adder___024root.h"

void Vtb_eight_bit_adder___024root___ctor_var_reset(Vtb_eight_bit_adder___024root* vlSelf);

Vtb_eight_bit_adder___024root::Vtb_eight_bit_adder___024root(Vtb_eight_bit_adder__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_eight_bit_adder___024root___ctor_var_reset(this);
}

void Vtb_eight_bit_adder___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_eight_bit_adder___024root::~Vtb_eight_bit_adder___024root() {
}
