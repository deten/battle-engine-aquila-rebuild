// auto-ported from 00517600_FUN_00517600.c (FUN_00517600, 199 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00663080 GLOBAL_AT(int, 0x00663080)

static void BEA_CDECL ap_00517600(undefined4 *param_1, short *param_2, uint param_3)
{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  
  if (DAT_00663080 == 0) {
    for (uVar8 = param_3 >> 2; BEA_LOOP_GUARD((uVar8 != 0)); uVar8 = uVar8 - 1) {
      *param_1 = *(undefined4 *)param_2;
      param_2 = param_2 + 2;
      param_1 = param_1 + 1;
    }
    for (uVar8 = param_3 & 3; BEA_LOOP_GUARD((uVar8 != 0)); uVar8 = uVar8 - 1) {
      *(char *)param_1 = (char)*param_2;
      param_2 = (short *)((int)param_2 + 1);
      param_1 = (undefined4 *)((int)param_1 + 1);
    }
  }
  else if (DAT_00663080 == 1) {
    iVar6 = (int)(param_3 + ((int)param_3 >> 0x1f & 3U)) >> 2;
    iVar5 = iVar6;
    puVar9 = param_1;
    iVar10 = 0;
    if (0 < iVar6) {
      do {
        psVar7 = param_2 + 1;
        sVar4 = *param_2;
        param_2 = param_2 + 2;
        *(short *)puVar9 = (short)((int)*psVar7 + (int)sVar4 >> 1);
        iVar5 = iVar5 + -1;
        puVar9 = (undefined4 *)((int)puVar9 + 2);
        iVar10 = iVar6;
      } while (BEA_LOOP_GUARD((iVar5 != 0)));
    }
    if ((param_3 & 3) != 0) {
      *(undefined2 *)((int)param_1 + iVar10 * 2) = 0;
      return;
    }
  }
  else {
    iVar10 = 0;
    iVar5 = (int)(param_3 + ((int)param_3 >> 0x1f & 7U)) >> 3;
    if (0 < iVar5) {
      psVar7 = param_2 + 2;
      do {
        psVar1 = psVar7 + -2;
        psVar2 = psVar7 + -1;
        psVar3 = psVar7 + 1;
        sVar4 = *psVar7;
        psVar7 = psVar7 + 4;
        *(char *)(iVar10 + (int)param_1) =
             (char)((int)*psVar1 + (int)*psVar2 + (int)*psVar3 + (int)sVar4 >> 10) + -0x80;
        iVar10 = iVar10 + 1;
      } while (BEA_LOOP_GUARD((iVar10 < iVar5)));
      return;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00517600, ap_00517600));
