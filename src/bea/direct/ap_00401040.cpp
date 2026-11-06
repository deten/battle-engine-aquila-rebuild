// auto-ported from 00401040_FUN_00401040.c (FUN_00401040, 126 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_Monitor_h_00622b80 ((char*)0x00622b80)
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef uint32_t (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_THISCALL ap_00401040(void * this_, undefined4 param_1)
{
  void *this_00;
  undefined1 *puStack_8;
  undefined4 local_4;
  if (*(int *)((int)this_ + 4) == 0) {
    this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x5e), bea_arg(s_C__dev_ONSLAUGHT2_Monitor_h_00622b80), bea_arg(0x18));
    if (this_00 == (void *)0x0) {
      this_00 = (void *)0x0;
    }
    else {
      FUN_004e5840(bea_arg(this_00));
    }
    *(void **)((int)this_ + 4) = this_00;
  }
  return FUN_004e5a80(bea_arg(*(void **)((int)this_ + 4)), bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00401040, ap_00401040));
