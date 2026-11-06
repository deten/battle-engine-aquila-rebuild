// auto-ported from 00414470_FUN_00414470.c (FUN_00414470, 65 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_00414030_t)(uint32_t);
static const bea_guard<FUN_00414030_t> FUN_00414030 = {(FUN_00414030_t)0x00414030};

static undefined4 BEA_THISCALL ap_00414470(void * this_)
{
  int iVar1;
  undefined4 local_8;
  
  iVar1 = FUN_00414030(bea_arg(this_));
  if (iVar1 != 0) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0xa4) + 0x24);
    if (*(int *)(*(int *)((int)this_ + 0x20) + 0x55c + iVar1 * 4) == 0) {
      local_8 = (undefined4)
                (longlong)ROUND(*(float *)(*(int *)((int)this_ + 0x20) + 0x52c + iVar1 * 4));
      return local_8;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00414470, ap_00414470));
