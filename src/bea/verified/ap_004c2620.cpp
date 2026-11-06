// auto-ported from 004c2620_vslot9.c (CPDTimeline::vslot9, 26 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static uint32_t BEA_STDCALL ap_004c2620(int param_1)
{
  *(undefined2 *)(param_1 + 0x7e) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x4b18967f;
  return param_1;
  return param_1;
}

// @autoport-registration (verified: 824 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004c2620, ap_004c2620));
