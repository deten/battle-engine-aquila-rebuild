// auto-ported from 00434610_vslot1.c (CWeaponChargeLevel::vslot1, 318 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CWeaponChargeLevel;
#define DAT_008553e8 GLOBAL_AT(undefined4*, 0x008553e8)
#define DAT_008553ec GLOBAL_AT(undefined4*, 0x008553ec)

static undefined4 BEA_THISCALL ap_00434610(CWeaponChargeLevel * this_, byte *param_1)
{
  byte bVar1;
  CWeaponChargeLevel CVar2;
  int *piVar3;
  uint32_t eax_in = 0;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  CWeaponChargeLevel *pCVar7;
  int iVar8;
  byte *pbVar9;
  CWeaponChargeLevel *pCVar10;
  bool bVar11;
  
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  puVar6 = (undefined4 *)*DAT_008553e8;
  DAT_008553e8[2] = puVar6;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)*puVar6;
  }
  if (puVar6 == (undefined4 *)0x0) {
    return 0;
  }
  do {
    pbVar9 = (byte *)*puVar6;
    pbVar4 = param_1;
    do {
      bVar1 = *pbVar4;
      bVar11 = bVar1 < *pbVar9;
      if (bVar1 != *pbVar9) {
LAB_0043466c:
        iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_00434671;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar11 = bVar1 < pbVar9[1];
      if (bVar1 != pbVar9[1]) goto LAB_0043466c;
      pbVar4 = pbVar4 + 2;
      pbVar9 = pbVar9 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar5 = 0;
LAB_00434671:
    if (iVar5 == 0) {
      if (puVar6 == (undefined4 *)0x0) {
        return 0;
      }
      iVar5 = *(int *)(this_ + 0x108);
      if (iVar5 < 0) {
        return iVar5;
      }
      if (4 < iVar5) {
        return iVar5;
      }
      if (this_ + 8 == (CWeaponChargeLevel *)0x0) goto LAB_00434731;
      iVar5 = 0;
      piVar3 = (int *)*DAT_008553ec;
      DAT_008553ec[2] = (int)piVar3;
      if (piVar3 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *piVar3;
      }
      break;
    }
    puVar6 = *(undefined4 **)(DAT_008553e8[2] + 4);
    DAT_008553e8[2] = puVar6;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)*puVar6;
    }
    if (puVar6 == (undefined4 *)0x0) {
      return 0;
    }
  } while(BEA_LOOP_GUARD(( true )));
joined_r0x004346df:
  if (iVar8 == 0) {
LAB_00434731:
    iVar5 = -1;
LAB_00434734:
    puVar6[*(int *)(this_ + 0x108) + 3] = iVar5;
    return iVar5;
  }
  pCVar10 = *(CWeaponChargeLevel **)(iVar8 + 0x30);
  pCVar7 = this_ + 8;
  do {
    CVar2 = *pCVar7;
    bVar11 = (byte)CVar2 < (byte)*pCVar10;
    if (CVar2 != *pCVar10) {
LAB_0043470a:
      iVar8 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_0043470f;
    }
    if (CVar2 == (CWeaponChargeLevel)0x0) break;
    CVar2 = pCVar7[1];
    bVar11 = (byte)CVar2 < (byte)pCVar10[1];
    if (CVar2 != pCVar10[1]) goto LAB_0043470a;
    pCVar7 = pCVar7 + 2;
    pCVar10 = pCVar10 + 2;
  } while (BEA_LOOP_GUARD((CVar2 != (CWeaponChargeLevel)0x0)));
  iVar8 = 0;
LAB_0043470f:
  if (iVar8 == 0) goto LAB_00434734;
  iVar5 = iVar5 + 1;
  piVar3 = *(int **)(DAT_008553ec[2] + 4);
  DAT_008553ec[2] = (int)piVar3;
  if (piVar3 == (int *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar3;
  }
  goto joined_r0x004346df;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00434610, ap_00434610));
