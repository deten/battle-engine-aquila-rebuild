// auto-ported from 0053c1d0_FUN_0053c1d0.c (FUN_0053c1d0, 260 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-28: multiplication order (split-screen picture differed, tools/menu_test.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_STDCALL ap_0053c1d0(float *param_1, int param_2, int param_3, int param_4, int param_5, float param_6)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar9 = (float10)0.0f;
  fVar1 = (float)param_4;
  fVar4 = ((float)param_3 * param_6 * 3.1415927f) / (float)param_2;
  // the original scales param_5 first (fild; fmul 0.01) and multiplies by
  // that: grouped the other way the 24-bit x87 rounds differently
  fVar3 = (fVar4 + 1.0f) * ((float)param_5 * 0.01f);
  fVar4 = (1.0f - fVar4) * ((float)param_5 * 0.01f);
  pfVar6 = param_1;
  if (0 < param_4) {
    fVar2 = 0.0f;
    pfVar5 = param_1;
    do {
      fVar10 = (float10)fsin(fVar9);
      pfVar5[2] = 1.0f;
      pfVar5[4] = param_6;
      pfVar5[7] = 1.0f;
      pfVar5[9] = 0.0f;
      pfVar6 = pfVar5 + 10;
      param_4 = param_4 + -1;
      *pfVar5 = (float)(fVar10 * (float10)fVar4);
      fVar11 = (float10)fcos(fVar9);
      pfVar5[1] = (float)(fVar11 * (float10)fVar4);
      pfVar5[3] = fVar2;
      pfVar5[5] = (float)(fVar10 * (float10)fVar3);
      pfVar5[6] = (float)fVar11 * fVar3;
      pfVar5[8] = fVar2;
      fVar9 = (float10)(6.2831855f / fVar1) + fVar9;
      fVar2 = 1.0f / fVar1 + fVar2;
      pfVar5 = pfVar6;
    } while (BEA_LOOP_GUARD((param_4 != 0)));
  }
  pfVar5 = param_1;
  pfVar8 = pfVar6;
  for (iVar7 = 5; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
    *pfVar8 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar8 = pfVar8 + 1;
  }
  pfVar5 = param_1 + 5;
  pfVar8 = pfVar6 + 5;
  for (iVar7 = 5; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
    *pfVar8 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar8 = pfVar8 + 1;
  }
  pfVar6[3] = 1.0f;
  pfVar6[8] = 1.0f;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053c1d0, ap_0053c1d0));
