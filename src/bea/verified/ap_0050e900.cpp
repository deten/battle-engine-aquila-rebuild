// auto-ported from 0050e900_vslot45.c (CBomber::vslot45, 20 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CBomber;

static float10 BEA_THISCALL ap_0050e900(CBomber * this_)
{
  if (((byte)this_[0x2c] & 4) != 0) {
    return (float10)0.015f;
  }
  return (float10)0.0f;
}

// @autoport-registration (verified: 1701 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0050e900, ap_0050e900));
