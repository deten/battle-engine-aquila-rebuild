// auto-ported from 00420ac0_FUN_00420ac0.c (FUN_00420ac0, 40 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


// returns the full EAX (NOTES A1-8 rule 13; was bool)
static uint32_t BEA_THISCALL ap_00420ac0(char * in_ECX, char param_1)
{
  if (*in_ECX == 'S') {
    return true;
  }
  if (param_1 == 'S') {
    return false;
  }
  return *in_ECX <= param_1;
}

// @autoport-registration (verified: 688 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00420ac0, ap_00420ac0));
