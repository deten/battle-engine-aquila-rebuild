// auto-ported from 004ab330_FUN_004ab330.c (FUN_004ab330, 34 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_00704ad8 GLOBAL_AT(int, 0x00704ad8)

static int BEA_CDECL ap_004ab330(int param_1)
{
  int iVar1;
  
  iVar1 = DAT_00704ad8;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x154) == param_1) break;
    iVar1 = *(int *)(iVar1 + 0x158);
  }
  return iVar1;
}

// @autoport-registration (verified: 70 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004ab330, ap_004ab330));
