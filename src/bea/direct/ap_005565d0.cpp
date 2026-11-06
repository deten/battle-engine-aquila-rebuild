// auto-ported from 005565d0_FUN_005565d0.c (FUN_005565d0, 1029 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0082b4a4 GLOBAL_AT(int, 0x0082b4a4)
#define s_C__dev_ONSLAUGHT2_DXSurf_cpp_006525a0 ((char*)0x006525a0)
typedef bool (BEA_THISCALL* FUN_00423960_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00423960_t> FUN_00423960 = {(FUN_00423960_t)0x00423960};
typedef void * (BEA_THISCALL* FUN_004fff00_t)(uint32_t);
static const bea_guard<FUN_004fff00_t> FUN_004fff00 = {(FUN_004fff00_t)0x004fff00};
typedef bool (BEA_THISCALL* FUN_005000c0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005000c0_t> FUN_005000c0 = {(FUN_005000c0_t)0x005000c0};
typedef undefined4 (BEA_THISCALL* FUN_005001b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005001b0_t> FUN_005001b0 = {(FUN_005001b0_t)0x005001b0};
typedef int (BEA_THISCALL* FUN_005001e0_t)(uint32_t);
static const bea_guard<FUN_005001e0_t> FUN_005001e0 = {(FUN_005001e0_t)0x005001e0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_THISCALL ap_005565d0(void * this_, void *param_1)
{
  void *this_00;
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float10 fVar5;
  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  undefined4 * &local_20 = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0x20 - 0x20);
  undefined4 * &local_1c = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0x20 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x18);
  float &local_14 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x14);
  void * &local_10 = *reinterpret_cast<void * *>(bea_frame_ + 0x20 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x20 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x4);
  this_00 = param_1;
  local_10 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x2c), bea_arg(0x2c), bea_arg(s_C__dev_ONSLAUGHT2_DXSurf_cpp_006525a0), bea_arg(0xa8));
  if (local_10 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)FUN_004fff00(bea_arg(local_10));
  }
  *(void **)this_ = pvVar1;
  FUN_005000c0(bea_arg(pvVar1), bea_arg(*(int *)((int)this_ + 8) * 2 + 2), bea_arg(0x20), bea_arg(0x242));
  local_10 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x2c), bea_arg(0x2c), bea_arg(s_C__dev_ONSLAUGHT2_DXSurf_cpp_006525a0), bea_arg(0xab));
  if (local_10 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)FUN_004fff00(bea_arg(local_10));
  }
  *(void **)((int)this_ + 4) = pvVar1;
  FUN_005000c0(bea_arg(pvVar1), bea_arg(*(int *)((int)this_ + 8) * 2 + 2), bea_arg(0x20), bea_arg(0x242));
  FUN_005001b0(bea_arg(*(void **)this_), bea_arg(&local_1c));
  FUN_005001b0(bea_arg(*(void **)((int)this_ + 4)), bea_arg(&local_20));
  local_18 = 0.0;
  if (-1 < *(int *)((int)this_ + 8)) {
    local_10 = (void *)(*(int *)((int)this_ + 8) + 1);
    do {
      fVar5 = bea_fcast<float10>(fsin(bea_fcast<float10>(local_18) * bea_fcast<float10>(0.5f)));
      local_14 = bea_fcast<float>((fVar5 * bea_fcast<float10>(0.5f)));
      FUN_00423960(bea_arg(this_00), bea_arg(local_20), bea_arg(4), bea_arg(1));
      FUN_00423960(bea_arg(this_00), bea_arg(local_20 + 1), bea_arg(4), bea_arg(1));
      FUN_00423960(bea_arg(this_00), bea_arg(local_20 + 2), bea_arg(4), bea_arg(1));
      if (DAT_0082b4a4 == 0) {
        local_20[4] = *local_20;
        local_20[5] = local_20[1];
        local_20[6] = bea_piece32(local_18);
        local_20[7] = bea_piece32((local_14 - 0.25f) - local_18 * 0.25f);
      }
      else {
        local_20[6] = *local_20;
        local_20[7] = local_20[1];
        local_20[4] = bea_piece32(local_18);
        local_20[5] = bea_piece32((local_14 - 0.25f) - local_18 * 0.25f);
      }
      param_1 = (void *)(uintptr_t)bea_piece32((local_18 * 0.25f));
      local_20[3] = 0xffffff;
      FUN_00423960(bea_arg(this_00), bea_arg(local_20 + 8), bea_arg(4), bea_arg(1));
      FUN_00423960(bea_arg(this_00), bea_arg(local_20 + 9), bea_arg(4), bea_arg(1));
      FUN_00423960(bea_arg(this_00), bea_arg(local_20 + 10), bea_arg(4), bea_arg(1));
      if (DAT_0082b4a4 == 0) {
        local_20[0xc] = local_20[8];
        local_20[0xd] = local_20[9];
        local_20[0xe] = bea_piece32(local_18);
        local_20[0xf] = bea_piece32(local_14 - bea_fcast<float>(param_1));
      }
      else {
        local_20[0xe] = local_20[8];
        local_20[0xf] = local_20[9];
        local_20[0xc] = bea_piece32(local_18);
        local_20[0xd] = bea_piece32(local_14 - bea_fcast<float>(param_1));
      }
      local_20[0xb] = 0xc0ffffff;
      puVar3 = local_20 + 8;
      puVar4 = local_1c;
      for (iVar2 = 8; ((iVar2 != 0)); iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      if (DAT_0082b4a4 == 0) {
        local_1c[4] = *local_1c;
        local_1c[5] = local_1c[1];
        local_1c[6] = bea_piece32(local_18);
        local_1c[7] = bea_piece32(local_14 - bea_fcast<float>(param_1));
      }
      else {
        local_1c[6] = *local_1c;
        local_1c[7] = local_1c[1];
        local_1c[4] = bea_piece32(local_18);
        local_1c[5] = bea_piece32(local_14 - bea_fcast<float>(param_1));
      }
      local_1c[3] = 0xc0ffffff;
      FUN_00423960(bea_arg(this_00), bea_arg(local_1c + 8), bea_arg(4), bea_arg(1));
      FUN_00423960(bea_arg(this_00), bea_arg(local_1c + 9), bea_arg(4), bea_arg(1));
      FUN_00423960(bea_arg(this_00), bea_arg(local_1c + 10), bea_arg(4), bea_arg(1));
      if (DAT_0082b4a4 == 0) {
        local_1c[0xc] = local_1c[8];
        local_1c[0xd] = local_1c[9];
        local_1c[0xe] = bea_piece32(local_18 + 0.0625f);
        local_1c[0xf] = bea_piece32((local_14 + 2.0f) - bea_fcast<float>(param_1));
      }
      else {
        local_1c[0xe] = local_1c[8];
        local_1c[0xf] = local_1c[9];
        local_1c[0xc] = bea_piece32(local_18 + 0.0625f);
        local_1c[0xd] = bea_piece32((local_14 + 2.0f) - bea_fcast<float>(param_1));
      }
      local_18 = local_18 + 0.125f;
      local_1c[0xb] = 0xff000000;
      local_1c = local_1c + 0x10;
      local_20 = local_20 + 0x10;
      local_10 = (void *)((int)local_10 + -1);
    } while (((local_10 != (void *)0x0)));
    local_10 = (void *)0x0;
  }
  FUN_005001e0(bea_arg(*(void **)this_));
  return FUN_005001e0(bea_arg(*(void **)((int)this_ + 4)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005565d0, ap_005565d0));
