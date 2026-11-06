// auto-ported from 00550ca0_FUN_00550ca0.c (FUN_00550ca0, 165 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_00550ca0(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, undefined4 param_14, undefined4 param_15, undefined4 param_16)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  undefined4 (&local_40)[5] = *reinterpret_cast<undefined4 (*)[5]>(bea_frame_ + 0x40 - 0x40);
  undefined4 &local_2c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x2c);
  undefined4 &local_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x28);
  undefined4 &local_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x24);
  undefined4 &local_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x20);
  undefined4 &local_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x4);
  local_40[0] = param_5;
  local_40[1] = param_9;
  local_40[2] = param_13;
  local_40[4] = param_6;
  local_2c = param_10;
  local_28 = param_14;
  local_20 = param_7;
  local_1c = param_11;
  local_18 = param_15;
  local_10 = param_1;
  *(undefined1 *)((int)this_ + 0xe28) = 1;
  local_14 = 0;
  local_24 = 0;
  local_40[3] = 0;
  local_c = param_2;
  local_8 = param_3;
  local_4 = 0x3f800000;
  puVar2 = local_40;
  puVar3 = (undefined4 *)((int)this_ + 0x354);
  for (iVar1 = 0x10; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
  return param_2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00550ca0, ap_00550ca0));
