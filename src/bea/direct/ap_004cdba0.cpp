// auto-ported from 004cdba0_FUN_004cdba0.c (FUN_004cdba0, 49 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_004cdba0(void * this_, int param_1)
{
  if (*(int *)((int)this_ + 8) == 0) {
    *(int *)((int)this_ + 8) = param_1;
    *(int *)((int)this_ + 4) = param_1;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    return;
  }
  *(int *)(*(int *)((int)this_ + 8) + 0x40) = param_1;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)((int)this_ + 8);
  *(int *)((int)this_ + 8) = param_1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cdba0, ap_004cdba0));
