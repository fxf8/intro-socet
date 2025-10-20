// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vtb_copier___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"IDLE", "READ", "WRITE", "FINISHED"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(1, "copier.state_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
}

void Vtb_copier___024root__trace_decl_types(VerilatedFst* tracep) {
    Vtb_copier___024root__traceDeclTypesSub0(tracep);
}
