// auto-ported from 004d6e00_FUN_004d6e00.c (FUN_004d6e00, 121 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_0040c5b0_t)(void *);
static const bea_guard<FUN_0040c5b0_t> FUN_0040c5b0 = {(FUN_0040c5b0_t)0x0040c5b0};
typedef undefined4 (BEA_THISCALL* FUN_0040c5e0_t)(void *);
static const bea_guard<FUN_0040c5e0_t> FUN_0040c5e0 = {(FUN_0040c5e0_t)0x0040c5e0};

static undefined4 BEA_THISCALL ap_004d6e00(void * this_, void *param_1)
{
  int iVar1;
  
  iVar1 = FUN_0040c5b0(param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_0040c5e0(param_1), iVar1 == 0)) {
    return 0;
  }
  iVar1 = *(int *)((int)param_1 + 0x138);
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)((int)this_ + 8) + 0x138);
    if ((iVar1 != 0) && (iVar1 != 6)) {
      return 0;
    }
  }
  else {
    if (iVar1 == 1) {
      iVar1 = *(int *)(*(int *)((int)this_ + 8) + 0x138);
      if (iVar1 == 1) {
        return 1;
      }
      iVar1 = iVar1 + -6;
    }
    else {
      if (iVar1 != 6) {
        return 0;
      }
      iVar1 = *(int *)(*(int *)((int)this_ + 8) + 0x138);
      if (iVar1 == 1) {
        return 1;
      }
    }
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}

// @autoport-registration (verified: 55 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004d6e00, ap_004d6e00));
