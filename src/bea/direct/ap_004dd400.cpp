// auto-ported from 004dd400_vslot8.c (CRTMesh::vslot8, 269 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x70: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CRTMesh;
typedef undefined4 * (BEA_THISCALL* FUN_004aa940_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004aa940_t> FUN_004aa940 = {(FUN_004aa940_t)0x004aa940};
typedef uint32_t (BEA_THISCALL* FUN_004b0fb0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b0fb0_t> FUN_004b0fb0 = {(FUN_004b0fb0_t)0x004b0fb0};

static float * BEA_THISCALL ap_004dd400(CRTMesh * this_, float *param_1, undefined4 param_2)
{
  alignas(16) uint8_t bea_frame_[0x70] = {};   // the original stack frame (emulate_frame)

  void * &local_64 = *reinterpret_cast<void * *>(bea_frame_ + 0x70 - 0x64);
  float &local_60 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x60);
  float &local_5c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x5c);
  float &local_58 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x58);
  float &local_54 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x54);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x4c);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x48);
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x28);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x18);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x8);
  if (*(void **)(this_ + 0x14) != (void *)0x0) {
    local_64 = (void *)0x0;
    FUN_004aa940(bea_arg(*(void **)(this_ + 0x14)), bea_arg(&local_60), bea_arg(&local_64));
    if (local_64 != (void *)0x0) {
      FUN_004b0fb0(bea_arg(local_64), bea_arg(param_2), bea_arg(param_2), bea_arg(0), bea_arg(*(undefined4 *)(this_ + 8)), bea_arg(&local_30), bea_arg(&local_50), bea_arg(0), bea_arg(1), bea_arg(0));
      // class 19: the asm's order (the three products summed first, then the translation added)
      *param_1 = local_28 * local_58 + local_2c * local_5c + local_30 * local_60 + local_50;
      param_1[1] = local_20 * local_60 + local_18 * local_58 + local_1c * local_5c + local_4c;
      param_1[2] = local_10 * local_60 + local_8 * local_58 + local_c * local_5c + local_48;
      param_1[3] = local_54;
      return (float *)(param_1);
    }
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  return (float *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dd400, ap_004dd400));
