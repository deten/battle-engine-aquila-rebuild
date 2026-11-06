// auto-ported from 00414610_FUN_00414610.c (FUN_00414610, 22 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_00414030_t)(void *);
static const bea_guard<FUN_00414030_t> FUN_00414030 = {(FUN_00414030_t)0x00414030};

static undefined4 BEA_THISCALL ap_00414610(void * this_)
{
  int iVar1;

  iVar1 = FUN_00414030(this_);
  if (iVar1 != 0) {
    return *(undefined4 *)(*(int *)(iVar1 + 0xa4) + 0x38);
  }
  return 0;
}

// @autoport-registration (verified: 4383 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00414610, ap_00414610));
