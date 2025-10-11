// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter.h for the primary calling header

#include "Vcounter__pch.h"
#include "Vcounter__Syms.h"
#include "Vcounter___024root.h"

VL_INLINE_OPT VlCoroutine Vcounter___024root___eval_initial__TOP__Vtiming__0(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_counter__DOT__reset__0__tb_counter__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_counter__DOT__reset__0__tb_counter__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*2:0*/ __Vtask_tb_counter__DOT__increment_counter__1__expected;
    __Vtask_tb_counter__DOT__increment_counter__1__expected = 0;
    CData/*2:0*/ __Vtask_tb_counter__DOT__increment_counter__2__expected;
    __Vtask_tb_counter__DOT__increment_counter__2__expected = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e667374U;
    __Vtemp_1[1U] = 0x666f726dU;
    __Vtemp_1[2U] = 0x77617665U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_counter__DOT__num_tests = 0U;
    vlSelfRef.tb_counter__DOT__num_passed = 0U;
    __Vtask_tb_counter__DOT__reset__0__tb_counter__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    vlSelfRef.tb_counter__DOT__rst_n = 0U;
    co_await vlSelfRef.__VtrigSched_hbc3715bf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_counter.clk)", 
                                                         "tb/tb_counter.sv", 
                                                         44);
    __Vtask_tb_counter__DOT__reset__0__tb_counter__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_hbc3715bf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_counter.clk)", 
                                                         "tb/tb_counter.sv", 
                                                         44);
    __Vtask_tb_counter__DOT__reset__0__tb_counter__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    vlSelfRef.tb_counter__DOT__rst_n = 1U;
    __Vtask_tb_counter__DOT__increment_counter__1__expected = 1U;
    vlSelfRef.tb_counter__DOT__num_tests = ((IData)(1U) 
                                            + vlSelfRef.tb_counter__DOT__num_tests);
    co_await vlSelfRef.__VtrigSched_hbc371cfe__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_counter.clk)", 
                                                         "tb/tb_counter.sv", 
                                                         50);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_counter.sv", 
                                         51);
    if (VL_UNLIKELY((((IData)(__Vtask_tb_counter__DOT__increment_counter__1__expected) 
                      != (IData)(vlSelfRef.tb_counter__DOT__count))))) {
        VL_WRITEF_NX("[Time %0t] FAILED: expected %0#, got %0#\n\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,3,(IData)(__Vtask_tb_counter__DOT__increment_counter__1__expected),
                     3,vlSelfRef.tb_counter__DOT__count);
    } else {
        vlSelfRef.tb_counter__DOT__num_passed = ((IData)(1U) 
                                                 + vlSelfRef.tb_counter__DOT__num_passed);
    }
    vlSelfRef.tb_counter__DOT__unnamedblk1__DOT__i = 2U;
    __Vtask_tb_counter__DOT__increment_counter__1__expected = 2U;
    vlSelfRef.tb_counter__DOT__num_tests = ((IData)(1U) 
                                            + vlSelfRef.tb_counter__DOT__num_tests);
    co_await vlSelfRef.__VtrigSched_hbc371cfe__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_counter.clk)", 
                                                         "tb/tb_counter.sv", 
                                                         50);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_counter.sv", 
                                         51);
    if (VL_UNLIKELY((((IData)(__Vtask_tb_counter__DOT__increment_counter__1__expected) 
                      != (IData)(vlSelfRef.tb_counter__DOT__count))))) {
        VL_WRITEF_NX("[Time %0t] FAILED: expected %0#, got %0#\n\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,3,(IData)(__Vtask_tb_counter__DOT__increment_counter__1__expected),
                     3,vlSelfRef.tb_counter__DOT__count);
    } else {
        vlSelfRef.tb_counter__DOT__num_passed = ((IData)(1U) 
                                                 + vlSelfRef.tb_counter__DOT__num_passed);
    }
    vlSelfRef.tb_counter__DOT__unnamedblk1__DOT__i = 3U;
    __Vtask_tb_counter__DOT__increment_counter__1__expected = 3U;
    vlSelfRef.tb_counter__DOT__num_tests = ((IData)(1U) 
                                            + vlSelfRef.tb_counter__DOT__num_tests);
    co_await vlSelfRef.__VtrigSched_hbc371cfe__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_counter.clk)", 
                                                         "tb/tb_counter.sv", 
                                                         50);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_counter.sv", 
                                         51);
    if (VL_UNLIKELY((((IData)(__Vtask_tb_counter__DOT__increment_counter__1__expected) 
                      != (IData)(vlSelfRef.tb_counter__DOT__count))))) {
        VL_WRITEF_NX("[Time %0t] FAILED: expected %0#, got %0#\n\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,3,(IData)(__Vtask_tb_counter__DOT__increment_counter__1__expected),
                     3,vlSelfRef.tb_counter__DOT__count);
    } else {
        vlSelfRef.tb_counter__DOT__num_passed = ((IData)(1U) 
                                                 + vlSelfRef.tb_counter__DOT__num_passed);
    }
    vlSelfRef.tb_counter__DOT__unnamedblk1__DOT__i = 4U;
    __Vtask_tb_counter__DOT__increment_counter__1__expected = 4U;
    vlSelfRef.tb_counter__DOT__num_tests = ((IData)(1U) 
                                            + vlSelfRef.tb_counter__DOT__num_tests);
    co_await vlSelfRef.__VtrigSched_hbc371cfe__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_counter.clk)", 
                                                         "tb/tb_counter.sv", 
                                                         50);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_counter.sv", 
                                         51);
    if (VL_UNLIKELY((((IData)(__Vtask_tb_counter__DOT__increment_counter__1__expected) 
                      != (IData)(vlSelfRef.tb_counter__DOT__count))))) {
        VL_WRITEF_NX("[Time %0t] FAILED: expected %0#, got %0#\n\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,3,(IData)(__Vtask_tb_counter__DOT__increment_counter__1__expected),
                     3,vlSelfRef.tb_counter__DOT__count);
    } else {
        vlSelfRef.tb_counter__DOT__num_passed = ((IData)(1U) 
                                                 + vlSelfRef.tb_counter__DOT__num_passed);
    }
    vlSelfRef.tb_counter__DOT__unnamedblk1__DOT__i = 5U;
    __Vtask_tb_counter__DOT__increment_counter__1__expected = 5U;
    vlSelfRef.tb_counter__DOT__num_tests = ((IData)(1U) 
                                            + vlSelfRef.tb_counter__DOT__num_tests);
    co_await vlSelfRef.__VtrigSched_hbc371cfe__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_counter.clk)", 
                                                         "tb/tb_counter.sv", 
                                                         50);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_counter.sv", 
                                         51);
    if (VL_UNLIKELY((((IData)(__Vtask_tb_counter__DOT__increment_counter__1__expected) 
                      != (IData)(vlSelfRef.tb_counter__DOT__count))))) {
        VL_WRITEF_NX("[Time %0t] FAILED: expected %0#, got %0#\n\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,3,(IData)(__Vtask_tb_counter__DOT__increment_counter__1__expected),
                     3,vlSelfRef.tb_counter__DOT__count);
    } else {
        vlSelfRef.tb_counter__DOT__num_passed = ((IData)(1U) 
                                                 + vlSelfRef.tb_counter__DOT__num_passed);
    }
    vlSelfRef.tb_counter__DOT__unnamedblk1__DOT__i = 6U;
    __Vtask_tb_counter__DOT__increment_counter__1__expected = 6U;
    vlSelfRef.tb_counter__DOT__num_tests = ((IData)(1U) 
                                            + vlSelfRef.tb_counter__DOT__num_tests);
    co_await vlSelfRef.__VtrigSched_hbc371cfe__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_counter.clk)", 
                                                         "tb/tb_counter.sv", 
                                                         50);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_counter.sv", 
                                         51);
    if (VL_UNLIKELY((((IData)(__Vtask_tb_counter__DOT__increment_counter__1__expected) 
                      != (IData)(vlSelfRef.tb_counter__DOT__count))))) {
        VL_WRITEF_NX("[Time %0t] FAILED: expected %0#, got %0#\n\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,3,(IData)(__Vtask_tb_counter__DOT__increment_counter__1__expected),
                     3,vlSelfRef.tb_counter__DOT__count);
    } else {
        vlSelfRef.tb_counter__DOT__num_passed = ((IData)(1U) 
                                                 + vlSelfRef.tb_counter__DOT__num_passed);
    }
    vlSelfRef.tb_counter__DOT__unnamedblk1__DOT__i = 7U;
    __Vtask_tb_counter__DOT__increment_counter__1__expected = 7U;
    vlSelfRef.tb_counter__DOT__num_tests = ((IData)(1U) 
                                            + vlSelfRef.tb_counter__DOT__num_tests);
    co_await vlSelfRef.__VtrigSched_hbc371cfe__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_counter.clk)", 
                                                         "tb/tb_counter.sv", 
                                                         50);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_counter.sv", 
                                         51);
    if (VL_UNLIKELY((((IData)(__Vtask_tb_counter__DOT__increment_counter__1__expected) 
                      != (IData)(vlSelfRef.tb_counter__DOT__count))))) {
        VL_WRITEF_NX("[Time %0t] FAILED: expected %0#, got %0#\n\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,3,(IData)(__Vtask_tb_counter__DOT__increment_counter__1__expected),
                     3,vlSelfRef.tb_counter__DOT__count);
    } else {
        vlSelfRef.tb_counter__DOT__num_passed = ((IData)(1U) 
                                                 + vlSelfRef.tb_counter__DOT__num_passed);
    }
    vlSelfRef.tb_counter__DOT__unnamedblk1__DOT__i = 8U;
    __Vtask_tb_counter__DOT__increment_counter__2__expected = 0U;
    vlSelfRef.tb_counter__DOT__num_tests = ((IData)(1U) 
                                            + vlSelfRef.tb_counter__DOT__num_tests);
    co_await vlSelfRef.__VtrigSched_hbc371cfe__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_counter.clk)", 
                                                         "tb/tb_counter.sv", 
                                                         50);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_counter.sv", 
                                         51);
    if (VL_UNLIKELY((((IData)(__Vtask_tb_counter__DOT__increment_counter__2__expected) 
                      != (IData)(vlSelfRef.tb_counter__DOT__count))))) {
        VL_WRITEF_NX("[Time %0t] FAILED: expected %0#, got %0#\n\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,3,(IData)(__Vtask_tb_counter__DOT__increment_counter__2__expected),
                     3,vlSelfRef.tb_counter__DOT__count);
    } else {
        vlSelfRef.tb_counter__DOT__num_passed = ((IData)(1U) 
                                                 + vlSelfRef.tb_counter__DOT__num_passed);
    }
    VL_WRITEF_NX("Passed %0d/%0d tests.\n",0,32,vlSelfRef.tb_counter__DOT__num_passed,
                 32,vlSelfRef.tb_counter__DOT__num_tests);
    VL_FINISH_MT("tb/tb_counter.sv", 80, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter___024root___dump_triggers__act(Vcounter___024root* vlSelf);
#endif  // VL_DEBUG

void Vcounter___024root___eval_triggers__act(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_triggers__act\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_counter__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_counter__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_counter__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_counter__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, ((~ (IData)(vlSelfRef.tb_counter__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_counter__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_counter__DOT__clk__0 
        = vlSelfRef.tb_counter__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_counter__DOT__rst_n__0 
        = vlSelfRef.tb_counter__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcounter___024root___dump_triggers__act(vlSelf);
    }
#endif
}
