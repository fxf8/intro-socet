// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vfull_adder__Syms.h"


VL_ATTR_COLD void Vfull_adder___024root__trace_init_sub__TOP__0(Vfull_adder___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder___024root__trace_init_sub__TOP__0\n"); );
    Vfull_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_full_adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1,0,"tb_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"tb_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"tb_cin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"tb_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"tb_cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"test_number",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+7,0,"num_passed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfull_adder___024root__trace_init_top(Vfull_adder___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder___024root__trace_init_top\n"); );
    Vfull_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfull_adder___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vfull_adder___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vfull_adder___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vfull_adder___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vfull_adder___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vfull_adder___024root__trace_register(Vfull_adder___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder___024root__trace_register\n"); );
    Vfull_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vfull_adder___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vfull_adder___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vfull_adder___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vfull_adder___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vfull_adder___024root__trace_const_0_sub_0(Vfull_adder___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vfull_adder___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder___024root__trace_const_0\n"); );
    // Init
    Vfull_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfull_adder___024root*>(voidSelf);
    Vfull_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfull_adder___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfull_adder___024root__trace_const_0_sub_0(Vfull_adder___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder___024root__trace_const_0_sub_0\n"); );
    Vfull_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+8,(0xaU),32);
}

VL_ATTR_COLD void Vfull_adder___024root__trace_full_0_sub_0(Vfull_adder___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vfull_adder___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder___024root__trace_full_0\n"); );
    // Init
    Vfull_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfull_adder___024root*>(voidSelf);
    Vfull_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfull_adder___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfull_adder___024root__trace_full_0_sub_0(Vfull_adder___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder___024root__trace_full_0_sub_0\n"); );
    Vfull_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb_full_adder__DOT__tb_a));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_full_adder__DOT__tb_b));
    bufp->fullBit(oldp+3,(vlSelfRef.tb_full_adder__DOT__tb_cin));
    bufp->fullBit(oldp+4,(((IData)(vlSelfRef.tb_full_adder__DOT__tb_a) 
                           ^ ((IData)(vlSelfRef.tb_full_adder__DOT__tb_b) 
                              ^ (IData)(vlSelfRef.tb_full_adder__DOT__tb_cin)))));
    bufp->fullBit(oldp+5,((((IData)(vlSelfRef.tb_full_adder__DOT__tb_a) 
                            & ((IData)(vlSelfRef.tb_full_adder__DOT__tb_b) 
                               | (IData)(vlSelfRef.tb_full_adder__DOT__tb_cin))) 
                           | ((IData)(vlSelfRef.tb_full_adder__DOT__tb_b) 
                              & (IData)(vlSelfRef.tb_full_adder__DOT__tb_cin)))));
    bufp->fullIData(oldp+6,(vlSelfRef.tb_full_adder__DOT__test_number),32);
    bufp->fullIData(oldp+7,(vlSelfRef.tb_full_adder__DOT__num_passed),32);
}
