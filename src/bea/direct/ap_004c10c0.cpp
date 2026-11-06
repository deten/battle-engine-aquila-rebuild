// auto-ported from 004c10c0_FUN_004c10c0.c (FUN_004c10c0, 984 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c6400 GLOBAL_AT(int, 0x009c6400)
typedef float10 (BEA_THISCALL* FUN_004c10c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004c10c0_t> FUN_004c10c0 = {(FUN_004c10c0_t)0x004c10c0};
#define _CIfmod(a0, a1) bea_x87call2(0x0055e3ea, (float10)(a0), (float10)(a1))
typedef int (BEA_CDECL* _rand_t)(void);
static const bea_guard<_rand_t> _rand = {(_rand_t)0x0055dbfe};

static float10 BEA_THISCALL ap_004c10c0(void * this_, float param_1, int param_2)
{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar2 = param_1;
  fVar1 = bea_fcast<float>(DAT_009c6400);
  iVar3 = *(int *)((int)this_ + 4);
  if (iVar3 == 0) {
    return (float10)*(float *)this_;
  }
  if (*(int *)(iVar3 + 0x84) != 0) {
    param_1 = bea_fcast<float>(DAT_009c6400);
    fVar7 = (float10)FUN_004c10c0(bea_arg((void *)(iVar3 + 0x88)), bea_arg(DAT_009c6400), bea_arg(param_2));
    if ((*(int *)(iVar3 + 0x90) != 0) && (param_2 != 0)) {
      param_1 = fVar1 - *(float *)(param_2 + 0x84);
    }
    iVar4 = *(int *)(iVar3 + 0x80);
    uVar5 = *(undefined4 *)(iVar3 + 0x7c);
    fVar8 = _CIfmod((float10)(float)fVar7,(float10)param_1);
    fVar8 = fVar8 / (float10)(float)fVar7;
    fVar1 = (float)fVar8;
    fVar2 = (float)fVar8;
    fVar7 = (float10)FUN_004c10c0(bea_arg((void *)(iVar3 + 100)), bea_arg(fVar1), bea_arg(param_2));
    fVar8 = (float10)FUN_004c10c0(bea_arg((void *)(iVar3 + 0x6c)), bea_arg(fVar1), bea_arg(param_2));
    param_1 = (float)(fVar8 + (float10)(float)(fVar7 * (float10)fVar1));
    switch(uVar5) {
    case 1:
      fVar7 = (float10)param_1 * (float10)param_1;
      break;
    case 2:
      fVar7 = ROUND((float10)1.4426950408889634 * (float10)param_1);
      fVar8 = (float10)f2xm1((float10)1.4426950408889634 * (float10)param_1 - fVar7);
      fVar7 = (float10)fscale((float10)1 + fVar8,fVar7);
      break;
    case 3:
      fVar7 = (float10)fsin((float10)param_1);
      break;
    case 4:
      fVar7 = (float10)fcos((float10)param_1);
      break;
    case 5:
      if (param_1 == 0.0f) goto switchD_004c132e_caseD_7;
      fVar7 = (float10)1.0f / (float10)param_1;
      break;
    case 6:
      fVar7 = (float10)log2((float10)param_1);
      fVar7 = (float10)0.6931471805599453 * fVar7;
      break;
    default:
      goto switchD_004c132e_caseD_7;
    case 10:
      uVar6 = _rand();
      fVar7 = (float10)(int)((uVar6 & 0xff) - 0x80) * (float10)0.0078125f;
    }
    param_1 = (float)fVar7;
switchD_004c132e_caseD_7:
    fVar7 = (float10)FUN_004c10c0(bea_arg((void *)(iVar3 + 0x5c)), bea_arg(fVar2), bea_arg(param_2));
    fVar8 = (float10)FUN_004c10c0(bea_arg((void *)(iVar3 + 0x74)), bea_arg(fVar2), bea_arg(param_2));
    fVar8 = fVar8 + (float10)(float)(fVar7 * (float10)param_1);
    if (iVar4 == 0) {
      if ((float10)1.0f < fVar8) {
        return (float10)1.0f * (float10)*(float *)this_;
      }
      if (fVar8 < (float10)-1.0f) {
        fVar8 = (float10)-1.0f;
      }
    }
    else if (iVar4 == 1) {
      if ((float10)-1.0f < fVar8) {
        fVar7 = _CIfmod((float10)2.0,(float10)(float)fVar8 + (float10)1.0f);
        return (fVar7 - (float10)1.0f) * (float10)*(float *)this_;
      }
      fVar7 = _CIfmod((float10)2.0,-(float10)(float)fVar8 + (float10)1.0f);
      return -(fVar7 - (float10)1.0f) * (float10)*(float *)this_;
    }
    return fVar8 * (float10)*(float *)this_;
  }
  iVar4 = *(int *)(iVar3 + 0x80);
  uVar5 = *(undefined4 *)(iVar3 + 0x7c);
  fVar7 = (float10)FUN_004c10c0(bea_arg((void *)(iVar3 + 100)), bea_arg(param_1), bea_arg(param_2));
  fVar8 = (float10)FUN_004c10c0(bea_arg((void *)(iVar3 + 0x6c)), bea_arg(param_1), bea_arg(param_2));
  param_1 = (float)(fVar8 + (float10)(float)(fVar7 * (float10)param_1));
  switch(uVar5) {
  case 1:
    fVar7 = (float10)param_1 * (float10)param_1;
    break;
  case 2:
    fVar7 = ROUND((float10)1.4426950408889634 * (float10)param_1);
    fVar8 = (float10)f2xm1((float10)1.4426950408889634 * (float10)param_1 - fVar7);
    fVar7 = (float10)fscale((float10)1 + fVar8,fVar7);
    break;
  case 3:
    fVar7 = (float10)fsin((float10)param_1);
    break;
  case 4:
    fVar7 = (float10)fcos((float10)param_1);
    break;
  case 5:
    if (param_1 == 0.0f) goto switchD_004c1131_caseD_7;
    fVar7 = (float10)1.0f / (float10)param_1;
    break;
  case 6:
    fVar7 = (float10)log2((float10)param_1);
    fVar7 = (float10)0.6931471805599453 * fVar7;
    break;
  default:
    goto switchD_004c1131_caseD_7;
  case 10:
    uVar6 = _rand();
    fVar7 = (float10)(int)((uVar6 & 0xff) - 0x80) * (float10)0.0078125f;
  }
  param_1 = (float)fVar7;
switchD_004c1131_caseD_7:
  fVar7 = (float10)FUN_004c10c0(bea_arg((void *)(iVar3 + 0x5c)), bea_arg(fVar2), bea_arg(param_2));
  fVar8 = (float10)FUN_004c10c0(bea_arg((void *)(iVar3 + 0x74)), bea_arg(fVar2), bea_arg(param_2));
  fVar8 = fVar8 + (float10)(float)(fVar7 * (float10)param_1);
  if (iVar4 == 0) {
    if ((float10)1.0f < fVar8) {
      return (float10)1.0f * (float10)*(float *)this_;
    }
    if (fVar8 < (float10)-1.0f) {
      fVar8 = (float10)-1.0f;
    }
  }
  else if (iVar4 == 1) {
    if ((float10)-1.0f < fVar8) {
      fVar7 = _CIfmod((float10)2.0,(float10)(float)fVar8 + (float10)1.0f);
      return (fVar7 - (float10)1.0f) * (float10)*(float *)this_;
    }
    fVar7 = _CIfmod((float10)2.0,-(float10)(float)fVar8 + (float10)1.0f);
    return -(fVar7 - (float10)1.0f) * (float10)*(float *)this_;
  }
  return fVar8 * (float10)*(float *)this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c10c0, ap_004c10c0));
