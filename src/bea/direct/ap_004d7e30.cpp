// auto-ported from 004d7e30_vslot40.c (CRocket::vslot40, 47 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CRocket;

static void BEA_THISCALL ap_004d7e30(CRocket * this_, float param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  float fVar1;
  
  if ((*(int *)(this_ + 0xe0) != 0) &&
     (fVar1 = *(float *)(this_ + 0xe8), *(float *)(this_ + 0xe8) = fVar1 - param_1,
     fVar1 - param_1 < 0.0f)) {
    bea_vcall<uint32_t>(this_, 0x38);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d7e30, ap_004d7e30));
