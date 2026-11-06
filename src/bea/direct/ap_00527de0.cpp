// auto-ported from 00527de0_FUN_00527de0.c (FUN_00527de0, 21 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00854dd8 GLOBAL_AT(char, 0x00854dd8)
#define DAT_00854dd9 GLOBAL_AT(char, 0x00854dd9)

static void BEA_THISCALL ap_00527de0(void * this_)
{
  DAT_00854dd8 = 0;
  DAT_00854dd9 = *(int *)((int)this_ + 0x10) == 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00527de0, ap_00527de0));
