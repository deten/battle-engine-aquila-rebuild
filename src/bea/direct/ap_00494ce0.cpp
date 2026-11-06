// auto-ported from 00494ce0_vslot4.c (CDestructableSegmentsMotionController::vslot4, 690 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x60: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CDestructableSegmentsMotionController;
typedef char Mat34;
typedef char Vec3;
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Mat34* (BEA_THISCALL* FUN_00401f10_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401f10_t> FUN_00401f10 = {(FUN_00401f10_t)0x00401f10};
typedef float10 (BEA_THISCALL* FUN_00445010_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00445010_t> FUN_00445010 = {(FUN_00445010_t)0x00445010};

static undefined4 BEA_THISCALL ap_00494ce0(CDestructableSegmentsMotionController * this_, int param_1, int param_2, float *param_3, undefined4 param_4)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  float *pfVar17;
  float10 fVar18;
  float10 fVar19;

  alignas(16) uint8_t bea_frame_[0x60] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_60)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x60 - 0x60);
  undefined1 (&local_50)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x60 - 0x50);
  undefined1 (&local_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x60 - 0x40);
  float (&local_30)[12] = *reinterpret_cast<float (*)[12]>(bea_frame_ + 0x60 - 0x30);
  fVar18 = (float10)FUN_00445010(bea_arg(*(void **)(this_ + 0xc)), bea_arg(*(undefined4 *)(param_1 + 0x88)));
  fVar1 = (float)fVar18;
  *(float *)(param_2 + 8) = fVar1 + *(float *)(param_2 + 8);
  if (0.0 < fVar1) {
    fVar18 = (float10)fVar1;
    if (2.0f < fVar1) {
      fVar18 = (float10)2.0f;
    }
    fVar19 = (float10)fcos((float10)0.0);
    fVar1 = (float)fVar19;
    fVar19 = (float10)fsin((float10)0.0);
    fVar2 = (float)fVar19;
    fVar19 = (float10)fcos((float10)(float)(fVar18 * (float10)0.071428575f));
    fVar3 = (float)fVar19;
    fVar19 = (float10)fsin((float10)(float)(fVar18 * (float10)0.071428575f));
    fVar4 = (float)fVar19;
    fVar19 = (float10)fcos(fVar18 * (float10)0.04f);
    fVar5 = (float)fVar19;
    fVar18 = (float10)fsin(fVar18 * (float10)0.04f);
    fVar6 = (float)fVar18;
    fVar7 = (float)((float10)fVar3 * (float10)fVar1 - fVar18 * (float10)fVar4 * (float10)fVar2);
    fVar10 = -(fVar5 * fVar2);
    fVar11 = fVar4 * fVar1 + fVar6 * fVar3 * fVar2;
    fVar8 = (float)((float10)fVar3 * (float10)fVar2 + fVar18 * (float10)fVar4 * (float10)fVar1);
    fVar12 = fVar5 * fVar1;
    fVar1 = fVar4 * fVar2 - fVar6 * fVar3 * fVar1;
    fVar2 = -(fVar5 * fVar4);
    fVar5 = fVar5 * fVar3;
    uVar13 = FUN_00401ec0(bea_arg(local_50), bea_arg(fVar7 * param_3[8] + fVar8 * param_3[9] + fVar2 * param_3[10]), bea_arg(fVar12 * param_3[9] + fVar10 * param_3[8] + fVar6 * param_3[10]), bea_arg(fVar1 * param_3[9] + fVar5 * param_3[10] + fVar11 * param_3[8]));
    uVar14 = FUN_00401ec0(bea_arg(local_60), bea_arg(fVar7 * param_3[4] + fVar8 * param_3[5] + fVar2 * param_3[6]), bea_arg(fVar12 * param_3[5] + fVar10 * param_3[4] + fVar6 * param_3[6]), bea_arg(fVar1 * param_3[5] + fVar5 * param_3[6] + fVar11 * param_3[4]));
    uVar15 = FUN_00401ec0(bea_arg(local_40), bea_arg(fVar7 * *param_3 + fVar8 * param_3[1] + fVar2 * param_3[2]), bea_arg(fVar12 * param_3[1] + fVar10 * *param_3 + fVar6 * param_3[2]), bea_arg(fVar1 * param_3[1] + fVar5 * param_3[2] + fVar11 * *param_3));
    uVar13 = FUN_00401f10(bea_arg(local_30), bea_arg(uVar15), bea_arg(uVar14), bea_arg(uVar13));
    pfVar17 = local_30;
    for (iVar16 = 0xc; BEA_LOOP_GUARD((iVar16 != 0)); iVar16 = iVar16 + -1) {
      *param_3 = *pfVar17;
      pfVar17 = pfVar17 + 1;
      param_3 = param_3 + 1;
    }
    **(undefined4 **)(this_ + 0xc) = 0;
    return uVar13;
  }
  puVar9 = *(undefined4 **)(this_ + 0xc);
  *puVar9 = 0;
  return puVar9;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00494ce0, ap_00494ce0));
