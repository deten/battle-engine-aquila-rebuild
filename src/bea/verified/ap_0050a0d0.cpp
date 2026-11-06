// auto-ported from 0050a0d0_FUN_0050a0d0.c (FUN_0050a0d0, 15 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint BEA_THISCALL ap_0050a0d0(void * this_, uint param_1)
{
  return *(uint *)((int)this_ + 0xa8) & param_1;
}

// @autoport-registration (verified: 389 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0050a0d0, ap_0050a0d0));
