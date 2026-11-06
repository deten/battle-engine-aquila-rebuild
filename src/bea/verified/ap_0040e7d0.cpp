// auto-ported from 0040e7d0_vslot104.c (CBattleEngine::vslot104, 99 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBattleEngine;
typedef bool (BEA_THISCALL* FUN_004135d0_t)(void *);
static const bea_guard<FUN_004135d0_t> FUN_004135d0 = {(FUN_004135d0_t)0x004135d0};

static undefined4 BEA_THISCALL ap_0040e7d0(CBattleEngine * this_)
{
  int iVar1;
  
  if (0.0f < *(float *)(this_ + 0x5d8)) {
    return 0;
  }
  if (*(int *)(this_ + 0x260) == 3) {
    if (*(int *)(*(int *)(this_ + 0x57c) + 0x2c) != 0) {
      return 0;
    }
    if (0.0f < *(float *)(*(int *)(this_ + 0x57c) + 0x48)) {
      return 0;
    }
  }
  if (*(int *)(this_ + 0x260) == 2) {
    iVar1 = FUN_004135d0(*(void **)(this_ + 0x578));
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}

// @autoport-registration (verified: 399 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0040e7d0, ap_0040e7d0));
