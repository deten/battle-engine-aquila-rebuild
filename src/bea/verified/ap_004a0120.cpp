// auto-ported from 004a0120_vslot106.c (CMech::vslot106, 10 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CMech;

static float10 BEA_THISCALL ap_004a0120(CMech * this_)
{
  return (float10)*(float *)(this_ + 0x260) + (float10)*(float *)(this_ + 0x24);
}

// @autoport-registration (verified: 240 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004a0120, ap_004a0120));
