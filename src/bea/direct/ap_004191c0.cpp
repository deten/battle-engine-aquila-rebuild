// auto-ported from 004191c0_vslot0.c (CThing3rdPersonCamera::vslot0, 460 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xa0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
typedef char CThing3rdPersonCamera;
#define DAT_006605b8 GLOBAL_AT(int, 0x006605b8)
#define DAT_006605bc GLOBAL_AT(int, 0x006605bc)
#define DAT_006605c0 GLOBAL_AT(int, 0x006605c0)
#define DAT_006605c4 GLOBAL_AT(int, 0x006605c4)
#define DAT_0083d9c0 GLOBAL_AT(undefined4, 0x0083d9c0)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef uint32_t (BEA_THISCALL* FUN_00416fc0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00416fc0_t> FUN_00416fc0 = {(FUN_00416fc0_t)0x00416fc0};
typedef void * (BEA_THISCALL* FUN_0044adb0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044adb0_t> FUN_0044adb0 = {(FUN_0044adb0_t)0x0044adb0};
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};

static float * BEA_THISCALL ap_004191c0(CThing3rdPersonCamera * this_, float *param_1)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float10 fVar4;

  alignas(16) uint8_t bea_frame_[0xa0] = {};   // the original stack frame (emulate_frame)
  float &local_9c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x9c);
  float &local_98 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x98);
  float &local_94 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x94);
  float &local_90 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x90);
  float &local_8c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x8c);
  float &local_88 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x88);
  float &local_84 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x84);
  undefined4 &local_80 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x80);
  float &local_7c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x7c);
  float &local_78 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x78);
  float &local_74 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x74);
  undefined4 &local_70 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x70);
  undefined4 &local_6c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x6c);
  float &local_68 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x68);
  float &local_60 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x60);
  float &local_5c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x5c);
  float &local_58 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x58);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x4c);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x48);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x38);
  undefined4 (&local_30)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0xa0 - 0x30);
  iVar1 = *(int *)(this_ + 4);
  if (iVar1 == 0) {
    *param_1 = bea_fcast<float>(DAT_006605b8);
    param_1[1] = bea_fcast<float>(DAT_006605bc);
    param_1[2] = bea_fcast<float>(DAT_006605c0);
    param_1[3] = bea_fcast<float>(DAT_006605c4);
    return (float *)(param_1);
  }
  puVar2 = (undefined4 *)(iVar1 + 0x3c);
  local_9c = *(float *)(iVar1 + 0x1c);
  local_98 = *(float *)(iVar1 + 0x20);
  local_94 = *(float *)(iVar1 + 0x24);
  local_90 = *(float *)(iVar1 + 0x28);
  if ((*(uint *)(iVar1 + 0x34) & 0x80000000) == 0) {
    puVar2 = &DAT_0083d9c0;
  }
  puVar3 = local_30;
  for (iVar1 = 0xc; ((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_0044adb0(bea_arg(&local_6c), bea_arg(local_30));
  FUN_00416fc0(bea_arg(*(void **)(this_ + 8)), bea_arg(&local_8c), bea_arg(1.0f - (local_68 * 2.1f + 3.1415927f) * 0.15915494f));
  FUN_004062d0(bea_arg(&local_60), bea_arg(local_6c), bea_arg(0), bea_arg(0));
  // class 19: the asm's order (3 sums)
  local_7c = local_58 * local_84 + local_5c * local_88 + local_60 * local_8c;
  local_78 = local_48 * local_84 + local_4c * local_88 + local_50 * local_8c;
  local_80 = local_70;
  local_84 = local_84 * local_38 + local_88 * local_3c + local_8c * local_40;
  local_9c = local_7c + local_9c;
  local_98 = local_98 + local_78;
  local_94 = local_84 + local_94;
  local_8c = local_7c;
  local_88 = local_78;
  local_74 = local_84;
  fVar4 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&local_9c)));
  if (fVar4 < bea_fcast<float10>(local_94)) {
    local_94 = bea_fcast<float>(fVar4);
  }
  *param_1 = local_9c;
  param_1[1] = local_98;
  param_1[2] = local_94;
  param_1[3] = local_90;
  return (float *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004191c0, ap_004191c0));
