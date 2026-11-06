// auto-ported from 004cef30_vslot15.c (CShadowDetail::vslot15, 29 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_009c7c54 GLOBAL_AT(char, 0x009c7c54)
#define DAT_009c7c56 GLOBAL_AT(char, 0x009c7c56)

// returns the full EAX (NOTES A1-8 rule 13; was undefined1)
static uint32_t BEA_CDECL ap_004cef30(void)
{
  if (DAT_009c7c54 != '\0') {
    return 2;
  }
  return DAT_009c7c56 != '\0';
}

// @autoport-registration (verified: 3523 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004cef30, ap_004cef30));
