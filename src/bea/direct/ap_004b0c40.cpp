// auto-ported from 004b0c40_FUN_004b0c40.c (FUN_004b0c40, 130 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
// @hand-fixed 2026-10-28: float sums in the asm's order (bug class 19, tools/check_fp_order.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static int BEA_THISCALL ap_004b0c40(void * this_, float param_1, float param_2, float param_3, undefined4 param_4)
{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float local_4;
  
  if ((*(undefined4 **)((int)this_ + 0x84) != (undefined4 *)0x0) &&
     (pfVar2 = (float *)**(undefined4 **)((int)this_ + 0x84), pfVar2 != (float *)0x0)) {
    iVar4 = 0;
    iVar3 = 0;
    local_4 = 99999.0;
    if (0 < *(int *)((int)this_ + 0xac)) {
      do {
        fVar1 = SQRT((pfVar2[1] - param_2) * (pfVar2[1] - param_2) +
                     (pfVar2[2] - param_3) * (pfVar2[2] - param_3) +
                     (*pfVar2 - param_1) * (*pfVar2 - param_1));
        if (fVar1 < local_4) {
          iVar4 = iVar3;
          local_4 = fVar1;
        }
        iVar3 = iVar3 + 1;
        pfVar2 = pfVar2 + 4;
      } while (BEA_LOOP_GUARD((iVar3 < *(int *)((int)this_ + 0xac))));
    }
    return iVar4;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b0c40, ap_004b0c40));
