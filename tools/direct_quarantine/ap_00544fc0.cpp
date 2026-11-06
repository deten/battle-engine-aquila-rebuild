// auto-ported from 00544fc0_FUN_00544fc0.c (FUN_00544fc0, 175 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
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

static uint32_t BEA_THISCALL ap_00544fc0(void * this_)
{
  short sVar1;
  int iVar2;
  float *pfVar3;
  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  int &local_1c = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x1c);
  int &local_18 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x18);
  int &local_14 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x14);
  float * &local_10 = *reinterpret_cast<float * *>(bea_frame_ + 0x20 - 0x10);
  int &local_c = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x8);
  void * &local_4 = *reinterpret_cast<void * *>(bea_frame_ + 0x20 - 0x4);
  local_4 = this_;
  FUN_005001b0(bea_arg(*(void **)((int)this_ + 0x28)), bea_arg(&local_10));
  local_1c = 0;
  local_14 = 0x41;
  do {
    iVar2 = 0x41;
    local_18 = 0;
    pfVar3 = local_10;
    do {
      local_8 = bea_fcast<float>(DAT_006fbdf4);
      sVar1 = FUN_0047ea20(bea_arg(&DAT_006fadc8), bea_arg(local_18), bea_arg(local_1c));
      local_c = (int)sVar1;
      pfVar3[1] = (float)local_1c;
      pfVar3[4] = (float)local_1c;
      local_10 = pfVar3 + 5;
      iVar2 = iVar2 + -1;
      pfVar3[2] = (float)local_c * local_8;
      *pfVar3 = (float)local_18;
      pfVar3[3] = (float)local_18;
      pfVar3 = local_10;
      local_18 = local_18 + 8;
    } while (((iVar2 != 0)));
    local_1c = local_1c + 8;
    local_14 = local_14 + -1;
  } while (((local_14 != 0)));
  return FUN_005001e0(bea_arg(*(void **)((int)local_4 + 0x28)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00544fc0, ap_00544fc0));
