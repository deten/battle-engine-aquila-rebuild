// auto-ported from 005179b0_FUN_005179b0.c (FUN_005179b0, 101 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (9 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_005179b0(void * this_, int param_1, undefined4 param_2)
{
  int *piVar1;
  
  piVar1 = *(int **)((int)this_ + *(int *)(param_1 + 4) * 4 + 0xc4);
  if (piVar1 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar1, 0x48, piVar1);
    piVar1 = *(int **)((int)this_ + *(int *)(param_1 + 4) * 4 + 0xc4);
    if (piVar1 != (int *)0x0) {
      bea_vcall<uint32_t>(piVar1, 0x8, piVar1);
      *(undefined4 *)((int)this_ + *(int *)(param_1 + 4) * 4 + 0xc4) = 0;
    }
    piVar1 = *(int **)((int)this_ + *(int *)(param_1 + 4) * 4 + 0x1c4);
    if (piVar1 != (int *)0x0) {
      bea_vcall<uint32_t>(piVar1, 0x8, piVar1);
      *(undefined4 *)((int)this_ + *(int *)(param_1 + 4) * 4 + 0x1c4) = 0;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005179b0, ap_005179b0));
