// auto-ported from 00415430_vslot49.c (CBoat::vslot49, 31 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CBoat;

static undefined4 BEA_THISCALL ap_00415430(CBoat * this_)
{
  if ((((byte)this_[0x2c] & 4) != 0) && (*(int *)(*(int *)(this_ + 0x164) + 0x11c) == 0)) {
    return 1;
  }
  return 0;
}

// @autoport-registration (verified: 27 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00415430, ap_00415430));
