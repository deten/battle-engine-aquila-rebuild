// auto-ported from 00419390_vslot2.c (CThing3rdPersonCamera::vslot2, 423 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xa0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
typedef char CThing3rdPersonCamera;
typedef char fStack_48;
typedef char fStack_4c;
typedef char fStack_50;
typedef char fStack_58;
typedef char fStack_5c;
typedef char fStack_60;
typedef char fStack_68;
typedef char fStack_84;
typedef char fStack_88;
typedef char fStack_8c;
#define DAT_006605b8 GLOBAL_AT(int, 0x006605b8)
#define DAT_006605bc GLOBAL_AT(int, 0x006605bc)
#define DAT_006605c0 GLOBAL_AT(int, 0x006605c0)
#define DAT_006605c4 GLOBAL_AT(int, 0x006605c4)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef uint32_t (BEA_THISCALL* FUN_00416fc0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00416fc0_t> FUN_00416fc0 = {(FUN_00416fc0_t)0x00416fc0};
typedef void * (BEA_THISCALL* FUN_0044adb0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044adb0_t> FUN_0044adb0 = {(FUN_0044adb0_t)0x0044adb0};
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};

static float * BEA_THISCALL ap_00419390(CThing3rdPersonCamera * this_, float *param_1)
{
  int *piVar1;
  float10 fVar2;

  alignas(16) uint8_t bea_frame_[0xa0] = {};   // the original stack frame (emulate_frame)
  float &local_9c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x9c);
  float &fStack_98 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x98);
  float &fStack_94 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x94);
  float &fStack_90 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x90);
  float &fStack_8c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x8c);
  float &fStack_88 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x88);
  float &fStack_84 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x84);
  undefined4 &uStack_80 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x80);
  float &fStack_7c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x7c);
  float &fStack_78 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x78);
  float &fStack_74 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x74);
  undefined4 &uStack_70 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x70);
  undefined4 &uStack_6c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xa0 - 0x6c);
  float &fStack_68 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x68);
  float &fStack_60 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x60);
  float &fStack_5c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x5c);
  float &fStack_58 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x58);
  float &fStack_50 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x50);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x4c);
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x48);
  float &fStack_40 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x40);
  float &fStack_3c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x3c);
  float &fStack_38 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x38);
  undefined1 (&auStack_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0xa0 - 0x30);
  piVar1 = *(int **)(this_ + 4);
  if (piVar1 == (int *)0x0) {
    *param_1 = bea_fcast<float>(DAT_006605b8);
    param_1[1] = bea_fcast<float>(DAT_006605bc);
    param_1[2] = bea_fcast<float>(DAT_006605c0);
    param_1[3] = bea_fcast<float>(DAT_006605c4);
    return (float *)(param_1);
  }
  bea_vcall<uint32_t>(piVar1, 0x78, &local_9c);
  bea_vcall<uint32_t>(piVar1, 0x7c, auStack_30);
  FUN_0044adb0(bea_arg(&uStack_6c), bea_arg(auStack_30));
  FUN_00416fc0(bea_arg(*(void **)(this_ + 8)), bea_arg(&fStack_8c), bea_arg(1.0f - (fStack_68 * 2.1f + 3.1415927f) * 0.15915494f));
  FUN_004062d0(bea_arg(&fStack_60), bea_arg(uStack_6c), bea_arg(0), bea_arg(0));
  // class 19: the asm's order (3 sums)
  fStack_7c = fStack_58 * fStack_84 + fStack_5c * fStack_88 + fStack_60 * fStack_8c;
  fStack_78 = fStack_48 * fStack_84 + fStack_4c * fStack_88 + fStack_50 * fStack_8c;
  fStack_84 = fStack_84 * fStack_38 + fStack_88 * fStack_3c + fStack_8c * fStack_40;
  local_9c = fStack_7c + local_9c;
  uStack_80 = uStack_70;
  fStack_98 = fStack_98 + fStack_78;
  fStack_94 = fStack_84 + fStack_94;
  fStack_8c = fStack_7c;
  fStack_88 = fStack_78;
  fStack_74 = fStack_84;
  fVar2 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&local_9c)));
  if (fVar2 < bea_fcast<float10>(fStack_94)) {
    fStack_94 = bea_fcast<float>(fVar2);
  }
  *param_1 = local_9c;
  param_1[1] = fStack_98;
  param_1[2] = fStack_94;
  param_1[3] = fStack_90;
  return (float *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00419390, ap_00419390));
