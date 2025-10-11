// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfull_adder.h for the primary calling header

#include "Vfull_adder__pch.h"
#include "Vfull_adder__Syms.h"
#include "Vfull_adder___024root.h"

VL_INLINE_OPT VlCoroutine Vfull_adder___024root___eval_initial__TOP__Vtiming__0(Vfull_adder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vfull_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__0__expected_s;
    __Vtask_tb_full_adder__DOT__apply_inputs__0__expected_s = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__0__expected_cout;
    __Vtask_tb_full_adder__DOT__apply_inputs__0__expected_cout = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__1__a;
    __Vtask_tb_full_adder__DOT__apply_inputs__1__a = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__1__b;
    __Vtask_tb_full_adder__DOT__apply_inputs__1__b = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__1__cin;
    __Vtask_tb_full_adder__DOT__apply_inputs__1__cin = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__1__expected_s;
    __Vtask_tb_full_adder__DOT__apply_inputs__1__expected_s = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__1__expected_cout;
    __Vtask_tb_full_adder__DOT__apply_inputs__1__expected_cout = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__2__a;
    __Vtask_tb_full_adder__DOT__apply_inputs__2__a = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__2__b;
    __Vtask_tb_full_adder__DOT__apply_inputs__2__b = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__2__cin;
    __Vtask_tb_full_adder__DOT__apply_inputs__2__cin = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__2__expected_s;
    __Vtask_tb_full_adder__DOT__apply_inputs__2__expected_s = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__2__expected_cout;
    __Vtask_tb_full_adder__DOT__apply_inputs__2__expected_cout = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__3__a;
    __Vtask_tb_full_adder__DOT__apply_inputs__3__a = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__3__b;
    __Vtask_tb_full_adder__DOT__apply_inputs__3__b = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__3__cin;
    __Vtask_tb_full_adder__DOT__apply_inputs__3__cin = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__3__expected_s;
    __Vtask_tb_full_adder__DOT__apply_inputs__3__expected_s = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__3__expected_cout;
    __Vtask_tb_full_adder__DOT__apply_inputs__3__expected_cout = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__4__a;
    __Vtask_tb_full_adder__DOT__apply_inputs__4__a = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__4__b;
    __Vtask_tb_full_adder__DOT__apply_inputs__4__b = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__4__cin;
    __Vtask_tb_full_adder__DOT__apply_inputs__4__cin = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__4__expected_s;
    __Vtask_tb_full_adder__DOT__apply_inputs__4__expected_s = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__4__expected_cout;
    __Vtask_tb_full_adder__DOT__apply_inputs__4__expected_cout = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__5__a;
    __Vtask_tb_full_adder__DOT__apply_inputs__5__a = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__5__b;
    __Vtask_tb_full_adder__DOT__apply_inputs__5__b = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__5__cin;
    __Vtask_tb_full_adder__DOT__apply_inputs__5__cin = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__5__expected_s;
    __Vtask_tb_full_adder__DOT__apply_inputs__5__expected_s = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__5__expected_cout;
    __Vtask_tb_full_adder__DOT__apply_inputs__5__expected_cout = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__6__a;
    __Vtask_tb_full_adder__DOT__apply_inputs__6__a = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__6__b;
    __Vtask_tb_full_adder__DOT__apply_inputs__6__b = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__6__cin;
    __Vtask_tb_full_adder__DOT__apply_inputs__6__cin = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__6__expected_s;
    __Vtask_tb_full_adder__DOT__apply_inputs__6__expected_s = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__6__expected_cout;
    __Vtask_tb_full_adder__DOT__apply_inputs__6__expected_cout = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__7__a;
    __Vtask_tb_full_adder__DOT__apply_inputs__7__a = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__7__b;
    __Vtask_tb_full_adder__DOT__apply_inputs__7__b = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__7__cin;
    __Vtask_tb_full_adder__DOT__apply_inputs__7__cin = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__7__expected_s;
    __Vtask_tb_full_adder__DOT__apply_inputs__7__expected_s = 0;
    CData/*0:0*/ __Vtask_tb_full_adder__DOT__apply_inputs__7__expected_cout;
    __Vtask_tb_full_adder__DOT__apply_inputs__7__expected_cout = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e667374U;
    __Vtemp_1[1U] = 0x666f726dU;
    __Vtemp_1[2U] = 0x77617665U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_full_adder__DOT__num_passed = 0U;
    __Vtask_tb_full_adder__DOT__apply_inputs__0__expected_cout = 0U;
    __Vtask_tb_full_adder__DOT__apply_inputs__0__expected_s = 0U;
    vlSelfRef.tb_full_adder__DOT__test_number = 1U;
    vlSelfRef.tb_full_adder__DOT__tb_a = 0U;
    vlSelfRef.tb_full_adder__DOT__tb_b = 0U;
    vlSelfRef.tb_full_adder__DOT__tb_cin = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/tb_full_adder.sv", 
                                         54);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((((IData)(__Vtask_tb_full_adder__DOT__apply_inputs__0__expected_cout) 
                        << 1U) | (IData)(__Vtask_tb_full_adder__DOT__apply_inputs__0__expected_s)) 
                      != (((IData)(vlSelfRef.tb_full_adder__DOT__tb_cout) 
                           << 1U) | (IData)(vlSelfRef.tb_full_adder__DOT__tb_s)))))) {
        VL_WRITEF_NX("[Time %0t]: Expected %2b, got %2b\n\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,2,(
                                                   ((IData)(__Vtask_tb_full_adder__DOT__apply_inputs__0__expected_cout) 
                                                    << 1U) 
                                                   | (IData)(__Vtask_tb_full_adder__DOT__apply_inputs__0__expected_s)),
                     2,(((IData)(vlSelfRef.tb_full_adder__DOT__tb_cout) 
                         << 1U) | (IData)(vlSelfRef.tb_full_adder__DOT__tb_s)));
    } else {
        vlSelfRef.tb_full_adder__DOT__num_passed = 
            ((IData)(1U) + vlSelfRef.tb_full_adder__DOT__num_passed);
    }
    __Vtask_tb_full_adder__DOT__apply_inputs__1__expected_cout = 0U;
    __Vtask_tb_full_adder__DOT__apply_inputs__1__expected_s = 1U;
    __Vtask_tb_full_adder__DOT__apply_inputs__1__cin = 1U;
    __Vtask_tb_full_adder__DOT__apply_inputs__1__b = 0U;
    __Vtask_tb_full_adder__DOT__apply_inputs__1__a = 0U;
    vlSelfRef.tb_full_adder__DOT__test_number = ((IData)(1U) 
                                                 + vlSelfRef.tb_full_adder__DOT__test_number);
    vlSelfRef.tb_full_adder__DOT__tb_a = __Vtask_tb_full_adder__DOT__apply_inputs__1__a;
    vlSelfRef.tb_full_adder__DOT__tb_b = __Vtask_tb_full_adder__DOT__apply_inputs__1__b;
    vlSelfRef.tb_full_adder__DOT__tb_cin = __Vtask_tb_full_adder__DOT__apply_inputs__1__cin;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/tb_full_adder.sv", 
                                         54);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((((IData)(__Vtask_tb_full_adder__DOT__apply_inputs__1__expected_cout) 
                        << 1U) | (IData)(__Vtask_tb_full_adder__DOT__apply_inputs__1__expected_s)) 
                      != (((IData)(vlSelfRef.tb_full_adder__DOT__tb_cout) 
                           << 1U) | (IData)(vlSelfRef.tb_full_adder__DOT__tb_s)))))) {
        VL_WRITEF_NX("[Time %0t]: Expected %2b, got %2b\n\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,2,(
                                                   ((IData)(__Vtask_tb_full_adder__DOT__apply_inputs__1__expected_cout) 
                                                    << 1U) 
                                                   | (IData)(__Vtask_tb_full_adder__DOT__apply_inputs__1__expected_s)),
                     2,(((IData)(vlSelfRef.tb_full_adder__DOT__tb_cout) 
                         << 1U) | (IData)(vlSelfRef.tb_full_adder__DOT__tb_s)));
    } else {
        vlSelfRef.tb_full_adder__DOT__num_passed = 
            ((IData)(1U) + vlSelfRef.tb_full_adder__DOT__num_passed);
    }
    __Vtask_tb_full_adder__DOT__apply_inputs__2__expected_cout = 0U;
    __Vtask_tb_full_adder__DOT__apply_inputs__2__expected_s = 1U;
    __Vtask_tb_full_adder__DOT__apply_inputs__2__cin = 0U;
    __Vtask_tb_full_adder__DOT__apply_inputs__2__b = 1U;
    __Vtask_tb_full_adder__DOT__apply_inputs__2__a = 0U;
    vlSelfRef.tb_full_adder__DOT__test_number = ((IData)(1U) 
                                                 + vlSelfRef.tb_full_adder__DOT__test_number);
    vlSelfRef.tb_full_adder__DOT__tb_a = __Vtask_tb_full_adder__DOT__apply_inputs__2__a;
    vlSelfRef.tb_full_adder__DOT__tb_b = __Vtask_tb_full_adder__DOT__apply_inputs__2__b;
    vlSelfRef.tb_full_adder__DOT__tb_cin = __Vtask_tb_full_adder__DOT__apply_inputs__2__cin;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/tb_full_adder.sv", 
                                         54);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((((IData)(__Vtask_tb_full_adder__DOT__apply_inputs__2__expected_cout) 
                        << 1U) | (IData)(__Vtask_tb_full_adder__DOT__apply_inputs__2__expected_s)) 
                      != (((IData)(vlSelfRef.tb_full_adder__DOT__tb_cout) 
                           << 1U) | (IData)(vlSelfRef.tb_full_adder__DOT__tb_s)))))) {
        VL_WRITEF_NX("[Time %0t]: Expected %2b, got %2b\n\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,2,(
                                                   ((IData)(__Vtask_tb_full_adder__DOT__apply_inputs__2__expected_cout) 
                                                    << 1U) 
                                                   | (IData)(__Vtask_tb_full_adder__DOT__apply_inputs__2__expected_s)),
                     2,(((IData)(vlSelfRef.tb_full_adder__DOT__tb_cout) 
                         << 1U) | (IData)(vlSelfRef.tb_full_adder__DOT__tb_s)));
    } else {
        vlSelfRef.tb_full_adder__DOT__num_passed = 
            ((IData)(1U) + vlSelfRef.tb_full_adder__DOT__num_passed);
    }
    __Vtask_tb_full_adder__DOT__apply_inputs__3__expected_cout = 1U;
    __Vtask_tb_full_adder__DOT__apply_inputs__3__expected_s = 0U;
    __Vtask_tb_full_adder__DOT__apply_inputs__3__cin = 1U;
    __Vtask_tb_full_adder__DOT__apply_inputs__3__b = 1U;
    __Vtask_tb_full_adder__DOT__apply_inputs__3__a = 0U;
    vlSelfRef.tb_full_adder__DOT__test_number = ((IData)(1U) 
                                                 + vlSelfRef.tb_full_adder__DOT__test_number);
    vlSelfRef.tb_full_adder__DOT__tb_a = __Vtask_tb_full_adder__DOT__apply_inputs__3__a;
    vlSelfRef.tb_full_adder__DOT__tb_b = __Vtask_tb_full_adder__DOT__apply_inputs__3__b;
    vlSelfRef.tb_full_adder__DOT__tb_cin = __Vtask_tb_full_adder__DOT__apply_inputs__3__cin;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/tb_full_adder.sv", 
                                         54);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((((IData)(__Vtask_tb_full_adder__DOT__apply_inputs__3__expected_cout) 
                        << 1U) | (IData)(__Vtask_tb_full_adder__DOT__apply_inputs__3__expected_s)) 
                      != (((IData)(vlSelfRef.tb_full_adder__DOT__tb_cout) 
                           << 1U) | (IData)(vlSelfRef.tb_full_adder__DOT__tb_s)))))) {
        VL_WRITEF_NX("[Time %0t]: Expected %2b, got %2b\n\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,2,(
                                                   ((IData)(__Vtask_tb_full_adder__DOT__apply_inputs__3__expected_cout) 
                                                    << 1U) 
                                                   | (IData)(__Vtask_tb_full_adder__DOT__apply_inputs__3__expected_s)),
                     2,(((IData)(vlSelfRef.tb_full_adder__DOT__tb_cout) 
                         << 1U) | (IData)(vlSelfRef.tb_full_adder__DOT__tb_s)));
    } else {
        vlSelfRef.tb_full_adder__DOT__num_passed = 
            ((IData)(1U) + vlSelfRef.tb_full_adder__DOT__num_passed);
    }
    __Vtask_tb_full_adder__DOT__apply_inputs__4__expected_cout = 0U;
    __Vtask_tb_full_adder__DOT__apply_inputs__4__expected_s = 1U;
    __Vtask_tb_full_adder__DOT__apply_inputs__4__cin = 0U;
    __Vtask_tb_full_adder__DOT__apply_inputs__4__b = 0U;
    __Vtask_tb_full_adder__DOT__apply_inputs__4__a = 1U;
    vlSelfRef.tb_full_adder__DOT__test_number = ((IData)(1U) 
                                                 + vlSelfRef.tb_full_adder__DOT__test_number);
    vlSelfRef.tb_full_adder__DOT__tb_a = __Vtask_tb_full_adder__DOT__apply_inputs__4__a;
    vlSelfRef.tb_full_adder__DOT__tb_b = __Vtask_tb_full_adder__DOT__apply_inputs__4__b;
    vlSelfRef.tb_full_adder__DOT__tb_cin = __Vtask_tb_full_adder__DOT__apply_inputs__4__cin;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/tb_full_adder.sv", 
                                         54);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((((IData)(__Vtask_tb_full_adder__DOT__apply_inputs__4__expected_cout) 
                        << 1U) | (IData)(__Vtask_tb_full_adder__DOT__apply_inputs__4__expected_s)) 
                      != (((IData)(vlSelfRef.tb_full_adder__DOT__tb_cout) 
                           << 1U) | (IData)(vlSelfRef.tb_full_adder__DOT__tb_s)))))) {
        VL_WRITEF_NX("[Time %0t]: Expected %2b, got %2b\n\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,2,(
                                                   ((IData)(__Vtask_tb_full_adder__DOT__apply_inputs__4__expected_cout) 
                                                    << 1U) 
                                                   | (IData)(__Vtask_tb_full_adder__DOT__apply_inputs__4__expected_s)),
                     2,(((IData)(vlSelfRef.tb_full_adder__DOT__tb_cout) 
                         << 1U) | (IData)(vlSelfRef.tb_full_adder__DOT__tb_s)));
    } else {
        vlSelfRef.tb_full_adder__DOT__num_passed = 
            ((IData)(1U) + vlSelfRef.tb_full_adder__DOT__num_passed);
    }
    __Vtask_tb_full_adder__DOT__apply_inputs__5__expected_cout = 1U;
    __Vtask_tb_full_adder__DOT__apply_inputs__5__expected_s = 0U;
    __Vtask_tb_full_adder__DOT__apply_inputs__5__cin = 1U;
    __Vtask_tb_full_adder__DOT__apply_inputs__5__b = 0U;
    __Vtask_tb_full_adder__DOT__apply_inputs__5__a = 1U;
    vlSelfRef.tb_full_adder__DOT__test_number = ((IData)(1U) 
                                                 + vlSelfRef.tb_full_adder__DOT__test_number);
    vlSelfRef.tb_full_adder__DOT__tb_a = __Vtask_tb_full_adder__DOT__apply_inputs__5__a;
    vlSelfRef.tb_full_adder__DOT__tb_b = __Vtask_tb_full_adder__DOT__apply_inputs__5__b;
    vlSelfRef.tb_full_adder__DOT__tb_cin = __Vtask_tb_full_adder__DOT__apply_inputs__5__cin;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/tb_full_adder.sv", 
                                         54);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((((IData)(__Vtask_tb_full_adder__DOT__apply_inputs__5__expected_cout) 
                        << 1U) | (IData)(__Vtask_tb_full_adder__DOT__apply_inputs__5__expected_s)) 
                      != (((IData)(vlSelfRef.tb_full_adder__DOT__tb_cout) 
                           << 1U) | (IData)(vlSelfRef.tb_full_adder__DOT__tb_s)))))) {
        VL_WRITEF_NX("[Time %0t]: Expected %2b, got %2b\n\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,2,(
                                                   ((IData)(__Vtask_tb_full_adder__DOT__apply_inputs__5__expected_cout) 
                                                    << 1U) 
                                                   | (IData)(__Vtask_tb_full_adder__DOT__apply_inputs__5__expected_s)),
                     2,(((IData)(vlSelfRef.tb_full_adder__DOT__tb_cout) 
                         << 1U) | (IData)(vlSelfRef.tb_full_adder__DOT__tb_s)));
    } else {
        vlSelfRef.tb_full_adder__DOT__num_passed = 
            ((IData)(1U) + vlSelfRef.tb_full_adder__DOT__num_passed);
    }
    __Vtask_tb_full_adder__DOT__apply_inputs__6__expected_cout = 1U;
    __Vtask_tb_full_adder__DOT__apply_inputs__6__expected_s = 0U;
    __Vtask_tb_full_adder__DOT__apply_inputs__6__cin = 0U;
    __Vtask_tb_full_adder__DOT__apply_inputs__6__b = 1U;
    __Vtask_tb_full_adder__DOT__apply_inputs__6__a = 1U;
    vlSelfRef.tb_full_adder__DOT__test_number = ((IData)(1U) 
                                                 + vlSelfRef.tb_full_adder__DOT__test_number);
    vlSelfRef.tb_full_adder__DOT__tb_a = __Vtask_tb_full_adder__DOT__apply_inputs__6__a;
    vlSelfRef.tb_full_adder__DOT__tb_b = __Vtask_tb_full_adder__DOT__apply_inputs__6__b;
    vlSelfRef.tb_full_adder__DOT__tb_cin = __Vtask_tb_full_adder__DOT__apply_inputs__6__cin;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/tb_full_adder.sv", 
                                         54);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((((IData)(__Vtask_tb_full_adder__DOT__apply_inputs__6__expected_cout) 
                        << 1U) | (IData)(__Vtask_tb_full_adder__DOT__apply_inputs__6__expected_s)) 
                      != (((IData)(vlSelfRef.tb_full_adder__DOT__tb_cout) 
                           << 1U) | (IData)(vlSelfRef.tb_full_adder__DOT__tb_s)))))) {
        VL_WRITEF_NX("[Time %0t]: Expected %2b, got %2b\n\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,2,(
                                                   ((IData)(__Vtask_tb_full_adder__DOT__apply_inputs__6__expected_cout) 
                                                    << 1U) 
                                                   | (IData)(__Vtask_tb_full_adder__DOT__apply_inputs__6__expected_s)),
                     2,(((IData)(vlSelfRef.tb_full_adder__DOT__tb_cout) 
                         << 1U) | (IData)(vlSelfRef.tb_full_adder__DOT__tb_s)));
    } else {
        vlSelfRef.tb_full_adder__DOT__num_passed = 
            ((IData)(1U) + vlSelfRef.tb_full_adder__DOT__num_passed);
    }
    __Vtask_tb_full_adder__DOT__apply_inputs__7__expected_cout = 1U;
    __Vtask_tb_full_adder__DOT__apply_inputs__7__expected_s = 1U;
    __Vtask_tb_full_adder__DOT__apply_inputs__7__cin = 1U;
    __Vtask_tb_full_adder__DOT__apply_inputs__7__b = 1U;
    __Vtask_tb_full_adder__DOT__apply_inputs__7__a = 1U;
    vlSelfRef.tb_full_adder__DOT__test_number = ((IData)(1U) 
                                                 + vlSelfRef.tb_full_adder__DOT__test_number);
    vlSelfRef.tb_full_adder__DOT__tb_a = __Vtask_tb_full_adder__DOT__apply_inputs__7__a;
    vlSelfRef.tb_full_adder__DOT__tb_b = __Vtask_tb_full_adder__DOT__apply_inputs__7__b;
    vlSelfRef.tb_full_adder__DOT__tb_cin = __Vtask_tb_full_adder__DOT__apply_inputs__7__cin;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/tb_full_adder.sv", 
                                         54);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((((IData)(__Vtask_tb_full_adder__DOT__apply_inputs__7__expected_cout) 
                        << 1U) | (IData)(__Vtask_tb_full_adder__DOT__apply_inputs__7__expected_s)) 
                      != (((IData)(vlSelfRef.tb_full_adder__DOT__tb_cout) 
                           << 1U) | (IData)(vlSelfRef.tb_full_adder__DOT__tb_s)))))) {
        VL_WRITEF_NX("[Time %0t]: Expected %2b, got %2b\n\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,2,(
                                                   ((IData)(__Vtask_tb_full_adder__DOT__apply_inputs__7__expected_cout) 
                                                    << 1U) 
                                                   | (IData)(__Vtask_tb_full_adder__DOT__apply_inputs__7__expected_s)),
                     2,(((IData)(vlSelfRef.tb_full_adder__DOT__tb_cout) 
                         << 1U) | (IData)(vlSelfRef.tb_full_adder__DOT__tb_s)));
    } else {
        vlSelfRef.tb_full_adder__DOT__num_passed = 
            ((IData)(1U) + vlSelfRef.tb_full_adder__DOT__num_passed);
    }
    VL_WRITEF_NX("Passed %0d/%0d tests.\n",0,32,vlSelfRef.tb_full_adder__DOT__num_passed,
                 32,vlSelfRef.tb_full_adder__DOT__test_number);
    VL_FINISH_MT("tb/tb_full_adder.sv", 104, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfull_adder___024root___dump_triggers__act(Vfull_adder___024root* vlSelf);
#endif  // VL_DEBUG

void Vfull_adder___024root___eval_triggers__act(Vfull_adder___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder___024root___eval_triggers__act\n"); );
    Vfull_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfull_adder___024root___dump_triggers__act(vlSelf);
    }
#endif
}
