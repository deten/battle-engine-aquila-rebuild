// auto-ported from 00401420_vslot13.c (CThing::vslot13, 18 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static float10 BEA_THISCALL ap_00401420(int in_ECX)
{
  if (*(int *)(in_ECX + 0x30) != 0) {
    return (float10)*(float *)(*(int *)(in_ECX + 0x30) + 4);
  }
  return (float10)0.0001f;
}

// @autoport-registration (verified: 193330 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00401420, ap_00401420));
