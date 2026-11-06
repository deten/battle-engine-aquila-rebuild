// auto-ported from 004c0140_vslot21.c (CParticleDescriptor::vslot21, 14 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static uint32_t BEA_STDCALL ap_004c0140(int param_1)
{
  *(undefined4 *)(param_1 + 0x60) = 0;
  return param_1;
  return param_1;
}

// @autoport-registration (verified: 993 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004c0140, ap_004c0140));
