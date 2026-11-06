// auto-ported from 004c43e0_vslot21.c (CPDTrail::vslot21, 53 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef char CPDTrail;

static uint32_t BEA_THISCALL ap_004c43e0(CPDTrail * this_, int param_1)
{
  if (*(int *)(this_ + 0x90) == 0) {
    *(float *)(param_1 + 0x60) = (float)(*(int *)(param_1 + 0x80) + 2);
    return param_1;
  }
  *(float *)(param_1 + 0x60) = (float)*(int *)(this_ + 0x9c);
  return param_1;
  return param_1;
}

// @autoport-registration (verified: 258 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004c43e0, ap_004c43e0));
