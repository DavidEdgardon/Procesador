// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMIPS32SOC.h for the primary calling header

#include "VMIPS32SOC.h"        // For This
#include "VMIPS32SOC__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VMIPS32SOC) {
    VMIPS32SOC__Syms* __restrict vlSymsp = __VlSymsp = new VMIPS32SOC__Syms(this, name());
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (MIPS32SOC, VMIPS32SOC_MIPS32SOC);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VMIPS32SOC::__Vconfigure(VMIPS32SOC__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMIPS32SOC::~VMIPS32SOC() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VMIPS32SOC::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMIPS32SOC::eval\n"); );
    VMIPS32SOC__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VMIPS32SOC::_eval_initial_loop(VMIPS32SOC__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void VMIPS32SOC::_initial__TOP__1(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPS32SOC::_initial__TOP__1\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at /home/david/Escritorio/MIPS32SOC_P1_2020/MIPS32SOC-Part2/build/MIPS32SOC.v:574
    vlTOPp->invalid_opcode = 0U;
}

void VMIPS32SOC::_settle__TOP__2(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPS32SOC::_settle__TOP__2\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->invalid_addr = vlSymsp->TOP__MIPS32SOC.invalid_addr;
    vlTOPp->invalid_pc = vlSymsp->TOP__MIPS32SOC.invalid_pc;
}

void VMIPS32SOC::_eval(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPS32SOC::_eval\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlSymsp->TOP__MIPS32SOC__data_mem._sequent__TOP__MIPS32SOC__data_mem__1(vlSymsp);
	vlSymsp->TOP__MIPS32SOC._sequent__TOP__MIPS32SOC__4(vlSymsp);
	vlSymsp->TOP__MIPS32SOC__reg_file._sequent__TOP__MIPS32SOC__reg_file__3(vlSymsp);
	vlSymsp->TOP__MIPS32SOC__data_mem._sequent__TOP__MIPS32SOC__data_mem__2(vlSymsp);
	vlSymsp->TOP__MIPS32SOC__inst_mem._settle__TOP__MIPS32SOC__inst_mem__1(vlSymsp);
	vlSymsp->TOP__MIPS32SOC._sequent__TOP__MIPS32SOC__5(vlSymsp);
	vlSymsp->TOP__MIPS32SOC__reg_file._settle__TOP__MIPS32SOC__reg_file__2(vlSymsp);
    }
    vlSymsp->TOP__MIPS32SOC._combo__TOP__MIPS32SOC__6(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VMIPS32SOC::_eval_initial(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPS32SOC::_eval_initial\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlSymsp->TOP__MIPS32SOC__reg_file._initial__TOP__MIPS32SOC__reg_file__1(vlSymsp);
}

void VMIPS32SOC::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPS32SOC::final\n"); );
    // Variables
    VMIPS32SOC__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMIPS32SOC::_eval_settle(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPS32SOC::_eval_settle\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlSymsp->TOP__MIPS32SOC._settle__TOP__MIPS32SOC__1(vlSymsp);
    vlSymsp->TOP__MIPS32SOC__inst_mem._settle__TOP__MIPS32SOC__inst_mem__1(vlSymsp);
    vlSymsp->TOP__MIPS32SOC._settle__TOP__MIPS32SOC__2(vlSymsp);
    vlSymsp->TOP__MIPS32SOC__reg_file._settle__TOP__MIPS32SOC__reg_file__2(vlSymsp);
    vlSymsp->TOP__MIPS32SOC._settle__TOP__MIPS32SOC__3(vlSymsp);
}

VL_INLINE_OPT QData VMIPS32SOC::_change_request(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPS32SOC::_change_request\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VMIPS32SOC::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPS32SOC::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((rst & 0xfeU))) {
	Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
	Verilated::overWidthError("clk");}
}
#endif // VL_DEBUG

void VMIPS32SOC::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMIPS32SOC::_ctor_var_reset\n"); );
    // Body
    rst = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    invalid_opcode = VL_RAND_RESET_I(1);
    invalid_addr = VL_RAND_RESET_I(1);
    invalid_pc = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
}
