// auto-ported from 0049bc80_FUN_0049bc80.c (FUN_0049bc80, 196 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static float * BEA_THISCALL ap_0049bc80(void * this_, float *param_1)
{
  int iVar1;
  float *pfVar2;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  float (&local_30)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x30 - 0x30);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x18);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x8);
  local_30[0] = *(float *)((int)this_ + 0x14) * *(float *)((int)this_ + 0x28) -
                *(float *)((int)this_ + 0x18) * *(float *)((int)this_ + 0x24);
  local_30[1] = -(*(float *)((int)this_ + 0x10) * *(float *)((int)this_ + 0x28) -
                 *(float *)((int)this_ + 0x20) * *(float *)((int)this_ + 0x18));
  local_30[2] = *(float *)((int)this_ + 0x10) * *(float *)((int)this_ + 0x24) -
                *(float *)((int)this_ + 0x20) * *(float *)((int)this_ + 0x14);
  local_20 = -(*(float *)((int)this_ + 4) * *(float *)((int)this_ + 0x28) -
              *(float *)((int)this_ + 8) * *(float *)((int)this_ + 0x24));
  local_1c = *(float *)this_ * *(float *)((int)this_ + 0x28) -
             *(float *)((int)this_ + 0x20) * *(float *)((int)this_ + 8);
  local_18 = -(*(float *)this_ * *(float *)((int)this_ + 0x24) -
              *(float *)((int)this_ + 0x20) * *(float *)((int)this_ + 4));
  local_10 = *(float *)((int)this_ + 0x18) * *(float *)((int)this_ + 4) -
             *(float *)((int)this_ + 8) * *(float *)((int)this_ + 0x14);
  local_c = -(*(float *)((int)this_ + 0x18) * *(float *)this_ -
             *(float *)((int)this_ + 0x10) * *(float *)((int)this_ + 8));
  local_8 = *(float *)((int)this_ + 0x14) * *(float *)this_ -
            *(float *)((int)this_ + 0x10) * *(float *)((int)this_ + 4);
  pfVar2 = local_30;
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *param_1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    param_1 = param_1 + 1;
  }
  return (float *)(param_1);
  return (float *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0049bc80, ap_0049bc80));
