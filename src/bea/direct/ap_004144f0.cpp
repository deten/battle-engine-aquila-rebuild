// auto-ported from 004144f0_FUN_004144f0.c (FUN_004144f0, 37 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_00414030_t)(uint32_t);
static const bea_guard<FUN_00414030_t> FUN_00414030 = {(FUN_00414030_t)0x00414030};

static undefined4 BEA_THISCALL ap_004144f0(void * this_)
{
  int iVar1;
  
  iVar1 = FUN_00414030(bea_arg(this_));
  if (iVar1 != 0) {
    return *(undefined4 *)
            (*(int *)((int)this_ + 0x20) + 0x544 + *(int *)(*(int *)(iVar1 + 0xa4) + 0x24) * 4);
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004144f0, ap_004144f0));
