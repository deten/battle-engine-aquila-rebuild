// auto-ported from 00491d90_FUN_00491d90.c (FUN_00491d90, 13 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static int BEA_THISCALL ap_00491d90(int * in_ECX)
{
  if ((int *)*in_ECX != (int *)0x0) {
    *in_ECX = *(int *)*in_ECX;
  }
  return *in_ECX;
}

// @autoport-registration (verified: 576451 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00491d90, ap_00491d90));
