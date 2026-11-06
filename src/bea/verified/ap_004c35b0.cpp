// auto-ported from 004c35b0_vslot9.c (CPDTrail::vslot9, 26 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef char CPDTrail;

static uint32_t BEA_THISCALL ap_004c35b0(CPDTrail * this_, int param_1)
{
  *(float *)(param_1 + 0x60) = (float)*(int *)(this_ + 0x84);
  *(undefined4 *)(param_1 + 0x80) = 0;
  return param_1;
  return param_1;
}

// @autoport-registration (verified: 260 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004c35b0, ap_004c35b0));
