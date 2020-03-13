// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMIPS32SOC.h for the primary calling header

#ifndef _VMIPS32SOC_MIPS32SOC_H_
#define _VMIPS32SOC_MIPS32SOC_H_

#include "verilated.h"
#include "VMIPS32SOC__Dpi.h"

class VMIPS32SOC__Syms;
class VMIPS32SOC_AsyncROM;
class VMIPS32SOC_RegisterFile;
class VMIPS32SOC_RAMDualPort;

//----------

VL_MODULE(VMIPS32SOC_MIPS32SOC) {
  public:
    // CELLS
    VMIPS32SOC_AsyncROM*	inst_mem;
    VMIPS32SOC_RegisterFile*	reg_file;
    VMIPS32SOC_RAMDualPort*	data_mem;
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(__PVT__invalid_opcode,0,0);
    VL_OUT8(invalid_addr,0,0);
    VL_OUT8(invalid_pc,0,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__aluFunc,2,0);
    VL_SIG8(__PVT__bsh,0,0);
    VL_SIG8(__PVT__ControlUnit_i1__DOT__s3,2,0);
    VL_SIG8(__PVT__ALUControl_i7__DOT__s6,0,0);
    VL_SIG16(__PVT__ControlUnit_i1__DOT__s4,11,0);
    VL_SIG16(__PVT__ControlUnit_i1__DOT__s10,11,0);
    VL_SIG(__PVT__s13,31,0);
    VL_SIG(__PVT__s16,31,0);
    VL_SIG(__PVT__s19,31,0);
    VL_SIG(__PVT__shift_jump,31,0);
    VL_SIG(__PVT__shift_shift,31,0);
    VL_SIG(__PVT__s21,27,0);
    VL_SIG(PC,31,0);
    VL_SIG(__PVT__ALU_i10__DOT__s4,31,0);
    VL_SIG(__PVT__ALU_i10__DOT__res_temp,31,0);
    
    // LOCAL VARIABLES
    static VL_ST_SIG8(__Vtable1___PVT__ControlUnit_i1__DOT__s3[128],2,0);
    static VL_ST_SIG16(__Vtable2___PVT__ControlUnit_i1__DOT__s4[8],11,0);
    VL_SIG8(__Vtableidx1,6,0);
    VL_SIG8(__Vtableidx2,2,0);
    
    // INTERNAL VARIABLES
  private:
    VMIPS32SOC__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VMIPS32SOC_MIPS32SOC& operator= (const VMIPS32SOC_MIPS32SOC&);  ///< Copying not allowed
    VMIPS32SOC_MIPS32SOC(const VMIPS32SOC_MIPS32SOC&);  ///< Copying not allowed
  public:
    VMIPS32SOC_MIPS32SOC(const char* name="TOP");
    ~VMIPS32SOC_MIPS32SOC();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VMIPS32SOC__Syms* symsp, bool first);
    static void _combo__TOP__MIPS32SOC__6(VMIPS32SOC__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _sequent__TOP__MIPS32SOC__4(VMIPS32SOC__Syms* __restrict vlSymsp);
    static void _sequent__TOP__MIPS32SOC__5(VMIPS32SOC__Syms* __restrict vlSymsp);
    static void _settle__TOP__MIPS32SOC__1(VMIPS32SOC__Syms* __restrict vlSymsp);
    static void _settle__TOP__MIPS32SOC__2(VMIPS32SOC__Syms* __restrict vlSymsp);
    static void _settle__TOP__MIPS32SOC__3(VMIPS32SOC__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
