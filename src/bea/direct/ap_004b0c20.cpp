// auto-ported from 004b0c20_FUN_004b0c20.c (FUN_004b0c20, 24 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 * BEA_THISCALL ap_004b0c20(void * this_, undefined4 *param_1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this_ + 0x28);
  uVar2 = *(undefined4 *)((int)this_ + 0x18);
  *param_1 = *(undefined4 *)((int)this_ + 8);
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  return (undefined4 *)(param_1);
  return (undefined4 *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b0c20, ap_004b0c20));
