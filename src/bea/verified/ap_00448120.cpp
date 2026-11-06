// auto-ported from 00448120_FUN_00448120.c (FUN_00448120, 29 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_00448120(void * this_)
{
  *(undefined4 *)((int)this_ + 0x27c) = 7;
  *(float *)((int)this_ + 0x2a4) = 1.0f - *(float *)((int)this_ + 0x2a4);
  return;
}

// @autoport-registration (verified: 290 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00448120, ap_00448120));
