// auto-ported from 00401be0_vslot0_t8.c (CActor::vslot0_t8, 108 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef char CActor;
#define DAT_008a9e44 GLOBAL_AT(float, 0x008a9e44)

static float * BEA_THISCALL ap_00401be0(CActor * this_, float *param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (*(float *)(this_ + 0x18) - *(float *)(this_ + 0x88)) * DAT_008a9e44;
  fVar4 = DAT_008a9e44 * (*(float *)(this_ + 0x1c) - *(float *)(this_ + 0x8c));
  fVar1 = *(float *)(this_ + 0x8c);
  fVar2 = *(float *)(this_ + 0x88);
  *param_1 = (*(float *)(this_ + 0x14) - *(float *)(this_ + 0x84)) * DAT_008a9e44 +
             *(float *)(this_ + 0x84);
  param_1[1] = fVar3 + fVar2;
  param_1[2] = fVar4 + fVar1;
  return param_1;
  return param_1;
}

// @autoport-registration (verified: 249444 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00401be0, ap_00401be0));
