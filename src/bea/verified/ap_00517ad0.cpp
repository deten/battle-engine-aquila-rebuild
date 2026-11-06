// auto-ported from 00517ad0_FUN_00517ad0.c (FUN_00517ad0, 6 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_00896c58 GLOBAL_AT(int, 0x00896c58)

// returns the full EAX (NOTES A1-8 rule 13; was undefined1)
static uint32_t BEA_CDECL ap_00517ad0(void)
{
  return DAT_00896c58;
}

// @autoport-registration (verified: 358 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00517ad0, ap_00517ad0));
