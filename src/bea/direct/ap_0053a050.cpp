// auto-ported from 0053a050_FUN_0053a050.c (FUN_0053a050, 200 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00888a90 GLOBAL_AT(char, 0x00888a90)
#define DAT_0089c924 GLOBAL_AT(int, 0x0089c924)
#define s_C__dev_ONSLAUGHT2_DXBattleLine_c_00650324 ((char*)0x00650324)
typedef uint32_t (BEA_THISCALL* FUN_0053a930_t)(uint32_t);
static const bea_guard<FUN_0053a930_t> FUN_0053a930 = {(FUN_0053a930_t)0x0053a930};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef void * (BEA_THISCALL* FUN_00556cc0_t)(uint32_t);
static const bea_guard<FUN_00556cc0_t> FUN_00556cc0 = {(FUN_00556cc0_t)0x00556cc0};

static uint32_t BEA_THISCALL ap_0053a050(void * this_, undefined4 param_1, undefined4 param_2)
{
  int *this_00;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)((int)this_ + 0x68) = param_2;
  *(undefined4 *)((int)this_ + 100) = param_1;
  this_00 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x158), bea_arg(2), bea_arg(s_C__dev_ONSLAUGHT2_DXBattleLine_c_00650324), bea_arg(0x70));
  if (this_00 == (int *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    FUN_00556cc0(bea_arg(this_00));
    *this_00 = (int)((void*)0x005e4f64);
  }
  *(int **)((int)this_ + 4) = this_00;
  if (((DAT_00888a90 & 0x20) == 0) && (DAT_0089c924 == 0)) {
    bea_vcall<uint32_t>(this_00, 0x18, 0x80,1,2,0,0,1);
  }
  else {
    bea_vcall<uint32_t>(this_00, 0x18, 0x80,0x80,2,0,0,1);
  }
  return FUN_0053a930(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053a050, ap_0053a050));
