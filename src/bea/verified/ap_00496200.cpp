// auto-ported from 00496200_vslot8.c (CMCDropship::vslot8, 73 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_00496200(int in_ECX)
{
  int iVar1;
  
  if (*(int *)(in_ECX + 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(in_ECX + 8) + -8;
  }
  if (((*(int *)(in_ECX + 0xc) == *(int *)(iVar1 + 0x27c)) &&
      (*(float *)(iVar1 + 0x2a8) == *(float *)(iVar1 + 0x2a4))) &&
     (*(float *)(in_ECX + 0x10) == *(float *)(iVar1 + 0x2a4))) {
    return 0;
  }
  return 1;
}

// @autoport-registration (verified: 9415 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00496200, ap_00496200));
