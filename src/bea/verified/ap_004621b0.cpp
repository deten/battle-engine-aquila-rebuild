// auto-ported from 004621b0_vslot0.c (CFEPMain::vslot0, 21 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CFEPMain;

static undefined4 BEA_THISCALL ap_004621b0(CFEPMain * this_)
{
  *(undefined4 *)(this_ + 0x14) = 0xbf800000;
  *(undefined4 *)(this_ + 0x1c) = 0;
  *(undefined4 *)(this_ + 0x20) = 0;
  return 1;
}

// @autoport-registration (verified: 213 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004621b0, ap_004621b0));
