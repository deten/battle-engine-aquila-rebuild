// auto-ported from 004705e0_FUN_004705e0.c (FUN_004705e0, 100 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (10 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_004705e0(void * this_, int param_1, undefined4 param_2, undefined4 param_3)
{
  int *piVar1;
  
  if (*(int *)((int)this_ + param_1 * 4 + 0x9d0) == 1) {
    if (((char)param_3 != '\0') &&
       (piVar1 = *(int **)((int)this_ + param_1 * 4 + 0x2d4), piVar1 != (int *)0x0)) {
      bea_vcall<uint32_t>(piVar1, 0x20, 1);
    }
    *(undefined4 *)((int)this_ + param_1 * 4 + 0x2d4) = param_2;
    return;
  }
  if (((char)param_3 != '\0') &&
     (piVar1 = *(int **)((int)this_ + param_1 * 4 + 0x2c4), piVar1 != (int *)0x0)) {
    bea_vcall<uint32_t>(piVar1, 0x20, 1);
  }
  *(undefined4 *)((int)this_ + param_1 * 4 + 0x2c4) = param_2;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004705e0, ap_004705e0));
