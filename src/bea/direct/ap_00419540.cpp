// auto-ported from 00419540_vslot1.c (CThing3rdPersonCamera::vslot1, 458 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x90: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CThing3rdPersonCamera;
typedef char Vec3;
#define DAT_0083d9c0 GLOBAL_AT(undefined4, 0x0083d9c0)
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

static undefined4 * BEA_THISCALL ap_00419540(CThing3rdPersonCamera * this_, undefined4 *param_1)
{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  float *pfVar6;
  int iVar7;
  undefined4 *puVar8;
  float10 fVar9;

  alignas(16) uint8_t bea_frame_[0x90] = {};   // the original stack frame (emulate_frame)
  float &fStack_90 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x90);
  undefined1 (&local_7c)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x90 - 0x7c);
  float &local_78 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x78);
  float &local_74 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x74);
  float &local_6c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x6c);
  float &fStack_68 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x68);
  float &fStack_64 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x64);
  undefined4 (&local_5c)[3] = *reinterpret_cast<undefined4 (*)[3]>(bea_frame_ + 0x90 - 0x5c);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x4c);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x48);
  undefined1 (&auStack_40)[8] = *reinterpret_cast<undefined1 (*)[8]>(bea_frame_ + 0x90 - 0x40);
  float &fStack_38 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x38);
  undefined1 (&local_30)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x90 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x2c);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x1c);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0xc);
  iVar7 = *(int *)(this_ + 4);
  if (iVar7 != 0) {
    puVar5 = (undefined4 *)(iVar7 + 0x3c);
    if ((*(uint *)(iVar7 + 0x34) & 0x80000000) == 0) {
      puVar5 = &DAT_0083d9c0;
    }
    FUN_0044adb0(bea_arg(local_5c), bea_arg(puVar5));
    iVar1 = *(int *)(this_ + 4);
    fVar2 = *(float *)(iVar1 + 0x1c);
    fVar3 = *(float *)(iVar1 + 0x20);
    fVar4 = *(float *)(iVar1 + 0x24);
    FUN_004062d0(bea_arg(local_30), bea_arg(local_5c[0]), bea_arg(0), bea_arg(0));
    local_78 = local_1c * -4.0f;
    puVar5 = (undefined4 *)(iVar7 + 0x3c);
    local_74 = local_c * -4.0f;
    fVar3 = fVar3 + local_78;
    fVar4 = fVar4 + local_74;
    if ((*(uint *)(iVar7 + 0x34) & 0x80000000) == 0) {
      puVar5 = &DAT_0083d9c0;
    }
    FUN_00401ec0(bea_arg(&local_50), bea_arg(bea_fcast<float>(puVar5[1]) * 10.0f), bea_arg(bea_fcast<float>(puVar5[5]) * 10.0f), bea_arg(bea_fcast<float>(puVar5[9]) * 10.0f));
    FUN_00401ec0(bea_arg(&local_6c), bea_arg(local_2c * -4.0f + fVar2 + local_50), bea_arg(fVar3 + local_4c), bea_arg(fVar4 + local_48));   // class 19: the asm's order
    pfVar6 = (float *)bea_vcall<uint32_t>(this_, 0x0, local_7c);
    FUN_00401ec0(bea_arg(auStack_40), bea_arg(local_6c - *pfVar6), bea_arg(fStack_68 - pfVar6[1]), bea_arg(fStack_64 - pfVar6[2]));
    fVar9 = bea_fcast<float10>(FUN_004026b0(bea_arg(auStack_40)));
    if (fVar9 <= bea_fcast<float10>(0.0f)) {
      fStack_90 = 0.0f;
    }
    else {
      fVar9 = _CIasin(bea_fcast<float10>(fStack_38) / bea_fcast<float10>(bea_fcast<float>(fVar9)));
      fStack_90 = bea_fcast<float>(fVar9);
    }
    FUN_0040d1f0(bea_arg(param_1), bea_arg(local_5c[0]), bea_arg(fStack_90), bea_arg(0));
    return (undefined4 *)(param_1);
  }
  puVar5 = &DAT_00660588;
  puVar8 = param_1;
  for (iVar7 = 0xc; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  }
  return (undefined4 *)(param_1);
}

// @autoport-registration
// superseded by src/bea/lifted/lift_00419540.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
