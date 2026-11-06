// auto-ported from 004aa3f0_FUN_004aa3f0.c (FUN_004aa3f0, 23 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 * BEA_THISCALL ap_004aa3f0(void * this_, undefined4 *param_1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this_ + 0x20);
  uVar2 = *(undefined4 *)((int)this_ + 0x10);
  *param_1 = *(undefined4 *)this_;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  return param_1;
  return param_1;
}

// @autoport-registration (verified: 1582 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004aa3f0, ap_004aa3f0));
