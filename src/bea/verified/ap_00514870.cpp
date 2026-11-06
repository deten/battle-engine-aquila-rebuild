// auto-ported from 00514870_vslot8.c (CPCController::vslot8, 23 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef char BEA_THISCALL;
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
typedef undefined1 (BEA_THISCALL* FUN_00513a80_t)(void *, int);
static const bea_guard<FUN_00513a80_t> FUN_00513a80 = {(FUN_00513a80_t)0x00513a80};

// returns the full EAX (NOTES A1-8 rule 13; was undefined1)
static uint32_t BEA_STDCALL ap_00514870(undefined4 param_1)
{
  undefined1 uVar1;
  
  uVar1 = FUN_00513a80(&DAT_00855bb0,param_1);
  return uVar1;
}

// @autoport-registration (verified: 1438 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00514870, ap_00514870));
