// auto-ported from 004d3ce0_FUN_004d3ce0.c (FUN_004d3ce0, 984 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xe0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char Vec3;
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};

static undefined4 BEA_THISCALL ap_004d3ce0(void * this_, float *param_1, int param_2, int param_3)
{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  alignas(16) uint8_t bea_frame_[0xe0] = {};   // the original stack frame (emulate_frame)
  float &local_d4 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0xd4);
  float &local_d0 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0xd0);
  float &local_cc = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0xcc);
  float * &local_c4 = *reinterpret_cast<float * *>(bea_frame_ + 0xe0 - 0xc4);
  float (&local_c0)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0xe0 - 0xc0);
  float &local_b0 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0xb0);
  float &local_ac = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0xac);
  undefined4 &local_a8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xa8);
  float &local_a4 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0xa4);
  float &local_a0 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0xa0);
  float &local_9c = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x9c);
  undefined4 &local_98 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x98);
  float &local_94 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x94);
  float &local_90 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x90);
  float &local_8c = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x8c);
  float &local_88 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x88);
  float &local_84 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x84);
  float &local_80 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x80);
  float &local_7c = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x7c);
  float &local_78 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x78);
  float &local_70 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x70);
  float &local_6c = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x6c);
  undefined4 &local_68 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x68);
  float &local_60 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x60);
  float &local_5c = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x5c);
  undefined4 &local_58 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x58);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x4c);
  undefined4 &local_48 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x48);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x38);
  float &local_34 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x34);
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x2c);
  undefined4 &local_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x28);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x18);
  undefined1 (&local_10)[8] = *reinterpret_cast<undefined1 (*)[8]>(bea_frame_ + 0xe0 - 0x10);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x8);
  local_c0[0] = *param_1;
  local_c0[1] = param_1[1];
  local_b0 = param_1[4];
  local_c0[3] = param_1[3];
  local_c0[2] = 0.0f;
  local_ac = param_1[5];
  local_a4 = param_1[7];
  fVar1 = param_1[8];
  local_a8 = 0;
  fVar2 = param_1[9];
  local_a0 = fVar1;
  local_9c = fVar2;
  local_98 = 0;
  local_94 = param_1[0xb];
  if (0.0f < (fVar2 - local_ac) * (*param_1 - local_b0) -
            (fVar1 - local_b0) * (param_1[1] - local_ac)) {
    local_a0 = local_b0;
    local_98 = 0;
    local_9c = local_ac;
    local_94 = param_1[7];
    local_b0 = fVar1;
    local_ac = fVar2;
    local_a8 = 0;
    local_a4 = param_1[0xb];
  }
  local_98 = 0;
  local_a8 = 0;
  local_c4 = local_c0;
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    local_90 = *local_c4;
    local_8c = local_c4[1];
    local_88 = local_c4[2];
    local_84 = local_c4[3];
    iVar4 = iVar3 % 3;
    iVar5 = 0;
    local_40 = local_c0[iVar4 * 4];
    local_3c = local_c0[iVar4 * 4 + 1];
    local_80 = local_c0[iVar4 * 4] - *local_c4;
    local_7c = local_c0[iVar4 * 4 + 1] - local_c4[1];
    local_38 = local_c0[iVar4 * 4 + 2];
    local_34 = local_c0[iVar4 * 4 + 3];
    local_78 = local_c0[iVar4 * 4 + 2] - local_c4[2];
    while(BEA_LOOP_GUARD(( true ))) {
      switch(iVar5) {
      case 0:
        local_d4 = (float)param_2 * *(float *)((int)this_ + 0x70);
        local_d0 = (float)param_3 * *(float *)((int)this_ + 0x70);
        local_68 = 0;
        local_cc = 0.0f;
        local_70 = local_d4;
        local_6c = local_d0;
        break;
      case 1:
        local_d4 = (float)(param_2 + 1) * *(float *)((int)this_ + 0x70);
        local_d0 = (float)param_3 * *(float *)((int)this_ + 0x70);
        local_48 = 0;
        local_cc = 0.0f;
        local_50 = local_d4;
        local_4c = local_d0;
        break;
      case 2:
        local_d4 = (float)param_2 * *(float *)((int)this_ + 0x70);
        local_d0 = (float)(param_3 + 1) * *(float *)((int)this_ + 0x70);
        local_28 = 0;
        local_cc = 0.0f;
        local_30 = local_d4;
        local_2c = local_d0;
        break;
      case 3:
        local_d4 = (float)(param_2 + 1) * *(float *)((int)this_ + 0x70);
        local_d0 = (float)(param_3 + 1) * *(float *)((int)this_ + 0x70);
        local_58 = 0;
        local_cc = 0.0f;
        local_60 = local_d4;
        local_5c = local_d0;
      }
      local_1c = local_d0 - local_8c;
      local_18 = local_cc - local_88;
      FUN_00401ec0(bea_arg(local_10), bea_arg(local_18 * local_7c - local_1c * local_78), bea_arg(local_78 * (local_d4 - local_90) - local_18 * local_80), bea_arg(local_1c * local_80 - local_7c * (local_d4 - local_90)));
      if (0.0f <= local_8) break;
      iVar5 = iVar5 + 1;
      if (3 < iVar5) {
        return 0;
      }
    }
    local_c4 = local_c4 + 4;
    if (2 < iVar3) {
      return 1;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d3ce0, ap_004d3ce0));
