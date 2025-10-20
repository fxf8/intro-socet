// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_copier.h for the primary calling header

#include "Vtb_copier__pch.h"
#include "Vtb_copier___024root.h"

VL_ATTR_COLD void Vtb_copier___024root___eval_static__TOP(Vtb_copier___024root* vlSelf);

VL_ATTR_COLD void Vtb_copier___024root___eval_static(Vtb_copier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root___eval_static\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_copier___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_copier__DOT__CLK__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_copier__DOT__nRST__0 
        = vlSelfRef.tb_copier__DOT__nRST;
}

VL_ATTR_COLD void Vtb_copier___024root___eval_static__TOP(Vtb_copier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root___eval_static__TOP\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_copier__DOT__CLK = 0U;
}

VL_ATTR_COLD void Vtb_copier___024root___eval_final(Vtb_copier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root___eval_final\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_copier___024root___dump_triggers__stl(Vtb_copier___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_copier___024root___eval_phase__stl(Vtb_copier___024root* vlSelf);

VL_ATTR_COLD void Vtb_copier___024root___eval_settle(Vtb_copier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root___eval_settle\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_copier___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_copier.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_copier___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_copier___024root___dump_triggers__stl(Vtb_copier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root___dump_triggers__stl\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_copier___024root___stl_sequent__TOP__0(Vtb_copier___024root* vlSelf);
VL_ATTR_COLD void Vtb_copier___024root____Vm_traceActivitySetAll(Vtb_copier___024root* vlSelf);

VL_ATTR_COLD void Vtb_copier___024root___eval_stl(Vtb_copier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root___eval_stl\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_copier___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_copier___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_copier___024root___eval_triggers__stl(Vtb_copier___024root* vlSelf);

VL_ATTR_COLD bool Vtb_copier___024root___eval_phase__stl(Vtb_copier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root___eval_phase__stl\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_copier___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_copier___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_copier___024root___dump_triggers__act(Vtb_copier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root___dump_triggers__act\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_copier.CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_copier.nRST)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_copier___024root___dump_triggers__nba(Vtb_copier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root___dump_triggers__nba\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_copier.CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_copier.nRST)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_copier___024root____Vm_traceActivitySetAll(Vtb_copier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root____Vm_traceActivitySetAll\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void Vtb_copier___024root___ctor_var_reset(Vtb_copier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root___ctor_var_reset\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_copier__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->tb_copier__DOT__nRST = VL_RAND_RESET_I(1);
    vlSelf->tb_copier__DOT__src_addr = VL_RAND_RESET_I(8);
    vlSelf->tb_copier__DOT__dst_addr = VL_RAND_RESET_I(8);
    vlSelf->tb_copier__DOT__copy_size = VL_RAND_RESET_I(8);
    vlSelf->tb_copier__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->tb_copier__DOT__finished = VL_RAND_RESET_I(1);
    vlSelf->tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__expected = VL_RAND_RESET_I(8);
    vlSelf->tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__actual = VL_RAND_RESET_I(8);
    vlSelf->tb_copier__DOT__DUT__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->tb_copier__DOT__DUT__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->tb_copier__DOT__DUT__DOT__copied_word = VL_RAND_RESET_I(8);
    vlSelf->tb_copier__DOT__DUT__DOT__rollover_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_copier__DOT__DUT__DOT__count_enable = VL_RAND_RESET_I(1);
    vlSelf->tb_copier__DOT__DUT__DOT__clear_counter = VL_RAND_RESET_I(1);
    vlSelf->tb_copier__DOT__DUT__DOT__register_write_enable = VL_RAND_RESET_I(1);
    vlSelf->tb_copier__DOT__DUT__DOT__counter__DOT__temp_counter = VL_RAND_RESET_I(8);
    vlSelf->tb_copier__DOT__DUT__DOT__counter__DOT__next_state = VL_RAND_RESET_I(8);
    vlSelf->tb_copier__DOT__DUT__DOT__counter__DOT__rollover_flag_c = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->tb_copier__DOT__MEM__DOT__memory);
    VL_RAND_RESET_W(2048, vlSelf->tb_copier__DOT__MEM__DOT__memory_n);
    vlSelf->__Vtrigprevexpr___TOP__tb_copier__DOT__CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_copier__DOT__nRST__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
