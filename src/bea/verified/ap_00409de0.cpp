// auto-ported from 00409de0_vslot25.c (CBattleEngine::vslot25, 115 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CBattleEngine;

static float * BEA_THISCALL ap_00409de0(CBattleEngine * this_, float *param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_4 = 0;
  
  fVar1 = *(float *)(this_ + 0x20);
  fVar2 = *(float *)(this_ + 0x90);
  fVar3 = *(float *)(this_ + 0x24);
  fVar4 = *(float *)(this_ + 0x94);
  fVar5 = *(float *)(this_ + 0x26c);
  fVar6 = *(float *)(this_ + 0x270);
  *param_1 = (*(float *)(this_ + 0x1c) - *(float *)(this_ + 0x8c)) - *(float *)(this_ + 0x268);
  param_1[1] = (fVar1 - fVar2) - fVar5;
  param_1[2] = (fVar3 - fVar4) - fVar6;
  param_1[3] = local_4;
  return param_1;
  return param_1;
}

// @autoport-registration (verified: 3838 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00409de0, ap_00409de0));
