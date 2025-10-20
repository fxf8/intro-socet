// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_copier.h for the primary calling header

#include "Vtb_copier__pch.h"
#include "Vtb_copier_memory_if.h"

std::string VL_TO_STRING(const Vtb_copier_memory_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_copier_memory_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
