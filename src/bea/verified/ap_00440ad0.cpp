// auto-ported from 00440ad0_FUN_00440ad0.c (FUN_00440ad0, 154 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_STDCALL ap_00440ad0(short *param_1, int param_2, int param_3, int param_4)
{
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int local_4;
  
  iVar3 = param_2;
  iVar7 = param_2 + 1;
  if (0 < param_3) {
    param_2 = 0;
    local_4 = param_3;
    psVar4 = param_1;
    do {
      iVar5 = param_2;
      iVar8 = iVar3;
      if (0 < iVar3) {
        do {
          sVar1 = (short)iVar5;
          sVar2 = (short)iVar7;
          sVar6 = sVar1 + 1 + sVar2;
          psVar4[1] = sVar1 + sVar2;
          *psVar4 = sVar1;
          psVar4[2] = sVar6;
          psVar4[3] = sVar1;
          psVar4[5] = sVar1 + 1;
          psVar4[4] = sVar6;
          psVar4 = psVar4 + 6;
          iVar8 = iVar8 + -1;
          iVar5 = iVar5 + 1;
        } while (BEA_LOOP_GUARD((iVar8 != 0)));
      }
      param_2 = param_2 + iVar7;
      local_4 = local_4 + -1;
    } while (BEA_LOOP_GUARD((local_4 != 0)));
  }
  if (param_4 != 0) {
    for (iVar7 = iVar3 * param_3 * 2; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
      sVar1 = *param_1;
      *param_1 = param_1[1];
      param_1[1] = sVar1;
      param_1 = param_1 + 3;
    }
  }
  return;
}

// @autoport-registration (verified: 469156 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00440ad0, ap_00440ad0));
