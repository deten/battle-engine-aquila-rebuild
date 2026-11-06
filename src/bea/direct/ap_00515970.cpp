// auto-ported from 00515970_FUN_00515970.c (FUN_00515970, 15 bytes) by tools/autoport.py
// @autoport-mode verified
// @hand-fixed 2026-10-23: the table is indexed in the original's element size (tools/check_table_index.py;
// 0x515970's int-typed key table read another key's state: the first recorded playthrough)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_00888c94 GLOBAL_AT(int, 0x00888c94)

// returns the full EAX (NOTES A1-8 rule 13; was undefined1)
static uint32_t BEA_STDCALL ap_00515970(int param_1)
{
  return ((uint8_t *)&DAT_00888c94)[param_1];
}

// @autoport-registration (verified: 417054 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00515970, ap_00515970));
