// auto-ported from 0050ebb0_vslot45.c (CDiveBomber::vslot45, 20 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CDiveBomber;

static float10 BEA_THISCALL ap_0050ebb0(CDiveBomber * this_)
{
  if (((byte)this_[0x2c] & 4) != 0) {
    return (float10)0.3f;
  }
  return (float10)0.0f;
}

// @autoport-registration (verified: 2194 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0050ebb0, ap_0050ebb0));
