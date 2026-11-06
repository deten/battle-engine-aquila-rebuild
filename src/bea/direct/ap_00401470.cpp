// auto-ported from 00401470_vslot33.c (CThing::vslot33, 5 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CThing;

static void BEA_THISCALL ap_00401470(CThing * this_)
{
  this_[0x2c] = (CThing)((byte)this_[0x2c] | 0x10);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00401470, ap_00401470));
