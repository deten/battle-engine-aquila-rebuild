// auto-ported from 004f45c0_vslot6_t8.c (CComplexThing::vslot6_t8, 19 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef float10 (BEA_THISCALL* FUN_004048c0_t)(void *);
static const bea_guard<FUN_004048c0_t> FUN_004048c0 = {(FUN_004048c0_t)0x004048c0};

static float10 BEA_THISCALL ap_004f45c0(CComplexThing * this_)
{
  float10 fVar1;
  
  if (*(void **)(this_ + 100) == (void *)0x0) {
    return (float10)0.0f;
  }
  fVar1 = (float10)FUN_004048c0(*(void **)(this_ + 100));
  return fVar1;
}

// @autoport-registration (verified: 133454 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004f45c0, ap_004f45c0));
