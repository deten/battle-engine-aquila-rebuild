// auto-ported from 00491da0_FUN_00491da0.c (FUN_00491da0, 77 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_STDCALL ap_00491da0(short *param_1)
{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 2);
  if ((((-1 < iVar1) && (iVar1 < 5)) && (-1 < *param_1)) &&
     (((iVar1 = 0x40 >> (4U - (char)iVar1 & 0x1f), *param_1 < iVar1 && (-1 < param_1[1])) &&
      (param_1[1] < iVar1)))) {
    return 1;
  }
  return 0;
}

// @autoport-registration (verified: 11383 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00491da0, ap_00491da0));
