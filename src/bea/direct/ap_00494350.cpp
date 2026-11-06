// auto-ported from 00494350_FUN_00494350.c (FUN_00494350, 337 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x60: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004944b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004944b0_t> FUN_004944b0 = {(FUN_004944b0_t)0x004944b0};

static float * BEA_THISCALL ap_00494350(void * this_, float *param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;

  alignas(16) uint8_t bea_frame_[0x60] = {};   // the original stack frame (emulate_frame)
  float (&local_60)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x60 - 0x60);
  float (&local_50)[2] = *reinterpret_cast<float (*)[2]>(bea_frame_ + 0x60 - 0x50);
  undefined4 &local_48 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x48);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x40);
  undefined4 &local_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x3c);
  float (&local_30)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x60 - 0x30);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x18);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x8);
  fVar1 = *(float *)((int)this_ + 0x14) * *(float *)((int)this_ + 0x28) -
          *(float *)((int)this_ + 0x18) * *(float *)((int)this_ + 0x24);
  local_30[0] = fVar1;
  fVar3 = *(float *)((int)this_ + 0x10) * *(float *)((int)this_ + 0x28) -
          *(float *)((int)this_ + 0x20) * *(float *)((int)this_ + 0x18);
  local_30[1] = -fVar3;
  fVar2 = *(float *)((int)this_ + 0x10) * *(float *)((int)this_ + 0x24) -
          *(float *)((int)this_ + 0x20) * *(float *)((int)this_ + 0x14);
  local_30[2] = fVar2;
  local_20 = -(*(float *)((int)this_ + 4) * *(float *)((int)this_ + 0x28) -
              *(float *)((int)this_ + 8) * *(float *)((int)this_ + 0x24));
  local_1c = *(float *)this_ * *(float *)((int)this_ + 0x28) -
             *(float *)((int)this_ + 0x20) * *(float *)((int)this_ + 8);
  local_18 = -(*(float *)this_ * *(float *)((int)this_ + 0x24) -
              *(float *)((int)this_ + 0x20) * *(float *)((int)this_ + 4));
  local_10 = *(float *)((int)this_ + 0x18) * *(float *)((int)this_ + 4) -
             *(float *)((int)this_ + 8) * *(float *)((int)this_ + 0x14);
  local_c = -(*(float *)((int)this_ + 0x18) * *(float *)this_ -
             *(float *)((int)this_ + 0x10) * *(float *)((int)this_ + 8));
  local_8 = *(float *)((int)this_ + 0x14) * *(float *)this_ -
            *(float *)((int)this_ + 0x10) * *(float *)((int)this_ + 4);
  pfVar7 = local_30;
  pfVar8 = local_60;
  for (iVar6 = 0xc; BEA_LOOP_GUARD((uVar5 = local_3c, fVar4 = local_40, iVar6 != 0)); iVar6 = iVar6 + -1) {
    *pfVar8 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar8 = pfVar8 + 1;
  }
  local_40 = local_60[2];
  local_50[0] = local_30[1];
  local_3c = local_48;
  local_48 = uVar5;
  fVar1 = fVar2 * *(float *)((int)this_ + 8) +
          (fVar1 * *(float *)this_ - fVar3 * *(float *)((int)this_ + 4));
  local_60[0] = local_60[0] / fVar1;
  local_60[1] = local_20 / fVar1;
  local_60[2] = fVar4 / fVar1;
  FUN_004944b0(bea_arg(local_50), bea_arg(fVar1));
  FUN_004944b0(bea_arg(&local_40), bea_arg(fVar1));
  pfVar7 = local_60;
  pfVar8 = param_1;
  for (iVar6 = 0xc; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
    *pfVar8 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar8 = pfVar8 + 1;
  }
  return (float *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00494350, ap_00494350));
