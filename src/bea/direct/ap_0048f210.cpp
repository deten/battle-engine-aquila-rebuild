// auto-ported from 0048f210_FUN_0048f210.c (FUN_0048f210, 215 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-28 check_fild: local_10 = iVar2 before/after the loops is an int store into the slot (mov [esp+0x14],ebx 0x48f229; mov [esp+0x18],ebx 0x48f2c3), converted in place by the loop-top fild 0x48f242 -> bea_fcast
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
#define DAT_006fbdf4 GLOBAL_AT(int, 0x006fbdf4)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef uint (BEA_FASTCALL* FUN_0047ea20_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0047ea20_t> FUN_0047ea20 = {(FUN_0047ea20_t)0x0047ea20};
typedef undefined4 (BEA_THISCALL* FUN_005001b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005001b0_t> FUN_005001b0 = {(FUN_005001b0_t)0x005001b0};
typedef int (BEA_THISCALL* FUN_005001e0_t)(uint32_t);
static const bea_guard<FUN_005001e0_t> FUN_005001e0 = {(FUN_005001e0_t)0x005001e0};

static void BEA_THISCALL ap_0048f210(void * this_)
{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  float * &local_18 = *reinterpret_cast<float * *>(bea_frame_ + 0x20 - 0x18);
  int &local_14 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x14);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x10);
  int &local_c = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0xc);
  int &local_8 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x8);
  float &local_4 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x4);
  FUN_005001b0(bea_arg(this_), bea_arg(&local_18));
  iVar2 = *(int *)((int)this_ + 0x30);
  local_8 = *(int *)((int)this_ + 0x44) + 1;
  local_10 = bea_fcast<float>(iVar2);
  iVar3 = local_8;
  if (local_8 != 0) {
    do {
      local_c = iVar3;
      local_10 = (float)iVar2;
      iVar4 = *(int *)((int)this_ + 0x2c);
      iVar3 = local_8;
      do {
        *local_18 = (float)iVar4;
        local_18[1] = local_10;
        local_4 = bea_fcast<float>(DAT_006fbdf4);
        local_14 = iVar4;
        sVar1 = FUN_0047ea20(bea_arg(&DAT_006fadc8), bea_arg(iVar4), bea_arg(iVar2));
        local_18[2] = (float)(int)sVar1 * local_4;
        local_18[3] = *local_18;
        local_18[4] = local_18[1];
        local_18 = local_18 + 5;
        iVar4 = iVar4 + *(int *)((int)this_ + 0x34);
        iVar3 = iVar3 + -1;
      } while (((iVar3 != 0)));
      iVar2 = iVar2 + *(int *)((int)this_ + 0x34);
      iVar3 = local_c + -1;
    } while (((local_c + -1 != 0)));
    local_c = 0;
    local_14 = iVar4;
    local_10 = bea_fcast<float>(iVar2);
  }
  FUN_005001e0(bea_arg(this_));
  *(undefined4 *)((int)this_ + 0x40) = 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048f210, ap_0048f210));
