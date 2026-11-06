// auto-ported from 004f5b80_FUN_004f5b80.c (FUN_004f5b80, 24 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (8 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_004f5b80(void * this_, undefined4 param_1, int param_2, undefined4 *param_3)
{
  *param_3 = param_1;
  *(undefined4 **)((int)this_ + param_2 * 4 + 0xc) = param_3 + 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f5b80, ap_004f5b80));
