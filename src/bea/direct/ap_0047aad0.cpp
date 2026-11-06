// auto-ported from 0047aad0_vslot9.c (CGillMHeadAI::vslot9, 1264 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xc0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CGillMHeadAI;
typedef char Mat34;
typedef char Vec3;
typedef char fStack_1c;
typedef char fStack_2c;
typedef char fStack_88;
typedef char fStack_8c;
typedef char fStack_90;
typedef char fStack_98;
typedef char fStack_9c;
typedef char fStack_a0;
typedef char fStack_a8;
typedef char fStack_ac;
typedef char fStack_b0;
typedef char fStack_c;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Vec3* (BEA_THISCALL* FUN_00401ee0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ee0_t> FUN_00401ee0 = {(FUN_00401ee0_t)0x00401ee0};
typedef Mat34* (BEA_THISCALL* FUN_00401f10_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401f10_t> FUN_00401f10 = {(FUN_00401f10_t)0x00401f10};
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef uint32_t (BEA_THISCALL* FUN_0040d1f0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d1f0_t> FUN_0040d1f0 = {(FUN_0040d1f0_t)0x0040d1f0};
typedef Vec3* (BEA_THISCALL* FUN_0040d2c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d2c0_t> FUN_0040d2c0 = {(FUN_0040d2c0_t)0x0040d2c0};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef uint32_t (BEA_THISCALL* FUN_004fb650_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fb650_t> FUN_004fb650 = {(FUN_004fb650_t)0x004fb650};
typedef uint32_t (BEA_THISCALL* FUN_004fce80_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fce80_t> FUN_004fce80 = {(FUN_004fce80_t)0x004fce80};
typedef undefined4 (BEA_THISCALL* FUN_004fd760_t)(uint32_t);
static const bea_guard<FUN_004fd760_t> FUN_004fd760 = {(FUN_004fd760_t)0x004fd760};

static void BEA_THISCALL ap_0047aad0(CGillMHeadAI * this_, undefined4 param_1)
{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float10 fVar9;
  float10 fVar10;
  undefined1 *puVar11;

  alignas(16) uint8_t bea_frame_[0xc0] = {};   // the original stack frame (emulate_frame)
  float &local_b4 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xb4);
  float &fStack_b0 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xb0);
  float &fStack_ac = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xac);
  float &fStack_a8 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xa8);
  float &fStack_a0 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xa0);
  float &fStack_9c = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x9c);
  float &fStack_98 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x98);
  float &fStack_90 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x90);
  float &fStack_8c = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x8c);
  float &fStack_88 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x88);
  float &fStack_80 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x80);
  float &fStack_7c = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x7c);
  float &fStack_78 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x78);
  float &fStack_70 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x70);
  float &fStack_6c = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x6c);
  undefined1 (&auStack_60)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xc0 - 0x60);
  undefined1 (&auStack_50)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xc0 - 0x50);
  undefined1 (&auStack_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xc0 - 0x40);
  undefined1 (&auStack_30)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0xc0 - 0x30);
  float &fStack_2c = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x2c);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x1c);
  float &fStack_c = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xc);
  if ((*(byte *)(*(int *)(this_ + 8) + 0x2c) & 4) == 0) {
    local_b4 = 0.0f;
    bea_vcall<uint32_t>(this_, 0xc);
    if (*(int **)(this_ + 0xc) == (int *)0x0) {
      fVar10 = (float10)local_b4;
    }
    else {
      bea_vcall<uint32_t>(*(int **)(this_ + 0xc), 0x168, &fStack_80);
      iVar2 = *(int *)(this_ + 8);
      FUN_00401ec0(bea_arg(&fStack_70), bea_arg(fStack_80 - *(float *)(iVar2 + 0x1c)), bea_arg(fStack_7c - *(float *)(iVar2 + 0x20)), bea_arg(fStack_78 - *(float *)(iVar2 + 0x24)));
      fVar10 = (float10)fpatan((float10)fStack_70,(float10)fStack_6c);
      fVar10 = -fVar10;
    }
    fVar1 = *(float *)(*(int *)(*(int *)(this_ + 8) + 0x26c) + 0x114);
    fVar9 = (float10)fVar1;
    if (((float10)-1.5707964f <= fVar10) || (fVar1 <= 1.5707964f)) {
      if (((float10)1.5707964f < fVar10) && (fVar1 < -1.5707964f)) {
        fVar9 = (float10)fVar1 + (float10)6.2831855f;
      }
    }
    else {
      fVar9 = (float10)fVar1 - (float10)6.2831855f;
    }
    if ((float10)0.7853982f < ABS(fVar10 - fVar9)) {
      FUN_00401000(bea_arg(this_ + 0xc), bea_arg(0));
    }
    iVar2 = FUN_004fd760(bea_arg(*(void **)(this_ + 8)));
    if (iVar2 == 0) {
      iVar2 = *(int *)(this_ + 8);
      uVar3 = FUN_00401ec0(bea_arg(auStack_40), bea_arg(0), bea_arg(0x41200000), bea_arg(0));
      puVar11 = auStack_50;
      pvVar6 = (void *)FUN_0040d1f0(bea_arg(auStack_30), bea_arg(fVar1), bea_arg(0), bea_arg(0));
      uVar3 = FUN_0040d2c0(bea_arg(pvVar6), bea_arg(puVar11), bea_arg(uVar3));
    }
    else {
      fVar10 = (float10)bea_vcall<float10>(*(int **)(this_ + 8), 0x170);
      if (*(int *)(this_ + 0x60) == 0) {
        fVar9 = (float10)fVar1 - (float10)0.3f;
        local_b4 = -0.3f;
        if (((float10)-1.5707964f <= fVar10) || (fVar9 <= (float10)1.5707964f)) {
          if (((float10)1.5707964f < fVar10) && (fVar9 < (float10)-1.5707964f)) {
            fVar9 = fVar9 + (float10)6.2831855f;
          }
        }
        else {
          fVar9 = fVar9 - (float10)6.2831855f;
        }
        if (ABS(fVar10 - fVar9) < (float10)0.01f) {
          *(undefined4 *)(this_ + 0x60) = 1;
        }
      }
      else {
        fVar9 = (float10)fVar1 + (float10)0.3f;
        local_b4 = 0.3f;
        if (((float10)-1.5707964f <= fVar10) || (fVar9 <= (float10)1.5707964f)) {
          if (((float10)1.5707964f < fVar10) && (fVar9 < (float10)-1.5707964f)) {
            fVar9 = fVar9 + (float10)6.2831855f;
          }
        }
        else {
          fVar9 = fVar9 - (float10)6.2831855f;
        }
        if (ABS(fVar10 - fVar9) < (float10)0.01f) {
          *(undefined4 *)(this_ + 0x60) = 0;
        }
      }
      FUN_004011b0(bea_arg(&fStack_b0), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
      FUN_004062d0(bea_arg(&fStack_b0), bea_arg(0), bea_arg(0x3eb33333), bea_arg(0));
      iVar2 = *(int *)(this_ + 8);
      pfVar8 = (float *)(iVar2 + 0x3c);
      // class 19: the asm's order (all 9 sums)
      uVar3 = FUN_00401ec0(bea_arg(auStack_60), bea_arg(fStack_90 * *(float *)(iVar2 + 100) +
                           fStack_a0 * *(float *)(iVar2 + 0x60) +
                           fStack_b0 * *(float *)(iVar2 + 0x5c)), bea_arg(fStack_8c * *(float *)(iVar2 + 100) +
                           fStack_9c * *(float *)(iVar2 + 0x60) +
                           fStack_ac * *(float *)(iVar2 + 0x5c)), bea_arg(fStack_a8 * *(float *)(iVar2 + 0x5c) +
                           fStack_88 * *(float *)(iVar2 + 100) +
                           fStack_98 * *(float *)(iVar2 + 0x60)));
      uVar4 = FUN_00401ec0(bea_arg(auStack_50), bea_arg(fStack_90 * *(float *)(iVar2 + 0x54) +
                           fStack_a0 * *(float *)(iVar2 + 0x50) +
                           fStack_b0 * *(float *)(iVar2 + 0x4c)), bea_arg(fStack_8c * *(float *)(iVar2 + 0x54) +
                           fStack_9c * *(float *)(iVar2 + 0x50) +
                           fStack_ac * *(float *)(iVar2 + 0x4c)), bea_arg(fStack_a8 * *(float *)(iVar2 + 0x4c) +
                           fStack_88 * *(float *)(iVar2 + 0x54) +
                           fStack_98 * *(float *)(iVar2 + 0x50)));
      uVar5 = FUN_00401ec0(bea_arg(auStack_40), bea_arg(fStack_90 * *(float *)(iVar2 + 0x44) +
                           fStack_a0 * *(float *)(iVar2 + 0x40) +
                           fStack_b0 * *pfVar8), bea_arg(fStack_ac * *pfVar8 +
                           fStack_8c * *(float *)(iVar2 + 0x44) + fStack_9c * *(float *)(iVar2 + 0x40)), bea_arg(fStack_a8 * *pfVar8 +
                           fStack_88 * *(float *)(iVar2 + 0x44) + fStack_98 * *(float *)(iVar2 + 0x40)));
      FUN_00401f10(bea_arg(auStack_30), bea_arg(uVar5), bea_arg(uVar4), bea_arg(uVar3));
      FUN_00401ec0(bea_arg(&fStack_80), bea_arg(fStack_2c * 100.0f), bea_arg(fStack_1c * 100.0f), bea_arg(fStack_c * 100.0f));
      iVar2 = *(int *)(this_ + 8);
      FUN_00401ec0(bea_arg(&fStack_70), bea_arg(fStack_80 + *(float *)(iVar2 + 0x1c)), bea_arg(fStack_7c + *(float *)(iVar2 + 0x20)), bea_arg(fStack_78 + *(float *)(iVar2 + 0x24)));
      FUN_004fb650(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)(this_ + 0xc)), bea_arg(&fStack_70));
      iVar2 = *(int *)(this_ + 8);
      uVar3 = FUN_00401ec0(bea_arg(auStack_40), bea_arg(0), bea_arg(0x41200000), bea_arg(0));
      puVar11 = auStack_50;
      pvVar6 = (void *)FUN_0040d1f0(bea_arg(auStack_30), bea_arg(local_b4 + fVar1), bea_arg(0), bea_arg(0));
      uVar3 = FUN_0040d2c0(bea_arg(pvVar6), bea_arg(puVar11), bea_arg(uVar3));
    }
    puVar7 = (undefined4 *)FUN_00401ee0(bea_arg((void *)(iVar2 + 0x1c)), bea_arg(auStack_60), bea_arg(uVar3));
    FUN_004fce80(bea_arg(*(void **)(this_ + 8)), bea_arg(*puVar7), bea_arg(puVar7[1]), bea_arg(puVar7[2]), bea_arg(puVar7[3]));
    local_b4 = DAT_00672fd0 + 0.1f;
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(this_), bea_arg(&local_b4), bea_arg(0), bea_arg(0), bea_arg(param_1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047aad0, ap_0047aad0));
