// auto-ported from 004669a0_vslot3.c (CFrontEnd::vslot3, 264 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFrontEnd;
#define DAT_00675688 GLOBAL_AT(int, 0x00675688)
typedef uint32_t (BEA_THISCALL* FUN_0044dd60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044dd60_t> FUN_0044dd60 = {(FUN_0044dd60_t)0x0044dd60};
typedef undefined4 (BEA_THISCALL* FUN_0044dea0_t)(uint32_t);
static const bea_guard<FUN_0044dea0_t> FUN_0044dea0 = {(FUN_0044dea0_t)0x0044dea0};

static void BEA_THISCALL ap_004669a0(CFrontEnd * this_, int param_1, int param_2, undefined4 param_3)
{
  int iVar1;
  int iVar2;
  CFrontEnd *pCVar3;
  
  iVar1 = *(int *)(this_ + 0x274);
  if ((iVar1 == -1) && (param_2 == 0x2c)) {
    iVar1 = 0;
    pCVar3 = this_ + 0xbe0c;
    do {
      if (param_1 == *(int *)pCVar3) goto LAB_004669d4;
      iVar1 = iVar1 + 1;
      pCVar3 = pCVar3 + 4;
    } while (BEA_LOOP_GUARD((iVar1 < 2)));
    iVar1 = 0;
LAB_004669d4:
    *(int *)(this_ + 0x274) = iVar1;
  }
  else if ((iVar1 != -1) && (*(int *)(this_ + 0x1f8) != 0xf)) {
    iVar2 = 0;
    pCVar3 = this_ + 0xbe0c;
    do {
      if (param_1 == *(int *)pCVar3) goto LAB_00466a01;
      iVar2 = iVar2 + 1;
      pCVar3 = pCVar3 + 4;
    } while (BEA_LOOP_GUARD((iVar2 < 2)));
    iVar2 = 0;
LAB_00466a01:
    if (iVar2 != iVar1) {
      return;
    }
  }
  iVar1 = 0;
  pCVar3 = this_ + 0xbe0c;
  do {
    if (param_1 == *(int *)pCVar3) goto LAB_00466a20;
    iVar1 = iVar1 + 1;
    pCVar3 = pCVar3 + 4;
  } while (BEA_LOOP_GUARD((iVar1 < 2)));
  iVar1 = 0;
LAB_00466a20:
  *(int *)(this_ + 0xbe08) = iVar1;
  if ((param_2 == 0x2d) && (*(int *)(this_ + 0x1f8) != -1)) {
    *(uint *)(this_ + 0xbe24) = (uint)(*(int *)(this_ + 0xbe24) == 0);
    bea_vcall<uint32_t>(*(int **)(this_ + *(int *)(this_ + 0x1f8) * 4 + 0x214), 0xc, 0x2d,param_3);
    return;
  }
  iVar1 = FUN_0044dea0(bea_arg(&DAT_00675688));
  if (iVar1 == 0) {
    if (*(int *)(this_ + 0x1f8) != -1) {
      bea_vcall<uint32_t>(*(int **)(this_ + *(int *)(this_ + 0x1f8) * 4 + 0x214), 0xc, param_2,param_3);
    }
    return;
  }
  FUN_0044dd60(bea_arg(&DAT_00675688), bea_arg(param_2), bea_arg(param_3));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004669a0, ap_004669a0));
