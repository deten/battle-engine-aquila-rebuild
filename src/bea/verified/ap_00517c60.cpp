// auto-ported from 00517c60_FUN_00517c60.c (FUN_00517c60, 68 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_00663080 GLOBAL_AT(int, 0x00663080)

static float10 BEA_STDCALL ap_00517c60(int param_1)
{
  uint uVar1;
  
  if (DAT_00663080 == 0) {
    uVar1 = 0xac44;
  }
  else if (DAT_00663080 == 1) {
    uVar1 = 0x5622;
  }
  else {
    uVar1 = 0x2b11;
  }
  return (float10)*(int *)(param_1 + 0x7c) / ((float10)uVar1 + (float10)uVar1);
}

// @autoport-registration (verified: 31025 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00517c60, ap_00517c60));
