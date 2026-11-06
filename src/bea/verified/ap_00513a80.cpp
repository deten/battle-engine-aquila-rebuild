// auto-ported from 00513a80_FUN_00513a80.c (FUN_00513a80, 14 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


// returns the full EAX (NOTES A1-8 rule 13; was undefined1)
static uint32_t BEA_THISCALL ap_00513a80(int in_ECX, int param_1)
{
  return *(undefined1 *)(param_1 + 0x332e4 + in_ECX);
}

// @autoport-registration (verified: 21607 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00513a80, ap_00513a80));
