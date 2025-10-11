// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_eight_bit_adder.h for the primary calling header

#include "Vtb_eight_bit_adder__pch.h"
#include "Vtb_eight_bit_adder__Syms.h"
#include "Vtb_eight_bit_adder___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_eight_bit_adder___024root___eval_initial__TOP__Vtiming__0(Vtb_eight_bit_adder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_eight_bit_adder___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_eight_bit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_tb_eight_bit_adder__DOT__apply_inputs__0__in_a;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__0__in_a = 0;
    CData/*7:0*/ __Vtask_tb_eight_bit_adder__DOT__apply_inputs__0__in_b;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__0__in_b = 0;
    SData/*8:0*/ __Vtask_tb_eight_bit_adder__DOT__apply_inputs__0__expected;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__0__expected = 0;
    CData/*7:0*/ __Vtask_tb_eight_bit_adder__DOT__apply_inputs__1__in_a;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__1__in_a = 0;
    CData/*7:0*/ __Vtask_tb_eight_bit_adder__DOT__apply_inputs__1__in_b;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__1__in_b = 0;
    SData/*8:0*/ __Vtask_tb_eight_bit_adder__DOT__apply_inputs__1__expected;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__1__expected = 0;
    CData/*7:0*/ __Vtask_tb_eight_bit_adder__DOT__apply_inputs__2__in_a;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__2__in_a = 0;
    CData/*7:0*/ __Vtask_tb_eight_bit_adder__DOT__apply_inputs__2__in_b;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__2__in_b = 0;
    SData/*8:0*/ __Vtask_tb_eight_bit_adder__DOT__apply_inputs__2__expected;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__2__expected = 0;
    CData/*7:0*/ __Vtask_tb_eight_bit_adder__DOT__apply_inputs__3__in_a;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__3__in_a = 0;
    CData/*7:0*/ __Vtask_tb_eight_bit_adder__DOT__apply_inputs__3__in_b;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__3__in_b = 0;
    SData/*8:0*/ __Vtask_tb_eight_bit_adder__DOT__apply_inputs__3__expected;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__3__expected = 0;
    CData/*7:0*/ __Vtask_tb_eight_bit_adder__DOT__apply_inputs__4__in_a;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__4__in_a = 0;
    CData/*7:0*/ __Vtask_tb_eight_bit_adder__DOT__apply_inputs__4__in_b;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__4__in_b = 0;
    SData/*8:0*/ __Vtask_tb_eight_bit_adder__DOT__apply_inputs__4__expected;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__4__expected = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e667374U;
    __Vtemp_1[1U] = 0x666f726dU;
    __Vtemp_1[2U] = 0x77617665U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_eight_bit_adder__DOT__num_passed = 0U;
    vlSelfRef.tb_eight_bit_adder__DOT__num_tests = 0U;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__0__in_b = 0U;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__0__in_a = 0U;
    vlSelfRef.tb_eight_bit_adder__DOT__a = 0U;
    vlSelfRef.tb_eight_bit_adder__DOT__b = 0U;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__0__expected = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/tb_eight_bit_adder.sv", 
                                         37);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__cout) 
             << 8U) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__s) 
                        << 7U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                  << 6U))) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                 << 4U))) 
          | ((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__s) 
               << 3U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__s) 
                         << 2U)) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                     << 1U) | (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__0__KET____DOT__gen_first_iteration__DOT__fa__s)))) 
         != (IData)(__Vtask_tb_eight_bit_adder__DOT__apply_inputs__0__expected))) {
        VL_WRITEF_NX("Test case failed: %0# + %0# = %0# (expected %0#)\n",0,
                     8,__Vtask_tb_eight_bit_adder__DOT__apply_inputs__0__in_a,
                     8,(IData)(__Vtask_tb_eight_bit_adder__DOT__apply_inputs__0__in_b),
                     9,(((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__cout) 
                           << 8U) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__s) 
                                      << 7U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                << 6U))) 
                         | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__s) 
                             << 5U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                       << 4U))) | (
                                                   (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__0__KET____DOT__gen_first_iteration__DOT__fa__s)))),
                     9,(IData)(__Vtask_tb_eight_bit_adder__DOT__apply_inputs__0__expected));
    } else {
        VL_WRITEF_NX("Test case passed: %0# + %0# = %0#\n",0,
                     8,__Vtask_tb_eight_bit_adder__DOT__apply_inputs__0__in_a,
                     8,(IData)(__Vtask_tb_eight_bit_adder__DOT__apply_inputs__0__in_b),
                     9,(((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__cout) 
                           << 8U) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__s) 
                                      << 7U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                << 6U))) 
                         | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__s) 
                             << 5U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                       << 4U))) | (
                                                   (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__0__KET____DOT__gen_first_iteration__DOT__fa__s)))));
        vlSelfRef.tb_eight_bit_adder__DOT__num_passed 
            = ((IData)(1U) + vlSelfRef.tb_eight_bit_adder__DOT__num_passed);
    }
    vlSelfRef.tb_eight_bit_adder__DOT__num_tests = 
        ((IData)(1U) + vlSelfRef.tb_eight_bit_adder__DOT__num_tests);
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__1__expected = 0x1feU;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__1__in_b = 0xffU;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__1__in_a = 0xffU;
    vlSelfRef.tb_eight_bit_adder__DOT__a = __Vtask_tb_eight_bit_adder__DOT__apply_inputs__1__in_a;
    vlSelfRef.tb_eight_bit_adder__DOT__b = __Vtask_tb_eight_bit_adder__DOT__apply_inputs__1__in_b;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__1__expected 
        = (0x1ffU & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                     + (IData)(vlSelfRef.tb_eight_bit_adder__DOT__b)));
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/tb_eight_bit_adder.sv", 
                                         37);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__cout) 
             << 8U) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__s) 
                        << 7U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                  << 6U))) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                 << 4U))) 
          | ((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__s) 
               << 3U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__s) 
                         << 2U)) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                     << 1U) | (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__0__KET____DOT__gen_first_iteration__DOT__fa__s)))) 
         != (IData)(__Vtask_tb_eight_bit_adder__DOT__apply_inputs__1__expected))) {
        VL_WRITEF_NX("Test case failed: %0# + %0# = %0# (expected %0#)\n",0,
                     8,__Vtask_tb_eight_bit_adder__DOT__apply_inputs__1__in_a,
                     8,(IData)(__Vtask_tb_eight_bit_adder__DOT__apply_inputs__1__in_b),
                     9,(((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__cout) 
                           << 8U) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__s) 
                                      << 7U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                << 6U))) 
                         | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__s) 
                             << 5U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                       << 4U))) | (
                                                   (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__0__KET____DOT__gen_first_iteration__DOT__fa__s)))),
                     9,(IData)(__Vtask_tb_eight_bit_adder__DOT__apply_inputs__1__expected));
    } else {
        VL_WRITEF_NX("Test case passed: %0# + %0# = %0#\n",0,
                     8,__Vtask_tb_eight_bit_adder__DOT__apply_inputs__1__in_a,
                     8,(IData)(__Vtask_tb_eight_bit_adder__DOT__apply_inputs__1__in_b),
                     9,(((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__cout) 
                           << 8U) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__s) 
                                      << 7U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                << 6U))) 
                         | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__s) 
                             << 5U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                       << 4U))) | (
                                                   (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__0__KET____DOT__gen_first_iteration__DOT__fa__s)))));
        vlSelfRef.tb_eight_bit_adder__DOT__num_passed 
            = ((IData)(1U) + vlSelfRef.tb_eight_bit_adder__DOT__num_passed);
    }
    vlSelfRef.tb_eight_bit_adder__DOT__num_tests = 
        ((IData)(1U) + vlSelfRef.tb_eight_bit_adder__DOT__num_tests);
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__2__expected = 0xffU;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__2__in_b = 0U;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__2__in_a = 0xffU;
    vlSelfRef.tb_eight_bit_adder__DOT__a = __Vtask_tb_eight_bit_adder__DOT__apply_inputs__2__in_a;
    vlSelfRef.tb_eight_bit_adder__DOT__b = __Vtask_tb_eight_bit_adder__DOT__apply_inputs__2__in_b;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__2__expected 
        = (0x1ffU & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                     + (IData)(vlSelfRef.tb_eight_bit_adder__DOT__b)));
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/tb_eight_bit_adder.sv", 
                                         37);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__cout) 
             << 8U) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__s) 
                        << 7U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                  << 6U))) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                 << 4U))) 
          | ((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__s) 
               << 3U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__s) 
                         << 2U)) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                     << 1U) | (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__0__KET____DOT__gen_first_iteration__DOT__fa__s)))) 
         != (IData)(__Vtask_tb_eight_bit_adder__DOT__apply_inputs__2__expected))) {
        VL_WRITEF_NX("Test case failed: %0# + %0# = %0# (expected %0#)\n",0,
                     8,__Vtask_tb_eight_bit_adder__DOT__apply_inputs__2__in_a,
                     8,(IData)(__Vtask_tb_eight_bit_adder__DOT__apply_inputs__2__in_b),
                     9,(((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__cout) 
                           << 8U) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__s) 
                                      << 7U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                << 6U))) 
                         | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__s) 
                             << 5U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                       << 4U))) | (
                                                   (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__0__KET____DOT__gen_first_iteration__DOT__fa__s)))),
                     9,(IData)(__Vtask_tb_eight_bit_adder__DOT__apply_inputs__2__expected));
    } else {
        VL_WRITEF_NX("Test case passed: %0# + %0# = %0#\n",0,
                     8,__Vtask_tb_eight_bit_adder__DOT__apply_inputs__2__in_a,
                     8,(IData)(__Vtask_tb_eight_bit_adder__DOT__apply_inputs__2__in_b),
                     9,(((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__cout) 
                           << 8U) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__s) 
                                      << 7U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                << 6U))) 
                         | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__s) 
                             << 5U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                       << 4U))) | (
                                                   (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__0__KET____DOT__gen_first_iteration__DOT__fa__s)))));
        vlSelfRef.tb_eight_bit_adder__DOT__num_passed 
            = ((IData)(1U) + vlSelfRef.tb_eight_bit_adder__DOT__num_passed);
    }
    vlSelfRef.tb_eight_bit_adder__DOT__num_tests = 
        ((IData)(1U) + vlSelfRef.tb_eight_bit_adder__DOT__num_tests);
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__3__expected = 0xffU;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__3__in_b = 0xffU;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__3__in_a = 0U;
    vlSelfRef.tb_eight_bit_adder__DOT__a = __Vtask_tb_eight_bit_adder__DOT__apply_inputs__3__in_a;
    vlSelfRef.tb_eight_bit_adder__DOT__b = __Vtask_tb_eight_bit_adder__DOT__apply_inputs__3__in_b;
    __Vtask_tb_eight_bit_adder__DOT__apply_inputs__3__expected 
        = (0x1ffU & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                     + (IData)(vlSelfRef.tb_eight_bit_adder__DOT__b)));
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/tb_eight_bit_adder.sv", 
                                         37);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__cout) 
             << 8U) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__s) 
                        << 7U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                  << 6U))) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                 << 4U))) 
          | ((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__s) 
               << 3U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__s) 
                         << 2U)) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                     << 1U) | (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__0__KET____DOT__gen_first_iteration__DOT__fa__s)))) 
         != (IData)(__Vtask_tb_eight_bit_adder__DOT__apply_inputs__3__expected))) {
        VL_WRITEF_NX("Test case failed: %0# + %0# = %0# (expected %0#)\n",0,
                     8,__Vtask_tb_eight_bit_adder__DOT__apply_inputs__3__in_a,
                     8,(IData)(__Vtask_tb_eight_bit_adder__DOT__apply_inputs__3__in_b),
                     9,(((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__cout) 
                           << 8U) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__s) 
                                      << 7U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                << 6U))) 
                         | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__s) 
                             << 5U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                       << 4U))) | (
                                                   (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__0__KET____DOT__gen_first_iteration__DOT__fa__s)))),
                     9,(IData)(__Vtask_tb_eight_bit_adder__DOT__apply_inputs__3__expected));
    } else {
        VL_WRITEF_NX("Test case passed: %0# + %0# = %0#\n",0,
                     8,__Vtask_tb_eight_bit_adder__DOT__apply_inputs__3__in_a,
                     8,(IData)(__Vtask_tb_eight_bit_adder__DOT__apply_inputs__3__in_b),
                     9,(((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__cout) 
                           << 8U) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__s) 
                                      << 7U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                << 6U))) 
                         | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__s) 
                             << 5U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                       << 4U))) | (
                                                   (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__0__KET____DOT__gen_first_iteration__DOT__fa__s)))));
        vlSelfRef.tb_eight_bit_adder__DOT__num_passed 
            = ((IData)(1U) + vlSelfRef.tb_eight_bit_adder__DOT__num_passed);
    }
    vlSelfRef.tb_eight_bit_adder__DOT__num_tests = 
        ((IData)(1U) + vlSelfRef.tb_eight_bit_adder__DOT__num_tests);
    vlSelfRef.tb_eight_bit_adder__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x3e8U, vlSelfRef.tb_eight_bit_adder__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_eight_bit_adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__in_a 
            = VL_URANDOM_RANGE_I(0xffU, 0U);
        vlSelfRef.tb_eight_bit_adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__in_b 
            = VL_URANDOM_RANGE_I(0xffU, 0U);
        vlSelfRef.tb_eight_bit_adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__expected 
            = (vlSelfRef.tb_eight_bit_adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__in_a 
               + vlSelfRef.tb_eight_bit_adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__in_b);
        VL_WRITEF_NX("Running test case %0d: %0# + %0# = %0#\n",0,
                     32,vlSelfRef.tb_eight_bit_adder__DOT__unnamedblk1__DOT__i,
                     32,vlSelfRef.tb_eight_bit_adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__in_a,
                     32,vlSelfRef.tb_eight_bit_adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__in_b,
                     32,vlSelfRef.tb_eight_bit_adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__expected);
        __Vtask_tb_eight_bit_adder__DOT__apply_inputs__4__expected 
            = (0x1ffU & vlSelfRef.tb_eight_bit_adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result);
        __Vtask_tb_eight_bit_adder__DOT__apply_inputs__4__in_b 
            = (0xffU & vlSelfRef.tb_eight_bit_adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__in_b);
        __Vtask_tb_eight_bit_adder__DOT__apply_inputs__4__in_a 
            = (0xffU & vlSelfRef.tb_eight_bit_adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__in_a);
        vlSelfRef.tb_eight_bit_adder__DOT__a = __Vtask_tb_eight_bit_adder__DOT__apply_inputs__4__in_a;
        vlSelfRef.tb_eight_bit_adder__DOT__b = __Vtask_tb_eight_bit_adder__DOT__apply_inputs__4__in_b;
        __Vtask_tb_eight_bit_adder__DOT__apply_inputs__4__expected 
            = (0x1ffU & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                         + (IData)(vlSelfRef.tb_eight_bit_adder__DOT__b)));
        co_await vlSelfRef.__VdlySched.delay(0xaULL, 
                                             nullptr, 
                                             "tb/tb_eight_bit_adder.sv", 
                                             37);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (((((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__cout) 
                 << 8U) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__s) 
                            << 7U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                      << 6U))) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                   << 5U) 
                                                  | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                                     << 4U))) 
              | ((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__s) 
                   << 3U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__s) 
                             << 2U)) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                         << 1U) | (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__0__KET____DOT__gen_first_iteration__DOT__fa__s)))) 
             != (IData)(__Vtask_tb_eight_bit_adder__DOT__apply_inputs__4__expected))) {
            VL_WRITEF_NX("Test case failed: %0# + %0# = %0# (expected %0#)\n",0,
                         8,__Vtask_tb_eight_bit_adder__DOT__apply_inputs__4__in_a,
                         8,(IData)(__Vtask_tb_eight_bit_adder__DOT__apply_inputs__4__in_b),
                         9,(((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__cout) 
                               << 8U) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__s) 
                                          << 7U) | 
                                         ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                          << 6U))) 
                             | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                 << 5U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                           << 4U))) 
                            | ((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                 << 3U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                   << 1U) | (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__0__KET____DOT__gen_first_iteration__DOT__fa__s)))),
                         9,(IData)(__Vtask_tb_eight_bit_adder__DOT__apply_inputs__4__expected));
        } else {
            VL_WRITEF_NX("Test case passed: %0# + %0# = %0#\n",0,
                         8,__Vtask_tb_eight_bit_adder__DOT__apply_inputs__4__in_a,
                         8,(IData)(__Vtask_tb_eight_bit_adder__DOT__apply_inputs__4__in_b),
                         9,(((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__cout) 
                               << 8U) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__7__KET____DOT__gen_last_iteration__DOT__fa__s) 
                                          << 7U) | 
                                         ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                          << 6U))) 
                             | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                 << 5U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                           << 4U))) 
                            | ((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                 << 3U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__s) 
                                   << 1U) | (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__0__KET____DOT__gen_first_iteration__DOT__fa__s)))));
            vlSelfRef.tb_eight_bit_adder__DOT__num_passed 
                = ((IData)(1U) + vlSelfRef.tb_eight_bit_adder__DOT__num_passed);
        }
        vlSelfRef.tb_eight_bit_adder__DOT__num_tests 
            = ((IData)(1U) + vlSelfRef.tb_eight_bit_adder__DOT__num_tests);
        vlSelfRef.tb_eight_bit_adder__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.tb_eight_bit_adder__DOT__unnamedblk1__DOT__i);
    }
    VL_WRITEF_NX("Passed %0d/%0d tests.\n",0,32,vlSelfRef.tb_eight_bit_adder__DOT__num_passed,
                 32,vlSelfRef.tb_eight_bit_adder__DOT__num_tests);
    VL_FINISH_MT("tb/tb_eight_bit_adder.sv", 80, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_eight_bit_adder___024root___dump_triggers__act(Vtb_eight_bit_adder___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_eight_bit_adder___024root___eval_triggers__act(Vtb_eight_bit_adder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_eight_bit_adder___024root___eval_triggers__act\n"); );
    Vtb_eight_bit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_eight_bit_adder___024root___dump_triggers__act(vlSelf);
    }
#endif
}
