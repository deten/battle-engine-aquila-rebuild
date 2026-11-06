// auto-ported from 00422910_vslot105.c (CCarver::vslot105, 28 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CCarver;

static undefined4 BEA_THISCALL ap_00422910(CCarver * this_)
{
  if (0.0f < *(float *)(this_ + 0x280)) {
    return 0;
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00422910, ap_00422910));
