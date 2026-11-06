// auto-ported from 00517fa0_FUN_00517fa0.c (FUN_00517fa0, 265 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0063e89c GLOBAL_AT(int, 0x0063e89c)
#define DAT_0063e85c GLOBAL_AT(int, 0x0063e85c)

static void BEA_CDECL ap_00517fa0(char *param_1, char *param_2, uint param_3, short *param_4)
{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 *local_8;
  
  local_8 = (undefined2 *)param_2;
  param_2 = param_1;
  iVar4 = (int)(char)param_4[1];
  bVar1 = false;
  iVar5 = (&DAT_0063e89c)[iVar4];
  iVar6 = (int)*param_4;
  if (0 < (int)param_3) {
    param_1 = (char *)param_3;
    do {
      uVar2 = param_3;
      if (!bVar1) {
        param_3 = (uint)*param_2;
        param_2 = param_2 + 1;
        uVar2 = (int)param_3 >> 4;
      }
      bVar1 = !bVar1;
      iVar4 = iVar4 + *(int *)(((uint8_t *)&DAT_0063e85c) + (uVar2 & 0xf) * 4);
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0x58 < iVar4) {
        iVar4 = 0x58;
      }
      iVar3 = iVar5 >> 3;
      if ((uVar2 & 4) != 0) {
        iVar3 = iVar3 + iVar5;
      }
      if ((uVar2 & 2) != 0) {
        iVar3 = iVar3 + (iVar5 >> 1);
      }
      if ((uVar2 & 1) != 0) {
        iVar3 = iVar3 + (iVar5 >> 2);
      }
      if ((uVar2 & 8) != 0) {
        iVar3 = -iVar3;
      }
      iVar6 = iVar6 + iVar3;
      if (iVar6 < 0x8000) {
        if (iVar6 < -0x8000) {
          iVar6 = -0x8000;
        }
      }
      else {
        iVar6 = 0x7fff;
      }
      iVar5 = (&DAT_0063e89c)[iVar4];
      *local_8 = (short)iVar6;
      local_8 = local_8 + 1;
      param_1 = (char *)((int)param_1 - 1);
    } while (BEA_LOOP_GUARD((param_1 != (char *)0x0)));
  }
  *param_4 = (short)iVar6;
  *(char *)(param_4 + 1) = (char)iVar4;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00517fa0, ap_00517fa0));
