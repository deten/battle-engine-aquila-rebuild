// auto-ported from 00448170_FUN_00448170.c (FUN_00448170, 495 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x70: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_00672830 GLOBAL_AT(int, 0x00672830)
#define DAT_00672868 GLOBAL_AT(int, 0x00672868)
#define DAT_0067286c GLOBAL_AT(int, 0x0067286c)
#define DAT_00672870 GLOBAL_AT(int, 0x00672870)
#define DAT_00672874 GLOBAL_AT(int, 0x00672874)
typedef uint32_t (BEA_THISCALL* FUN_00403650_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00403650_t> FUN_00403650 = {(FUN_00403650_t)0x00403650};
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef int (BEA_THISCALL* FUN_00490a40_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00490a40_t> FUN_00490a40 = {(FUN_00490a40_t)0x00490a40};
typedef uint32_t (BEA_THISCALL* FUN_004cb040_t)(uint32_t);
static const bea_guard<FUN_004cb040_t> FUN_004cb040 = {(FUN_004cb040_t)0x004cb040};
typedef uint32_t (BEA_THISCALL* FUN_004cb050_t)(uint32_t);
static const bea_guard<FUN_004cb050_t> FUN_004cb050 = {(FUN_004cb050_t)0x004cb050};
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};

static void BEA_STDCALL ap_00448170(float *param_1, int param_2)
{
  float fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float10 fVar4;

  alignas(16) uint8_t bea_frame_[0x70] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_68)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x70 - 0x68);
  undefined4 * &local_64 = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0x70 - 0x64);
  undefined4 &local_60 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x60);
  undefined4 &local_5c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x5c);
  float &local_58 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x58);
  undefined4 &local_54 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x54);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x4c);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x48);
  undefined4 &local_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x44);
  undefined ** &local_40 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x70 - 0x40);
  undefined4 &local_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x3c);
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x34);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x28);
  float &local_24 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x24);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x18);
  float &local_14 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x70 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x4);
  fVar4 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(param_1)));
  fVar1 = param_1[2];
  if (fVar4 - bea_fcast<float10>(fVar1) < bea_fcast<float10>(10.0f)) {
    local_64 = (undefined4 *)0x0;
    FUN_004cb040(bea_arg(local_68));
    local_28 = param_1[1];
    local_24 = param_1[2];
    local_2c = *param_1;
    local_20 = param_1[3];
    local_48 = *(float *)(param_2 + 0x24) * 100.0f + param_1[2];
    local_4c = *(float *)(param_2 + 0x14) * 100.0f + param_1[1];
    local_50 = *(float *)(param_2 + 4) * 100.0f + *param_1;
    local_40 = ((void*)0x005d8bfc);
    local_10 = local_44;
    local_1c = local_50;
    local_18 = local_4c;
    local_14 = local_48;
    FUN_00490a40(bea_arg(&DAT_006fadc8), bea_arg(&local_40), bea_arg(&local_60), bea_arg(0));
    local_58 = bea_fcast<float>((fVar4 - bea_fcast<float10>(fVar1))) * 0.2f + local_58;
    FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(DAT_00672830), bea_arg(local_68), bea_arg(DAT_00672868), bea_arg(DAT_0067286c), bea_arg(DAT_00672870), bea_arg(DAT_00672874), bea_arg(0), bea_arg(0));
    if (local_64 != (undefined4 *)0x0) {
      puVar3 = local_64;
      if (local_64[0x12] == 0x461c4000) {
        local_64[0x20] = local_60;
        local_64[0x21] = local_5c;
        local_64[0x22] = bea_piece32(local_58);
        local_64[0x23] = local_54;
        puVar3 = local_64 + 0x20;
      }
      local_64[0x10] = *puVar3;
      local_64[0x11] = puVar3[1];
      uVar2 = puVar3[3];
      local_64[0x12] = puVar3[2];
      local_64[0x13] = uVar2;
      FUN_00403650(bea_arg(local_64), bea_arg(&local_60));
    }
    local_40 = ((void*)0x005d892c);
    FUN_004cb050(bea_arg(local_68));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00448170, ap_00448170));
