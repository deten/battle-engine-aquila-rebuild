// auto-ported from 004f8140_FUN_004f8140.c (FUN_004f8140, 857 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xa0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-28 check_fild: the Vec3 results of FUN_00401ec0 are copied with mov (0x4f842b..0x4f8471), so local_74/70/6c/60/5c = bea_fcast<float>(puVar6[i]) instead of (float)
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
typedef uint32_t (BEA_THISCALL* FUN_0040d320_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d320_t> FUN_0040d320 = {(FUN_0040d320_t)0x0040d320};

static void BEA_THISCALL ap_004f8140(void * this_, int param_1, int param_2, int param_3)
{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;

  alignas(16) uint8_t bea_frame_[0xa0] = {};   // the original stack frame (emulate_frame)
  float &local_98 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x98);
  float &local_94 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x94);
  float &local_90 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x90);
  undefined4 &local_8c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x8c);
  float &local_88 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x88);
  float &local_84 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x84);
  float &local_80 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x80);
  float &local_7c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x7c);
  undefined4 &local_78 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x78);
  float &local_74 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x74);
  float &local_70 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x70);
  float &local_6c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x6c);
  undefined4 &local_68 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x68);
  undefined4 &local_64 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x64);
  float &local_60 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x60);
  float &local_5c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x5c);
  undefined4 &local_58 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x58);
  float &local_54 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x54);
  undefined1 (&local_50)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xa0 - 0x50);
  undefined1 (&local_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xa0 - 0x40);
  undefined4 (&local_30)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0xa0 - 0x30);
  pfVar1 = (float *)((int)this_ + 0x10);
  pfVar2 = (float *)((int)this_ + 0x20);
  fVar9 = (float10)fcos((float10)param_3 * (float10)0.0015339808f);
  fVar10 = (float10)fsin((float10)(float)((float10)param_3 * (float10)0.0015339808f));
  *(float *)this_ = (float)fVar9;
  *(undefined4 *)((int)this_ + 4) = 0;
  *(float *)((int)this_ + 8) = (float)fVar10;
  *(undefined4 *)((int)this_ + 0xc) = local_8c;
  *pfVar1 = 0.0;
  *(undefined4 *)((int)this_ + 0x14) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x18) = 0;
  *(undefined4 *)((int)this_ + 0x1c) = local_8c;
  local_88 = (float)((float10)param_2 * (float10)0.0015339808f);
  fVar11 = (float10)fcos((float10)param_2 * (float10)0.0015339808f);
  *pfVar2 = (float)-fVar10;
  *(undefined4 *)((int)this_ + 0x24) = 0;
  *(float *)((int)this_ + 0x28) = (float)fVar9;
  local_80 = 0.0;
  *(undefined4 *)((int)this_ + 0x2c) = local_8c;
  local_84 = 1.0;
  local_7c = 0.0;
  local_74 = 0.0;
  local_98 = 0.0;
  local_70 = (float)fVar11;
  fVar9 = (float10)fsin((float10)local_88);
  local_6c = (float)-fVar9;
  local_94 = (float)fVar9;
  local_90 = (float)fVar11;
  local_64 = 0;
  local_60 = local_94;
  local_5c = local_90;
  uVar3 = FUN_00401ec0(bea_arg(&local_98), bea_arg(local_94 * *pfVar1 + local_90 * *pfVar2), bea_arg(local_94 * *(float *)((int)this_ + 0x14) +
                       local_90 * *(float *)((int)this_ + 0x24)), bea_arg(local_94 * *(float *)((int)this_ + 0x18) +
                       local_90 * *(float *)((int)this_ + 0x28)));
  uVar4 = FUN_00401ec0(bea_arg(local_40), bea_arg(local_6c * *pfVar2 + local_70 * *pfVar1 + local_74 * *(float *)this_), bea_arg(local_74 * *(float *)((int)this_ + 4) +
                       local_6c * *(float *)((int)this_ + 0x24) +
                       local_70 * *(float *)((int)this_ + 0x14)), bea_arg(local_6c * *(float *)((int)this_ + 0x28) +
                       local_70 * *(float *)((int)this_ + 0x18) +
                       local_74 * *(float *)((int)this_ + 8)));
  uVar5 = FUN_00401ec0(bea_arg(local_50), bea_arg(local_7c * *pfVar2 + local_80 * *pfVar1 + local_84 * *(float *)this_), bea_arg(local_84 * *(float *)((int)this_ + 4) +
                       local_7c * *(float *)((int)this_ + 0x24) +
                       local_80 * *(float *)((int)this_ + 0x14)), bea_arg(local_84 * *(float *)((int)this_ + 8) +
                       local_7c * *(float *)((int)this_ + 0x28) +
                       local_80 * *(float *)((int)this_ + 0x18)));
  FUN_00401f10(bea_arg(local_30), bea_arg(uVar5), bea_arg(uVar4), bea_arg(uVar3));
  local_90 = 0.0;
  puVar6 = local_30;
  puVar8 = this_;
  for (iVar7 = 0xc; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  fVar9 = (float10)fcos((float10)param_1 * (float10)0.0015339808f);
  local_7c = 0.0;
  local_54 = (float)fVar9;
  local_98 = (float)fVar9;
  fVar9 = (float10)fsin((float10)param_1 * (float10)0.0015339808f);
  local_78 = local_8c;
  local_88 = (float)fVar9;
  local_94 = (float)-fVar9;
  local_84 = local_98;
  local_80 = local_94;
  puVar6 = (undefined4 *)FUN_00401ec0(bea_arg(local_50), bea_arg(local_88), bea_arg(local_54), bea_arg(0));
  local_74 = bea_fcast<float>(*puVar6);
  local_70 = bea_fcast<float>(puVar6[1]);
  local_6c = bea_fcast<float>(puVar6[2]);
  local_68 = puVar6[3];
  puVar6 = (undefined4 *)FUN_00401ec0(bea_arg(local_50), bea_arg(0), bea_arg(0), bea_arg(0x3f800000));
  local_64 = *puVar6;
  local_60 = bea_fcast<float>(puVar6[1]);
  local_5c = bea_fcast<float>(puVar6[2]);
  local_58 = puVar6[3];
  puVar6 = (undefined4 *)FUN_0040d320(bea_arg(&local_84), bea_arg(local_30), bea_arg(this_));
  for (iVar7 = 0xc; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
    *(undefined4 *)this_ = *puVar6;
    puVar6 = puVar6 + 1;
    this_ = (undefined4 *)((int)this_ + 4);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f8140, ap_004f8140));
