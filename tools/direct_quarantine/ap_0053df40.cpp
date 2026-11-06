// auto-ported from 0053df40_FUN_0053df40.c (FUN_0053df40, 734 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xe0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0089d640 GLOBAL_AT(undefined4, 0x0089d640)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_0089d670 GLOBAL_AT(float, 0x0089d670)
typedef uint32_t (BEA_THISCALL* FUN_00500540_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500540_t> FUN_00500540 = {(FUN_00500540_t)0x00500540};
typedef uint32_t (BEA_THISCALL* FUN_00500590_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500590_t> FUN_00500590 = {(FUN_00500590_t)0x00500590};
typedef int (BEA_THISCALL* FUN_00500a10_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500a10_t> FUN_00500a10 = {(FUN_00500a10_t)0x00500a10};
typedef uint32_t (BEA_THISCALL* FUN_00500ac0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500ac0_t> FUN_00500ac0 = {(FUN_00500ac0_t)0x00500ac0};
typedef uint32_t (BEA_THISCALL* FUN_00500e70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00500e70_t> FUN_00500e70 = {(FUN_00500e70_t)0x00500e70};
typedef int * (BEA_CDECL* FUN_00501280_t)(int, int, ...);
static const bea_guard<FUN_00501280_t> FUN_00501280 = {(FUN_00501280_t)0x00501280};
typedef uint32_t (BEA_THISCALL* FUN_00501310_t)(uint32_t);
static const bea_guard<FUN_00501310_t> FUN_00501310 = {(FUN_00501310_t)0x00501310};
typedef uint32_t (BEA_THISCALL* FUN_00550ca0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550ca0_t> FUN_00550ca0 = {(FUN_00550ca0_t)0x00550ca0};

static void BEA_THISCALL ap_0053df40(void * this_, float param_1, float param_2, float param_3, undefined4 param_4, float param_5, float param_6, float param_7, undefined4 param_8, undefined4 param_9)
{
  float fVar1;
  void *this_00;
  float *pfVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;

  alignas(16) uint8_t bea_frame_[0xe0] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_d4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xd4);
  undefined4 &local_d0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xd0);
  undefined4 &local_cc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xcc);
  undefined4 &local_c8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xc8);
  undefined4 &local_c4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xc4);
  undefined4 &local_c0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xc0);
  undefined4 &local_bc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xbc);
  undefined4 &local_b8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xb8);
  undefined4 &local_b4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xb4);
  undefined4 &local_b0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xb0);
  undefined4 &local_ac = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xac);
  undefined4 &local_a8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xa8);
  float &local_94 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x94);
  float &local_90 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x90);
  float &local_8c = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x8c);
  undefined4 &local_88 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x88);
  undefined4 &local_84 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x84);
  undefined2 &local_80 = *reinterpret_cast<undefined2 *>(bea_frame_ + 0xe0 - 0x80);
  undefined2 &local_7e = *reinterpret_cast<undefined2 *>(bea_frame_ + 0xe0 - 0x7e);
  undefined2 &local_7c = *reinterpret_cast<undefined2 *>(bea_frame_ + 0xe0 - 0x7c);
  undefined2 &local_7a = *reinterpret_cast<undefined2 *>(bea_frame_ + 0xe0 - 0x7a);
  undefined2 &local_76 = *reinterpret_cast<undefined2 *>(bea_frame_ + 0xe0 - 0x76);
  float &local_74 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x74);
  float &local_70 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x70);
  float &local_6c = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x6c);
  float &local_64 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x64);
  float &local_60 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x60);
  float &local_5c = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x5c);
  undefined4 &local_54 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x54);
  undefined2 &local_50 = *reinterpret_cast<undefined2 *>(bea_frame_ + 0xe0 - 0x50);
  undefined2 &local_4c = *reinterpret_cast<undefined2 *>(bea_frame_ + 0xe0 - 0x4c);
  undefined2 &local_48 = *reinterpret_cast<undefined2 *>(bea_frame_ + 0xe0 - 0x48);
  float &local_44 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x44);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x3c);
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x2c);
  float &local_24 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x24);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x1c);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x4);
  puVar6 = &DAT_0089d640;
  puVar8 = (undefined4 *)&local_d4;
  for (iVar4 = 0xc; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = iVar4 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  local_94 = 0.0f;
  local_90 = 0.0f;
  local_8c = 0.0f;
  FUN_00550ca0(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(local_88), bea_arg(local_d4), bea_arg(local_d0), bea_arg(local_cc), bea_arg(local_c8), bea_arg(local_c4), bea_arg(local_c0), bea_arg(local_bc), bea_arg(local_b8), bea_arg(local_b4), bea_arg(local_b0), bea_arg(local_ac), bea_arg(local_a8));
  local_64 = param_5 - param_1;
  local_84 = 0;
  local_8c = 0.0f;
  local_60 = param_6 - param_2;
  local_5c = param_7 - param_3;
  local_94 = local_60 * -1.0f - 0.0f;
  local_90 = 0.0f - local_64 * -1.0f;
  fVar1 = SQRT(local_90 * local_90 + local_94 * local_94 + 0.0f);
  if (fVar1 != 0.0f) {
    local_8c = 1.0f / fVar1;
    local_94 = local_94 * local_8c;
    local_90 = local_90 * local_8c;
    local_8c = local_8c * 0.0f;
  }
  local_94 = local_94 * 0.5f;
  local_90 = local_90 * 0.5f;
  local_8c = local_8c * 0.5f;
  this_00 = (void *)FUN_00501280(*(undefined4 *)((int)this_ + 0x4ec),0);
  FUN_00500540(bea_arg(this_00), bea_arg(0x152), bea_arg(0x208), bea_arg(0x24), bea_arg(4), bea_arg(0));
  FUN_00500590(bea_arg(this_00), bea_arg(0x65), bea_arg(0x208), bea_arg(2), bea_arg(0));
  local_74 = param_1;
  local_70 = param_2;
  uVar7 = 0;
  puVar6 = &local_54;
  local_6c = param_3 - 0.5f;
  do {
    if ((uVar7 & 2) == 0) {
      local_44 = -local_94;
      local_40 = -local_90;
      local_3c = -local_8c;
      pfVar5 = &local_44;
    }
    else {
      pfVar5 = &local_94;
    }
    pfVar2 = (float *)&DAT_0089d670;
    if ((uVar7 & 1) == 0) {
      pfVar2 = &local_64;
    }
    local_8 = 0x3f800000;
    local_30 = pfVar5[1] + pfVar2[1];
    local_2c = pfVar5[2] + pfVar2[2];
    local_24 = *pfVar5 + *pfVar2 + local_74;
    local_20 = pfVar5[1] + pfVar2[1] + local_70;
    local_1c = local_2c + local_6c;
    if ((uVar7 & 2) == 0) {
      local_8 = 0;
    }
    local_4 = 0;
    if ((uVar7 & 1) == 0) {
      local_4 = 0x3f800000;
    }
    local_c = param_9;
    uVar3 = FUN_00500a10(bea_arg(this_00), bea_arg(&local_24), bea_arg(1));
    *puVar6 = uVar3;
    uVar7 = uVar7 + 1;
    puVar6 = puVar6 + 1;
  } while (BEA_LOOP_GUARD(((int)uVar7 < 4)));
  local_7c = local_4c;
  local_80 = (undefined2)local_54;
  local_7e = local_50;
  local_76 = local_48;
  local_7a = local_80;
  FUN_00500ac0(bea_arg(this_00), bea_arg(&local_80), bea_arg(6));
  FUN_00500e70(bea_arg(this_00), bea_arg(1));
  if (this_00 != (void *)0x0) {
    FUN_00501310(bea_arg(this_00));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053df40, ap_0053df40));
