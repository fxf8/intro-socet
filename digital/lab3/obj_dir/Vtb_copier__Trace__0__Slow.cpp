// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtb_copier__Syms.h"


VL_ATTR_COLD void Vtb_copier___024root__trace_init_sub__TOP__tb_copier__DOT__testif__0(Vtb_copier___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtb_copier___024root__trace_init_sub__TOP__0(Vtb_copier___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root__trace_init_sub__TOP__0\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_copier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+149,0,"CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nRST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"src_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"dst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"copy_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+5,0,"start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"finished",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("testif", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_copier___024root__trace_init_sub__TOP__tb_copier__DOT__testif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+155,0,"NUM_CNT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+149,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"src_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"dst_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"copy_size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+5,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"finished",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("memif", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_copier___024root__trace_init_sub__TOP__tb_copier__DOT__testif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+78,0,"current_state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"next_state",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+79,0,"index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+80,0,"copied_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+81,0,"rollover_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"count_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"clear_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"register_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("counter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+155,0,"NUM_CNT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"n_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"count_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"rollover_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+79,0,"count_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+81,0,"rollover_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"temp_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+11,0,"rollover_flag_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+149,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"WEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+80,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("MEM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+149,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("memif", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_copier___024root__trace_init_sub__TOP__tb_copier__DOT__testif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("testif", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_copier___024root__trace_init_sub__TOP__tb_copier__DOT__testif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declArray(c+85,0,"memory",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->declArray(c+13,0,"memory_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2047,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_copy__Vstatic__unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"expected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"actual",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_copier___024root__trace_init_sub__TOP__tb_copier__DOT__testif__0(Vtb_copier___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root__trace_init_sub__TOP__tb_copier__DOT__testif__0\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+150,0,"wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+154,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vtb_copier___024root__trace_init_top(Vtb_copier___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root__trace_init_top\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_copier___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_copier___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtb_copier___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_copier___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_copier___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtb_copier___024root__trace_register(Vtb_copier___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root__trace_register\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_copier___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_copier___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_copier___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_copier___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_copier___024root__trace_const_0_sub_0(Vtb_copier___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_copier___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root__trace_const_0\n"); );
    // Init
    Vtb_copier___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_copier___024root*>(voidSelf);
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_copier___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_copier___024root__trace_const_0_sub_0(Vtb_copier___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root__trace_const_0_sub_0\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+155,(8U),32);
}

VL_ATTR_COLD void Vtb_copier___024root__trace_full_0_sub_0(Vtb_copier___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_copier___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root__trace_full_0\n"); );
    // Init
    Vtb_copier___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_copier___024root*>(voidSelf);
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_copier___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_copier___024root__trace_full_0_sub_0(Vtb_copier___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_copier___024root__trace_full_0_sub_0\n"); );
    Vtb_copier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb_copier__DOT__nRST));
    bufp->fullCData(oldp+2,(vlSelfRef.tb_copier__DOT__src_addr),8);
    bufp->fullCData(oldp+3,(vlSelfRef.tb_copier__DOT__dst_addr),8);
    bufp->fullCData(oldp+4,(vlSelfRef.tb_copier__DOT__copy_size),8);
    bufp->fullBit(oldp+5,(vlSelfRef.tb_copier__DOT__start));
    bufp->fullCData(oldp+6,((0xffU & ((IData)(vlSelfRef.tb_copier__DOT__copy_size) 
                                      - (IData)(1U)))),8);
    bufp->fullCData(oldp+7,(vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__expected),8);
    bufp->fullCData(oldp+8,(vlSelfRef.tb_copier__DOT__do_copy__Vstatic__unnamedblk2__DOT__actual),8);
    bufp->fullCData(oldp+9,(vlSelfRef.tb_copier__DOT__DUT__DOT__next_state),2);
    bufp->fullCData(oldp+10,(vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__next_state),8);
    bufp->fullBit(oldp+11,(vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__rollover_flag_c));
    bufp->fullCData(oldp+12,(vlSymsp->TOP__tb_copier__DOT__testif.rdata),8);
    bufp->fullWData(oldp+13,(vlSelfRef.tb_copier__DOT__MEM__DOT__memory_n),2048);
    bufp->fullBit(oldp+77,(vlSelfRef.tb_copier__DOT__finished));
    bufp->fullCData(oldp+78,(vlSelfRef.tb_copier__DOT__DUT__DOT__current_state),2);
    bufp->fullCData(oldp+79,(vlSelfRef.tb_copier__DOT__DUT__DOT__counter__DOT__temp_counter),8);
    bufp->fullCData(oldp+80,(vlSelfRef.tb_copier__DOT__DUT__DOT__copied_word),8);
    bufp->fullBit(oldp+81,(vlSelfRef.tb_copier__DOT__DUT__DOT__rollover_flag));
    bufp->fullBit(oldp+82,(vlSelfRef.tb_copier__DOT__DUT__DOT__count_enable));
    bufp->fullBit(oldp+83,(vlSelfRef.tb_copier__DOT__DUT__DOT__clear_counter));
    bufp->fullBit(oldp+84,(vlSelfRef.tb_copier__DOT__DUT__DOT__register_write_enable));
    bufp->fullWData(oldp+85,(vlSelfRef.tb_copier__DOT__MEM__DOT__memory),2048);
    bufp->fullBit(oldp+149,(vlSelfRef.tb_copier__DOT__CLK));
    bufp->fullBit(oldp+150,(vlSymsp->TOP__tb_copier__DOT__testif.wen));
    bufp->fullBit(oldp+151,(vlSymsp->TOP__tb_copier__DOT__testif.ren));
    bufp->fullBit(oldp+152,(vlSymsp->TOP__tb_copier__DOT__testif.ready));
    bufp->fullCData(oldp+153,(vlSymsp->TOP__tb_copier__DOT__testif.addr),8);
    bufp->fullCData(oldp+154,(vlSymsp->TOP__tb_copier__DOT__testif.wdata),8);
}
