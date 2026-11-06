// auto-ported from 00422970_vslot104.c (CCarver::vslot104, 56 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CCarver;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)

static undefined4 BEA_THISCALL ap_00422970(CCarver * this_)
{
  if (0.0f < *(float *)(this_ + 0x280)) {
    return 0;
  }
  if (DAT_00672fd0 < *(float *)(this_ + 0x288) + 3.0f) {
    return 0;
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00422970, ap_00422970));
