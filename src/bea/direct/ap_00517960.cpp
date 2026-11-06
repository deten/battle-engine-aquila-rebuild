// auto-ported from 00517960_FUN_00517960.c (FUN_00517960, 48 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_00517960(void * this_, int param_1)
{
  int *piVar1;
  
  piVar1 = *(int **)((int)this_ + *(int *)(param_1 + 4) * 4 + 0xc4);
  if (piVar1 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar1, 0x30, piVar1,0,0,*(char *)(param_1 + 0x18) != '\0');
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00517960, ap_00517960));
