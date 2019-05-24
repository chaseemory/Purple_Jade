// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vissue_table.h for the primary calling header

#ifndef _Vissue_table___024unit_H_
#define _Vissue_table___024unit_H_

#include "verilated.h"

class Vissue_table__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vissue_table___024unit) {
  public:
    
    // PORTS
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vissue_table__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vissue_table___024unit& operator= (const Vissue_table___024unit&);  ///< Copying not allowed
    Vissue_table___024unit(const Vissue_table___024unit&);  ///< Copying not allowed
  public:
    Vissue_table___024unit(const char* name="TOP");
    ~Vissue_table___024unit();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vissue_table__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
