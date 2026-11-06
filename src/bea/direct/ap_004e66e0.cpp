// auto-ported from 004e66e0_vslot52.c (CSquad::vslot52, 153 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
typedef char CSquad;
#define DAT_0083d148 GLOBAL_AT(undefined4, 0x0083d148)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
// the original pops 0x47eb80's float (fstp st(0) before ret) and returns its EAX:
// typed uint32_t, bea_guard pops the float (it was float10 and the port returned it,
// leaking one x87 register per call; check_st0 self, 2026-10-27)
typedef uint32_t (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef uint32_t (BEA_THISCALL* FUN_00550ca0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550ca0_t> FUN_00550ca0 = {(FUN_00550ca0_t)0x00550ca0};

static uint32_t BEA_THISCALL ap_004e66e0(CSquad * this_)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_4c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x4c);
  undefined4 &local_48 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x48);
  undefined4 &local_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x44);
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x40);
  undefined4 &local_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x3c);
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x34);
  undefined4 &local_30 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x30);
  undefined4 &local_2c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x2c);
  undefined4 &local_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x28);
  undefined4 &local_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x24);
  undefined4 &local_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x20);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x4);
  local_10 = 0;
  puVar2 = &DAT_0083d148;
  puVar3 = (undefined4 *)&local_4c;
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_c = 0;
  local_8 = 0;
  FUN_00550ca0(bea_arg(&DAT_009c65c0), bea_arg(local_10), bea_arg(0), bea_arg(0), bea_arg(local_4), bea_arg(local_4c), bea_arg(local_48), bea_arg(local_44), bea_arg(local_40), bea_arg(local_3c), bea_arg(local_38), bea_arg(local_34), bea_arg(local_30), bea_arg(local_2c), bea_arg(local_28), bea_arg(local_24), bea_arg(local_20));
  bea_vcall<uint32_t>(this_, 0x40);
  local_10 = *(undefined4 *)(this_ + 0x1c);
  local_c = *(undefined4 *)(this_ + 0x20);
  local_8 = *(undefined4 *)(this_ + 0x24);
  local_4 = *(undefined4 *)(this_ + 0x28);
  return FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&local_10));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e66e0, ap_004e66e0));
