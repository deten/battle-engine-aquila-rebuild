// auto-ported from 004439f0_vslot11.c (CDestroyableExtraUseMeshSegment::vslot11, 40 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CDestroyableExtraUseMeshSegment;

static uint32_t BEA_THISCALL ap_004439f0(CDestroyableExtraUseMeshSegment * this_, float param_1, float param_2)
{
  float fVar1;
  
  if (0 < *(int *)(*(int *)(this_ + 0x3c) + 0x20)) {
    *(undefined4 *)(this_ + 0xc) = 0x3a83126f;
    return *(uint32_t*)((char*)this_ + 0x3c);
  }
  fVar1 = (*(float *)(this_ + 0x34) / param_2) * param_1;
  *(float *)(this_ + 0xc) = fVar1;
  *(float *)(this_ + 0x10) = fVar1;
  return *(uint32_t*)((char*)this_ + 0x3c);
  return *(uint32_t*)((char*)this_ + 0x3c);
}

// @autoport-registration (verified: 644 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004439f0, ap_004439f0));
