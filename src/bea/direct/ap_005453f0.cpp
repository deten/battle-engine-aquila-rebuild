// auto-ported from 005453f0_FUN_005453f0.c (FUN_005453f0, 24 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_005453f0(void * this_, undefined4 param_1, int param_2)
{
  *(undefined4 *)(*(int *)((int)this_ + 0x24) + 0x10 + param_2 * 0x34) = param_1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005453f0, ap_005453f0));
