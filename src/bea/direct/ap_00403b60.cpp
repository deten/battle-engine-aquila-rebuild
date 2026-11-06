// auto-ported from 00403b60_vslot45.c (CAirUnit::vslot45, 52 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CAirUnit;

static float10 BEA_THISCALL ap_00403b60(CAirUnit * this_)
{
  float10 fVar1;
  
  if (((byte)this_[0x2c] & 4) != 0) {
    fVar1 = (float10)bea_vcall<float10>(this_, 0x40);
    if ((float10)39.0f < fVar1) {
      fVar1 = (float10)39.0f;
    }
    return ((float10)40.0f - fVar1) * (float10)0.0004f;
  }
  return (float10)0.0f;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00403b60, ap_00403b60));
