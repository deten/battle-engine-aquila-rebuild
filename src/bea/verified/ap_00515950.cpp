// auto-ported from 00515950_FUN_00515950.c (FUN_00515950, 17 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static float10 BEA_THISCALL ap_00515950(int * in_ECX)
{
  if (*in_ECX != 0) {
    return (float10)*(float *)(*in_ECX + 4);
  }
  return (float10)1.0f;
}

// @autoport-registration (verified: 193 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00515950, ap_00515950));
