// auto-ported from 00412900_FUN_00412900.c (FUN_00412900, 146 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_00412900(void * this_)
{
  int iVar1;
  float *pfVar2;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined1 (&auStack_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x10 - 0x10);
  iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x18), 0x10c);
  if (iVar1 != 0) {
    pfVar2 = (float *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x18), 0x6c, auStack_10);
    if (*pfVar2 * *pfVar2 + pfVar2[1] * pfVar2[1] + pfVar2[2] * pfVar2[2] < 0.010000001f) {
      return 0;
    }
  }
  if (*(float *)(*(int *)((int)this_ + 0x18) + 0xfc) < 0.0f) {
    return 0;
  }
  if (0.0f < *(float *)((int)this_ + 0x48)) {
    return 0;
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00412900, ap_00412900));
