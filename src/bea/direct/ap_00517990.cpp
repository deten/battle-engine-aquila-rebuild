// auto-ported from 00517990_FUN_00517990.c (FUN_00517990, 27 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_00517990(void * this_, int param_1)
{
  int *piVar1;
  
  piVar1 = *(int **)((int)this_ + *(int *)(param_1 + 4) * 4 + 0xc4);
  if (piVar1 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar1, 0x48, piVar1);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00517990, ap_00517990));
