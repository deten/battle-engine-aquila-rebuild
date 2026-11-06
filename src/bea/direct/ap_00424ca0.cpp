// auto-ported from 00424ca0_FUN_00424ca0.c (FUN_00424ca0, 1095 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xa0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char Vec3;
typedef char fStack_74;
typedef char fStack_78;
typedef char fStack_98;
typedef char fStack_9c;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef int (BEA_THISCALL* FUN_00401fd0_t)(uint32_t);
static const bea_guard<FUN_00401fd0_t> FUN_00401fd0 = {(FUN_00401fd0_t)0x00401fd0};
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef undefined4 (BEA_THISCALL* FUN_00408120_t)(uint32_t);
static const bea_guard<FUN_00408120_t> FUN_00408120 = {(FUN_00408120_t)0x00408120};
typedef uint32_t (BEA_THISCALL* FUN_0040d320_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d320_t> FUN_0040d320 = {(FUN_0040d320_t)0x0040d320};
typedef float * (BEA_FASTCALL* FUN_0047ec60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0047ec60_t> FUN_0047ec60 = {(FUN_0047ec60_t)0x0047ec60};

static void BEA_THISCALL ap_00424ca0(void * this_)
{
  void *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *this_01;
  float10 fVar7;
  float10 fVar8;

  alignas(16) uint8_t bea_frame_[0xa0] = {};   // the original stack frame (emulate_frame)
  float &local_a0 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0xa0);
  float &fStack_9c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x9c);
  float &fStack_98 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x98);
  undefined4 &uStack_94 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x94);
  float &local_90 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x90);
  float &local_8c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x8c);
  float &local_88 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x88);
  float &local_84 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x84);
  undefined4 &uStack_80 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x80);
  float &fStack_7c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x7c);
  float &fStack_78 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x78);
  float &fStack_74 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x74);
  float &local_6c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x6c);
  float &local_68 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x68);
  float &local_64 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x64);
  undefined1 (&auStack_60)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xa0 - 0x60);
  undefined4 &local_50 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x4c);
  undefined4 &local_48 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x48);
  undefined4 &local_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x44);
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x3c);
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x34);
  undefined1 (&auStack_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0xa0 - 0x30);
  this_00 = *(void **)((int)this_ + 0x110);
  if ((this_00 != (void *)0x0) && ((*(byte *)((int)this_00 + 0x2c) & 4) == 0)) {
    fVar7 = bea_fcast<float10>(fcos(bea_fcast<float10>(*(float *)((int)this_ + 0xa0))));
    this_01 = (undefined4 *)((int)this_ + 0x2c);
    puVar4 = (undefined4 *)((int)this_ + 0xb0);
    puVar6 = this_01;
    for (iVar5 = 0xc; ((iVar5 != 0)); iVar5 = iVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    local_64 = bea_fcast<float>((fVar7 * bea_fcast<float10>(*(float *)((int)this_ + 0x9c)) -
                      bea_fcast<float10>(*(float *)((int)this_00 + 0x278))));
    local_68 = -*(float *)((int)this_00 + 0x278);
    local_90 = *(float *)((int)this_00 + 0x280) * -2.0f;
    iVar5 = FUN_00408120(bea_arg(this_00));
    if (iVar5 != 0) {
      fVar7 = bea_fcast<float10>(*(float *)(*(int *)(*(int *)((int)this_ + 0x110) + 0x578) + 0x24));
      fVar8 = bea_fcast<float10>(fcos(fVar7));
      local_64 = bea_fcast<float>((fVar8 * bea_fcast<float10>(0.02f) + bea_fcast<float10>(local_64)));
      fVar7 = bea_fcast<float10>(fcos(fVar7 + fVar7));
      fVar7 = fVar7 * bea_fcast<float10>(0.02f);
      if (fVar7 < bea_fcast<float10>(0.0f)) {
        fVar7 = bea_fcast<float10>(0.0f);
      }
      local_90 = bea_fcast<float>((fVar7 + bea_fcast<float10>(local_90)));
      local_68 = bea_fcast<float>(fVar8) * 0.03f + local_68;
    }
    fVar7 = bea_fcast<float10>(*(float *)(*(int *)((int)this_ + 0x110) + 0x114));
    fVar8 = bea_fcast<float10>(fcos(fVar7));
    local_6c = bea_fcast<float>(fVar8);
    local_8c = bea_fcast<float>(fVar8);
    fVar7 = bea_fcast<float10>(fsin(fVar7));
    local_88 = bea_fcast<float>(-fVar7);
    puVar4 = (undefined4 *)FUN_00401ec0(bea_arg(&local_a0), bea_arg(bea_fcast<float>(fVar7)), bea_arg(local_6c), bea_arg(0));
    local_50 = *puVar4;
    local_4c = bea_fcast<float>(puVar4[1]);
    local_48 = puVar4[2];
    local_44 = puVar4[3];
    puVar4 = (undefined4 *)FUN_00401ec0(bea_arg(&local_a0), bea_arg(0), bea_arg(0), bea_arg(0x3f800000));
    local_40 = *puVar4;
    local_84 = bea_fcast<float>(puVar4[1]);
    local_8c = local_88;
    local_38 = puVar4[2];
    local_34 = puVar4[3];
    local_88 = local_4c;
    local_3c = local_84;
    iVar5 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x110), 0x10c);
    if ((iVar5 == 0) || (iVar5 = FUN_00401fd0(bea_arg(*(void **)((int)this_ + 0x110))), iVar5 != 0)) {
      fStack_7c = 0.0f;
      fStack_78 = 0.0f;
      fStack_74 = -1.0f;
    }
    else {
      FUN_0047ec60(bea_arg(&DAT_006fadc8), bea_arg(&local_a0), bea_arg(*(int *)((int)this_ + 0x110) + 0x1c));
      fStack_7c = local_a0;
      fStack_78 = fStack_9c;
      fStack_74 = fStack_98;
    }
    local_a0 = fStack_74 * local_88 - fStack_78 * local_84;
    fStack_9c = local_84 * fStack_7c - fStack_74 * local_8c;
    fStack_98 = fStack_78 * local_8c - local_88 * fStack_7c;
    fVar1 = fStack_9c * fStack_74 - fStack_98 * fStack_78;
    fVar2 = fStack_98 * fStack_7c - fStack_74 * local_a0;
    fVar3 = fStack_78 * local_a0 - fStack_9c * fStack_7c;
    fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
    if (fVar1 != 0.0f) {
      fVar3 = (1.0f / fVar1) * fVar3;
    }
    fVar3 = fVar3 * -0.25f;
    uStack_80 = uStack_94;
    fVar1 = SQRT(local_a0 * local_a0 + fStack_9c * fStack_9c + fStack_98 * fStack_98);
    fVar2 = fStack_98;
    if (fVar1 != 0.0f) {
      fVar2 = (1.0f / fVar1) * fStack_98;
    }
    fVar2 = fVar2 * 0.75f;
    if (fVar3 - 0.01f <= *(float *)((int)this_ + 0xa4)) {
      if (*(float *)((int)this_ + 0xa4) <= fVar3 + 0.01f) {
        *(float *)((int)this_ + 0xa4) = fVar3;
      }
      else {
        *(float *)((int)this_ + 0xa4) = *(float *)((int)this_ + 0xa4) - 0.01f;
      }
    }
    else {
      *(float *)((int)this_ + 0xa4) = *(float *)((int)this_ + 0xa4) + 0.01f;
    }
    if (fVar2 - 0.01f <= *(float *)((int)this_ + 0xa8)) {
      if (fVar2 + 0.01f < *(float *)((int)this_ + 0xa8)) {
        fVar2 = *(float *)((int)this_ + 0xa8) - 0.01f;
      }
    }
    else {
      fVar2 = *(float *)((int)this_ + 0xa8) + 0.01f;
    }
    *(float *)((int)this_ + 0xa8) = fVar2;
    local_6c = local_64 + *(float *)((int)this_ + 0xa8);
    local_90 = local_90 + *(float *)((int)this_ + 0xa4);
    local_8c = local_a0;
    local_88 = fStack_9c;
    local_84 = fStack_98;
    FUN_004011b0(bea_arg(auStack_60), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
    FUN_004062d0(bea_arg(auStack_60), bea_arg(local_68), bea_arg(local_90), bea_arg(local_6c));
    puVar4 = (undefined4 *)FUN_0040d320(bea_arg(this_01), bea_arg(auStack_30), bea_arg(auStack_60));
    for (iVar5 = 0xc; ((iVar5 != 0)); iVar5 = iVar5 + -1) {
      *this_01 = *puVar4;
      puVar4 = puVar4 + 1;
      this_01 = this_01 + 1;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00424ca0, ap_00424ca0));
