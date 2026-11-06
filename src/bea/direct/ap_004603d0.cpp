// auto-ported from 004603d0_vslot0.c (CFEPLevelSelect::vslot0, 191 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CFEPLevelSelect;
#define DAT_0089d94c GLOBAL_AT(int, 0x0089d94c)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef float10 (BEA_CDECL* FUN_0055dfe7_t)(double);
static const bea_guard<FUN_0055dfe7_t> FUN_0055dfe7 = {(FUN_0055dfe7_t)0x0055dfe7};

static undefined4 BEA_THISCALL ap_004603d0(CFEPLevelSelect * this_)
{
  int iVar1;
  CFEPLevelSelect *pCVar2;
  CFEPLevelSelect *pCVar3;
  int iVar4;
  float10 fVar5;
  
  iVar4 = 0;
  *(undefined4 *)(this_ + 0x3468) = 0;
  *(undefined4 *)(this_ + 0x346c) = 0;
  pCVar3 = this_ + 0xcc;
  do {
    iVar1 = 0;
    pCVar2 = pCVar3;
    do {
      if (*(int *)pCVar2 == DAT_0089d94c) {
        *(int *)(this_ + 0x3468) = iVar4;
        *(int *)(this_ + 0x346c) = iVar1;
        goto LAB_00460420;
      }
      iVar1 = iVar1 + 1;
      pCVar2 = pCVar2 + 4;
    } while (BEA_LOOP_GUARD((iVar1 < 6)));
    iVar4 = iVar4 + 1;
    pCVar3 = pCVar3 + 0x18;
  } while (BEA_LOOP_GUARD((iVar4 < 0x32)));
LAB_00460420:
  fVar5 = (float10)FUN_0055dfe7((double)(360.0f / (float)(*(int *)(this_ + 0x345c) + -1)));
  fVar5 = (float10)*(int *)(this_ + 0x3468) * (float10)60.0f -
          (float10)*(int *)(this_ + 0x3468) * fVar5;
  *(float *)(this_ + 0x3464) = (float)fVar5;
  *(float *)(this_ + 0x3460) = (float)fVar5;
  fVar5 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  *(float *)(this_ + 0x3470) = (float)fVar5;
  fVar5 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  *(float *)(this_ + 0x3474) = (float)fVar5;
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004603d0, ap_004603d0));
