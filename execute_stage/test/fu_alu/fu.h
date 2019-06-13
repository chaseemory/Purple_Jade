#ifndef _FU_H_
#define _FU_H_
#include "verilated.h"

typedef struct
{
  vluint64_t valid;// 28
  vluint64_t reg;  // 7:21 
  vluint64_t flag; // 4:17
  vluint64_t res;  // 16:1
  vluint64_t w_v;  // 0
} reg_wb_t;

typedef struct
{
  vluint64_t valid;     // 33
  vluint64_t reg;       // 7:26 
  vluint64_t flag;      // 4:22
  vluint64_t res;       // 16:6 
  vluint64_t rob_dest;  //6:0 
} rob_wb_t;

void assertReg(vluint64_t res, reg_wb_t a, bool check_res=true) {
    assert((res & 0x1) == a.w_v);
    assert(((res >> 28) & 0x1) == a.valid);

    if (check_res) {
    	assert(((res >> 1) & 0xffff) == a.res);
   	 	// assert(((res >> 17) & 0xf) == a.flag);
    	assert(((res >> 21) & 0x7f) == a.reg);
    }
}	

void assertRob(vluint64_t res, rob_wb_t a, bool check_res=true) {
	assert(((res >> 33) & 0x1) == a.valid);

	if (check_res) {
    	assert((res & 0x3f) == a.rob_dest);
    	assert(((res >> 6) & 0xffff) == a.res);
    	// assert(((res >> 17) & 0xf) == a.flag);
    	assert(((res >> 26) & 0x3f) == a.reg);
    }
}
#endif