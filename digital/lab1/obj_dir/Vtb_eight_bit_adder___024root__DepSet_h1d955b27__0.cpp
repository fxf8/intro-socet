// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_eight_bit_adder.h for the primary calling header

#include "Vtb_eight_bit_adder__pch.h"
#include "Vtb_eight_bit_adder___024root.h"

VlCoroutine Vtb_eight_bit_adder___024root___eval_initial__TOP__Vtiming__0(Vtb_eight_bit_adder___024root* vlSelf);

void Vtb_eight_bit_adder___024root___eval_initial(Vtb_eight_bit_adder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_eight_bit_adder___024root___eval_initial\n"); );
    Vtb_eight_bit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_eight_bit_adder___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vtb_eight_bit_adder___024root___act_sequent__TOP__0(Vtb_eight_bit_adder___024root* vlSelf);

void Vtb_eight_bit_adder___024root___eval_act(Vtb_eight_bit_adder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_eight_bit_adder___024root___eval_act\n"); );
    Vtb_eight_bit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_eight_bit_adder___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_eight_bit_adder___024root___act_sequent__TOP__0(Vtb_eight_bit_adder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_eight_bit_adder___024root___act_sequent__TOP__0\n"); );
    Vtb_eight_bit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__0__KET____DOT__gen_first_iteration__DOT__fa__s 
        = (1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                 ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__b)));
    vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT__carries__BRA__0__KET__ 
        = (1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                 & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__b)));
    vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__s 
        = (1U & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                  >> 1U) ^ (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                             >> 1U) ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT__carries__BRA__0__KET__))));
    vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__cout 
        = (1U & ((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                   >> 1U) & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                              >> 1U) | (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT__carries__BRA__0__KET__))) 
                 | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                     >> 1U) & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT__carries__BRA__0__KET__))));
    vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__s 
        = (1U & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                  >> 2U) ^ (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                             >> 2U) ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__cout))));
    vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__cout 
        = (1U & ((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                   >> 2U) & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                              >> 2U) | (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__cout))) 
                 | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                     >> 2U) & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__cout))));
    vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__s 
        = (1U & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                  >> 3U) ^ (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                             >> 3U) ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__cout))));
    vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__cout 
        = (1U & ((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                   >> 3U) & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                              >> 3U) | (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__cout))) 
                 | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                     >> 3U) & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__cout))));
    vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__s 
        = (1U & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                  >> 4U) ^ (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                             >> 4U) ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__cout))));
    vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__cout 
        = (1U & ((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                   >> 4U) & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                              >> 4U) | (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__cout))) 
                 | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                     >> 4U) & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__cout))));
    vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__s 
        = (1U & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                  >> 5U) ^ (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                             >> 5U) ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__cout))));
    vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__cout 
        = (1U & ((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                   >> 5U) & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                              >> 5U) | (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__cout))) 
                 | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                     >> 5U) & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__cout))));
    vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__s 
        = (1U & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                  >> 6U) ^ (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                             >> 6U) ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__cout))));
    vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__cout 
        = (1U & ((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                   >> 6U) & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                              >> 6U) | (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__cout))) 
                 | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                     >> 6U) & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__cout))));
    vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__cout 
        = (1U & ((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                   >> 7U) & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                              >> 7U) | (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__cout))) 
                 | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                     >> 7U) & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__cout))));
    vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__s 
        = (IData)(((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                     ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__b)) 
                    >> 7U) ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__cout)));
}

void Vtb_eight_bit_adder___024root___eval_nba(Vtb_eight_bit_adder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_eight_bit_adder___024root___eval_nba\n"); );
    Vtb_eight_bit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_eight_bit_adder___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

void Vtb_eight_bit_adder___024root___timing_resume(Vtb_eight_bit_adder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_eight_bit_adder___024root___timing_resume\n"); );
    Vtb_eight_bit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_eight_bit_adder___024root___eval_triggers__act(Vtb_eight_bit_adder___024root* vlSelf);

bool Vtb_eight_bit_adder___024root___eval_phase__act(Vtb_eight_bit_adder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_eight_bit_adder___024root___eval_phase__act\n"); );
    Vtb_eight_bit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_eight_bit_adder___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_eight_bit_adder___024root___timing_resume(vlSelf);
        Vtb_eight_bit_adder___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_eight_bit_adder___024root___eval_phase__nba(Vtb_eight_bit_adder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_eight_bit_adder___024root___eval_phase__nba\n"); );
    Vtb_eight_bit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_eight_bit_adder___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_eight_bit_adder___024root___dump_triggers__nba(Vtb_eight_bit_adder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_eight_bit_adder___024root___dump_triggers__act(Vtb_eight_bit_adder___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_eight_bit_adder___024root___eval(Vtb_eight_bit_adder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_eight_bit_adder___024root___eval\n"); );
    Vtb_eight_bit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_eight_bit_adder___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_eight_bit_adder.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_eight_bit_adder___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_eight_bit_adder.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_eight_bit_adder___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_eight_bit_adder___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_eight_bit_adder___024root___eval_debug_assertions(Vtb_eight_bit_adder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_eight_bit_adder___024root___eval_debug_assertions\n"); );
    Vtb_eight_bit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
