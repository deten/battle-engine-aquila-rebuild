// auto-ported from 005588f0_FUN_005588f0.c (FUN_005588f0, 1509 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x140: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char _DAT_0089cdd4;
#define DAT_00704e48 GLOBAL_AT(int, 0x00704e48)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_0063012c GLOBAL_AT(int, 0x0063012c)
#define DAT_009c65c0 GLOBAL_AT(float, 0x009c65c0)
#define DAT_009c6914 GLOBAL_AT(undefined4, 0x009c6914)
#define DAT_009c6994 GLOBAL_AT(float, 0x009c6994)
#define _DAT_0089cdd4 GLOBAL_AT(float, 0x0089cdd4)
#define _DAT_0089cdd0 GLOBAL_AT(float, 0x0089cdd0)
#define DAT_009c68ad GLOBAL_AT(char, 0x009c68ad)
#define DAT_009c6910 GLOBAL_AT(char, 0x009c6910)
typedef uint32_t (BEA_THISCALL* FUN_0044a5f0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044a5f0_t> FUN_0044a5f0 = {(FUN_0044a5f0_t)0x0044a5f0};
typedef uint32_t (BEA_STDCALL* FUN_00513820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513820_t> FUN_00513820 = {(FUN_00513820_t)0x00513820};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_STDCALL* FUN_00513d90_t)(uint32_t);
static const bea_guard<FUN_00513d90_t> FUN_00513d90 = {(FUN_00513d90_t)0x00513d90};
typedef undefined4 (BEA_CDECL* FUN_00558ef0_t)(uint32_t);
static const bea_guard<FUN_00558ef0_t> FUN_00558ef0 = {(FUN_00558ef0_t)0x00558ef0};
typedef void * (BEA_STDCALL* FUN_00575ffe_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00575ffe_t> FUN_00575ffe = {(FUN_00575ffe_t)0x00575ffe};
typedef void * (BEA_STDCALL* FUN_00576b3a_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00576b3a_t> FUN_00576b3a = {(FUN_00576b3a_t)0x00576b3a};

static undefined4 BEA_THISCALL ap_005588f0(void * this_)
{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float *pfVar7;

  alignas(16) uint8_t bea_frame_[0x140] = {};   // the original stack frame (emulate_frame)
  float (&local_138)[17] = *reinterpret_cast<float (*)[17]>(bea_frame_ + 0x140 - 0x138);
  undefined1 (&auStack_f4)[24] = *reinterpret_cast<undefined1 (*)[24]>(bea_frame_ + 0x140 - 0xf4);
  float (&local_dc)[5] = *reinterpret_cast<float (*)[5]>(bea_frame_ + 0x140 - 0xdc);
  float &local_c8 = *reinterpret_cast<float *>(bea_frame_ + 0x140 - 0xc8);
  undefined4 &local_c4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x140 - 0xc4);
  undefined4 &local_c0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x140 - 0xc0);
  undefined4 &local_b8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x140 - 0xb8);
  undefined4 &local_b4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x140 - 0xb4);
  undefined4 &local_b0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x140 - 0xb0);
  undefined4 &local_ac = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x140 - 0xac);
  undefined4 &local_a8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x140 - 0xa8);
  undefined4 &local_a4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x140 - 0xa4);
  undefined4 &local_a0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x140 - 0xa0);
  undefined4 &local_9c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x140 - 0x9c);
  undefined4 &local_98 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x140 - 0x98);
  undefined4 &local_94 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x140 - 0x94);
  undefined1 (&local_90)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x140 - 0x90);
  undefined4 (&auStack_80)[14] = *reinterpret_cast<undefined4 (*)[14]>(bea_frame_ + 0x140 - 0x80);
  undefined1 (&auStack_48)[8] = *reinterpret_cast<undefined1 (*)[8]>(bea_frame_ + 0x140 - 0x48);
  undefined1 (&auStack_40)[64] = *reinterpret_cast<undefined1 (*)[64]>(bea_frame_ + 0x140 - 0x40);
  if (DAT_00704e48 == 5) {
    return 1;
  }
  local_dc[0] = 0.0f;
  local_c8 = 0.0f;
  local_c4 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_dc[1] = 0.0f;
  local_dc[2] = 0.0f;
  local_dc[3] = 0.0f;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  FUN_0044a5f0(bea_arg(local_90), bea_arg(0), bea_arg(0), bea_arg(0));
  if ((((*(int *)((int)this_ + 0x94) != 0x3f800000) || (*(int *)((int)this_ + 0x98) != 0x3f800000)) ||
      (*(float *)((int)this_ + 0x8c) != 0.0f)) || (*(float *)((int)this_ + 0x90) != 0.0f)) {
    local_138[0] = *(float *)((int)this_ + 0x94);
    local_138[5] = *(float *)((int)this_ + 0x98);
    local_138[1] = 0.0f;
    local_138[2] = 0.0f;
    local_138[3] = 0.0f;
    local_138[4] = 0.0f;
    local_138[8] = *(float *)((int)this_ + 0x8c) - (*(float *)((int)this_ + 0x94) - 1.0f) * 0.5f;
    local_138[6] = 0.0f;
    local_138[7] = 0.0f;
    local_138[10] = 1.0f;
    local_138[0xb] = 0.0f;
    *(float *)((int)this_ + 0x8c) = local_138[8];
    local_138[0xc] = 0.0f;
    local_138[0xd] = 0.0f;
    local_138[0xe] = 0.0f;
    local_138[0xf] = 1.0f;
    local_138[9] = (*(float *)((int)this_ + 0x98) - 1.0f) * 0.5f + *(float *)((int)this_ + 0x90);
    *(float *)((int)this_ + 0x90) = local_138[9];
    bea_vcall<uint32_t>(DAT_00888a50, 0xb0, DAT_00888a50,0x10,local_138);
    FUN_00513820(bea_arg(0), bea_arg(0x18), bea_arg(2));
  }
  iVar2 = DAT_0063012c;
  switch(*(undefined4 *)((int)this_ + 0x88)) {
  case 0:
    FUN_00558ef0(bea_arg(DAT_0063012c));
    if (iVar2 != 0xff) {
      FUN_00513bc0(bea_arg(0x1b), bea_arg(1));
      return 1;
    }
    break;
  case 1:
    FUN_00513820(bea_arg(0), bea_arg(1), bea_arg(0x18));
    FUN_00513820(bea_arg(0), bea_arg(2), bea_arg(2));
    FUN_00513820(bea_arg(0), bea_arg(3), bea_arg(3));
    FUN_00513bc0(bea_arg(0xf), bea_arg(0));
    pfVar5 = (float *)&DAT_009c65c0;
    pfVar7 = local_dc;
    for (iVar2 = 0x17; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
      *pfVar7 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar7 = pfVar7 + 1;
    }
    puVar4 = &DAT_009c6914;
    puVar6 = auStack_80;
    for (iVar2 = 0x10; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_00576b3a(bea_arg(auStack_40), bea_arg(auStack_80));
    local_138[0xe] = local_dc[3];
    local_138[0xf] = local_dc[4];
    local_138[0x10] = local_c8;
    FUN_00575ffe(bea_arg(auStack_f4), bea_arg(local_138 + 0xe), bea_arg(auStack_48));
    FUN_00513bc0(bea_arg(0x3c), bea_arg((((int)(longlong)ROUND(local_138[0xe] * 127.0f + 128.0f) + 0xff00) * 0x100 +
                      (int)(longlong)ROUND(local_138[0xf] * 127.0f + 128.0f)) * 0x100 +
                      (int)(longlong)ROUND(local_138[0x10] * 127.0f + 128.0f)));
    return 1;
  case 2:
    local_138[0] = 0.5f;
    local_138[1] = 0.0f;
    local_138[2] = 0.0f;
    local_138[3] = 0.0f;
    local_138[4] = 0.0f;
    local_138[5] = -0.5f;
    local_138[6] = 0.0f;
    local_138[7] = 0.0f;
    local_138[8] = 0.0f;
    local_138[9] = 0.0f;
    local_138[10] = 1.0f;
    local_138[0xb] = 0.0f;
    local_138[0xc] = 0.5f;
    local_138[0xd] = 0.5f;
    local_138[0xe] = 0.0f;
    local_138[0xf] = 1.0f;
    bea_vcall<uint32_t>(DAT_00888a50, 0xb0, DAT_00888a50,0x10,local_138);
    FUN_00513820(bea_arg(0), bea_arg(0x18), bea_arg(2));
    FUN_00513820(bea_arg(0), bea_arg(0xb), bea_arg(0x30000));
    FUN_00513bc0(bea_arg(0x13), bea_arg(5));
    FUN_00513bc0(bea_arg(0x14), bea_arg(6));
    FUN_00513bc0(bea_arg(0xf), bea_arg(0));
    FUN_00513bc0(bea_arg(0x1b), bea_arg(1));
    cVar1 = FUN_00558ef0(bea_arg(iVar2));
    if (cVar1 == '\0') {
      return 0;
    }
    break;
  case 3:
    pfVar5 = (float *)&DAT_009c6994;
    pfVar7 = local_138;
    for (iVar3 = 0x10; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
      *pfVar7 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar7 = pfVar7 + 1;
    }
    local_138[0] = local_138[0] * 0.30487806f;
    local_138[1] = local_138[1] * 0.30487806f;
    local_138[2] = local_138[2] * 0.30487806f;
    local_138[3] = local_138[3] * 0.30487806f;
    local_138[4] = local_138[4] * -0.44444445f;
    local_138[5] = local_138[5] * -0.44444445f;
    local_138[6] = local_138[6] * -0.44444445f;
    local_138[7] = local_138[7] * -0.44444445f;
    local_138[8] = -((-(_DAT_0089cdd4 * _DAT_0089cdd0) * 3.12f) / (_DAT_0089cdd4 - _DAT_0089cdd0));
    local_138[9] = -((-(_DAT_0089cdd4 * _DAT_0089cdd0) * 4.68f) / (_DAT_0089cdd4 - _DAT_0089cdd0));
    bea_vcall<uint32_t>(DAT_00888a50, 0xb0, DAT_00888a50,0x10,local_138);
    FUN_00513820(bea_arg(0), bea_arg(0x18), bea_arg(0x104));
    FUN_00513820(bea_arg(0), bea_arg(0xb), bea_arg(0x20000));
    DAT_009c68ad = 0;
    DAT_009c6910 = 1;
    FUN_00513820(bea_arg(0), bea_arg(1), bea_arg(4));
    goto LAB_00558ec0;
  case 4:
    FUN_00513bc0(bea_arg(0x1b), bea_arg(1));
    FUN_00513d90(bea_arg(1));
    FUN_00513bc0(bea_arg(0x13), bea_arg(5));
    FUN_00513bc0(bea_arg(0x14), bea_arg(6));
LAB_00558ec0:
    FUN_00558ef0(bea_arg(iVar2));
    break;
  case 5:
    return 0;
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005588f0, ap_005588f0));
