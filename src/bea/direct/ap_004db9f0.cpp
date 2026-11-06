// auto-ported from 004db9f0_vslot14.c (CRTMesh::vslot14, 34 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CRTMesh;
typedef float10 (BEA_THISCALL* FUN_004aa7e0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004aa7e0_t> FUN_004aa7e0 = {(FUN_004aa7e0_t)0x004aa7e0};

static float10 BEA_THISCALL ap_004db9f0(CRTMesh * this_, undefined4 param_1, undefined4 param_2)
{
  float10 fVar1;
  
  if (*(void **)(this_ + 0x14) != (void *)0x0) {
    fVar1 = (float10)FUN_004aa7e0(bea_arg(*(void **)(this_ + 0x14)), bea_arg(param_1), bea_arg(param_2));
    return fVar1;
  }
  return (float10)0.0f;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004db9f0, ap_004db9f0));
