// auto-ported from 00459c10_vslot3.c (CFEPE3LevelSelect::vslot3, 524 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CFEPE3LevelSelect;
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
#define DAT_0089d94c GLOBAL_AT(int, 0x0089d94c)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef float10 (BEA_CDECL* FUN_0055dfe7_t)(double);
static const bea_guard<FUN_0055dfe7_t> FUN_0055dfe7 = {(FUN_0055dfe7_t)0x0055dfe7};

static void BEA_THISCALL ap_00459c10(CFEPE3LevelSelect * this_, undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  iVar1 = *(int *)(this_ + 0x3468);
  iVar2 = *(int *)(this_ + 0x346c);
  iVar3 = *(int *)(this_ + (iVar2 + iVar1 * 6) * 4 + 0xcc);
  switch(param_1) {
  case 0x2a:
    *(int *)(this_ + 0x346c) = iVar2 + 1;
    if (*(int *)(this_ + iVar1 * 4 + 4) <= iVar2 + 1) {
      *(int *)(this_ + 0x346c) = *(int *)(this_ + iVar1 * 4 + 4) + -1;
    }
    FUN_00468770(0);
    break;
  case 0x2b:
    *(int *)(this_ + 0x346c) = iVar2 + -1;
    if (iVar2 + -1 < 0) {
      *(undefined4 *)(this_ + 0x346c) = 0;
    }
    FUN_00468770(0);
    break;
  case 0x2c:
    FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(5), bea_arg(0x1e));
    FUN_00468770(1);
    DAT_0089d94c = *(undefined4 *)
                    (this_ + (*(int *)(this_ + 0x346c) + *(int *)(this_ + 0x3468) * 6) * 4 + 0xcc);
    break;
  default:
    goto switchD_00459c5e_caseD_2d;
  case 0x2e:
    FUN_00468770(2);
    FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0xc), bea_arg(0));
    break;
  case 0x36:
    *(int *)(this_ + 0x3468) = iVar1 + -1;
    if (iVar1 + -1 < 0) {
      *(undefined4 *)(this_ + 0x3468) = 0;
    }
    FUN_00468770(0);
    break;
  case 0x37:
    *(int *)(this_ + 0x3468) = iVar1 + 1;
    if (*(int *)(this_ + 0x345c) <= iVar1 + 1) {
      *(int *)(this_ + 0x3468) = *(int *)(this_ + 0x345c) + -1;
    }
    FUN_00468770(0);
  }
  *(undefined4 *)(this_ + 0x347c) = 0;
switchD_00459c5e_caseD_2d:
  if (*(int *)(this_ + *(int *)(this_ + 0x3468) * 4 + 4) <= *(int *)(this_ + 0x346c)) {
    *(int *)(this_ + 0x346c) = *(int *)(this_ + *(int *)(this_ + 0x3468) * 4 + 4) + -1;
  }
  fVar4 = (float10)FUN_0055dfe7((double)(300.0f / (float)(*(int *)(this_ + 0x345c) + -1)));
  fVar5 = (float10)*(int *)(this_ + 0x3468);
  *(float *)(this_ + 0x3464) = (float)(fVar5 * (float10)100.0f - fVar5 * fVar4);
  if ((*(int *)(this_ + 0x3468) != iVar1) || (*(int *)(this_ + 0x346c) != iVar2)) {
    fVar4 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
    *(float *)(this_ + 0x3474) = (float)fVar4;
  }
  if (*(int *)(this_ + (*(int *)(this_ + 0x346c) + *(int *)(this_ + 0x3468) * 6) * 4 + 0xcc) / 100 !=
      iVar3 / 100) {
    fVar4 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
    *(float *)(this_ + 0x3470) = (float)fVar4;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00459c10, ap_00459c10));
