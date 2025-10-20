// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtb_copier__Syms.h"


void Vtb_copier___024root__trace_chg_0_sub_0(Vtb_copier___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtb_copier___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root__trace_chg_0\n"); );
    // Init
    Vtb_copier___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_copier___024root*>(voidSelf);
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_copier___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_copier___024root__trace_chg_0_sub_0(Vtb_copier___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root__trace_chg_0_sub_0\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_copier__DOT__nRST));
        bufp->chgCData(oldp+1,(vlSelfRef.tb_copier__DOT__src_addr),8);
        bufp->chgCData(oldp+2,(vlSelfRef.tb_copier__DOT__dst_addr),8);
        bufp->chgCData(oldp+3,(vlSelfRef.tb_copier__DOT__copy_size),8);
        bufp->chgBit(oldp+4,(vlSelfRef.tb_copier__DOT__start));
        bufp->chgCData(oldp+5,((0xffU & ((IData)(vlSelfRef.tb_copier__DOT__copy_size) 
                                         - (IData)(1U)))),8);
        bufp->chgCData(oldp+6,(vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__expected),8);
        bufp->chgCData(oldp+7,(vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__actual),8);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgCData(oldp+8,(vlSelfRef.tb_copier__DOT__DUT__DOT__next_state),2);
        bufp->chgCData(oldp+9,(vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__next_state),8);
        bufp->chgBit(oldp+10,(vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__rollover_flag_c));
        bufp->chgCData(oldp+11,(vlSymsp->TOP__tb_copier__DOT__testif.rdata),8);
        bufp->chgWData(oldp+12,(vlSelfRef.tb_copier__DOT__MEM__DOT__memory_n),2048);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+76,(vlSelfRef.tb_copier__DOT__finished));
        bufp->chgCData(oldp+77,(vlSelfRef.tb_copier__DOT__DUT__DOT__current_state),2);
        bufp->chgCData(oldp+78,(vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__temp_counter),8);
        bufp->chgCData(oldp+79,(vlSelfRef.tb_copier__DOT__DUT__DOT__copied_word),8);
        bufp->chgBit(oldp+80,(vlSelfRef.tb_copier__DOT__DUT__DOT__rollover_flag));
        bufp->chgBit(oldp+81,(vlSelfRef.tb_copier__DOT__DUT__DOT__count_enable));
        bufp->chgBit(oldp+82,(vlSelfRef.tb_copier__DOT__DUT__DOT__clear_counter));
        bufp->chgBit(oldp+83,(vlSelfRef.tb_copier__DOT__DUT__DOT__register_write_enable));
        bufp->chgWData(oldp+84,(vlSelfRef.tb_copier__DOT__MEM__DOT__memory),2048);
    }
    bufp->chgBit(oldp+148,(vlSelfRef.tb_copier__DOT__CLK));
    bufp->chgBit(oldp+149,(vlSymsp->TOP__tb_copier__DOT__testif.wen));
    bufp->chgBit(oldp+150,(vlSymsp->TOP__tb_copier__DOT__testif.ren));
    bufp->chgBit(oldp+151,(vlSymsp->TOP__tb_copier__DOT__testif.ready));
    bufp->chgCData(oldp+152,(vlSymsp->TOP__tb_copier__DOT__testif.addr),8);
    bufp->chgCData(oldp+153,(vlSymsp->TOP__tb_copier__DOT__testif.wdata),8);
}

void Vtb_copier___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root__trace_cleanup\n"); );
    // Init
    Vtb_copier___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_copier___024root*>(voidSelf);
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
