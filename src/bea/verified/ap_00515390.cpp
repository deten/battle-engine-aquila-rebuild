// auto-ported from 00515390_vslot4.c (CPCMusic::vslot4, 8 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_0089beac GLOBAL_AT(int, 0x0089beac)

// returns the full EAX (NOTES A1-8 rule 13; was undefined1)
static uint32_t BEA_CDECL ap_00515390(void)
{
  return DAT_0089beac;
}

// @autoport-registration (verified: 10651 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00515390, ap_00515390));
