// auto-ported from 00414630_FUN_00414630.c (FUN_00414630, 121 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_00414030_t)(uint32_t);
static const bea_guard<FUN_00414030_t> FUN_00414030 = {(FUN_00414030_t)0x00414030};

static undefined4 BEA_THISCALL ap_00414630(void * this_)
{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00414030(bea_arg(this_));
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x9c) != 0)) {
    iVar1 = *(int *)((int)this_ + 0x20);
    iVar2 = *(int *)(*(int *)(iVar2 + 0xa4) + 0x24);
    if (*(int *)(iVar1 + 0x55c + iVar2 * 4) == 0) {
      if (0.0f < *(float *)(iVar1 + 0x52c + iVar2 * 4)) {
        return 1;
      }
    }
    else if ((*(float *)(iVar1 + 0x52c + iVar2 * 4) <
              *(float *)(*(int *)(iVar1 + 0x4b0) + 0x88 + iVar2 * 4)) &&
            (*(int *)(iVar1 + 0x544 + iVar2 * 4) == 0)) {
      return 1;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00414630, ap_00414630));
