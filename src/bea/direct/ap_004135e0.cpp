// auto-ported from 004135e0_FUN_004135e0.c (FUN_004135e0, 119 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-21: the out-buffer Ghidra named &stack0x... (depth drift after a
// vtable call, NOTES A1-15 class 18) is the vector the function reads by its own name
// @hand-fixed 2026-10-28: that decompile had also lost the y line and named z by y's slot;
// x and y scale by -0.025, z by -0.075 (or 0 at or below 0.01), as the asm does
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char fStack_c;

static void BEA_THISCALL ap_004135e0(void * this_)
{
  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)

  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x10);
  float &fStack_c = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0xc);
  float &fStack_8 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x8);
  bea_vcall<uint32_t>(*(int **)((int)this_ + 0x20), 0x6c, &local_10);
  local_10 = local_10 * -0.025f;
  fStack_c = fStack_c * -0.025f;
  if (fStack_8 <= 0.01f) {
    fStack_8 = 0.0;
  }
  else {
    fStack_8 = fStack_8 * -0.075f;
  }
  bea_vcall<uint32_t>(*(int **)((int)this_ + 0x20), 0x74, &local_10);
  *(undefined4 *)(*(int *)((int)this_ + 0x20) + 0x638) = 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004135e0, ap_004135e0));
