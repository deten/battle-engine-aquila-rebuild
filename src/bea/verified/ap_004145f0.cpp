// auto-ported from 004145f0_FUN_004145f0.c (FUN_004145f0, 22 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_00414030_t)(uint32_t);
static const bea_guard<FUN_00414030_t> FUN_00414030 = {(FUN_00414030_t)0x00414030};

static undefined4 BEA_THISCALL ap_004145f0(void * this_)
{
  int iVar1;

  iVar1 = FUN_00414030(bea_arg(this_));
  if (iVar1 != 0) {
    return *(undefined4 *)(*(int *)(iVar1 + 0xa4) + 4);
  }
  return 0;
}

// @autoport-registration (verified: 1295 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004145f0, ap_004145f0));
