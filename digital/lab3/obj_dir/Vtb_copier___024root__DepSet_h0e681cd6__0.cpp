// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_copier.h for the primary calling header

#include "Vtb_copier__pch.h"
#include "Vtb_copier__Syms.h"
#include "Vtb_copier___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_copier___024root___eval_initial__TOP__Vtiming__0(Vtb_copier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_copier__DOT__reset__1__tb_copier__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_copier__DOT__reset__1__tb_copier__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*7:0*/ __Vtask_tb_copier__DOT__initialize_memory__2__src;
    __Vtask_tb_copier__DOT__initialize_memory__2__src = 0;
    CData/*7:0*/ __Vtask_tb_copier__DOT__initialize_memory__2__size;
    __Vtask_tb_copier__DOT__initialize_memory__2__size = 0;
    IData/*31:0*/ __Vtask_tb_copier__DOT__initialize_memory__2__unnamedblk1__DOT__i;
    __Vtask_tb_copier__DOT__initialize_memory__2__unnamedblk1__DOT__i = 0;
    CData/*7:0*/ __Vtask_tb_copier__DOT__do_copy__3__source_address;
    __Vtask_tb_copier__DOT__do_copy__3__source_address = 0;
    CData/*7:0*/ __Vtask_tb_copier__DOT__do_copy__3__destination_address;
    __Vtask_tb_copier__DOT__do_copy__3__destination_address = 0;
    CData/*7:0*/ __Vtask_tb_copier__DOT__do_copy__3__data_size;
    __Vtask_tb_copier__DOT__do_copy__3__data_size = 0;
    IData/*31:0*/ __Vtask_tb_copier__DOT__do_copy__3__unnamedblk2__DOT__unnamedblk3__DOT__i;
    __Vtask_tb_copier__DOT__do_copy__3__unnamedblk2__DOT__unnamedblk3__DOT__i = 0;
    CData/*7:0*/ __Vtask_tb_copier__DOT__do_copy__4__source_address;
    __Vtask_tb_copier__DOT__do_copy__4__source_address = 0;
    CData/*7:0*/ __Vtask_tb_copier__DOT__do_copy__4__destination_address;
    __Vtask_tb_copier__DOT__do_copy__4__destination_address = 0;
    CData/*7:0*/ __Vtask_tb_copier__DOT__do_copy__4__data_size;
    __Vtask_tb_copier__DOT__do_copy__4__data_size = 0;
    IData/*31:0*/ __Vtask_tb_copier__DOT__do_copy__4__unnamedblk2__DOT__unnamedblk3__DOT__i;
    __Vtask_tb_copier__DOT__do_copy__4__unnamedblk2__DOT__unnamedblk3__DOT__i = 0;
    CData/*7:0*/ __Vtask_tb_copier__DOT__do_copy__5__source_address;
    __Vtask_tb_copier__DOT__do_copy__5__source_address = 0;
    CData/*7:0*/ __Vtask_tb_copier__DOT__do_copy__5__destination_address;
    __Vtask_tb_copier__DOT__do_copy__5__destination_address = 0;
    CData/*7:0*/ __Vtask_tb_copier__DOT__do_copy__5__data_size;
    __Vtask_tb_copier__DOT__do_copy__5__data_size = 0;
    IData/*31:0*/ __Vtask_tb_copier__DOT__do_copy__5__unnamedblk2__DOT__unnamedblk3__DOT__i;
    __Vtask_tb_copier__DOT__do_copy__5__unnamedblk2__DOT__unnamedblk3__DOT__i = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e667374U;
    __Vtemp_1[1U] = 0x666f726dU;
    __Vtemp_1[2U] = 0x77617665U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    VL_TIMEFORMAT_IINI(0xfffffff7U, 2U, std::string{" ns"}, 0x14U, vlSymsp->_vm_contextp__);
    vlSelfRef.tb_copier__DOT__src_addr = 0U;
    vlSelfRef.tb_copier__DOT__dst_addr = 0U;
    vlSelfRef.tb_copier__DOT__copy_size = 0U;
    vlSelfRef.tb_copier__DOT__start = 0U;
    vlSymsp->TOP__tb_copier__DOT__testif.wen = 0U;
    vlSymsp->TOP__tb_copier__DOT__testif.ren = 0U;
    vlSymsp->TOP__tb_copier__DOT__testif.wdata = 0U;
    vlSymsp->TOP__tb_copier__DOT__testif.addr = 0U;
    __Vtask_tb_copier__DOT__reset__1__tb_copier__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    vlSelfRef.tb_copier__DOT__nRST = 0U;
    co_await vlSelfRef.__VtrigSched_hfcca6429__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_copier.CLK)", 
                                                         "tb/tb_copier.sv", 
                                                         43);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_copier__DOT__reset__1__tb_copier__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_hfcca6429__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_copier.CLK)", 
                                                         "tb/tb_copier.sv", 
                                                         43);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_copier__DOT__reset__1__tb_copier__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    vlSelfRef.tb_copier__DOT__nRST = 1U;
    co_await vlSelfRef.__VtrigSched_hfcca6429__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_copier.CLK)", 
                                                         "tb/tb_copier.sv", 
                                                         45);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_copier.sv", 
                                         46);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_copier__DOT__initialize_memory__2__size = 8U;
    __Vtask_tb_copier__DOT__initialize_memory__2__src = 0U;
    __Vtask_tb_copier__DOT__initialize_memory__2__unnamedblk1__DOT__i = 0;
    vlSymsp->TOP__tb_copier__DOT__testif.ren = 0U;
    __Vtask_tb_copier__DOT__initialize_memory__2__unnamedblk1__DOT__i = 0U;
    while ((__Vtask_tb_copier__DOT__initialize_memory__2__unnamedblk1__DOT__i 
            < (IData)(__Vtask_tb_copier__DOT__initialize_memory__2__size))) {
        vlSymsp->TOP__tb_copier__DOT__testif.wen = 1U;
        vlSymsp->TOP__tb_copier__DOT__testif.addr = 
            (0xffU & ((IData)(__Vtask_tb_copier__DOT__initialize_memory__2__src) 
                      + __Vtask_tb_copier__DOT__initialize_memory__2__unnamedblk1__DOT__i));
        vlSymsp->TOP__tb_copier__DOT__testif.wdata 
            = (0xffU & VL_RANDOM_I());
        VL_WRITEF_NX("Writing byte data '%x' to address 0x%x\n",0,
                     8,vlSymsp->TOP__tb_copier__DOT__testif.wdata,
                     8,(IData)(vlSymsp->TOP__tb_copier__DOT__testif.addr));
        co_await vlSelfRef.__VtrigSched_hfcca6429__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_copier.CLK)", 
                                                             "tb/tb_copier.sv", 
                                                             84);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_copier.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        while ((1U & (~ (IData)(vlSymsp->TOP__tb_copier__DOT__testif.ready)))) {
            co_await vlSelfRef.__VtrigSched_hfcca6429__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_copier.CLK)", 
                                                                 "tb/tb_copier.sv", 
                                                                 87);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                                 nullptr, 
                                                 "tb/tb_copier.sv", 
                                                 88);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        vlSymsp->TOP__tb_copier__DOT__testif.wen = 0U;
        __Vtask_tb_copier__DOT__initialize_memory__2__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_copier__DOT__initialize_memory__2__unnamedblk1__DOT__i);
    }
    __Vtask_tb_copier__DOT__do_copy__3__data_size = 8U;
    __Vtask_tb_copier__DOT__do_copy__3__destination_address = 0xf0U;
    __Vtask_tb_copier__DOT__do_copy__3__source_address = 0U;
    __Vtask_tb_copier__DOT__do_copy__3__unnamedblk2__DOT__unnamedblk3__DOT__i = 0;
    VL_WRITEF_NX("Copying %3# bytes from src address 0x%x to dst address 0x%x\n",0,
                 8,__Vtask_tb_copier__DOT__do_copy__3__data_size,
                 8,(IData)(__Vtask_tb_copier__DOT__do_copy__3__source_address),
                 8,__Vtask_tb_copier__DOT__do_copy__3__destination_address);
    vlSelfRef.tb_copier__DOT__src_addr = __Vtask_tb_copier__DOT__do_copy__3__source_address;
    vlSelfRef.tb_copier__DOT__dst_addr = __Vtask_tb_copier__DOT__do_copy__3__destination_address;
    vlSelfRef.tb_copier__DOT__copy_size = __Vtask_tb_copier__DOT__do_copy__3__data_size;
    vlSelfRef.tb_copier__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_hfcca6429__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_copier.CLK)", 
                                                         "tb/tb_copier.sv", 
                                                         127);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_copier.sv", 
                                         128);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_copier__DOT__finished)))) {
        co_await vlSelfRef.__VtrigSched_hfcca6429__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_copier.CLK)", 
                                                             "tb/tb_copier.sv", 
                                                             130);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_copier.sv", 
                                             131);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_copier__DOT__do_copy__3__unnamedblk2__DOT__unnamedblk3__DOT__i = 0U;
    while ((__Vtask_tb_copier__DOT__do_copy__3__unnamedblk2__DOT__unnamedblk3__DOT__i 
            < (IData)(__Vtask_tb_copier__DOT__do_copy__3__data_size))) {
        vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__expected 
            = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                       (0xffU 
                                                        & ((IData)(__Vtask_tb_copier__DOT__do_copy__3__source_address) 
                                                           + __Vtask_tb_copier__DOT__do_copy__3__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U)))
                          ? 0U : (vlSelfRef.tb_copier__DOT__MEM__DOT__memory[
                                  (((IData)(7U) + (0x7ffU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   (0xffU 
                                                                    & ((IData)(__Vtask_tb_copier__DOT__do_copy__3__source_address) 
                                                                       + __Vtask_tb_copier__DOT__do_copy__3__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U))) 
                                   >> 5U)] << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  (0xffU 
                                                                   & ((IData)(__Vtask_tb_copier__DOT__do_copy__3__source_address) 
                                                                      + __Vtask_tb_copier__DOT__do_copy__3__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U))))) 
                        | (vlSelfRef.tb_copier__DOT__MEM__DOT__memory[
                           (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                   (0xffU 
                                                    & ((IData)(__Vtask_tb_copier__DOT__do_copy__3__source_address) 
                                                       + __Vtask_tb_copier__DOT__do_copy__3__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U) 
                                     >> 5U))] >> (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  (0xffU 
                                                                   & ((IData)(__Vtask_tb_copier__DOT__do_copy__3__source_address) 
                                                                      + __Vtask_tb_copier__DOT__do_copy__3__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U)))));
        vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__actual 
            = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                       (0xffU 
                                                        & ((IData)(__Vtask_tb_copier__DOT__do_copy__3__destination_address) 
                                                           + __Vtask_tb_copier__DOT__do_copy__3__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U)))
                          ? 0U : (vlSelfRef.tb_copier__DOT__MEM__DOT__memory[
                                  (((IData)(7U) + (0x7ffU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   (0xffU 
                                                                    & ((IData)(__Vtask_tb_copier__DOT__do_copy__3__destination_address) 
                                                                       + __Vtask_tb_copier__DOT__do_copy__3__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U))) 
                                   >> 5U)] << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  (0xffU 
                                                                   & ((IData)(__Vtask_tb_copier__DOT__do_copy__3__destination_address) 
                                                                      + __Vtask_tb_copier__DOT__do_copy__3__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U))))) 
                        | (vlSelfRef.tb_copier__DOT__MEM__DOT__memory[
                           (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                   (0xffU 
                                                    & ((IData)(__Vtask_tb_copier__DOT__do_copy__3__destination_address) 
                                                       + __Vtask_tb_copier__DOT__do_copy__3__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U) 
                                     >> 5U))] >> (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  (0xffU 
                                                                   & ((IData)(__Vtask_tb_copier__DOT__do_copy__3__destination_address) 
                                                                      + __Vtask_tb_copier__DOT__do_copy__3__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U)))));
        if (VL_LIKELY((((IData)(vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__expected) 
                        == (IData)(vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__actual))))) {
            VL_WRITEF_NX("Passed, byte data '%x' at src address 0x%x matches byte data '%x' at dst address 0x%x\n",0,
                         8,vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__expected,
                         8,(0xffU & ((IData)(__Vtask_tb_copier__DOT__do_copy__3__source_address) 
                                     + __Vtask_tb_copier__DOT__do_copy__3__unnamedblk2__DOT__unnamedblk3__DOT__i)),
                         8,(IData)(vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__actual),
                         8,(0xffU & ((IData)(__Vtask_tb_copier__DOT__do_copy__3__destination_address) 
                                     + __Vtask_tb_copier__DOT__do_copy__3__unnamedblk2__DOT__unnamedblk3__DOT__i)));
        } else {
            VL_WRITEF_NX("[%0t] %%Error: tb_copier.sv:143: Assertion failed in %Ntb_copier.do_copy.unnamedblk2.unnamedblk3: Failed, byte data '%x' at src address 0x%x does not match byte data '%x' at dst address 0x%x\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__expected),
                         8,(0xffU & ((IData)(__Vtask_tb_copier__DOT__do_copy__3__source_address) 
                                     + __Vtask_tb_copier__DOT__do_copy__3__unnamedblk2__DOT__unnamedblk3__DOT__i)),
                         8,(IData)(vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__actual),
                         8,(0xffU & ((IData)(__Vtask_tb_copier__DOT__do_copy__3__destination_address) 
                                     + __Vtask_tb_copier__DOT__do_copy__3__unnamedblk2__DOT__unnamedblk3__DOT__i)));
            VL_STOP_MT("tb/tb_copier.sv", 143, "");
        }
        __Vtask_tb_copier__DOT__do_copy__3__unnamedblk2__DOT__unnamedblk3__DOT__i 
            = ((IData)(1U) + __Vtask_tb_copier__DOT__do_copy__3__unnamedblk2__DOT__unnamedblk3__DOT__i);
    }
    __Vtask_tb_copier__DOT__do_copy__4__data_size = 0xfU;
    __Vtask_tb_copier__DOT__do_copy__4__destination_address = 0xc0U;
    __Vtask_tb_copier__DOT__do_copy__4__source_address = 0xa0U;
    __Vtask_tb_copier__DOT__do_copy__4__unnamedblk2__DOT__unnamedblk3__DOT__i = 0;
    VL_WRITEF_NX("Copying %3# bytes from src address 0x%x to dst address 0x%x\n",0,
                 8,__Vtask_tb_copier__DOT__do_copy__4__data_size,
                 8,(IData)(__Vtask_tb_copier__DOT__do_copy__4__source_address),
                 8,__Vtask_tb_copier__DOT__do_copy__4__destination_address);
    vlSelfRef.tb_copier__DOT__src_addr = __Vtask_tb_copier__DOT__do_copy__4__source_address;
    vlSelfRef.tb_copier__DOT__dst_addr = __Vtask_tb_copier__DOT__do_copy__4__destination_address;
    vlSelfRef.tb_copier__DOT__copy_size = __Vtask_tb_copier__DOT__do_copy__4__data_size;
    vlSelfRef.tb_copier__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_hfcca6429__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_copier.CLK)", 
                                                         "tb/tb_copier.sv", 
                                                         127);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_copier.sv", 
                                         128);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_copier__DOT__finished)))) {
        co_await vlSelfRef.__VtrigSched_hfcca6429__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_copier.CLK)", 
                                                             "tb/tb_copier.sv", 
                                                             130);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_copier.sv", 
                                             131);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_copier__DOT__do_copy__4__unnamedblk2__DOT__unnamedblk3__DOT__i = 0U;
    while ((__Vtask_tb_copier__DOT__do_copy__4__unnamedblk2__DOT__unnamedblk3__DOT__i 
            < (IData)(__Vtask_tb_copier__DOT__do_copy__4__data_size))) {
        vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__expected 
            = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                       (0xffU 
                                                        & ((IData)(__Vtask_tb_copier__DOT__do_copy__4__source_address) 
                                                           + __Vtask_tb_copier__DOT__do_copy__4__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U)))
                          ? 0U : (vlSelfRef.tb_copier__DOT__MEM__DOT__memory[
                                  (((IData)(7U) + (0x7ffU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   (0xffU 
                                                                    & ((IData)(__Vtask_tb_copier__DOT__do_copy__4__source_address) 
                                                                       + __Vtask_tb_copier__DOT__do_copy__4__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U))) 
                                   >> 5U)] << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  (0xffU 
                                                                   & ((IData)(__Vtask_tb_copier__DOT__do_copy__4__source_address) 
                                                                      + __Vtask_tb_copier__DOT__do_copy__4__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U))))) 
                        | (vlSelfRef.tb_copier__DOT__MEM__DOT__memory[
                           (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                   (0xffU 
                                                    & ((IData)(__Vtask_tb_copier__DOT__do_copy__4__source_address) 
                                                       + __Vtask_tb_copier__DOT__do_copy__4__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U) 
                                     >> 5U))] >> (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  (0xffU 
                                                                   & ((IData)(__Vtask_tb_copier__DOT__do_copy__4__source_address) 
                                                                      + __Vtask_tb_copier__DOT__do_copy__4__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U)))));
        vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__actual 
            = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                       (0xffU 
                                                        & ((IData)(__Vtask_tb_copier__DOT__do_copy__4__destination_address) 
                                                           + __Vtask_tb_copier__DOT__do_copy__4__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U)))
                          ? 0U : (vlSelfRef.tb_copier__DOT__MEM__DOT__memory[
                                  (((IData)(7U) + (0x7ffU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   (0xffU 
                                                                    & ((IData)(__Vtask_tb_copier__DOT__do_copy__4__destination_address) 
                                                                       + __Vtask_tb_copier__DOT__do_copy__4__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U))) 
                                   >> 5U)] << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  (0xffU 
                                                                   & ((IData)(__Vtask_tb_copier__DOT__do_copy__4__destination_address) 
                                                                      + __Vtask_tb_copier__DOT__do_copy__4__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U))))) 
                        | (vlSelfRef.tb_copier__DOT__MEM__DOT__memory[
                           (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                   (0xffU 
                                                    & ((IData)(__Vtask_tb_copier__DOT__do_copy__4__destination_address) 
                                                       + __Vtask_tb_copier__DOT__do_copy__4__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U) 
                                     >> 5U))] >> (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  (0xffU 
                                                                   & ((IData)(__Vtask_tb_copier__DOT__do_copy__4__destination_address) 
                                                                      + __Vtask_tb_copier__DOT__do_copy__4__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U)))));
        if (VL_LIKELY((((IData)(vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__expected) 
                        == (IData)(vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__actual))))) {
            VL_WRITEF_NX("Passed, byte data '%x' at src address 0x%x matches byte data '%x' at dst address 0x%x\n",0,
                         8,vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__expected,
                         8,(0xffU & ((IData)(__Vtask_tb_copier__DOT__do_copy__4__source_address) 
                                     + __Vtask_tb_copier__DOT__do_copy__4__unnamedblk2__DOT__unnamedblk3__DOT__i)),
                         8,(IData)(vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__actual),
                         8,(0xffU & ((IData)(__Vtask_tb_copier__DOT__do_copy__4__destination_address) 
                                     + __Vtask_tb_copier__DOT__do_copy__4__unnamedblk2__DOT__unnamedblk3__DOT__i)));
        } else {
            VL_WRITEF_NX("[%0t] %%Error: tb_copier.sv:143: Assertion failed in %Ntb_copier.do_copy.unnamedblk2.unnamedblk3: Failed, byte data '%x' at src address 0x%x does not match byte data '%x' at dst address 0x%x\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__expected),
                         8,(0xffU & ((IData)(__Vtask_tb_copier__DOT__do_copy__4__source_address) 
                                     + __Vtask_tb_copier__DOT__do_copy__4__unnamedblk2__DOT__unnamedblk3__DOT__i)),
                         8,(IData)(vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__actual),
                         8,(0xffU & ((IData)(__Vtask_tb_copier__DOT__do_copy__4__destination_address) 
                                     + __Vtask_tb_copier__DOT__do_copy__4__unnamedblk2__DOT__unnamedblk3__DOT__i)));
            VL_STOP_MT("tb/tb_copier.sv", 143, "");
        }
        __Vtask_tb_copier__DOT__do_copy__4__unnamedblk2__DOT__unnamedblk3__DOT__i 
            = ((IData)(1U) + __Vtask_tb_copier__DOT__do_copy__4__unnamedblk2__DOT__unnamedblk3__DOT__i);
    }
    __Vtask_tb_copier__DOT__do_copy__5__data_size = 8U;
    __Vtask_tb_copier__DOT__do_copy__5__destination_address = 0xd8U;
    __Vtask_tb_copier__DOT__do_copy__5__source_address = 0xd0U;
    __Vtask_tb_copier__DOT__do_copy__5__unnamedblk2__DOT__unnamedblk3__DOT__i = 0;
    VL_WRITEF_NX("Copying %3# bytes from src address 0x%x to dst address 0x%x\n",0,
                 8,__Vtask_tb_copier__DOT__do_copy__5__data_size,
                 8,(IData)(__Vtask_tb_copier__DOT__do_copy__5__source_address),
                 8,__Vtask_tb_copier__DOT__do_copy__5__destination_address);
    vlSelfRef.tb_copier__DOT__src_addr = __Vtask_tb_copier__DOT__do_copy__5__source_address;
    vlSelfRef.tb_copier__DOT__dst_addr = __Vtask_tb_copier__DOT__do_copy__5__destination_address;
    vlSelfRef.tb_copier__DOT__copy_size = __Vtask_tb_copier__DOT__do_copy__5__data_size;
    vlSelfRef.tb_copier__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_hfcca6429__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_copier.CLK)", 
                                                         "tb/tb_copier.sv", 
                                                         127);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_copier.sv", 
                                         128);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_copier__DOT__finished)))) {
        co_await vlSelfRef.__VtrigSched_hfcca6429__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_copier.CLK)", 
                                                             "tb/tb_copier.sv", 
                                                             130);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_copier.sv", 
                                             131);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_copier__DOT__do_copy__5__unnamedblk2__DOT__unnamedblk3__DOT__i = 0U;
    while ((__Vtask_tb_copier__DOT__do_copy__5__unnamedblk2__DOT__unnamedblk3__DOT__i 
            < (IData)(__Vtask_tb_copier__DOT__do_copy__5__data_size))) {
        vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__expected 
            = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                       (0xffU 
                                                        & ((IData)(__Vtask_tb_copier__DOT__do_copy__5__source_address) 
                                                           + __Vtask_tb_copier__DOT__do_copy__5__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U)))
                          ? 0U : (vlSelfRef.tb_copier__DOT__MEM__DOT__memory[
                                  (((IData)(7U) + (0x7ffU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   (0xffU 
                                                                    & ((IData)(__Vtask_tb_copier__DOT__do_copy__5__source_address) 
                                                                       + __Vtask_tb_copier__DOT__do_copy__5__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U))) 
                                   >> 5U)] << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  (0xffU 
                                                                   & ((IData)(__Vtask_tb_copier__DOT__do_copy__5__source_address) 
                                                                      + __Vtask_tb_copier__DOT__do_copy__5__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U))))) 
                        | (vlSelfRef.tb_copier__DOT__MEM__DOT__memory[
                           (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                   (0xffU 
                                                    & ((IData)(__Vtask_tb_copier__DOT__do_copy__5__source_address) 
                                                       + __Vtask_tb_copier__DOT__do_copy__5__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U) 
                                     >> 5U))] >> (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  (0xffU 
                                                                   & ((IData)(__Vtask_tb_copier__DOT__do_copy__5__source_address) 
                                                                      + __Vtask_tb_copier__DOT__do_copy__5__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U)))));
        vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__actual 
            = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                       (0xffU 
                                                        & ((IData)(__Vtask_tb_copier__DOT__do_copy__5__destination_address) 
                                                           + __Vtask_tb_copier__DOT__do_copy__5__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U)))
                          ? 0U : (vlSelfRef.tb_copier__DOT__MEM__DOT__memory[
                                  (((IData)(7U) + (0x7ffU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   (0xffU 
                                                                    & ((IData)(__Vtask_tb_copier__DOT__do_copy__5__destination_address) 
                                                                       + __Vtask_tb_copier__DOT__do_copy__5__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U))) 
                                   >> 5U)] << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  (0xffU 
                                                                   & ((IData)(__Vtask_tb_copier__DOT__do_copy__5__destination_address) 
                                                                      + __Vtask_tb_copier__DOT__do_copy__5__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U))))) 
                        | (vlSelfRef.tb_copier__DOT__MEM__DOT__memory[
                           (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                   (0xffU 
                                                    & ((IData)(__Vtask_tb_copier__DOT__do_copy__5__destination_address) 
                                                       + __Vtask_tb_copier__DOT__do_copy__5__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U) 
                                     >> 5U))] >> (0x1fU 
                                                  & VL_SHIFTL_III(11,32,32, 
                                                                  (0xffU 
                                                                   & ((IData)(__Vtask_tb_copier__DOT__do_copy__5__destination_address) 
                                                                      + __Vtask_tb_copier__DOT__do_copy__5__unnamedblk2__DOT__unnamedblk3__DOT__i)), 3U)))));
        if (VL_LIKELY((((IData)(vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__expected) 
                        == (IData)(vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__actual))))) {
            VL_WRITEF_NX("Passed, byte data '%x' at src address 0x%x matches byte data '%x' at dst address 0x%x\n",0,
                         8,vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__expected,
                         8,(0xffU & ((IData)(__Vtask_tb_copier__DOT__do_copy__5__source_address) 
                                     + __Vtask_tb_copier__DOT__do_copy__5__unnamedblk2__DOT__unnamedblk3__DOT__i)),
                         8,(IData)(vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__actual),
                         8,(0xffU & ((IData)(__Vtask_tb_copier__DOT__do_copy__5__destination_address) 
                                     + __Vtask_tb_copier__DOT__do_copy__5__unnamedblk2__DOT__unnamedblk3__DOT__i)));
        } else {
            VL_WRITEF_NX("[%0t] %%Error: tb_copier.sv:143: Assertion failed in %Ntb_copier.do_copy.unnamedblk2.unnamedblk3: Failed, byte data '%x' at src address 0x%x does not match byte data '%x' at dst address 0x%x\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__expected),
                         8,(0xffU & ((IData)(__Vtask_tb_copier__DOT__do_copy__5__source_address) 
                                     + __Vtask_tb_copier__DOT__do_copy__5__unnamedblk2__DOT__unnamedblk3__DOT__i)),
                         8,(IData)(vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__actual),
                         8,(0xffU & ((IData)(__Vtask_tb_copier__DOT__do_copy__5__destination_address) 
                                     + __Vtask_tb_copier__DOT__do_copy__5__unnamedblk2__DOT__unnamedblk3__DOT__i)));
            VL_STOP_MT("tb/tb_copier.sv", 143, "");
        }
        __Vtask_tb_copier__DOT__do_copy__5__unnamedblk2__DOT__unnamedblk3__DOT__i 
            = ((IData)(1U) + __Vtask_tb_copier__DOT__do_copy__5__unnamedblk2__DOT__unnamedblk3__DOT__i);
    }
    VL_FINISH_MT("tb/tb_copier.sv", 170, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_copier___024root___dump_triggers__act(Vtb_copier___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_copier___024root___eval_triggers__act(Vtb_copier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root___eval_triggers__act\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_copier__DOT__CLK) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_copier__DOT__CLK__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_copier__DOT__nRST)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_copier__DOT__nRST__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_copier__DOT__CLK__0 
        = vlSelfRef.tb_copier__DOT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_copier__DOT__nRST__0 
        = vlSelfRef.tb_copier__DOT__nRST;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_copier___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*1:0*/, 32> Vtb_copier__ConstPool__TABLE_hb8e92b3a_0;

VL_INLINE_OPT void Vtb_copier___024root___act_comb__TOP__0(Vtb_copier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root___act_comb__TOP__0\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__next_state 
        = ((IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__clear_counter)
            ? 0U : (0xffU & ((IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__count_enable)
                              ? (((IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__temp_counter) 
                                  == (0xffU & ((IData)(vlSelfRef.tb_copier__DOT__copy_size) 
                                               - (IData)(1U))))
                                  ? 1U : ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__temp_counter)))
                              : (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__temp_counter))));
    vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__rollover_flag_c 
        = ((IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__next_state) 
           == (0xffU & ((IData)(vlSelfRef.tb_copier__DOT__copy_size) 
                        - (IData)(1U))));
    __Vtableidx1 = (((IData)(vlSelfRef.tb_copier__DOT__start) 
                     << 4U) | (((IData)(vlSymsp->TOP__tb_copier__DOT__testif.ready) 
                                << 3U) | (((IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__rollover_flag) 
                                           << 2U) | (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__current_state))));
    vlSelfRef.tb_copier__DOT__DUT__DOT__next_state 
        = Vtb_copier__ConstPool__TABLE_hb8e92b3a_0[__Vtableidx1];
    vlSymsp->TOP__tb_copier__DOT__testif.addr = 0U;
    if ((2U & (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__current_state))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__current_state)))) {
            vlSymsp->TOP__tb_copier__DOT__testif.addr 
                = (0xffU & ((IData)(vlSelfRef.tb_copier__DOT__dst_addr) 
                            + (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__temp_counter)));
        }
    } else if ((1U & (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__current_state))) {
        vlSymsp->TOP__tb_copier__DOT__testif.addr = 
            (0xffU & ((IData)(vlSelfRef.tb_copier__DOT__src_addr) 
                      + (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__temp_counter)));
    }
    vlSymsp->TOP__tb_copier__DOT__testif.rdata = ((IData)(vlSymsp->TOP__tb_copier__DOT__testif.ren)
                                                   ? 
                                                  (0xffU 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, (IData)(vlSymsp->TOP__tb_copier__DOT__testif.addr), 3U)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.tb_copier__DOT__MEM__DOT__memory[
                                                        (((IData)(7U) 
                                                          + 
                                                          (0x7ffU 
                                                           & VL_SHIFTL_III(11,32,32, (IData)(vlSymsp->TOP__tb_copier__DOT__testif.addr), 3U))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(11,32,32, (IData)(vlSymsp->TOP__tb_copier__DOT__testif.addr), 3U))))) 
                                                      | (vlSelfRef.tb_copier__DOT__MEM__DOT__memory[
                                                         (0x3fU 
                                                          & (VL_SHIFTL_III(11,32,32, (IData)(vlSymsp->TOP__tb_copier__DOT__testif.addr), 3U) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(11,32,32, (IData)(vlSymsp->TOP__tb_copier__DOT__testif.addr), 3U)))))
                                                   : 0xffU);
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x3fU)) {
        vlSelfRef.tb_copier__DOT__MEM__DOT__memory_n[__Vilp1] 
            = vlSelfRef.tb_copier__DOT__MEM__DOT__memory[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    if (vlSymsp->TOP__tb_copier__DOT__testif.wen) {
        VL_ASSIGNSEL_WI(2048,8,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSymsp->TOP__tb_copier__DOT__testif.addr), 3U)), vlSelfRef.tb_copier__DOT__MEM__DOT__memory_n, vlSymsp->TOP__tb_copier__DOT__testif.wdata);
    } else if (vlSymsp->TOP__tb_copier__DOT__testif.wen) {
        VL_ASSIGNSEL_WI(2048,8,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSymsp->TOP__tb_copier__DOT__testif.addr), 3U)), vlSelfRef.tb_copier__DOT__MEM__DOT__memory_n, vlSymsp->TOP__tb_copier__DOT__testif.wdata);
    }
}

extern const VlWide<64>/*2047:0*/ Vtb_copier__ConstPool__CONST_h6be9aa18_0;

VL_INLINE_OPT void Vtb_copier___024root___nba_sequent__TOP__0(Vtb_copier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root___nba_sequent__TOP__0\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_copier__DOT__nRST) {
        vlSelfRef.tb_copier__DOT__DUT__DOT__copied_word 
            = ((IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__register_write_enable)
                ? (IData)(vlSymsp->TOP__tb_copier__DOT__testif.rdata)
                : (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__copied_word));
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.tb_copier__DOT__MEM__DOT__memory[__Vilp1] 
                = vlSelfRef.tb_copier__DOT__MEM__DOT__memory_n[__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__temp_counter 
            = vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__next_state;
        vlSelfRef.tb_copier__DOT__DUT__DOT__current_state 
            = vlSelfRef.tb_copier__DOT__DUT__DOT__next_state;
    } else {
        vlSelfRef.tb_copier__DOT__DUT__DOT__copied_word = 0U;
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.tb_copier__DOT__MEM__DOT__memory[__Vilp2] 
                = Vtb_copier__ConstPool__CONST_h6be9aa18_0[__Vilp2];
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__temp_counter = 0U;
        vlSelfRef.tb_copier__DOT__DUT__DOT__current_state = 0U;
    }
    vlSelfRef.tb_copier__DOT__DUT__DOT__rollover_flag 
        = ((IData)(vlSelfRef.tb_copier__DOT__nRST) 
           && (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__rollover_flag_c));
    vlSelfRef.tb_copier__DOT__finished = 0U;
    vlSelfRef.tb_copier__DOT__DUT__DOT__register_write_enable = 0U;
    vlSymsp->TOP__tb_copier__DOT__testif.wen = 0U;
    vlSymsp->TOP__tb_copier__DOT__testif.wdata = 0U;
    vlSelfRef.tb_copier__DOT__DUT__DOT__clear_counter = 0U;
    vlSelfRef.tb_copier__DOT__DUT__DOT__count_enable = 0U;
    if ((2U & (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__current_state))) {
        if ((1U & (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__current_state))) {
            vlSelfRef.tb_copier__DOT__finished = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__current_state)))) {
            vlSymsp->TOP__tb_copier__DOT__testif.wen = 1U;
            vlSymsp->TOP__tb_copier__DOT__testif.wdata 
                = vlSelfRef.tb_copier__DOT__DUT__DOT__copied_word;
            vlSelfRef.tb_copier__DOT__DUT__DOT__count_enable = 1U;
        }
    } else if ((1U & (~ (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__current_state)))) {
        vlSelfRef.tb_copier__DOT__finished = 0U;
    }
    vlSymsp->TOP__tb_copier__DOT__testif.ren = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__current_state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__current_state))) {
            vlSelfRef.tb_copier__DOT__DUT__DOT__register_write_enable = 1U;
            vlSymsp->TOP__tb_copier__DOT__testif.ren = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__current_state)))) {
            vlSelfRef.tb_copier__DOT__DUT__DOT__clear_counter = 1U;
        }
    }
}

VL_INLINE_OPT void Vtb_copier___024root___nba_comb__TOP__0(Vtb_copier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root___nba_comb__TOP__0\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.tb_copier__DOT__start) 
                     << 4U) | (((IData)(vlSymsp->TOP__tb_copier__DOT__testif.ready) 
                                << 3U) | (((IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__rollover_flag) 
                                           << 2U) | (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__current_state))));
    vlSelfRef.tb_copier__DOT__DUT__DOT__next_state 
        = Vtb_copier__ConstPool__TABLE_hb8e92b3a_0[__Vtableidx1];
    vlSymsp->TOP__tb_copier__DOT__testif.addr = 0U;
    if ((2U & (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__current_state))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__current_state)))) {
            vlSymsp->TOP__tb_copier__DOT__testif.addr 
                = (0xffU & ((IData)(vlSelfRef.tb_copier__DOT__dst_addr) 
                            + (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__temp_counter)));
        }
    } else if ((1U & (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__current_state))) {
        vlSymsp->TOP__tb_copier__DOT__testif.addr = 
            (0xffU & ((IData)(vlSelfRef.tb_copier__DOT__src_addr) 
                      + (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__temp_counter)));
    }
    vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__next_state 
        = ((IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__clear_counter)
            ? 0U : (0xffU & ((IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__count_enable)
                              ? (((IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__temp_counter) 
                                  == (0xffU & ((IData)(vlSelfRef.tb_copier__DOT__copy_size) 
                                               - (IData)(1U))))
                                  ? 1U : ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__temp_counter)))
                              : (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__temp_counter))));
    vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__rollover_flag_c 
        = ((IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__next_state) 
           == (0xffU & ((IData)(vlSelfRef.tb_copier__DOT__copy_size) 
                        - (IData)(1U))));
    vlSymsp->TOP__tb_copier__DOT__testif.rdata = ((IData)(vlSymsp->TOP__tb_copier__DOT__testif.ren)
                                                   ? 
                                                  (0xffU 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, (IData)(vlSymsp->TOP__tb_copier__DOT__testif.addr), 3U)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.tb_copier__DOT__MEM__DOT__memory[
                                                        (((IData)(7U) 
                                                          + 
                                                          (0x7ffU 
                                                           & VL_SHIFTL_III(11,32,32, (IData)(vlSymsp->TOP__tb_copier__DOT__testif.addr), 3U))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(11,32,32, (IData)(vlSymsp->TOP__tb_copier__DOT__testif.addr), 3U))))) 
                                                      | (vlSelfRef.tb_copier__DOT__MEM__DOT__memory[
                                                         (0x3fU 
                                                          & (VL_SHIFTL_III(11,32,32, (IData)(vlSymsp->TOP__tb_copier__DOT__testif.addr), 3U) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(11,32,32, (IData)(vlSymsp->TOP__tb_copier__DOT__testif.addr), 3U)))))
                                                   : 0xffU);
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x3fU)) {
        vlSelfRef.tb_copier__DOT__MEM__DOT__memory_n[__Vilp1] 
            = vlSelfRef.tb_copier__DOT__MEM__DOT__memory[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    if (vlSymsp->TOP__tb_copier__DOT__testif.wen) {
        VL_ASSIGNSEL_WI(2048,8,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSymsp->TOP__tb_copier__DOT__testif.addr), 3U)), vlSelfRef.tb_copier__DOT__MEM__DOT__memory_n, vlSymsp->TOP__tb_copier__DOT__testif.wdata);
    } else if (vlSymsp->TOP__tb_copier__DOT__testif.wen) {
        VL_ASSIGNSEL_WI(2048,8,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSymsp->TOP__tb_copier__DOT__testif.addr), 3U)), vlSelfRef.tb_copier__DOT__MEM__DOT__memory_n, vlSymsp->TOP__tb_copier__DOT__testif.wdata);
    }
}
