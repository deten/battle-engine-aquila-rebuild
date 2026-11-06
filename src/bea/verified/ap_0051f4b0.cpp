// auto-ported from 0051f4b0_vslot0.c (CFEPOptions::vslot0, 13 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CFEPOptions;

static undefined4 BEA_THISCALL ap_0051f4b0(CFEPOptions * this_)
{
  *(undefined4 *)(this_ + 4) = 0;
  return 1;
}

// @autoport-registration (verified: 91 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0051f4b0, ap_0051f4b0));
