// auto-ported from 00465f00_FUN_00465f00.c (FUN_00465f00, 6 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_00679b40 GLOBAL_AT(int, 0x00679b40)

// returns the full EAX (NOTES A1-8 rule 13; was undefined1)
static uint32_t BEA_CDECL ap_00465f00(void)
{
  return DAT_00679b40;
}

// @autoport-registration (verified: 414697 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00465f00, ap_00465f00));
