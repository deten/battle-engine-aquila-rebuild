// auto-ported from 0053d760_FUN_0053d760.c (FUN_0053d760, 1981 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x220: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (8 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char Vec3;
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Vec3* (BEA_THISCALL* FUN_00401ee0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ee0_t> FUN_00401ee0 = {(FUN_00401ee0_t)0x00401ee0};
typedef Vec3* (BEA_THISCALL* FUN_0040d120_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d120_t> FUN_0040d120 = {(FUN_0040d120_t)0x0040d120};
typedef uint32_t (BEA_THISCALL* FUN_004404f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004404f0_t> FUN_004404f0 = {(FUN_004404f0_t)0x004404f0};
typedef uint32_t (BEA_THISCALL* FUN_004c7d90_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004c7d90_t> FUN_004c7d90 = {(FUN_004c7d90_t)0x004c7d90};
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
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};

static void BEA_STDCALL ap_0053d760(undefined4 param_1, float *param_2, float *param_3, float param_4, float param_5, float param_6, undefined4 param_7, float param_8, float param_9, float param_10, undefined4 param_11, float param_12, float param_13, float param_14, undefined4 param_15, undefined4 param_16)
{
  float fVar1;
  void *this_local;
  float *pfVar2;
  float *pfVar3;
  void *pvVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  float *pfVar8;

  alignas(16) uint8_t bea_frame_[0x220] = {};   // the original stack frame (emulate_frame)
  int &local_218 = *reinterpret_cast<int *>(bea_frame_ + 0x220 - 0x218);
  undefined4 * &local_214 = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0x220 - 0x214);
  float &local_210 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x210);
  float &local_20c = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x20c);
  float &local_208 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x208);
  float &local_200 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x200);
  float &local_1fc = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x1fc);
  float &local_1f8 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x1f8);
  float &local_1f0 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x1f0);
  float &local_1ec = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x1ec);
  float &local_1e8 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x1e8);
  float &local_1e0 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x1e0);
  float &local_1dc = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x1dc);
  float &local_1d8 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x1d8);
  float &local_1d4 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x1d4);
  undefined4 &local_1c4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x220 - 0x1c4);
  undefined4 &local_1c0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x220 - 0x1c0);
  undefined4 &local_1bc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x220 - 0x1bc);
  undefined2 &local_1b8 = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x220 - 0x1b8);
  undefined2 &local_1b6 = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x220 - 0x1b6);
  undefined2 &local_1b4 = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x220 - 0x1b4);
  undefined2 &local_1b2 = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x220 - 0x1b2);
  undefined2 &local_1b0 = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x220 - 0x1b0);
  undefined2 &local_1ae = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x220 - 0x1ae);
  undefined2 &local_1ac = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x220 - 0x1ac);
  undefined2 &local_1aa = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x220 - 0x1aa);
  undefined2 &local_1a8 = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x220 - 0x1a8);
  undefined2 &local_1a6 = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x220 - 0x1a6);
  undefined2 &local_1a4 = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x220 - 0x1a4);
  undefined2 &local_1a2 = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x220 - 0x1a2);
  undefined4 (&local_1a0)[4] = *reinterpret_cast<undefined4 (*)[4]>(bea_frame_ + 0x220 - 0x1a0);
  float &local_190 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x190);
  float &local_18c = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x18c);
  float &local_188 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x188);
  float &local_180 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x180);
  float &local_17c = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x17c);
  float &local_178 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x178);
  float &local_170 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x170);
  float &local_16c = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x16c);
  float &local_168 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x168);
  float &local_160 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x160);
  float &local_15c = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x15c);
  float &local_158 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x158);
  float &local_150 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x150);
  float &local_14c = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x14c);
  float &local_148 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x148);
  float &local_140 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x140);
  float &local_13c = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x13c);
  float &local_138 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x138);
  float &local_130 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x130);
  float &local_12c = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x12c);
  float &local_128 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x128);
  float &local_120 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x120);
  float &local_11c = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x11c);
  float &local_118 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x118);
  float &local_110 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x110);
  float &local_10c = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x10c);
  float &local_108 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x108);
  float (&local_100)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x220 - 0x100);
  float (&local_f0)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x220 - 0xf0);
  float (&local_e0)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x220 - 0xe0);
  float (&local_d0)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x220 - 0xd0);
  float (&local_c0)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x220 - 0xc0);
  float (&local_b0)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x220 - 0xb0);
  float (&local_a0)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x220 - 0xa0);
  float (&local_90)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x220 - 0x90);
  undefined1 (&local_80)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x220 - 0x80);
  undefined1 (&local_70)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x220 - 0x70);
  undefined1 (&local_60)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x220 - 0x60);
  undefined1 (&local_50)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x220 - 0x50);
  undefined1 (&local_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x220 - 0x40);
  undefined1 (&local_30)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x220 - 0x30);
  undefined1 (&local_20)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x220 - 0x20);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x220 - 0x10);
  FUN_00513bc0(bea_arg(0x1b), bea_arg(1));
  FUN_00513bc0(bea_arg(0x13), bea_arg(2));
  FUN_00513bc0(bea_arg(0x14), bea_arg(1));
  FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
  local_1e0 = 0.0;
  local_208 = *param_2;
  local_210 = param_4 * local_208;
  local_20c = param_8 * local_208;
  local_208 = param_12 * local_208;
  fVar1 = param_2[1];
  FUN_00401ec0(bea_arg(&local_200), bea_arg(param_5 * fVar1 + 0.0), bea_arg(param_9 * fVar1 + 0.0), bea_arg(param_13 * fVar1 + 0.0));
  fVar1 = param_2[2];
  FUN_00401ec0(bea_arg(&local_1f0), bea_arg(param_6 * fVar1 + 0.0), bea_arg(param_10 * fVar1 + 0.0), bea_arg(param_14 * fVar1 + local_1e0))
  ;
  this_local = (void *)FUN_00501280(param_16,0);
  FUN_00500540(bea_arg(this_local), bea_arg(0x152), bea_arg(0x208), bea_arg(0x24), bea_arg(4), bea_arg(0));
  FUN_00500590(bea_arg(this_local), bea_arg(0x65), bea_arg(0x208), bea_arg(2), bea_arg(0));
  local_218 = 0;
  do {
    local_214 = local_1a0;
    uVar6 = 0;
    do {
      switch(local_218) {
      case 0:
        if ((uVar6 & 2) == 0) {
          FUN_00401ec0(bea_arg(local_100), bea_arg(-local_1f0), bea_arg(-local_1ec), bea_arg(-local_1e8));
          pfVar2 = local_100;
        }
        else {
          pfVar2 = &local_1f0;
        }
        if ((uVar6 & 1) == 0) {
          FUN_00401ec0(bea_arg(local_90), bea_arg(-local_200), bea_arg(-local_1fc), bea_arg(-local_1f8));
          pfVar3 = local_90;
        }
        else {
          pfVar3 = &local_200;
        }
        FUN_00401ec0(bea_arg(&local_130), bea_arg(local_210 + *pfVar3), bea_arg(local_20c + pfVar3[1]), bea_arg(local_208 + pfVar3[2]));
        FUN_00401ec0(bea_arg(&local_190), bea_arg(local_130 + *pfVar2), bea_arg(local_12c + pfVar2[1]), bea_arg(local_128 + pfVar2[2]));
        local_1dc = local_190;
        local_1d8 = local_18c;
        local_1d4 = local_188;
        break;
      case 1:
        if ((uVar6 & 2) == 0) {
          FUN_00401ec0(bea_arg(local_e0), bea_arg(-local_1f0), bea_arg(-local_1ec), bea_arg(-local_1e8));
          pfVar2 = local_e0;
        }
        else {
          pfVar2 = &local_1f0;
        }
        if ((uVar6 & 1) == 0) {
          FUN_00401ec0(bea_arg(local_b0), bea_arg(-local_200), bea_arg(-local_1fc), bea_arg(-local_1f8));
          pfVar3 = local_b0;
        }
        else {
          pfVar3 = &local_200;
        }
        FUN_00401ec0(bea_arg(&local_110), bea_arg(-local_210), bea_arg(-local_20c), bea_arg(-local_208));
        FUN_00401ec0(bea_arg(&local_140), bea_arg(local_110 + *pfVar3), bea_arg(local_10c + pfVar3[1]), bea_arg(local_108 + pfVar3[2]));
        FUN_00401ec0(bea_arg(&local_160), bea_arg(local_140 + *pfVar2), bea_arg(local_13c + pfVar2[1]), bea_arg(local_138 + pfVar2[2]));
        local_1dc = local_160;
        local_1d8 = local_15c;
        local_1d4 = local_158;
        break;
      case 2:
        if ((uVar6 & 2) == 0) {
          FUN_00401ec0(bea_arg(local_a0), bea_arg(-local_1f0), bea_arg(-local_1ec), bea_arg(-local_1e8));
          pfVar2 = local_a0;
        }
        else {
          pfVar2 = &local_1f0;
        }
        if ((uVar6 & 1) == 0) {
          FUN_00401ec0(bea_arg(local_c0), bea_arg(-local_210), bea_arg(-local_20c), bea_arg(-local_208));
          pfVar3 = local_c0;
        }
        else {
          pfVar3 = &local_210;
        }
        FUN_00401ec0(bea_arg(&local_120), bea_arg(local_200 + *pfVar3), bea_arg(local_1fc + pfVar3[1]), bea_arg(local_1f8 + pfVar3[2]));
        FUN_00401ec0(bea_arg(&local_180), bea_arg(local_120 + *pfVar2), bea_arg(local_11c + pfVar2[1]), bea_arg(local_118 + pfVar2[2]));
        local_1dc = local_180;
        local_1d8 = local_17c;
        local_1d4 = local_178;
        break;
      case 3:
        if ((uVar6 & 2) == 0) {
          FUN_00401ec0(bea_arg(local_f0), bea_arg(-local_1f0), bea_arg(-local_1ec), bea_arg(-local_1e8));
          pfVar2 = local_f0;
        }
        else {
          pfVar2 = &local_1f0;
        }
        if ((uVar6 & 1) == 0) {
          FUN_00401ec0(bea_arg(local_d0), bea_arg(-local_210), bea_arg(-local_20c), bea_arg(-local_208));
          pfVar3 = local_d0;
        }
        else {
          pfVar3 = &local_210;
        }
        FUN_00401ec0(bea_arg(&local_170), bea_arg(*pfVar3 - local_200), bea_arg(pfVar3[1] - local_1fc), bea_arg(pfVar3[2] - local_1f8));
        FUN_00401ec0(bea_arg(&local_150), bea_arg(local_170 + *pfVar2), bea_arg(local_16c + pfVar2[1]), bea_arg(local_168 + pfVar2[2]));
        local_1dc = local_150;
        local_1d8 = local_14c;
        local_1d4 = local_148;
        break;
      case 4:
        if ((uVar6 & 2) == 0) {
          pfVar2 = (float *)FUN_004404f0(bea_arg(&local_200), bea_arg(local_10));
        }
        else {
          pfVar2 = &local_200;
        }
        if ((uVar6 & 1) == 0) {
          pfVar3 = (float *)FUN_004404f0(bea_arg(&local_210), bea_arg(local_30));
        }
        else {
          pfVar3 = &local_210;
        }
        pfVar8 = &local_1f0;
        puVar7 = local_80;
        pvVar4 = (void *)FUN_00401ee0(bea_arg(pfVar3), bea_arg(local_60), bea_arg(pfVar2));
        uVar5 = FUN_00401ee0(bea_arg(pvVar4), bea_arg(puVar7), bea_arg(pfVar8));
        goto LAB_0053ddaf;
      case 5:
        if ((uVar6 & 2) == 0) {
          pfVar2 = (float *)FUN_004404f0(bea_arg(&local_200), bea_arg(local_20));
        }
        else {
          pfVar2 = &local_200;
        }
        if ((uVar6 & 1) == 0) {
          pfVar3 = (float *)FUN_004404f0(bea_arg(&local_210), bea_arg(local_40));
        }
        else {
          pfVar3 = &local_210;
        }
        pfVar8 = &local_1f0;
        puVar7 = local_70;
        pvVar4 = (void *)FUN_00401ee0(bea_arg(pfVar3), bea_arg(local_50), bea_arg(pfVar2));
        uVar5 = FUN_0040d120(bea_arg(pvVar4), bea_arg(puVar7), bea_arg(pfVar8));
LAB_0053ddaf:
        FUN_004c7d90(bea_arg(&local_1dc), bea_arg(uVar5));
      }
      local_1c0 = 0x3f800000;
      local_1dc = local_1dc + *param_3;
      local_1d8 = local_1d8 + param_3[1];
      local_1d4 = local_1d4 + param_3[2];
      if ((uVar6 & 1) == 0) {
        local_1c0 = 0;
      }
      local_1bc = 0;
      if ((uVar6 & 2) == 0) {
        local_1bc = 0x3f800000;
      }
      if (local_218 == 2) {
        local_1c4 = 0xffffffff;
      }
      else {
        local_1c4 = param_1;
      }
      uVar5 = FUN_00500a10(bea_arg(this_local), bea_arg(&local_1dc), bea_arg(1));
      uVar6 = uVar6 + 1;
      *local_214 = uVar5;
      local_214 = local_214 + 1;
    } while (BEA_LOOP_GUARD(((int)uVar6 < 4)));
    local_1b6 = (undefined2)local_1a0[3];
    local_1b8 = (undefined2)local_1a0[0];
    local_1b4 = (undefined2)local_1a0[2];
    local_1b0 = (undefined2)local_1a0[1];
    local_1b2 = local_1b8;
    local_1ae = local_1b6;
    local_1ac = local_1b8;
    local_1aa = local_1b4;
    local_1a8 = local_1b6;
    local_1a6 = local_1b8;
    local_1a4 = local_1b6;
    local_1a2 = local_1b0;
    FUN_00500ac0(bea_arg(this_local), bea_arg(&local_1b8), bea_arg(0xc));
    local_218 = local_218 + 1;
    if (5 < local_218) {
      FUN_00500e70(bea_arg(this_local), bea_arg(1));
      if (this_local != (void *)0x0) {
        FUN_00501310(bea_arg(this_local));
      }
      FUN_00513bc0(bea_arg(0x13), bea_arg(5));
      FUN_00513bc0(bea_arg(0x14), bea_arg(6));
      FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
      return;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
// superseded by src/bea/lifted/lift_0053d760.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
