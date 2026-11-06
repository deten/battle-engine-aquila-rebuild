// auto-ported from 00495770_vslot8.c (CMCCannon::vslot8, 93 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_00495770(int in_ECX)
{
  int iVar1;
  
  if (*(int *)(in_ECX + 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(in_ECX + 8) + -8;
  }
  if ((((*(float *)(iVar1 + 0xe4) == *(float *)(iVar1 + 0xe0)) &&
       (*(float *)(iVar1 + 0xe0) == *(float *)(in_ECX + 0xc))) &&
      (*(float *)(iVar1 + 0xf0) == *(float *)(iVar1 + 0xe8))) &&
     (*(float *)(iVar1 + 0xe8) == *(float *)(in_ECX + 0x10))) {
    return 0;
  }
  return 1;
}

// @autoport-registration (verified: 11625 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00495770, ap_00495770));
