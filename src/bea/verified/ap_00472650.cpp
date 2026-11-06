// auto-ported from 00472650_FUN_00472650.c (FUN_00472650, 19 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_006317cc GLOBAL_AT(int, 0x006317cc)

// returns the full EAX (NOTES A1-8 rule 13; was bool)
static uint32_t BEA_THISCALL ap_00472650(int in_ECX)
{
  return DAT_006317cc == *(int *)(in_ECX + 0x30);
}

// @autoport-registration (verified: 157 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00472650, ap_00472650));
