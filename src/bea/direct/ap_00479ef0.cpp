// auto-ported from 00479ef0_vslot45.c (CGillM::vslot45, 23 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CGillM;

static float10 BEA_THISCALL ap_00479ef0(CGillM * this_)
{
  if (*(int *)(this_ + 0x274) == 1) {
    return bea_fcast<float10>(0.0f);
  }
  return bea_fcast<float10>(0.01f);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00479ef0, ap_00479ef0));
