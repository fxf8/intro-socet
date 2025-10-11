// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtb_eight_bit_adder__Syms.h"


VL_ATTR_COLD void Vtb_eight_bit_adder___024root__trace_init_sub__TOP__0(Vtb_eight_bit_adder___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_eight_bit_adder___024root__trace_init_sub__TOP__0\n"); );
    Vtb_eight_bit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_eight_bit_adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+43,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+3,0,"num_passed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+4,0,"num_tests",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,0,"c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+35,0,"carries",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("gen_full_adder_loop[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_first_iteration", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+5,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_full_adder_loop[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_default_iteration", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+8,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_full_adder_loop[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_default_iteration", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+10,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_full_adder_loop[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_default_iteration", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+12,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_full_adder_loop[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_default_iteration", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+14,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_full_adder_loop[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_default_iteration", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+16,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_full_adder_loop[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_default_iteration", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+18,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_full_adder_loop[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_last_iteration", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+20,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+22,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+23,0,"in_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+24,0,"in_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+25,0,"expected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+45,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_eight_bit_adder___024root__trace_init_top(Vtb_eight_bit_adder___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_eight_bit_adder___024root__trace_init_top\n"); );
    Vtb_eight_bit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_eight_bit_adder___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_eight_bit_adder___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtb_eight_bit_adder___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_eight_bit_adder___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_eight_bit_adder___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtb_eight_bit_adder___024root__trace_register(Vtb_eight_bit_adder___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_eight_bit_adder___024root__trace_register\n"); );
    Vtb_eight_bit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_eight_bit_adder___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_eight_bit_adder___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_eight_bit_adder___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_eight_bit_adder___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_eight_bit_adder___024root__trace_const_0_sub_0(Vtb_eight_bit_adder___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_eight_bit_adder___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_eight_bit_adder___024root__trace_const_0\n"); );
    // Init
    Vtb_eight_bit_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_eight_bit_adder___024root*>(voidSelf);
    Vtb_eight_bit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_eight_bit_adder___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_eight_bit_adder___024root__trace_const_0_sub_0(Vtb_eight_bit_adder___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_eight_bit_adder___024root__trace_const_0_sub_0\n"); );
    Vtb_eight_bit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+43,(0xaU),32);
    bufp->fullBit(oldp+44,(0U));
    bufp->fullIData(oldp+45,(vlSelfRef.tb_eight_bit_adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__result),32);
}

VL_ATTR_COLD void Vtb_eight_bit_adder___024root__trace_full_0_sub_0(Vtb_eight_bit_adder___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_eight_bit_adder___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_eight_bit_adder___024root__trace_full_0\n"); );
    // Init
    Vtb_eight_bit_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_eight_bit_adder___024root*>(voidSelf);
    Vtb_eight_bit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_eight_bit_adder___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_eight_bit_adder___024root__trace_full_0_sub_0(Vtb_eight_bit_adder___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_eight_bit_adder___024root__trace_full_0_sub_0\n"); );
    Vtb_eight_bit_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.tb_eight_bit_adder__DOT__a),8);
    bufp->fullCData(oldp+2,(vlSelfRef.tb_eight_bit_adder__DOT__b),8);
    bufp->fullIData(oldp+3,(vlSelfRef.tb_eight_bit_adder__DOT__num_passed),32);
    bufp->fullIData(oldp+4,(vlSelfRef.tb_eight_bit_adder__DOT__num_tests),32);
    bufp->fullBit(oldp+5,((1U & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__a))));
    bufp->fullBit(oldp+6,((1U & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__b))));
    bufp->fullBit(oldp+7,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                 ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__b)))));
    bufp->fullBit(oldp+8,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                 >> 1U))));
    bufp->fullBit(oldp+9,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                 >> 1U))));
    bufp->fullBit(oldp+10,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                  >> 2U))));
    bufp->fullBit(oldp+11,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                  >> 2U))));
    bufp->fullBit(oldp+12,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                  >> 3U))));
    bufp->fullBit(oldp+13,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                  >> 3U))));
    bufp->fullBit(oldp+14,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                  >> 4U))));
    bufp->fullBit(oldp+15,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                  >> 4U))));
    bufp->fullBit(oldp+16,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                  >> 5U))));
    bufp->fullBit(oldp+17,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                  >> 5U))));
    bufp->fullBit(oldp+18,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                  >> 6U))));
    bufp->fullBit(oldp+19,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                  >> 6U))));
    bufp->fullBit(oldp+20,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                  >> 7U))));
    bufp->fullBit(oldp+21,((1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                  >> 7U))));
    bufp->fullIData(oldp+22,(vlSelfRef.tb_eight_bit_adder__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+23,(vlSelfRef.tb_eight_bit_adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__in_a),32);
    bufp->fullIData(oldp+24,(vlSelfRef.tb_eight_bit_adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__in_b),32);
    bufp->fullIData(oldp+25,(vlSelfRef.tb_eight_bit_adder__DOT__unnamedblk1__DOT__unnamedblk2__DOT__expected),32);
    bufp->fullSData(oldp+26,(((((0x100U & ((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
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
                                               ^ ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__cout) 
                                                  << 5U)))) 
                                  | (0x10U & ((0xfffffff0U 
                                               & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__a)) 
                                              ^ ((0xfffffff0U 
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
                                              ^ ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__cout) 
                                                 << 2U))))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__a)) 
                                           ^ ((0xfffffffeU 
                                               & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__b)) 
                                              ^ ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT__carries__BRA__0__KET__) 
                                                 << 1U)))) 
                                    | (1U & ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                             ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__b))))))),9);
    bufp->fullBit(oldp+27,((1U & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                   >> 1U) ^ (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                              >> 1U) 
                                             ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT__carries__BRA__0__KET__))))));
    bufp->fullBit(oldp+28,((1U & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                   >> 2U) ^ (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                              >> 2U) 
                                             ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__cout))))));
    bufp->fullBit(oldp+29,((1U & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                   >> 3U) ^ (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                              >> 3U) 
                                             ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__cout))))));
    bufp->fullBit(oldp+30,((1U & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                   >> 4U) ^ (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                              >> 4U) 
                                             ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__cout))))));
    bufp->fullBit(oldp+31,((1U & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                   >> 5U) ^ (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                              >> 5U) 
                                             ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__cout))))));
    bufp->fullBit(oldp+32,((1U & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                   >> 6U) ^ (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                              >> 6U) 
                                             ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__cout))))));
    bufp->fullBit(oldp+33,((IData)(((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                      ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__b)) 
                                     >> 7U) ^ (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__cout)))));
    bufp->fullBit(oldp+34,((1U & ((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__a) 
                                    >> 7U) & (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                               >> 7U) 
                                              | (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__cout))) 
                                  | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__b) 
                                      >> 7U) & (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__cout))))));
    bufp->fullCData(oldp+35,((((((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__cout) 
                                 << 6U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__cout) 
                                           << 5U)) 
                               | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__cout) 
                                   << 4U) | ((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__cout) 
                                             << 3U))) 
                              | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__cout) 
                                  << 2U) | (((IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__cout) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT__carries__BRA__0__KET__))))),7);
    bufp->fullBit(oldp+36,(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT__carries__BRA__0__KET__));
    bufp->fullBit(oldp+37,(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__1__KET____DOT__gen_default_iteration__DOT__fa__cout));
    bufp->fullBit(oldp+38,(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__2__KET____DOT__gen_default_iteration__DOT__fa__cout));
    bufp->fullBit(oldp+39,(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__3__KET____DOT__gen_default_iteration__DOT__fa__cout));
    bufp->fullBit(oldp+40,(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__4__KET____DOT__gen_default_iteration__DOT__fa__cout));
    bufp->fullBit(oldp+41,(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__5__KET____DOT__gen_default_iteration__DOT__fa__cout));
    bufp->fullBit(oldp+42,(vlSelfRef.tb_eight_bit_adder__DOT__DUT__DOT____Vcellout__gen_full_adder_loop__BRA__6__KET____DOT__gen_default_iteration__DOT__fa__cout));
}
