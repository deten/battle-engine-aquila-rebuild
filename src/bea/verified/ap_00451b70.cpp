// auto-ported from 00451b70_vslot0.c (CFEPBriefing::vslot0, 14 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CFEPBriefing;

static undefined4 BEA_THISCALL ap_00451b70(CFEPBriefing * this_)
{
  *(undefined4 *)(this_ + 0x10) = 0;
  *(undefined4 *)(this_ + 0xc) = 0;
  return 1;
}

// @autoport-registration (verified: 97 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00451b70, ap_00451b70));
