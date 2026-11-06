// auto-ported from 00491340_FUN_00491340.c (FUN_00491340, 365 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_00491340(void * this_, undefined1 *param_1, byte *param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  iVar1 = *(int *)((int)this_ + 0x18);
  pbVar6 = param_2;
  for (iVar3 = iVar1; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
    param_2 = *(byte **)((int)this_ + 0x18);
    if (param_2 != (byte *)0x0) {
      puVar4 = param_1;
      pbVar5 = pbVar6;
      pbVar7 = pbVar6 + iVar1 * 8;
      do {
        pbVar6 = pbVar5 + 8;
        pbVar8 = pbVar7 + 8;
        param_1 = puVar4 + 4;
        *puVar4 = (char)((int)((uint)pbVar7[iVar1 * -8 + 4] + (uint)pbVar7[4] + (uint)*pbVar7 +
                              (uint)*pbVar5) >> 2);
        puVar4[1] = (char)((int)((uint)pbVar8[iVar1 * -8 + -7] + (uint)pbVar8[iVar1 * -8 + -3] +
                                 (uint)pbVar7[5] + (uint)pbVar7[1]) >> 2);
        puVar4[2] = (char)((int)((uint)pbVar8[iVar1 * -8 + -6] + (uint)pbVar8[iVar1 * -8 + -2] +
                                 (uint)pbVar7[6] + (uint)pbVar7[2]) >> 2);
        iVar2 = (int)(char)pbVar8[iVar1 * -8 + -5] + (int)(char)pbVar8[iVar1 * -8 + -1] +
                (int)(char)pbVar7[7] + (int)(char)pbVar7[3];
        puVar4[3] = (char)((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2);
        param_2 = (byte *)((int)param_2 + -1);
        puVar4 = param_1;
        pbVar5 = pbVar6;
        pbVar7 = pbVar8;
      } while (BEA_LOOP_GUARD((param_2 != (byte *)0x0)));
    }
    pbVar6 = pbVar6 + iVar1 * 8;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00491340, ap_00491340));
