// auto-ported from 00550b10_FUN_00550b10.c (FUN_00550b10, 193 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_00550b10(void * this_, float param_1, float param_2, float param_3, float param_4)
{
  int iVar1;
  float *pfVar2;
  float *pfVar3;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  float (&local_40)[6] = *reinterpret_cast<float (*)[6]>(bea_frame_ + 0x40 - 0x40);
  undefined4 &local_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x28);
  undefined4 &local_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x24);
  undefined4 &local_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x20);
  undefined4 &local_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x4);
  *(undefined1 *)((int)this_ + 0xe2a) = 1;
  local_40[4] = 0.0;
  local_40[3] = 0.0;
  local_40[2] = 0.0;
  local_40[1] = 0.0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_14 = 0x3f800000;
  local_c = 0;
  local_10 = 0;
  local_4 = 0;
  local_40[0] = param_1 / param_3;
  local_40[5] = param_1 / param_4;
  local_18 = param_2 / (param_2 - param_1);
  local_8 = -(param_1 * param_2) / (param_2 - param_1);
  pfVar2 = local_40;
  pfVar3 = (float *)((int)this_ + 0x3d4);
  for (iVar1 = 0x10; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00550b10, ap_00550b10));
