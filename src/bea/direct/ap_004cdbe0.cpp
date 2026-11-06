// auto-ported from 004cdbe0_FUN_004cdbe0.c (FUN_004cdbe0, 69 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_004cdbe0(void * this_, int param_1)
{
  if (*(int *)(param_1 + 0x3c) == 0) {
    *(undefined4 *)((int)this_ + 4) = *(undefined4 *)(param_1 + 0x40);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x40) = *(undefined4 *)(param_1 + 0x40);
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    *(undefined4 *)((int)this_ + 8) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cdbe0, ap_004cdbe0));
