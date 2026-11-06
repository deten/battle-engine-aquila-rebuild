// auto-ported from 00401460_vslot32.c (CThing::vslot32, 5 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CThing;

static void BEA_THISCALL ap_00401460(CThing * this_)
{
  this_[0x2c] = (CThing)((byte)this_[0x2c] & 0xef);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00401460, ap_00401460));
