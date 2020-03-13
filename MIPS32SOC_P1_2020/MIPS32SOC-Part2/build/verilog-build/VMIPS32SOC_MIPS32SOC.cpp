// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMIPS32SOC.h for the primary calling header

#include "VMIPS32SOC_MIPS32SOC.h" // For This
#include "VMIPS32SOC__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES

VL_ST_SIG8(VMIPS32SOC_MIPS32SOC::__Vtable1___PVT__ControlUnit_i1__DOT__s3[128],2,0);
VL_ST_SIG16(VMIPS32SOC_MIPS32SOC::__Vtable2___PVT__ControlUnit_i1__DOT__s4[8],11,0);

//--------------------

VL_CTOR_IMP(VMIPS32SOC_MIPS32SOC) {
    VL_CELL (inst_mem, VMIPS32SOC_AsyncROM);
    VL_CELL (reg_file, VMIPS32SOC_RegisterFile);
    VL_CELL (data_mem, VMIPS32SOC_RAMDualPort);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VMIPS32SOC_MIPS32SOC::__Vconfigure(VMIPS32SOC__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMIPS32SOC_MIPS32SOC::~VMIPS32SOC_MIPS32SOC() {
}

//--------------------
// Internal Methods

void VMIPS32SOC_MIPS32SOC::_settle__TOP__MIPS32SOC__1(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMIPS32SOC_MIPS32SOC::_settle__TOP__MIPS32SOC__1\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__MIPS32SOC.__PVT__s21 = (0xffffffcU 
					  & vlSymsp->TOP__MIPS32SOC.__PVT__s21);
    vlSymsp->TOP__MIPS32SOC.__PVT__shift_shift = (0xfffffffcU 
						  & vlSymsp->TOP__MIPS32SOC.__PVT__shift_shift);
    vlSymsp->TOP__MIPS32SOC.__PVT__ALU_i10__DOT__s4 
	= (1U & vlSymsp->TOP__MIPS32SOC.__PVT__ALU_i10__DOT__s4);
    vlSymsp->TOP__MIPS32SOC.__PVT__shift_jump = ((0xfffffffU 
						  & vlSymsp->TOP__MIPS32SOC.__PVT__shift_jump) 
						 | (0xf0000000U 
						    & ((IData)(
							       (VL_ULL(0x1f) 
								& ((VL_ULL(4) 
								    + (QData)((IData)(vlSymsp->TOP__MIPS32SOC.PC))) 
								   >> 0x1cU))) 
						       << 0x1cU)));
}

void VMIPS32SOC_MIPS32SOC::_settle__TOP__MIPS32SOC__2(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMIPS32SOC_MIPS32SOC::_settle__TOP__MIPS32SOC__2\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__MIPS32SOC.__PVT__s21 = ((3U & vlSymsp->TOP__MIPS32SOC.__PVT__s21) 
					  | (0xffffffcU 
					     & (vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0 
						<< 2U)));
    vlSymsp->TOP__MIPS32SOC.__PVT__ALUControl_i7__DOT__s6 
	= (((((0x24U == (0x3fU & vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0)) 
	      | (0x25U == (0x3fU & vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0))) 
	     | (0x20U == (0x3fU & vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0))) 
	    | (0x22U == (0x3fU & vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0))) 
	   | (0x2aU == (0x3fU & vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0)));
    vlSymsp->TOP__MIPS32SOC.__PVT__s16 = ((0xffff0000U 
					   & (VL_NEGATE_I((IData)(
								  (1U 
								   & (vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0 
								      >> 0xfU)))) 
					      << 0x10U)) 
					  | (0xffffU 
					     & vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0));
    // ALWAYS at /home/david/Escritorio/MIPS32SOC_P1_2020/MIPS32SOC-Part2/build/MIPS32SOC.v:50
    vlSymsp->TOP__MIPS32SOC.__Vtableidx1 = (((0x2bU 
					      == (0x3fU 
						  & (vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0 
						     >> 0x1aU))) 
					     << 6U) 
					    | (((0x23U 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0 
						     >> 0x1aU))) 
						<< 5U) 
					       | (((4U 
						    == 
						    (0x3fU 
						     & (vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0 
							>> 0x1aU))) 
						   << 4U) 
						  | (((5U 
						       == 
						       (0x3fU 
							& (vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0 
							   >> 0x1aU))) 
						      << 3U) 
						     | (((2U 
							  == 
							  (0x3fU 
							   & (vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0 
							      >> 0x1aU))) 
							 << 2U) 
							| (((0U 
							     == 
							     (0x3fU 
							      & (vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0 
								 >> 0x1aU))) 
							    << 1U) 
							   | (0U 
							      == 
							      (0x3fU 
							       & (vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0 
								  >> 0x1aU)))))))));
    vlSymsp->TOP__MIPS32SOC.__PVT__ControlUnit_i1__DOT__s3 
	= vlSymsp->TOP__MIPS32SOC.__Vtable1___PVT__ControlUnit_i1__DOT__s3
	[vlSymsp->TOP__MIPS32SOC.__Vtableidx1];
    vlSymsp->TOP__MIPS32SOC.__PVT__shift_jump = ((0xf0000000U 
						  & vlSymsp->TOP__MIPS32SOC.__PVT__shift_jump) 
						 | vlSymsp->TOP__MIPS32SOC.__PVT__s21);
    vlSymsp->TOP__MIPS32SOC.__PVT__shift_shift = ((3U 
						   & vlSymsp->TOP__MIPS32SOC.__PVT__shift_shift) 
						  | (0xfffffffcU 
						     & (vlSymsp->TOP__MIPS32SOC.__PVT__s16 
							<< 2U)));
    // ALWAYS at /home/david/Escritorio/MIPS32SOC_P1_2020/MIPS32SOC-Part2/build/MIPS32SOC.v:88
    vlSymsp->TOP__MIPS32SOC.__Vtableidx2 = vlSymsp->TOP__MIPS32SOC.__PVT__ControlUnit_i1__DOT__s3;
    vlSymsp->TOP__MIPS32SOC.__PVT__ControlUnit_i1__DOT__s4 
	= vlSymsp->TOP__MIPS32SOC.__Vtable2___PVT__ControlUnit_i1__DOT__s4
	[vlSymsp->TOP__MIPS32SOC.__Vtableidx2];
    // ALWAYS at /home/david/Escritorio/MIPS32SOC_P1_2020/MIPS32SOC-Part2/build/MIPS32SOC.v:12
    vlSymsp->TOP__MIPS32SOC.__PVT__ControlUnit_i1__DOT__s10 
	= ((IData)(vlTOPp->rst) ? 0U : (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__ControlUnit_i1__DOT__s4));
    // ALWAYS at /home/david/Escritorio/MIPS32SOC_P1_2020/MIPS32SOC-Part2/build/MIPS32SOC.v:12
    vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc = (7U & 
					      ((7U 
						== 
						(7U 
						 & ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__ControlUnit_i1__DOT__s10) 
						    >> 3U)))
					        ? (
						   (7U 
						    == 
						    (7U 
						     & ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__ControlUnit_i1__DOT__s10) 
							>> 3U)))
						    ? 
						   ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__ALUControl_i7__DOT__s6)
						     ? 
						    ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__ALUControl_i7__DOT__s6)
						      ? 
						     ((0x2aU 
						       == 
						       (0x3fU 
							& vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0))
						       ? 4U
						       : 
						      ((0x22U 
							== 
							(0x3fU 
							 & vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0))
						        ? 3U
						        : 
						       ((0x20U 
							 == 
							 (0x3fU 
							  & vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0))
							 ? 2U
							 : 
							((0x25U 
							  == 
							  (0x3fU 
							   & vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0))
							  ? 1U
							  : 0U))))
						      : 0U)
						     : 5U)
						    : 0U)
					        : ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__ControlUnit_i1__DOT__s10) 
						   >> 3U)));
}

void VMIPS32SOC_MIPS32SOC::_settle__TOP__MIPS32SOC__3(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMIPS32SOC_MIPS32SOC::_settle__TOP__MIPS32SOC__3\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/david/Escritorio/MIPS32SOC_P1_2020/MIPS32SOC-Part2/build/MIPS32SOC.v:12
    vlSymsp->TOP__MIPS32SOC.__PVT__s13 = ((0x80U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__ControlUnit_i1__DOT__s10))
					   ? ((0x80U 
					       & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__ControlUnit_i1__DOT__s10))
					       ? vlSymsp->TOP__MIPS32SOC.__PVT__s16
					       : 0U)
					   : vlSymsp->TOP__MIPS32SOC__reg_file.__PVT__read_data2);
    vlSymsp->TOP__MIPS32SOC.__PVT__ALU_i10__DOT__s4 
	= ((0xfffffffeU & vlSymsp->TOP__MIPS32SOC.__PVT__ALU_i10__DOT__s4) 
	   | VL_LTS_III(32,32,32, vlSymsp->TOP__MIPS32SOC__reg_file.__PVT__read_data1, vlSymsp->TOP__MIPS32SOC.__PVT__s13));
    // ALWAYS at /home/david/Escritorio/MIPS32SOC_P1_2020/MIPS32SOC-Part2/build/MIPS32SOC.v:88
    vlSymsp->TOP__MIPS32SOC.__PVT__ALU_i10__DOT__res_temp 
	= ((4U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
	    ? ((2U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
	        ? 0U : ((1U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
			 ? 0U : vlSymsp->TOP__MIPS32SOC.__PVT__ALU_i10__DOT__s4))
	    : ((2U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
	        ? ((1U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
		    ? (vlSymsp->TOP__MIPS32SOC__reg_file.__PVT__read_data1 
		       - vlSymsp->TOP__MIPS32SOC.__PVT__s13)
		    : (vlSymsp->TOP__MIPS32SOC__reg_file.__PVT__read_data1 
		       + vlSymsp->TOP__MIPS32SOC.__PVT__s13))
	        : ((1U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
		    ? (vlSymsp->TOP__MIPS32SOC__reg_file.__PVT__read_data1 
		       | vlSymsp->TOP__MIPS32SOC.__PVT__s13)
		    : (vlSymsp->TOP__MIPS32SOC__reg_file.__PVT__read_data1 
		       & vlSymsp->TOP__MIPS32SOC.__PVT__s13))));
    vlSymsp->TOP__MIPS32SOC.__PVT__bsh = ((((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__ControlUnit_i1__DOT__s10) 
					    >> 9U) 
					   & (0U == vlSymsp->TOP__MIPS32SOC.__PVT__ALU_i10__DOT__res_temp)) 
					  | (((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__ControlUnit_i1__DOT__s10) 
					      >> 0xbU) 
					     & (0U 
						!= vlSymsp->TOP__MIPS32SOC.__PVT__ALU_i10__DOT__res_temp)));
    // ALWAYS at /home/david/Escritorio/MIPS32SOC_P1_2020/MIPS32SOC-Part2/build/MIPS32SOC.v:12
    vlSymsp->TOP__MIPS32SOC.__PVT__s19 = ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__bsh)
					   ? ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__bsh)
					       ? ((IData)(4U) 
						  + 
						  (vlSymsp->TOP__MIPS32SOC.PC 
						   + vlSymsp->TOP__MIPS32SOC.__PVT__shift_shift))
					       : 0U)
					   : ((IData)(4U) 
					      + vlSymsp->TOP__MIPS32SOC.PC));
}

VL_INLINE_OPT void VMIPS32SOC_MIPS32SOC::_sequent__TOP__MIPS32SOC__4(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMIPS32SOC_MIPS32SOC::_sequent__TOP__MIPS32SOC__4\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/david/Escritorio/MIPS32SOC_P1_2020/MIPS32SOC-Part2/build/MIPS32SOC.v:646
    vlSymsp->TOP__MIPS32SOC.PC = ((IData)(vlTOPp->rst)
				   ? 0U : ((0x400U 
					    & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__ControlUnit_i1__DOT__s10))
					    ? ((0x400U 
						& (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__ControlUnit_i1__DOT__s10))
					        ? vlSymsp->TOP__MIPS32SOC.__PVT__shift_jump
					        : 0U)
					    : vlSymsp->TOP__MIPS32SOC.__PVT__s19));
    vlSymsp->TOP__MIPS32SOC.__PVT__shift_jump = ((0xfffffffU 
						  & vlSymsp->TOP__MIPS32SOC.__PVT__shift_jump) 
						 | (0xf0000000U 
						    & ((IData)(
							       (VL_ULL(0x1f) 
								& ((VL_ULL(4) 
								    + (QData)((IData)(vlSymsp->TOP__MIPS32SOC.PC))) 
								   >> 0x1cU))) 
						       << 0x1cU)));
}

VL_INLINE_OPT void VMIPS32SOC_MIPS32SOC::_sequent__TOP__MIPS32SOC__5(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMIPS32SOC_MIPS32SOC::_sequent__TOP__MIPS32SOC__5\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__MIPS32SOC.__PVT__s21 = ((3U & vlSymsp->TOP__MIPS32SOC.__PVT__s21) 
					  | (0xffffffcU 
					     & (vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0 
						<< 2U)));
    vlSymsp->TOP__MIPS32SOC.__PVT__ALUControl_i7__DOT__s6 
	= (((((0x24U == (0x3fU & vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0)) 
	      | (0x25U == (0x3fU & vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0))) 
	     | (0x20U == (0x3fU & vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0))) 
	    | (0x22U == (0x3fU & vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0))) 
	   | (0x2aU == (0x3fU & vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0)));
    vlSymsp->TOP__MIPS32SOC.__PVT__s16 = ((0xffff0000U 
					   & (VL_NEGATE_I((IData)(
								  (1U 
								   & (vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0 
								      >> 0xfU)))) 
					      << 0x10U)) 
					  | (0xffffU 
					     & vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0));
    // ALWAYS at /home/david/Escritorio/MIPS32SOC_P1_2020/MIPS32SOC-Part2/build/MIPS32SOC.v:50
    vlSymsp->TOP__MIPS32SOC.__Vtableidx1 = (((0x2bU 
					      == (0x3fU 
						  & (vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0 
						     >> 0x1aU))) 
					     << 6U) 
					    | (((0x23U 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0 
						     >> 0x1aU))) 
						<< 5U) 
					       | (((4U 
						    == 
						    (0x3fU 
						     & (vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0 
							>> 0x1aU))) 
						   << 4U) 
						  | (((5U 
						       == 
						       (0x3fU 
							& (vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0 
							   >> 0x1aU))) 
						      << 3U) 
						     | (((2U 
							  == 
							  (0x3fU 
							   & (vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0 
							      >> 0x1aU))) 
							 << 2U) 
							| (((0U 
							     == 
							     (0x3fU 
							      & (vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0 
								 >> 0x1aU))) 
							    << 1U) 
							   | (0U 
							      == 
							      (0x3fU 
							       & (vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0 
								  >> 0x1aU)))))))));
    vlSymsp->TOP__MIPS32SOC.__PVT__ControlUnit_i1__DOT__s3 
	= vlSymsp->TOP__MIPS32SOC.__Vtable1___PVT__ControlUnit_i1__DOT__s3
	[vlSymsp->TOP__MIPS32SOC.__Vtableidx1];
    vlSymsp->TOP__MIPS32SOC.__PVT__shift_jump = ((0xf0000000U 
						  & vlSymsp->TOP__MIPS32SOC.__PVT__shift_jump) 
						 | vlSymsp->TOP__MIPS32SOC.__PVT__s21);
    vlSymsp->TOP__MIPS32SOC.__PVT__shift_shift = ((3U 
						   & vlSymsp->TOP__MIPS32SOC.__PVT__shift_shift) 
						  | (0xfffffffcU 
						     & (vlSymsp->TOP__MIPS32SOC.__PVT__s16 
							<< 2U)));
    // ALWAYS at /home/david/Escritorio/MIPS32SOC_P1_2020/MIPS32SOC-Part2/build/MIPS32SOC.v:88
    vlSymsp->TOP__MIPS32SOC.__Vtableidx2 = vlSymsp->TOP__MIPS32SOC.__PVT__ControlUnit_i1__DOT__s3;
    vlSymsp->TOP__MIPS32SOC.__PVT__ControlUnit_i1__DOT__s4 
	= vlSymsp->TOP__MIPS32SOC.__Vtable2___PVT__ControlUnit_i1__DOT__s4
	[vlSymsp->TOP__MIPS32SOC.__Vtableidx2];
}

VL_INLINE_OPT void VMIPS32SOC_MIPS32SOC::_combo__TOP__MIPS32SOC__6(VMIPS32SOC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMIPS32SOC_MIPS32SOC::_combo__TOP__MIPS32SOC__6\n"); );
    VMIPS32SOC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/david/Escritorio/MIPS32SOC_P1_2020/MIPS32SOC-Part2/build/MIPS32SOC.v:12
    vlSymsp->TOP__MIPS32SOC.__PVT__ControlUnit_i1__DOT__s10 
	= ((IData)(vlTOPp->rst) ? 0U : (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__ControlUnit_i1__DOT__s4));
    // ALWAYS at /home/david/Escritorio/MIPS32SOC_P1_2020/MIPS32SOC-Part2/build/MIPS32SOC.v:12
    vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc = (7U & 
					      ((7U 
						== 
						(7U 
						 & ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__ControlUnit_i1__DOT__s10) 
						    >> 3U)))
					        ? (
						   (7U 
						    == 
						    (7U 
						     & ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__ControlUnit_i1__DOT__s10) 
							>> 3U)))
						    ? 
						   ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__ALUControl_i7__DOT__s6)
						     ? 
						    ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__ALUControl_i7__DOT__s6)
						      ? 
						     ((0x2aU 
						       == 
						       (0x3fU 
							& vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0))
						       ? 4U
						       : 
						      ((0x22U 
							== 
							(0x3fU 
							 & vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0))
						        ? 3U
						        : 
						       ((0x20U 
							 == 
							 (0x3fU 
							  & vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0))
							 ? 2U
							 : 
							((0x25U 
							  == 
							  (0x3fU 
							   & vlSymsp->TOP__MIPS32SOC__inst_mem.read_data__out__out0))
							  ? 1U
							  : 0U))))
						      : 0U)
						     : 5U)
						    : 0U)
					        : ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__ControlUnit_i1__DOT__s10) 
						   >> 3U)));
    // ALWAYS at /home/david/Escritorio/MIPS32SOC_P1_2020/MIPS32SOC-Part2/build/MIPS32SOC.v:12
    vlSymsp->TOP__MIPS32SOC.__PVT__s13 = ((0x80U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__ControlUnit_i1__DOT__s10))
					   ? ((0x80U 
					       & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__ControlUnit_i1__DOT__s10))
					       ? vlSymsp->TOP__MIPS32SOC.__PVT__s16
					       : 0U)
					   : vlSymsp->TOP__MIPS32SOC__reg_file.__PVT__read_data2);
    vlSymsp->TOP__MIPS32SOC.__PVT__ALU_i10__DOT__s4 
	= ((0xfffffffeU & vlSymsp->TOP__MIPS32SOC.__PVT__ALU_i10__DOT__s4) 
	   | VL_LTS_III(32,32,32, vlSymsp->TOP__MIPS32SOC__reg_file.__PVT__read_data1, vlSymsp->TOP__MIPS32SOC.__PVT__s13));
    // ALWAYS at /home/david/Escritorio/MIPS32SOC_P1_2020/MIPS32SOC-Part2/build/MIPS32SOC.v:88
    vlSymsp->TOP__MIPS32SOC.__PVT__ALU_i10__DOT__res_temp 
	= ((4U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
	    ? ((2U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
	        ? 0U : ((1U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
			 ? 0U : vlSymsp->TOP__MIPS32SOC.__PVT__ALU_i10__DOT__s4))
	    : ((2U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
	        ? ((1U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
		    ? (vlSymsp->TOP__MIPS32SOC__reg_file.__PVT__read_data1 
		       - vlSymsp->TOP__MIPS32SOC.__PVT__s13)
		    : (vlSymsp->TOP__MIPS32SOC__reg_file.__PVT__read_data1 
		       + vlSymsp->TOP__MIPS32SOC.__PVT__s13))
	        : ((1U & (IData)(vlSymsp->TOP__MIPS32SOC.__PVT__aluFunc))
		    ? (vlSymsp->TOP__MIPS32SOC__reg_file.__PVT__read_data1 
		       | vlSymsp->TOP__MIPS32SOC.__PVT__s13)
		    : (vlSymsp->TOP__MIPS32SOC__reg_file.__PVT__read_data1 
		       & vlSymsp->TOP__MIPS32SOC.__PVT__s13))));
    vlSymsp->TOP__MIPS32SOC.__PVT__bsh = ((((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__ControlUnit_i1__DOT__s10) 
					    >> 9U) 
					   & (0U == vlSymsp->TOP__MIPS32SOC.__PVT__ALU_i10__DOT__res_temp)) 
					  | (((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__ControlUnit_i1__DOT__s10) 
					      >> 0xbU) 
					     & (0U 
						!= vlSymsp->TOP__MIPS32SOC.__PVT__ALU_i10__DOT__res_temp)));
    // ALWAYS at /home/david/Escritorio/MIPS32SOC_P1_2020/MIPS32SOC-Part2/build/MIPS32SOC.v:12
    vlSymsp->TOP__MIPS32SOC.__PVT__s19 = ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__bsh)
					   ? ((IData)(vlSymsp->TOP__MIPS32SOC.__PVT__bsh)
					       ? ((IData)(4U) 
						  + 
						  (vlSymsp->TOP__MIPS32SOC.PC 
						   + vlSymsp->TOP__MIPS32SOC.__PVT__shift_shift))
					       : 0U)
					   : ((IData)(4U) 
					      + vlSymsp->TOP__MIPS32SOC.PC));
}

void VMIPS32SOC_MIPS32SOC::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VMIPS32SOC_MIPS32SOC::_ctor_var_reset\n"); );
    // Body
    rst = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    __PVT__invalid_opcode = VL_RAND_RESET_I(1);
    invalid_addr = VL_RAND_RESET_I(1);
    invalid_pc = VL_RAND_RESET_I(1);
    __PVT__s13 = VL_RAND_RESET_I(32);
    __PVT__aluFunc = VL_RAND_RESET_I(3);
    __PVT__s16 = VL_RAND_RESET_I(32);
    __PVT__bsh = VL_RAND_RESET_I(1);
    __PVT__s19 = VL_RAND_RESET_I(32);
    __PVT__shift_jump = VL_RAND_RESET_I(32);
    __PVT__shift_shift = VL_RAND_RESET_I(32);
    __PVT__s21 = VL_RAND_RESET_I(28);
    PC = VL_RAND_RESET_I(32);
    __PVT__ControlUnit_i1__DOT__s3 = VL_RAND_RESET_I(3);
    __PVT__ControlUnit_i1__DOT__s4 = VL_RAND_RESET_I(12);
    __PVT__ControlUnit_i1__DOT__s10 = VL_RAND_RESET_I(12);
    __PVT__ALUControl_i7__DOT__s6 = VL_RAND_RESET_I(1);
    __PVT__ALU_i10__DOT__s4 = VL_RAND_RESET_I(32);
    __PVT__ALU_i10__DOT__res_temp = VL_RAND_RESET_I(32);
    __Vtableidx1 = VL_RAND_RESET_I(7);
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[0] = 0U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[1] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[2] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[3] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[4] = 5U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[5] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[6] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[7] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[8] = 4U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[9] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[10] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[11] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[12] = 5U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[13] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[14] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[15] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[16] = 3U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[17] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[18] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[19] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[20] = 5U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[21] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[22] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[23] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[24] = 4U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[25] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[26] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[27] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[28] = 5U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[29] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[30] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[31] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[32] = 2U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[33] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[34] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[35] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[36] = 5U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[37] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[38] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[39] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[40] = 4U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[41] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[42] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[43] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[44] = 5U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[45] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[46] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[47] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[48] = 3U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[49] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[50] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[51] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[52] = 5U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[53] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[54] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[55] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[56] = 4U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[57] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[58] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[59] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[60] = 5U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[61] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[62] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[63] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[64] = 1U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[65] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[66] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[67] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[68] = 5U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[69] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[70] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[71] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[72] = 4U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[73] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[74] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[75] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[76] = 5U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[77] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[78] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[79] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[80] = 3U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[81] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[82] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[83] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[84] = 5U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[85] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[86] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[87] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[88] = 4U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[89] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[90] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[91] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[92] = 5U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[93] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[94] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[95] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[96] = 2U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[97] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[98] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[99] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[100] = 5U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[101] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[102] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[103] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[104] = 4U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[105] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[106] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[107] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[108] = 5U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[109] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[110] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[111] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[112] = 3U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[113] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[114] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[115] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[116] = 5U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[117] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[118] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[119] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[120] = 4U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[121] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[122] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[123] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[124] = 5U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[125] = 7U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[126] = 6U;
    __Vtable1___PVT__ControlUnit_i1__DOT__s3[127] = 7U;
    __Vtableidx2 = VL_RAND_RESET_I(3);
    __Vtable2___PVT__ControlUnit_i1__DOT__s4[0] = 0x178U;
    __Vtable2___PVT__ControlUnit_i1__DOT__s4[1] = 0x91U;
    __Vtable2___PVT__ControlUnit_i1__DOT__s4[2] = 0x196U;
    __Vtable2___PVT__ControlUnit_i1__DOT__s4[3] = 0x218U;
    __Vtable2___PVT__ControlUnit_i1__DOT__s4[4] = 0x818U;
    __Vtable2___PVT__ControlUnit_i1__DOT__s4[5] = 0x400U;
    __Vtable2___PVT__ControlUnit_i1__DOT__s4[6] = 0U;
    __Vtable2___PVT__ControlUnit_i1__DOT__s4[7] = 0U;
}
