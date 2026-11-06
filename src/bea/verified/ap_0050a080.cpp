// auto-ported from 0050a080_FUN_0050a080.c (FUN_0050a080, 35 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)

static undefined4 BEA_THISCALL ap_0050a080(void * this_)
{
  if ((*(int *)((int)this_ + 0xa0) != 0) && (DAT_00672fd0 <= *(float *)((int)this_ + 100))) {
    return 0;
  }
  return 1;
}

// @autoport-registration (verified: 87902 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0050a080, ap_0050a080));
