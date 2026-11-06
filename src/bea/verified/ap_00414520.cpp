// auto-ported from 00414520_FUN_00414520.c (FUN_00414520, 114 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_00414030_t)(void *);
static const bea_guard<FUN_00414030_t> FUN_00414030 = {(FUN_00414030_t)0x00414030};

static float10 BEA_THISCALL ap_00414520(void * this_)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int local_4;
  
  iVar1 = FUN_00414030(this_);
  if (iVar1 == 0) {
    return (float10)0.0f;
  }
  iVar5 = 0;
  iVar2 = 0;
  piVar3 = (int *)(*(int *)(iVar1 + 0xa4) + 0xc);
  piVar4 = piVar3;
  do {
    if (*piVar4 != -1) {
      iVar5 = iVar2;
    }
    iVar2 = iVar2 + 100;
    piVar4 = piVar4 + 1;
  } while (BEA_LOOP_GUARD(iVar2 < 500));
  if (iVar5 != 0) {
    local_4 = 0;
    iVar5 = 0;
    do {
      if (*piVar3 != -1) {
        local_4 = iVar5;
      }
      iVar5 = iVar5 + 100;
      piVar3 = piVar3 + 1;
    } while (BEA_LOOP_GUARD(iVar5 < 500));
    return (float10)*(float *)(iVar1 + 0x60) / (float10)local_4;
  }
  return (float10)0.0f;
}

// @autoport-registration (verified: 4962 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00414520, ap_00414520));
