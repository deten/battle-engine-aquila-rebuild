// auto-ported from 0050d9e0_FUN_0050d9e0.c (FUN_0050d9e0, 572 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_00855360 GLOBAL_AT(undefined4*, 0x00855360)
#define DAT_00855358 GLOBAL_AT(undefined4*, 0x00855358)
#define DAT_008553fc GLOBAL_AT(int, 0x008553fc)
#define DAT_009c3df0 GLOBAL_AT(char, 0x009c3df0)
#define DAT_008553f4 GLOBAL_AT(undefined4*, 0x008553f4)
#define s_C__dev_ONSLAUGHT2_WorldMeshList__0063d464 ((char*)0x0063d464)
#define s_C__dev_ONSLAUGHT2_WorldMeshList__0063d488 ((char*)0x0063d488)
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef bool (BEA_THISCALL* FUN_00472650_t)(uint32_t);
static const bea_guard<FUN_00472650_t> FUN_00472650 = {(FUN_00472650_t)0x00472650};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef undefined4 (BEA_CDECL* FUN_0050d9e0_t)(uint32_t);
static const bea_guard<FUN_0050d9e0_t> FUN_0050d9e0 = {(FUN_0050d9e0_t)0x0050d9e0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 BEA_CDECL ap_0050d9e0(byte *param_1)
{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  bool bVar11;
  undefined1 *puStack_8;
  undefined4 local_4;
  iVar2 = FUN_00472650(bea_arg(&DAT_008a9a98));
  if (iVar2 != 0) {
    return iVar2;
  }
  DAT_00855360 = DAT_00855358;
  if (DAT_00855358 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)*DAT_00855358;
  }
  while (BEA_LOOP_GUARD((puVar5 != (undefined4 *)0x0))) {
    pbVar3 = (byte *)*puVar5;
    pbVar10 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar11 = bVar1 < *pbVar10;
      if (bVar1 != *pbVar10) {
LAB_0050da54:
        iVar2 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_0050da59;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar11 = bVar1 < pbVar10[1];
      if (bVar1 != pbVar10[1]) goto LAB_0050da54;
      pbVar3 = pbVar3 + 2;
      pbVar10 = pbVar10 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar2 = 0;
LAB_0050da59:
    if (iVar2 == 0) {
      return 0;
    }
    DAT_00855360 = (undefined4 *)DAT_00855360[1];
    if (DAT_00855360 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)*DAT_00855360;
    }
  }
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  iVar2 = FUN_00406d20(bea_arg(DAT_008553fc));
  if (iVar2 == 0) {
    return 0;
  }
  do {
    pbVar3 = *(byte **)(iVar2 + 0xb0);
    pbVar10 = param_1;
    do {
      bVar1 = *pbVar10;
      bVar11 = bVar1 < *pbVar3;
      if (bVar1 != *pbVar3) {
LAB_0050dac7:
        iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_0050dacc;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar10[1];
      bVar11 = bVar1 < pbVar3[1];
      if (bVar1 != pbVar3[1]) goto LAB_0050dac7;
      pbVar10 = pbVar10 + 2;
      pbVar3 = pbVar3 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_0050dacc:
    if (iVar4 == 0) {
      if (iVar2 == 0) {
        return 0;
      }
      puVar5 = (undefined4 *)
               FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x4f), bea_arg(s_C__dev_ONSLAUGHT2_WorldMeshList__0063d488), bea_arg(0x2e));
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
        goto LAB_0050db83;
      }
      uVar8 = 0xffffffff;
      puVar5[1] = 0;
      pbVar3 = param_1;
      break;
    }
    piVar7 = *(int **)(*(int *)((int)DAT_008553fc + 8) + 4);
    *(int **)((int)DAT_008553fc + 8) = piVar7;
    if (piVar7 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar7;
    }
    if (iVar2 == 0) {
      return 0;
    }
  } while(BEA_LOOP_GUARD(( true )));
  while(BEA_LOOP_GUARD(( true ))) {
    uVar8 = uVar8 - 1;
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    if (bVar1 == 0) break;
    if (uVar8 == 0) break;
  }
  pbVar3 = (byte *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(~uVar8), bea_arg(0x4f), bea_arg(s_C__dev_ONSLAUGHT2_WorldMeshList__0063d464), bea_arg(0x11));
  uVar8 = 0xffffffff;
  *puVar5 = pbVar3;
  do {
    pbVar10 = param_1;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pbVar10 = param_1 + 1;
    bVar1 = *param_1;
    param_1 = pbVar10;
  } while (BEA_LOOP_GUARD((bVar1 != 0)));
  uVar8 = ~uVar8;
  pbVar10 = pbVar10 + -uVar8;
  for (uVar9 = uVar8 >> 2; BEA_LOOP_GUARD((uVar9 != 0)); uVar9 = uVar9 - 1) {
    *(undefined4 *)pbVar3 = *(undefined4 *)pbVar10;
    pbVar10 = pbVar10 + 4;
    pbVar3 = pbVar3 + 4;
  }
  for (uVar8 = uVar8 & 3; BEA_LOOP_GUARD((uVar8 != 0)); uVar8 = uVar8 - 1) {
    *pbVar3 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    pbVar3 = pbVar3 + 1;
  }
LAB_0050db83:
  FUN_004e5a80(bea_arg(&DAT_00855358), bea_arg(puVar5));
  puVar5 = *(undefined4 **)(iVar2 + 0x4c);
  if (puVar5 == (undefined4 *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)*puVar5;
  }
  do {
    if (piVar7 == (int *)0x0) {
      return 0;
    }
    iVar2 = *piVar7;
    iVar4 = 0;
    piVar7 = (int *)*DAT_008553f4;
    DAT_008553f4[2] = (int)piVar7;
    if (piVar7 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar7;
    }
    while (BEA_LOOP_GUARD((iVar6 != 0))) {
      if (iVar4 == iVar2) {
        if (iVar6 != 0) {
          FUN_0050d9e0(bea_arg((byte *)*(undefined4 *)(iVar6 + 4)));
        }
        break;
      }
      iVar4 = iVar4 + 1;
      piVar7 = *(int **)(DAT_008553f4[2] + 4);
      DAT_008553f4[2] = (int)piVar7;
      if (piVar7 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar7;
      }
    }
    puVar5 = (undefined4 *)puVar5[1];
    if (puVar5 == (undefined4 *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)*puVar5;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050d9e0, ap_0050d9e0));
