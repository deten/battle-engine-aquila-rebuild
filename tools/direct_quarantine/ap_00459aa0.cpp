// auto-ported from 00459aa0_vslot6.c (CFEPE3LevelSelect::vslot6, 83 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFEPE3LevelSelect;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};

static int BEA_THISCALL ap_00459aa0(CFEPE3LevelSelect * this_, int param_1)
{
  int iVar1;
  CFEPE3LevelSelect *pCVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  *(float *)(this_ + 0x3478) = (float)fVar3;
  pCVar2 = this_ + 0x57c;
  for (iVar1 = 300; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = 0;
    pCVar2 = pCVar2 + 4;
  }
  if ((param_1 == 5) || (param_1 == 6)) {
    param_1 = *(int *)(this_ + 0x3468) * 3;
    *(undefined4 *)(this_ + (*(int *)(this_ + 0x346c) + *(int *)(this_ + 0x3468) * 6) * 4 + 0x57c) =
         0x3f800000;
  }
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00459aa0, ap_00459aa0));
