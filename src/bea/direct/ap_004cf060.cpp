// auto-ported from 004cf060_vslot14.c (CFlipSpeakers::vslot14, 12 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00663070 GLOBAL_AT(int, 0x00663070)

static uint32_t BEA_STDCALL ap_004cf060(undefined4 param_1)
{
  DAT_00663070 = param_1;
  return param_1;
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cf060, ap_004cf060));
