// auto-ported from 0040ac50_FUN_0040ac50.c (FUN_0040ac50, 98 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_0040ac50(void * this_, float param_1)
{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  
  if (0.0f < param_1) {
    pfVar2 = (float *)((int)this_ + 0x52c);
    iVar3 = 6;
    do {
      if (pfVar2[0xc] == 0.0f) {
        fVar1 = param_1 * *(float *)((int)pfVar2 +
                                    *(int *)((int)this_ + 0x4b0) + (-0x4a4 - (int)this_)) + *pfVar2;
        *pfVar2 = fVar1;
        pfVar4 = (float *)((int)pfVar2 + *(int *)((int)this_ + 0x4b0) + (-0x4a4 - (int)this_));
        if (*pfVar4 < fVar1) {
          *pfVar2 = *pfVar4;
        }
      }
      pfVar2 = pfVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (BEA_LOOP_GUARD((iVar3 != 0)));
  }
  return;
}

// @autoport-registration (verified: 14417 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0040ac50, ap_0040ac50));
