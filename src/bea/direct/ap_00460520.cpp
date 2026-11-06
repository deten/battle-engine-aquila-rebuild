// auto-ported from 00460520_vslot6.c (CFEPLevelSelect::vslot6, 97 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFEPLevelSelect;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};

static int BEA_THISCALL ap_00460520(CFEPLevelSelect * this_, int param_1)
{
  CFEPLevelSelect *pCVar1;
  int iVar2;
  float10 fVar3;
  
  fVar3 = bea_fcast<float10>(FUN_005159e0(bea_arg(&DAT_0088a0a8)));
  *(float *)(this_ + 0x3478) = bea_fcast<float>(fVar3);
  iVar2 = 6;
  pCVar1 = this_ + 0x57c;
  do {
    iVar2 = iVar2 + -1;
    *(undefined4 *)pCVar1 = 0;
    *(undefined4 *)(pCVar1 + 4) = 0;
    *(undefined4 *)(pCVar1 + 8) = 0;
    pCVar1 = pCVar1 + 0x18;
  } while (BEA_LOOP_GUARD((iVar2 != 0)));
  if ((param_1 == 5) || (param_1 == 6)) {
    param_1 = *(int *)(this_ + 0x3468) * 3;
    *(undefined4 *)(this_ + (*(int *)(this_ + 0x346c) + *(int *)(this_ + 0x3468) * 6) * 4 + 0x57c) =
         0x3f800000;
  }
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00460520, ap_00460520));
