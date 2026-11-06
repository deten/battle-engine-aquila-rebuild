// auto-ported from 004f9a10_vslot78.c (CUnit::vslot78, 41 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef char BEA_THISCALL;
typedef char CUnit;
typedef float10 (BEA_THISCALL* FUN_004443b0_t)(void *);
static const bea_guard<FUN_004443b0_t> FUN_004443b0 = {(FUN_004443b0_t)0x004443b0};

static float10 BEA_THISCALL ap_004f9a10(CUnit * this_)
{
  float10 fVar1;
  
  if (*(void **)(this_ + 0x178) != (void *)0x0) {
    fVar1 = (float10)FUN_004443b0(*(void **)(this_ + 0x178));
    return fVar1;
  }
  if (*(int *)(this_ + 0x164) != 0) {
    return (float10)*(float *)(*(int *)(this_ + 0x164) + 0xc0);
  }
  return (float10)0.0f;
}

// @autoport-registration (verified: 841 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004f9a10, ap_004f9a10));
