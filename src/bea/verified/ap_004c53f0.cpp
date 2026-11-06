// auto-ported from 004c53f0_vslot9.c (CPDFoR::vslot9, 20 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static uint32_t BEA_STDCALL ap_004c53f0(int param_1)
{
  *(undefined4 *)(param_1 + 0x60) = 0xc0000000;
  *(undefined2 *)(param_1 + 0x7e) = 0;
  return param_1;
  return param_1;
}

// @autoport-registration (verified: 8 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004c53f0, ap_004c53f0));
