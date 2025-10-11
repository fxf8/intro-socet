// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtb_eight_bit_adder__Syms.h"


void Vtb_eight_bit_adder___024root__trace_chg_0_sub_0(Vtb_eight_bit_adder___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtb_eight_bit_adder___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_eight_bit_adder___024root__trace_chg_0\n"); );
    // Init
    Vtb_eight_bit_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_eight_bit_adder___024root*>(voidSelf);
    Vtb_eight_bit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_eight_bit_adder___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_eight_bit_adder___024root__trace_chg_0_sub_0(Vtb_eight_bit_adder___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_eight_bit_adder___024root__trace_chg_0_sub_0\n"); );
    Vtb_eight_bit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.tb_eight_bit_adder__DOT__a),8);
        bufp->chgCData(oldp+1,(vlSelfRef.tb_eight_bit_adder__DOT__b),8);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_eight_bit_adder__DOT__num_passed),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_eight_bit_adder__DOT__num_tests),32);
        bufp->chgBit(oldp+4,((1U & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__a))));
        bufp->chgBit(oldp+5,((1U & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__b))));
        bufp->chgBit(oldp+6,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                    ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__b)))));
        bufp->chgBit(oldp+7,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                    >> 1U))));
        bufp->chgBit(oldp+8,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                    >> 1U))));
        bufp->chgBit(oldp+9,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                    >> 2U))));
        bufp->chgBit(oldp+10,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                     >> 2U))));
        bufp->chgBit(oldp+11,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                     >> 3U))));
        bufp->chgBit(oldp+12,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                     >> 3U))));
        bufp->chgBit(oldp+13,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                     >> 4U))));
        bufp->chgBit(oldp+14,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                     >> 4U))));
        bufp->chgBit(oldp+15,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                     >> 5U))));
        bufp->chgBit(oldp+16,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                     >> 5U))));
        bufp->chgBit(oldp+17,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                     >> 6U))));
        bufp->chgBit(oldp+18,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                     >> 6U))));
        bufp->chgBit(oldp+19,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                     >> 7U))));
        bufp->chgBit(oldp+20,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                     >> 7U))));
        bufp->chgIData(oldp+21,(vlSelfRef.tb_eight_bit_adder__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_eight_bit_adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__in_a),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_eight_bit_adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__in_b),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_eight_bit_adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__expected),32);
    }
    if (VL_UNLIKELY(((((vlSelfRef.__Vm_traceActivity
                        [1U] | vlSelfRef.__Vm_traceActivity
                        [2U]) | vlSelfRef.__Vm_traceActivity
                       [3U]) | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgSData(oldp+25,(((((0x100U & ((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                                << 1U) 
                                               & ((0xffffff00U 
                                                   & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                                      << 1U)) 
                                                  | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__cout) 
                                                     << 8U))) 
                                              | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                                  << 1U) 
                                                 & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__cout) 
                                                    << 8U)))) 
                                   | (((IData)(((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                                  ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__b)) 
                                                 >> 7U) 
                                                ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__cout))) 
                                       << 7U) | (0x40U 
                                                 & ((0xffffffc0U 
                                                     & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__a)) 
                                                    ^ 
                                                    ((0xffffffc0U 
                                                      & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__b)) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__cout) 
                                                      << 6U)))))) 
                                  | ((0x20U & ((0xffffffe0U 
                                                & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__a)) 
                                               ^ ((0xffffffe0U 
                                                   & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__b)) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__cout) 
                                                   << 5U)))) 
                                     | (0x10U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__a)) 
                                                 ^ 
                                                 ((0xfffffff0U 
                                                   & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__b)) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__cout) 
                                                   << 4U)))))) 
                                 | (((8U & ((0xfffffff8U 
                                             & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__a)) 
                                            ^ ((0xfffffff8U 
                                                & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__b)) 
                                               ^ ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__cout) 
                                                  << 3U)))) 
                                     | (4U & ((0xfffffffcU 
                                               & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__a)) 
                                              ^ ((0xfffffffcU 
                                                  & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__b)) 
                                                 ^ 
                                                 ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__cout) 
                                                  << 2U))))) 
                                    | ((2U & ((0xfffffffeU 
                                               & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__a)) 
                                              ^ ((0xfffffffeU 
                                                  & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__b)) 
                                                 ^ 
                                                 ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT__carries__BRA__0__KET__) 
                                                  << 1U)))) 
                                       | (1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                                ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__b))))))),9);
        bufp->chgBit(oldp+26,((1U & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                      >> 1U) ^ (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                                 >> 1U) 
                                                ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT__carries__BRA__0__KET__))))));
        bufp->chgBit(oldp+27,((1U & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                      >> 2U) ^ (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                                 >> 2U) 
                                                ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__cout))))));
        bufp->chgBit(oldp+28,((1U & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                      >> 3U) ^ (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                                 >> 3U) 
                                                ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__cout))))));
        bufp->chgBit(oldp+29,((1U & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                      >> 4U) ^ (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                                 >> 4U) 
                                                ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__cout))))));
        bufp->chgBit(oldp+30,((1U & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                      >> 5U) ^ (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                                 >> 5U) 
                                                ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__cout))))));
        bufp->chgBit(oldp+31,((1U & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                      >> 6U) ^ (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                                 >> 6U) 
                                                ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__cout))))));
        bufp->chgBit(oldp+32,((IData)(((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                         ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__b)) 
                                        >> 7U) ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__cout)))));
        bufp->chgBit(oldp+33,((1U & ((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                       >> 7U) & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                                  >> 7U) 
                                                 | (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__cout))) 
                                     | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                         >> 7U) & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__cout))))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgCData(oldp+34,((((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__cout) 
                                    << 6U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__cout) 
                                              << 5U)) 
                                  | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__cout) 
                                      << 4U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__cout) 
                                                << 3U))) 
                                 | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__cout) 
                                     << 2U) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__cout) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT__carries__BRA__0__KET__))))),7);
        bufp->chgBit(oldp+35,(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT__carries__BRA__0__KET__));
        bufp->chgBit(oldp+36,(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__cout));
        bufp->chgBit(oldp+37,(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__cout));
        bufp->chgBit(oldp+38,(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__cout));
        bufp->chgBit(oldp+39,(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__cout));
        bufp->chgBit(oldp+40,(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__cout));
        bufp->chgBit(oldp+41,(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__cout));
    }
}

void Vtb_eight_bit_adder___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_eight_bit_adder___024root__trace_cleanup\n"); );
    // Init
    Vtb_eight_bit_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_eight_bit_adder___024root*>(voidSelf);
    Vtb_eight_bit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
