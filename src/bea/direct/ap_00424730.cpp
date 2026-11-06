// auto-ported from 00424730_FUN_00424730.c (FUN_00424730, 107 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004bac40_t)(uint32_t);
static const bea_guard<FUN_004bac40_t> FUN_004bac40 = {(FUN_004bac40_t)0x004bac40};

static uint32_t BEA_THISCALL ap_00424730(void * this_)
{
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined ***)this_ = ((void*)0x005d9524);
  *(undefined ***)((int)this_ + 8) = ((void*)0x005d94ac);
  if (*(undefined4 **)((int)this_ + 0x8c) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x8c), 0x0, 1);
    *(undefined4 *)((int)this_ + 0x8c) = 0;
  }
  return FUN_004bac40(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00424730, ap_00424730));
