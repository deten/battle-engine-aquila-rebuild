// auto-ported from 004074d0_vslot45.c (CBattleEngine::vslot45, 79 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBattleEngine;
typedef float10 (BEA_THISCALL* FUN_004114d0_t)(void *);
static const bea_guard<FUN_004114d0_t> FUN_004114d0 = {(FUN_004114d0_t)0x004114d0};

static float10 BEA_THISCALL ap_004074d0(CBattleEngine * this_)
{
  float10 fVar1;
  
  if (((byte)this_[0x2c] & 4) != 0) {
    switch(*(undefined4 *)(this_ + 0x260)) {
    case 0:
    case 1:
    case 2:
      goto switchD_004074e1_caseD_0;
    case 3:
      fVar1 = (float10)FUN_004114d0(*(void **)(this_ + 0x57c));
      return fVar1;
    default:
switchD_004074e1_default:
      return (float10)0.0f;
    }
  }
  switch(*(undefined4 *)(this_ + 0x260)) {
  case 0:
    return (float10)0.002f;
  case 1:
  case 2:
switchD_004074e1_caseD_0:
    return (float10)0.01f;
  case 3:
    fVar1 = (float10)FUN_004114d0(*(void **)(this_ + 0x57c));
    return fVar1;
  default:
    goto switchD_004074e1_default;
  }
}

// @autoport-registration (verified: 4772 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004074d0, ap_004074d0));
