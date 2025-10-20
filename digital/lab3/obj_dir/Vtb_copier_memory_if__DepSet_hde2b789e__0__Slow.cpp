// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_copier.h for the primary calling header

#include "Vtb_copier__pch.h"
#include "Vtb_copier_memory_if.h"

VL_ATTR_COLD void Vtb_copier_memory_if___ctor_var_reset(Vtb_copier_memory_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_copier_memory_if___ctor_var_reset\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->wen = VL_RAND_RESET_I(1);
    vlSelf->ren = VL_RAND_RESET_I(1);
    vlSelf->ready = VL_RAND_RESET_I(1);
    vlSelf->addr = VL_RAND_RESET_I(8);
    vlSelf->rdata = VL_RAND_RESET_I(8);
    vlSelf->wdata = VL_RAND_RESET_I(8);
}
