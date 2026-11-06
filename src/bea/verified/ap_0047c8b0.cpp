// auto-ported from 0047c8b0_vslot67.c (CGroundUnit::vslot67, 34 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)

static undefined4 BEA_THISCALL ap_0047c8b0(int in_ECX)
{
  if (DAT_00672fd0 - *(float *)(in_ECX + 0xcc) < 0.21f) {
    return 1;
  }
  return 0;
}

// @autoport-registration (verified: 73523 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0047c8b0, ap_0047c8b0));
