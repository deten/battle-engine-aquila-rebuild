// auto-ported from 00558690_FUN_00558690.c (FUN_00558690, 69 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef char BEA_CDECL;
typedef float10 (BEA_CDECL* FUN_0044a0c0_t)(void);
static const bea_guard<FUN_0044a0c0_t> FUN_0044a0c0 = {(FUN_0044a0c0_t)0x0044a0c0};

static undefined4 BEA_THISCALL ap_00558690(void * this_)
{
  float10 fVar1;
  int local_8;
  
  if (*(int *)((int)this_ + 0x138) == 1) {
    return *(undefined4 *)((int)this_ + 0xb8);
  }
  fVar1 = (float10)FUN_0044a0c0();
  local_8 = (int)(longlong)ROUND(fVar1 * (float10)20.0f);
  return *(undefined4 *)((int)this_ + (local_8 % *(int *)((int)this_ + 0x138)) * 4 + 0xb8);
}

// @autoport-registration (verified: 147427 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00558690, ap_00558690));
