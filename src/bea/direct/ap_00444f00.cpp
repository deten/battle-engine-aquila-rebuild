// auto-ported from 00444f00_FUN_00444f00.c (FUN_00444f00, 27 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_00444f00(void * this_, int param_1)
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(*(int *)((int)this_ + 4) + param_1 * 4);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar2 = bea_vcall<uint32_t>(piVar1, 0x10);
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00444f00, ap_00444f00));
