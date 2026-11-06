// auto-ported from 00411b70_FUN_00411b70.c (FUN_00411b70, 32 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_00411b70(void * this_)
{
  // fcomp 0.0 / fnstsw / test ah, 0x40: C3 is set for equal and for unordered, so a NaN at
  // +0x48 counts as 0 (the decompiled `== 0.0f` said 1: level 4.22 with sound on parted by
  // 0.2 s, 2026-11-05)
  float f = *(float *)((int)this_ + 0x48);
  if ((*(int *)((int)this_ + 0x2c) == 0) && (f == 0.0f || f != f)) {
    return 0;
  }
  return 1;
}

// @autoport-registration (verified: 5 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00411b70, ap_00411b70));
