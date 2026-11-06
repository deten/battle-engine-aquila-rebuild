// auto-ported from 00445010_FUN_00445010.c (FUN_00445010, 85 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static float10 BEA_THISCALL ap_00445010(void * this_, int param_1)
{
  int *piVar1;
  int iVar2;
  
  if (0 < *(int *)((int)this_ + 0x20)) {
    piVar1 = *(int **)(*(int *)((int)this_ + 4) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      if ((param_1 != 0) &&
         (piVar1 = *(int **)(*(int *)((int)this_ + 0x10) + 0x30), piVar1 != (int *)0x0)) {
        bea_vcall<uint32_t>(piVar1, 0x24);
      }
    }
    else {
      iVar2 = bea_vcall<uint32_t>(piVar1, 0x14);
      if (iVar2 == 0) {
        return bea_fcast<float10>(bea_fcast<float>(piVar1[0x11]));
      }
    }
  }
  return bea_fcast<float10>(0.0f);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00445010, ap_00445010));
