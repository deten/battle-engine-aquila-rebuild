// auto-ported from 0040d660_FUN_0040d660.c (FUN_0040d660, 347 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_008a9e44 GLOBAL_AT(float, 0x008a9e44)

static float * BEA_THISCALL ap_0040d660(void * this_, float *param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)((int)this_ + 0x114);
  fVar2 = *(float *)((int)this_ + 0x590);
  if ((-1.5707964f <= fVar1) || (fVar2 <= 1.5707964f)) {
    if ((1.5707964f < fVar1) && (fVar2 < -1.5707964f)) {
      fVar2 = fVar2 + 6.2831855f;
    }
  }
  else {
    fVar2 = fVar2 - 6.2831855f;
  }
  fVar3 = *(float *)((int)this_ + 0x118);
  fVar4 = *(float *)((int)this_ + 0x594);
  if ((-1.5707964f <= fVar3) || (fVar4 <= 1.5707964f)) {
    if ((1.5707964f < fVar3) && (fVar4 < -1.5707964f)) {
      fVar4 = fVar4 + 6.2831855f;
    }
  }
  else {
    fVar4 = fVar4 - 6.2831855f;
  }
  fVar6 = (fVar3 - fVar4) * DAT_008a9e44;
  fVar3 = *(float *)((int)this_ + 0x594);
  fVar4 = *(float *)((int)this_ + 0x11c);
  fVar5 = *(float *)((int)this_ + 0x598);
  if ((-1.5707964f <= fVar4) || (fVar5 <= 1.5707964f)) {
    if ((1.5707964f < fVar4) && (fVar5 < -1.5707964f)) {
      fVar5 = fVar5 + 6.2831855f;
    }
  }
  else {
    fVar5 = fVar5 - 6.2831855f;
  }
  fVar5 = (fVar4 - fVar5) * DAT_008a9e44;
  fVar4 = *(float *)((int)this_ + 0x598);
  *param_1 = (fVar1 - fVar2) * DAT_008a9e44 + *(float *)((int)this_ + 0x590);
  param_1[1] = fVar6 + fVar3;
  param_1[2] = fVar5 + fVar4;
  return param_1;
  return param_1;
}

// @autoport-registration (verified: 4484 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0040d660, ap_0040d660));
