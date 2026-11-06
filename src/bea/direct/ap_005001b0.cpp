// auto-ported from 005001b0_FUN_005001b0.c (FUN_005001b0, 48 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_005001b0(void * this_, int *param_1)
{
  undefined4 uVar1;
  
  if (*(int *)((int)this_ + 0x24) != 0) {
    *param_1 = *(int *)((int)this_ + 0x24);
    *(undefined1 *)((int)this_ + 0x28) = 1;
    return 0;
  }
  uVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 8), 0x2c, *(int **)((int)this_ + 8),0,0,param_1,0x800);
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005001b0, ap_005001b0));
