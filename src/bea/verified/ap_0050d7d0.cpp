// auto-ported from 0050d7d0_FUN_0050d7d0.c (FUN_0050d7d0, 25 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_0050d7d0(void * this_)
{
  if ((*(int *)((int)this_ + 0x27c) != 1) && (*(int *)((int)this_ + 0x27c) != 2)) {
    return 0;
  }
  return 1;
}

// @autoport-registration (verified: 14 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0050d7d0, ap_0050d7d0));
