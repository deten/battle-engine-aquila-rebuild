// auto-ported from 004250f0_FUN_004250f0.c (FUN_004250f0, 800 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x60: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char Mat34;
typedef char Vec3;
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Mat34* (BEA_THISCALL* FUN_00401f10_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401f10_t> FUN_00401f10 = {(FUN_00401f10_t)0x00401f10};

static void BEA_THISCALL ap_004250f0(void * this_)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float10 fVar19;
  float10 fVar20;

  alignas(16) uint8_t bea_frame_[0x60] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_60)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x60 - 0x60);
  undefined1 (&local_50)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x60 - 0x50);
  undefined1 (&local_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x60 - 0x40);
  float (&local_30)[12] = *reinterpret_cast<float (*)[12]>(bea_frame_ + 0x60 - 0x30);
  iVar15 = *(int *)((int)this_ + 0x110);
  if ((iVar15 != 0) && ((*(byte *)(iVar15 + 0x2c) & 4) == 0)) {
    fVar19 = (float10)fcos((float10)*(float *)((int)this_ + 0xa0));
    pfVar18 = (float *)((int)this_ + 0x2c);
    pfVar16 = (float *)((int)this_ + 0xb0);
    pfVar17 = pfVar18;
    for (iVar14 = 0xc; BEA_LOOP_GUARD((iVar14 != 0)); iVar14 = iVar14 + -1) {
      *pfVar17 = *pfVar16;
      pfVar16 = pfVar16 + 1;
      pfVar17 = pfVar17 + 1;
    }
    fVar1 = *(float *)(iVar15 + 0x278);
    fVar2 = *(float *)(iVar15 + 0x278);
    fVar3 = *(float *)(iVar15 + 0x280);
    if (-0.01f <= *(float *)((int)this_ + 0xa4)) {
      if (*(float *)((int)this_ + 0xa4) <= 0.01f) {
        *(undefined4 *)((int)this_ + 0xa4) = 0;
      }
      else {
        *(float *)((int)this_ + 0xa4) = *(float *)((int)this_ + 0xa4) - 0.01f;
      }
    }
    else {
      *(float *)((int)this_ + 0xa4) = *(float *)((int)this_ + 0xa4) + 0.01f;
    }
    if (-0.01f <= *(float *)((int)this_ + 0xa8)) {
      if (*(float *)((int)this_ + 0xa8) <= 0.01f) {
        *(undefined4 *)((int)this_ + 0xa8) = 0;
      }
      else {
        *(float *)((int)this_ + 0xa8) = *(float *)((int)this_ + 0xa8) - 0.01f;
      }
    }
    else {
      *(float *)((int)this_ + 0xa8) = *(float *)((int)this_ + 0xa8) + 0.01f;
    }
    fVar19 = (fVar19 * (float10)*(float *)((int)this_ + 0x9c) - (float10)fVar1) +
             (float10)*(float *)((int)this_ + 0xa8);
    fVar5 = fVar3 * -2.0f + *(float *)((int)this_ + 0xa4);
    fVar20 = (float10)fcos((float10)-fVar2);
    fVar1 = (float)fVar20;
    fVar20 = (float10)fsin((float10)-fVar2);
    fVar2 = (float)fVar20;
    fVar20 = (float10)fcos(fVar19);
    fVar3 = (float)fVar20;
    fVar19 = (float10)fsin(fVar19);
    fVar20 = (float10)fcos((float10)fVar5);
    fVar4 = (float)fVar20;
    fVar20 = (float10)fsin((float10)fVar5);
    fVar5 = (float)fVar20;
    fVar6 = (float)((float10)fVar3 * (float10)fVar1 - fVar20 * fVar19 * (float10)fVar2);
    fVar9 = -(fVar4 * fVar2);
    fVar7 = (float)(fVar19 * (float10)fVar1 + (float10)fVar5 * (float10)fVar3 * (float10)fVar2);
    fVar8 = (float)((float10)fVar3 * (float10)fVar2 + fVar20 * fVar19 * (float10)fVar1);
    fVar10 = fVar4 * fVar1;
    fVar1 = (float)(fVar19 * (float10)fVar2 -
                   (float10)(float)((float10)fVar5 * (float10)fVar3) * (float10)fVar1);
    fVar2 = (float)-((float10)fVar4 * fVar19);
    fVar4 = fVar4 * fVar3;
    // class 19: the asm's order (all 9 sums; the third vector's terms come in another order)
    uVar11 = FUN_00401ec0(bea_arg(local_50), bea_arg(fVar2 * *(float *)((int)this_ + 0x54) + fVar8 * *(float *)((int)this_ + 0x50) +
                          fVar6 * *(float *)((int)this_ + 0x4c)), bea_arg(fVar5 * *(float *)((int)this_ + 0x54) + fVar10 * *(float *)((int)this_ + 0x50) +
                          fVar9 * *(float *)((int)this_ + 0x4c)), bea_arg(fVar4 * *(float *)((int)this_ + 0x54) + fVar1 * *(float *)((int)this_ + 0x50) +
                          fVar7 * *(float *)((int)this_ + 0x4c)));
    uVar12 = FUN_00401ec0(bea_arg(local_60), bea_arg(fVar2 * *(float *)((int)this_ + 0x44) + fVar8 * *(float *)((int)this_ + 0x40) +
                          fVar6 * *(float *)((int)this_ + 0x3c)), bea_arg(fVar5 * *(float *)((int)this_ + 0x44) + fVar10 * *(float *)((int)this_ + 0x40) +
                          fVar9 * *(float *)((int)this_ + 0x3c)), bea_arg(fVar4 * *(float *)((int)this_ + 0x44) + fVar1 * *(float *)((int)this_ + 0x40) +
                          fVar7 * *(float *)((int)this_ + 0x3c)));
    uVar13 = FUN_00401ec0(bea_arg(local_40), bea_arg(fVar6 * *pfVar18 + fVar2 * *(float *)((int)this_ + 0x34) +
                          fVar8 * *(float *)((int)this_ + 0x30)), bea_arg(fVar9 * *pfVar18 + fVar5 * *(float *)((int)this_ + 0x34) +
                          fVar10 * *(float *)((int)this_ + 0x30)), bea_arg(fVar7 * *pfVar18 + fVar4 * *(float *)((int)this_ + 0x34) +
                          fVar1 * *(float *)((int)this_ + 0x30)));
    FUN_00401f10(bea_arg(local_30), bea_arg(uVar13), bea_arg(uVar12), bea_arg(uVar11));
    pfVar16 = local_30;
    for (iVar15 = 0xc; BEA_LOOP_GUARD((iVar15 != 0)); iVar15 = iVar15 + -1) {
      *pfVar18 = *pfVar16;
      pfVar16 = pfVar16 + 1;
      pfVar18 = pfVar18 + 1;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004250f0, ap_004250f0));
