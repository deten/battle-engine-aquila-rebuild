// auto-ported from 0051f9f0_vslot0.c (CFEPScreenPos::vslot0, 14 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CFEPScreenPos;

static undefined4 BEA_THISCALL ap_0051f9f0(CFEPScreenPos * this_)
{
  *(undefined4 *)(this_ + 8) = 0;
  *(undefined4 *)(this_ + 4) = 0;
  return 1;
}

// @autoport-registration (verified: 91 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0051f9f0, ap_0051f9f0));
