// auto-ported from 004060b0_vslot1_t8.c (CBattleEngine::vslot1_t8, 531 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef char CBattleEngine;
typedef undefined4 * (BEA_THISCALL* CActor__vslot1_t8_t)(uint32_t, uint32_t);
static const bea_guard<CActor__vslot1_t8_t> CActor__vslot1_t8 = {(CActor__vslot1_t8_t)0x00401c50};
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef void * (BEA_THISCALL* FUN_0044adb0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044adb0_t> FUN_0044adb0 = {(FUN_0044adb0_t)0x0044adb0};

static float * BEA_THISCALL ap_004060b0(CBattleEngine * this_, float *param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  float (&local_3c)[3] = *reinterpret_cast<float (*)[3]>(bea_frame_ + 0x40 - 0x3c);
  float (&local_30)[12] = *reinterpret_cast<float (*)[12]>(bea_frame_ + 0x40 - 0x30);
  CActor__vslot1_t8(bea_arg((CActor *)this_), bea_arg(local_30));
  iVar5 = *(int *)(this_ + 600);
  if (iVar5 == 2) {
    FUN_0044adb0(bea_arg(local_3c), bea_arg(local_30));
    fVar8 = (float10)fcos((float10)local_3c[0]);
    fVar9 = (float10)fsin((float10)local_3c[0]);
    fVar1 = (float)fVar9;
    fVar9 = (float10)fcos((float10)0.0);
    fVar2 = (float)fVar9;
    fVar10 = (float10)fsin((float10)0.0);
    fVar3 = (float)fVar10;
    fVar4 = (float)fVar9;
    fVar11 = (float10)(float)fVar10;
    fVar9 = fVar11 * (float10)fVar3;
    *param_1 = (float)((float10)fVar2 * fVar8 - fVar9 * (float10)fVar1);
    param_1[1] = -(fVar4 * fVar1);
    fVar11 = fVar11 * (float10)fVar2;
    param_1[2] = (float)((float10)fVar3 * fVar8 + fVar11 * (float10)fVar1);
    param_1[4] = (float)((float10)fVar2 * (float10)fVar1 + fVar9 * fVar8);
    param_1[5] = (float)((float10)fVar4 * fVar8);
    param_1[6] = (float)((float10)fVar3 * (float10)fVar1 - (float10)(float)fVar11 * fVar8);
    param_1[8] = -(fVar4 * fVar3);
    param_1[9] = (float)fVar10;
    param_1[10] = fVar4 * fVar2;
    return (float *)(param_1);
  }
  if (iVar5 == 0) {
    FUN_0044adb0(bea_arg(local_3c), bea_arg(local_30));
    FUN_004062d0(bea_arg(param_1), bea_arg(local_3c[0]), bea_arg(0), bea_arg(0));
    return (float *)(param_1);
  }
  if (iVar5 == 1) {
    FUN_0044adb0(bea_arg(local_3c), bea_arg(local_30));
    fVar8 = (float10)fcos((float10)local_3c[0]);
    fVar9 = (float10)fsin((float10)local_3c[0]);
    fVar1 = (float)fVar9;
    fVar9 = (float10)fcos((float10)0.0);
    fVar2 = (float)fVar9;
    fVar10 = (float10)fsin((float10)0.0);
    fVar3 = (float)fVar10;
    fVar4 = (float)fVar9;
    fVar11 = (float10)(float)fVar10;
    fVar9 = fVar11 * (float10)fVar3;
    *param_1 = (float)((float10)fVar2 * fVar8 - fVar9 * (float10)fVar1);
    param_1[1] = -(fVar4 * fVar1);
    fVar11 = fVar11 * (float10)fVar2;
    param_1[2] = (float)((float10)fVar3 * fVar8 + fVar11 * (float10)fVar1);
    param_1[4] = (float)((float10)fVar2 * (float10)fVar1 + fVar9 * fVar8);
    param_1[5] = (float)((float10)fVar4 * fVar8);
    param_1[6] = (float)((float10)fVar3 * (float10)fVar1 - (float10)(float)fVar11 * fVar8);
    param_1[8] = -(fVar4 * fVar3);
    param_1[9] = (float)fVar10;
    param_1[10] = fVar4 * fVar2;
    return (float *)(param_1);
  }
  pfVar6 = local_30;
  pfVar7 = param_1;
  for (iVar5 = 0xc; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar7 = pfVar7 + 1;
  }
  return (float *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004060b0, ap_004060b0));
