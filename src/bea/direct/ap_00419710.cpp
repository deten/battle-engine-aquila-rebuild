// auto-ported from 00419710_vslot3.c (CThing3rdPersonCamera::vslot3, 403 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x80: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CThing3rdPersonCamera;
typedef char Vec3;
typedef char fStack_1c;
typedef char fStack_2c;
typedef char fStack_c;
#define DAT_00660588 GLOBAL_AT(undefined4, 0x00660588)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef f80 (BEA_THISCALL* FUN_004026b0_t)(uint32_t);
static const bea_guard<FUN_004026b0_t> FUN_004026b0 = {(FUN_004026b0_t)0x004026b0};
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef uint32_t (BEA_THISCALL* FUN_0040d1f0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d1f0_t> FUN_0040d1f0 = {(FUN_0040d1f0_t)0x0040d1f0};
typedef void * (BEA_THISCALL* FUN_0044adb0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044adb0_t> FUN_0044adb0 = {(FUN_0044adb0_t)0x0044adb0};
#define _CIasin(a0) bea_x87call1(0x0055dcb0, (float10)(a0))

static undefined4 * BEA_THISCALL ap_00419710(CThing3rdPersonCamera * this_, undefined4 *param_1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;

  alignas(16) uint8_t bea_frame_[0x80] = {};   // the original stack frame (emulate_frame)
  float &fStack_80 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x80);
  undefined4 (&auStack_7c)[3] = *reinterpret_cast<undefined4 (*)[3]>(bea_frame_ + 0x80 - 0x7c);
  float &fStack_70 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x70);
  float &fStack_6c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x6c);
  float &fStack_68 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x68);
  float &fStack_60 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x60);
  float &fStack_5c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x5c);
  float &fStack_58 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x58);
  undefined1 (&auStack_50)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x80 - 0x50);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x4c);
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x48);
  undefined1 (&auStack_40)[8] = *reinterpret_cast<undefined1 (*)[8]>(bea_frame_ + 0x80 - 0x40);
  float &fStack_38 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x38);
  undefined1 (&local_30)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x80 - 0x30);
  float &fStack_2c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x2c);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x1c);
  float &fStack_c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0xc);
  piVar1 = *(int **)(this_ + 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = bea_vcall<uint32_t>(piVar1, 0x7c, local_30);
    FUN_0044adb0(bea_arg(auStack_7c), bea_arg(uVar2));
    bea_vcall<uint32_t>(*(int **)(this_ + 4), 0x78, &fStack_70);
    FUN_004062d0(bea_arg(local_30), bea_arg(auStack_7c[0]), bea_arg(0), bea_arg(0));
    fStack_5c = fStack_1c * -4.0f;
    fStack_58 = fStack_c * -4.0f;
    fStack_70 = fStack_2c * -4.0f + fStack_70;
    fStack_6c = fStack_6c + fStack_5c;
    fStack_68 = fStack_68 + fStack_58;
    iVar3 = bea_vcall<uint32_t>(piVar1, 0x7c, local_30);
    fStack_4c = *(float *)(iVar3 + 0x14) * 10.0f;
    fStack_48 = *(float *)(iVar3 + 0x24) * 10.0f;
    fStack_60 = *(float *)(iVar3 + 4) * 10.0f + fStack_70;
    fStack_5c = fStack_6c + fStack_4c;
    fStack_58 = fStack_68 + fStack_48;
    pfVar4 = (float *)bea_vcall<uint32_t>(this_, 0x8, auStack_50);
    FUN_00401ec0(bea_arg(auStack_40), bea_arg(fStack_60 - *pfVar4), bea_arg(fStack_5c - pfVar4[1]), bea_arg(fStack_58 - pfVar4[2]));
    fVar7 = bea_fcast<float10>(FUN_004026b0(bea_arg(auStack_40)));
    if (fVar7 <= bea_fcast<float10>(0.0f)) {
      fStack_80 = 0.0f;
    }
    else {
      fVar7 = _CIasin(bea_fcast<float10>(fStack_38) / bea_fcast<float10>(bea_fcast<float>(fVar7)));
      fStack_80 = bea_fcast<float>(fVar7);
    }
    FUN_0040d1f0(bea_arg(param_1), bea_arg(auStack_7c[0]), bea_arg(fStack_80), bea_arg(0));
    return (undefined4 *)(param_1);
  }
  puVar5 = &DAT_00660588;
  puVar6 = param_1;
  for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  return (undefined4 *)(param_1);
}

// @autoport-registration
// superseded by src/bea/lifted/lift_00419710.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
