// auto-ported from 0048ee00_FUN_0048ee00.c (FUN_0048ee00, 246 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static int BEA_STDCALL ap_0048ee00(short *param_1, int param_2, byte *param_3, int param_4, int param_5, int param_6, int param_7)
{
  short *psVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 1 << ((byte)param_6 & 0x1f);
  if (param_4 < 0) {
    param_6 = iVar6 + param_4;
    param_3 = param_3 + -param_4;
  }
  else {
    param_6 = iVar6;
    if (param_7 < iVar6 + param_4) {
      param_6 = param_7 - param_4;
    }
    param_1 = param_1 + param_4;
  }
  if (param_5 < 0) {
    iVar5 = iVar6 + param_5;
    param_3 = param_3 + -(iVar6 * param_5);
  }
  else {
    iVar5 = iVar6;
    if (param_7 < iVar6 + param_5) {
      iVar5 = param_7 - param_5;
    }
    param_1 = param_1 + param_2 * param_5;
  }
  for (; BEA_LOOP_GUARD((psVar1 = param_1, pbVar2 = param_3, iVar3 = param_6, iVar5 != 0)); iVar5 = iVar5 + -1) {
    for (; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
      if (*pbVar2 < 0x20) {
        uVar4 = (CONCAT22(*psVar1,*psVar1) & 0x7e0f81f) * (uint)*pbVar2 >> 5 & 0x7e0f81f;
        *psVar1 = (short)(uVar4 >> 0x10) + (short)uVar4;
      }
      psVar1 = psVar1 + 1;
      pbVar2 = pbVar2 + 1;
    }
    param_3 = param_3 + iVar6;
    param_1 = param_1 + param_2;
    param_5 = 0;
  }
  return param_5;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048ee00, ap_0048ee00));
