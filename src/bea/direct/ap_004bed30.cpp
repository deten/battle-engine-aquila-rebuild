// auto-ported from 004bed30_FUN_004bed30.c (FUN_004bed30, 359 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00809dc0 GLOBAL_AT(int, 0x00809dc0)
#define DAT_00809bc0 GLOBAL_AT(int, 0x00809bc0)
#define DAT_00809fc0 GLOBAL_AT(int, 0x00809fc0)
#define DAT_00809dbc GLOBAL_AT(int, 0x00809dbc)
#define DAT_00809bbe GLOBAL_AT(int, 0x00809bbe)
#define DAT_00809fbe GLOBAL_AT(int, 0x00809fbe)
#define DAT_00809bc2 GLOBAL_AT(int, 0x00809bc2)

static void BEA_CDECL ap_004bed30(int *param_1, int *param_2)
{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = *param_1;
  iVar4 = *param_2;
  iVar1 = iVar3 * 0x100 + iVar4;
  uVar5 = *(ushort *)((int)&DAT_00809dc0 + iVar1 * 2);
  iVar6 = iVar3;
  if ((0 < iVar3) && (*(ushort *)(((char *)&DAT_00809bc0) + iVar1 * 2) < uVar5)) {
    iVar6 = iVar3 + -1;
    uVar5 = *(ushort *)(((char *)&DAT_00809bc0) + iVar1 * 2);
  }
  if ((iVar3 < 0xff) && (uVar2 = *(ushort *)((int)&DAT_00809fc0 + iVar1 * 2), uVar2 < uVar5)) {
    iVar6 = iVar3 + 1;
    uVar5 = uVar2;
  }
  iVar7 = iVar4;
  if ((0 < iVar4) && (uVar2 = *(ushort *)((int)&DAT_00809dbc + iVar1 * 2 + 2), uVar2 < uVar5)) {
    iVar7 = iVar4 + -1;
    iVar6 = iVar3;
    uVar5 = uVar2;
  }
  if ((iVar4 < 0xff) && (uVar2 = *(ushort *)((int)&DAT_00809dc0 + iVar1 * 2 + 2), uVar2 < uVar5)) {
    iVar7 = iVar4 + 1;
    iVar6 = iVar3;
    uVar5 = uVar2;
  }
  if (((0 < iVar3) && (0 < iVar4)) && (*(ushort *)(((char *)&DAT_00809bbe) + iVar1 * 2) < uVar5)) {
    iVar6 = iVar3 + -1;
    iVar7 = iVar4 + -1;
    uVar5 = *(ushort *)(((char *)&DAT_00809bbe) + iVar1 * 2);
  }
  if (((iVar3 < 0xff) && (0 < iVar4)) && (*(ushort *)(((char *)&DAT_00809fbe) + iVar1 * 2) < uVar5)) {
    iVar6 = iVar3 + 1;
    iVar7 = iVar4 + -1;
    uVar5 = *(ushort *)(((char *)&DAT_00809fbe) + iVar1 * 2);
  }
  if (((0 < iVar3) && (iVar4 < 0xff)) && (*(ushort *)(((char *)&DAT_00809bc2) + iVar1 * 2) < uVar5)) {
    iVar6 = iVar3 + -1;
    iVar7 = iVar4 + 1;
    uVar5 = *(ushort *)(((char *)&DAT_00809bc2) + iVar1 * 2);
  }
  if (0xfe < iVar3) {
    *param_1 = iVar6;
    *param_2 = iVar7;
    return;
  }
  if (0xfe < iVar4) {
    *param_1 = iVar6;
    *param_2 = iVar7;
    return;
  }
  if (uVar5 <= *(ushort *)((int)&DAT_00809fc0 + iVar1 * 2 + 2)) {
    *param_1 = iVar6;
    *param_2 = iVar7;
    return;
  }
  *param_1 = iVar3 + 1;
  *param_2 = iVar4 + 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bed30, ap_004bed30));
