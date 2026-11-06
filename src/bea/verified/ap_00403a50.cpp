// auto-ported from 00403a50_vslot117.c (CAirUnit::vslot117, 63 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_00403a50(int in_ECX)
{
  if ((((*(float *)(in_ECX + 0x8c) != *(float *)(in_ECX + 0x1c)) ||
       (*(float *)(in_ECX + 0x90) != *(float *)(in_ECX + 0x20))) ||
      (*(float *)(in_ECX + 0x94) != *(float *)(in_ECX + 0x24))) &&
     ((*(byte *)(in_ECX + 0x2c) & 4) == 0)) {
    return 1;
  }
  return 0;
}

// @autoport-registration (verified: 46139 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00403a50, ap_00403a50));
