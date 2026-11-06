// auto-ported from 0044cd20_vslot40.c (CFeature::vslot40, 96 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CFeature;

static void BEA_THISCALL ap_0044cd20(CFeature * this_, float param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  float fVar1;
  
  if (*(int *)(*(int *)(this_ + 0xe4) + 0x10) == 0) {
    fVar1 = *(float *)(this_ + 0xe0);
    *(float *)(this_ + 0xe0) = fVar1 - param_1;
    if ((fVar1 - param_1 < 0.0f) && (((byte)this_[0x2c] & 4) == 0)) {
      bea_vcall<uint32_t>(this_, 0xc8);
    }
    if (*(float *)(*(int *)(this_ + 0xe4) + 0x18) < *(float *)(this_ + 0xe0)) {
      *(undefined4 *)(this_ + 0xe0) = *(undefined4 *)(*(int *)(this_ + 0xe4) + 0x18);
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044cd20, ap_0044cd20));
