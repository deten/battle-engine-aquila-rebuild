// auto-ported from 004b0c00_FUN_004b0c00.c (FUN_004b0c00, 24 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 * BEA_THISCALL ap_004b0c00(void * this_, undefined4 *param_1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this_ + 0x24);
  uVar2 = *(undefined4 *)((int)this_ + 0x14);
  *param_1 = *(undefined4 *)((int)this_ + 4);
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  return param_1;
  return param_1;
}

// @autoport-registration (verified: 1582 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004b0c00, ap_004b0c00));
