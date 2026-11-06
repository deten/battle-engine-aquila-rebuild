// auto-ported from 00411630_FUN_00411630.c (FUN_00411630, 1057 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xd0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char Vec3;
typedef char fStack_78;
typedef char fStack_7c;
typedef char fStack_98;
typedef char fStack_9c;
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef uint32_t (BEA_THISCALL* FUN_00406d50_t)(uint32_t);
static const bea_guard<FUN_00406d50_t> FUN_00406d50 = {(FUN_00406d50_t)0x00406d50};
typedef Vec3* (BEA_THISCALL* FUN_00411a60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00411a60_t> FUN_00411a60 = {(FUN_00411a60_t)0x00411a60};
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef float * (BEA_FASTCALL* FUN_0047ec60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0047ec60_t> FUN_0047ec60 = {(FUN_0047ec60_t)0x0047ec60};

static void BEA_THISCALL ap_00411630(void * this_)
{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float10 fVar7;

  alignas(16) uint8_t bea_frame_[0xd0] = {};   // the original stack frame (emulate_frame)
  float &local_c4 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xc4);
  float &fStack_b0 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xb0);
  float &fStack_ac = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xac);
  float &fStack_a8 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xa8);
  undefined4 &uStack_a4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0xa4);
  float &fStack_a0 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xa0);
  float &fStack_9c = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x9c);
  float &fStack_98 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x98);
  undefined4 &uStack_94 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x94);
  float &local_90 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x90);
  float &local_8c = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x8c);
  float &local_88 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x88);
  undefined4 &uStack_84 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x84);
  float &fStack_80 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x80);
  float &fStack_7c = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x7c);
  float &fStack_78 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x78);
  float &fStack_70 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x70);
  undefined4 &uStack_6c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x6c);
  float &fStack_68 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x68);
  undefined4 &uStack_64 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x64);
  undefined4 &uStack_60 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x60);
  undefined4 &uStack_5c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x5c);
  undefined4 &uStack_58 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x58);
  undefined4 &uStack_54 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x54);
  undefined4 &uStack_50 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x50);
  undefined4 &uStack_4c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x4c);
  undefined4 &uStack_48 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x48);
  undefined4 &uStack_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x44);
  undefined4 &uStack_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x40);
  undefined4 &uStack_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x3c);
  undefined4 &uStack_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x38);
  undefined4 &uStack_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x34);
  undefined1 (&local_30)[8] = *reinterpret_cast<undefined1 (*)[8]>(bea_frame_ + 0xd0 - 0x30);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x28);
  undefined1 (&auStack_20)[8] = *reinterpret_cast<undefined1 (*)[8]>(bea_frame_ + 0xd0 - 0x20);
  float &fStack_18 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x18);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xd0 - 0x10);
  iVar2 = *(int *)((int)this_ + 0x18);
  FUN_00401ec0(bea_arg(&local_90), bea_arg(*(float *)(iVar2 + 0x7c) * 20.0f * 0.5f), bea_arg(*(float *)(iVar2 + 0x80) * 20.0f * 0.5f), bea_arg(*(float *)(iVar2 + 0x84) * 20.0f * 0.5f));
  iVar2 = *(int *)((int)this_ + 0x18);
  FUN_00401ec0(bea_arg(local_30), bea_arg(local_90 + *(float *)(iVar2 + 0x1c)), bea_arg(local_8c + *(float *)(iVar2 + 0x20)), bea_arg(local_88 + *(float *)(iVar2 + 0x24)));
  fVar4 = DAT_006fbdfc;
  fVar6 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(local_30)));
  fVar1 = bea_fcast<float>(fVar6);
  local_c4 = fVar1;
  if (fVar4 < fVar1) {
    local_c4 = fVar4;
  }
  local_c4 = local_c4 - local_28;
  iVar2 = *(int *)((int)this_ + 0x18);
  if ((*(float *)(iVar2 + 0xfc) != 0.0f) && (local_c4 < 5.0f)) {
    if (local_c4 < 0.0f) {
      local_c4 = 0.0f;
    }
    fVar3 = (5.0f - local_c4) * 0.0025f;
    FUN_00401ec0(bea_arg(local_10), bea_arg(fVar3 * *(float *)(iVar2 + 0x40)), bea_arg(fVar3 * *(float *)(iVar2 + 0x50)), bea_arg(fVar3 * *(float *)(iVar2 + 0x60)));
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x18), 0x74, local_10);
    if ((*(int *)((int)this_ + 0x2c) == 0) && (*(float *)((int)this_ + 0x48) == 0.0f)) {
      iVar2 = *(int *)((int)this_ + 0x18);
      if (0.0f < *(float *)(iVar2 + 0x84)) {
        *(float *)(iVar2 + 0x84) = *(float *)(iVar2 + 0x84) * 0.9f;
      }
      fVar3 = *(float *)(*(int *)((int)this_ + 0x18) + 0x114);
      FUN_004011b0(bea_arg(&uStack_60), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
      fVar6 = bea_fcast<float10>(fsin(bea_fcast<float10>(fVar3)));
      fVar7 = bea_fcast<float10>(fcos(bea_fcast<float10>(fVar3)));
      puVar5 = (undefined4 *)(uintptr_t)bea_piece32(FUN_00401ec0(bea_arg(&fStack_b0), bea_arg(bea_fcast<float>(fVar7)), bea_arg(-bea_fcast<float>(fVar6)), bea_arg(0)));
      uStack_60 = *puVar5;
      uStack_5c = puVar5[1];
      uStack_58 = puVar5[2];
      uStack_54 = puVar5[3];
      puVar5 = (undefined4 *)(uintptr_t)bea_piece32(FUN_00401ec0(bea_arg(&fStack_b0), bea_arg(bea_fcast<float>(fVar6)), bea_arg(bea_fcast<float>(fVar7)), bea_arg(0)));
      uStack_50 = *puVar5;
      uStack_4c = puVar5[1];
      uStack_48 = puVar5[2];
      uStack_44 = puVar5[3];
      puVar5 = (undefined4 *)FUN_00401ec0(bea_arg(&fStack_b0), bea_arg(0), bea_arg(0), bea_arg(0x3f800000));
      uStack_40 = *puVar5;
      uStack_3c = puVar5[1];
      uStack_38 = puVar5[2];
      uStack_34 = puVar5[3];
      FUN_00401ec0(bea_arg(&fStack_80), bea_arg(uStack_5c), bea_arg(uStack_4c), bea_arg(uStack_3c));
      if (fVar4 <= fVar1) {
        fStack_a0 = 0.0f;
        fStack_9c = 0.0f;
        fStack_98 = -1.0f;
        uStack_94 = uStack_a4;
      }
      else {
        FUN_0047ec60(bea_arg(&DAT_006fadc8), bea_arg(&fStack_b0), bea_arg(local_30));
        fStack_a0 = fStack_b0;
        fStack_9c = fStack_ac;
        fStack_98 = fStack_a8;
        uStack_94 = uStack_a4;
      }
      fStack_b0 = fStack_a0;
      fStack_ac = fStack_9c;
      fStack_a8 = fStack_98;
      FUN_00401ec0(bea_arg(&fStack_70), bea_arg(fStack_7c * fStack_98 - fStack_78 * fStack_9c), bea_arg(fStack_78 * fStack_a0 - fStack_98 * fStack_80), bea_arg(fStack_9c * fStack_80 - fStack_7c * fStack_a0));
      FUN_00411a60(bea_arg(&fStack_70), bea_arg(auStack_20), bea_arg(&fStack_a0));
      FUN_00406d50(bea_arg(auStack_20));
      iVar2 = *(int *)((int)this_ + 0x18);
      fVar1 = 1.0f - local_c4 * 0.2f;
      *(float *)(iVar2 + 0x280) =
           (-fStack_18 - *(float *)(iVar2 + 0x118)) * fVar1 * 0.02f + *(float *)(iVar2 + 0x280);
      local_90 = fStack_70;
      local_88 = fStack_68;
      local_8c = bea_fcast<float>(uStack_6c);
      uStack_84 = uStack_64;
      FUN_00406d50(bea_arg(&local_90));
      iVar2 = *(int *)((int)this_ + 0x18);
      *(float *)(iVar2 + 0x27c) =
           (local_88 * 0.5f - *(float *)(iVar2 + 0x11c)) * fVar1 * 0.02f + *(float *)(iVar2 + 0x27c);
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00411630, ap_00411630));
