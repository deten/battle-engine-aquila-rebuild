// auto-ported from 00421970_FUN_00421970.c (FUN_00421970, 12 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_00421970(void * this_, int param_1)
{
  return (void *)((void *)(param_1 * 0x40 + (int)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00421970, ap_00421970));
