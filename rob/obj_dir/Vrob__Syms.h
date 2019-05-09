// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vrob__Syms_H_
#define _Vrob__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vrob.h"
#include "Vrob___024unit.h"

// SYMS CLASS
class Vrob__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vrob*                          TOPp;
    
    // CREATORS
    Vrob__Syms(Vrob* topp, const char* namep);
    ~Vrob__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
