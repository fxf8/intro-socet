// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_copier.h for the primary calling header

#include "Vtb_copier__pch.h"
#include "Vtb_copier__Syms.h"
#include "Vtb_copier___024root.h"

VL_ATTR_COLD void Vtb_copier___024root___eval_initial__TOP(Vtb_copier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root___eval_initial__TOP\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__tb_copier__DOT__testif.ready = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_copier___024root___dump_triggers__stl(Vtb_copier___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_copier___024root___eval_triggers__stl(Vtb_copier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root___eval_triggers__stl\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_copier___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*1:0*/, 32> Vtb_copier__ConstPool__TABLE_hb8e92b3a_0;

VL_ATTR_COLD void Vtb_copier___024root___stl_sequent__TOP__0(Vtb_copier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root___stl_sequent__TOP__0\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.tb_copier__DOT__finished = 0U;
    vlSelfRef.tb_copier__DOT__DUT__DOT__register_write_enable = 0U;
    __Vtableidx1 = (((IData)(vlSelfRef.tb_copier__DOT__start) 
                     << 4U) | (((IData)(vlSymsp->TOP__tb_copier__DOT__testif.ready) 
                                << 3U) | (((IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__rollover_flag) 
                                           << 2U) | (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__current_state))));
    vlSelfRef.tb_copier__DOT__DUT__DOT__next_state 
        = Vtb_copier__ConstPool__TABLE_hb8e92b3a_0[__Vtableidx1];
    vlSymsp->TOP__tb_copier__DOT__testif.wen = 0U;
    vlSymsp->TOP__tb_copier__DOT__testif.wdata = 0U;
    vlSelfRef.tb_copier__DOT__DUT__DOT__clear_counter = 0U;
    vlSelfRef.tb_copier__DOT__DUT__DOT__count_enable = 0U;
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
    vlSymsp->TOP__tb_copier__DOT__testif.addr = 0U;
    if ((2U & (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__current_state))) {
        if ((1U & (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__current_state))) {
            vlSelfRef.tb_copier__DOT__finished = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__current_state)))) {
            vlSymsp->TOP__tb_copier__DOT__testif.wen = 1U;
            vlSymsp->TOP__tb_copier__DOT__testif.wdata 
                = vlSelfRef.tb_copier__DOT__DUT__DOT__copied_word;
            vlSelfRef.tb_copier__DOT__DUT__DOT__count_enable = 1U;
            vlSymsp->TOP__tb_copier__DOT__testif.addr 
                = (0xffU & ((IData)(vlSelfRef.tb_copier__DOT__dst_addr) 
                            + (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__temp_counter)));
        }
    } else {
        if ((1U & (~ (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__current_state)))) {
            vlSelfRef.tb_copier__DOT__finished = 0U;
        }
        if ((1U & (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__current_state))) {
            vlSymsp->TOP__tb_copier__DOT__testif.addr 
                = (0xffU & ((IData)(vlSelfRef.tb_copier__DOT__src_addr) 
                            + (IData)(vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__temp_counter)));
        }
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
