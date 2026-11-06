// auto-ported from 00425410_vslot6_t8.c (CCockpit::vslot6_t8, 25 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_008a9e44 GLOBAL_AT(float, 0x008a9e44)

static float10 BEA_THISCALL ap_00425410(int in_ECX)
{
  return ((float10)*(float *)(in_ECX + 0x11c) - (float10)*(float *)(in_ECX + 0x120)) *
         (float10)DAT_008a9e44 + (float10)*(float *)(in_ECX + 0x120);
}

// @autoport-registration (verified: 55332 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00425410, ap_00425410));
