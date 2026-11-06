// auto-ported from 00439e70_vslot1.c (CSpawnerBasedOn::vslot1, 464 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008553f4 GLOBAL_AT(undefined4*, 0x008553f4)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850 ((char*)0x00625850)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static undefined4 BEA_THISCALL ap_00439e70(int this_, byte *param_1)
{
  float fVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;

  byte *pbVar12;
  bool bVar13;
  
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  piVar4 = (int *)*DAT_008553f4;
  DAT_008553f4[2] = (int)piVar4;
  if (piVar4 == (int *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar4;
  }
  if (iVar8 == 0) {
    return 0;
  }
  do {
    pbVar12 = *(byte **)(iVar8 + 8);
    pbVar6 = param_1;
    do {
      bVar2 = *pbVar6;
      bVar13 = bVar2 < *pbVar12;
      if (bVar2 != *pbVar12) {
LAB_00439ec8:
        iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        goto LAB_00439ecd;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar6[1];
      bVar13 = bVar2 < pbVar12[1];
      if (bVar2 != pbVar12[1]) goto LAB_00439ec8;
      pbVar6 = pbVar6 + 2;
      pbVar12 = pbVar12 + 2;
    } while (BEA_LOOP_GUARD((bVar2 != 0)));
    iVar7 = 0;
LAB_00439ecd:
    if (iVar7 == 0) {
      if (iVar8 == 0) {
        return 0;
      }
      if ((byte *)(this_ + 8) == (byte *)0x0) goto LAB_00439f76;
      piVar4 = (int *)*DAT_008553f4;
      DAT_008553f4[2] = (int)piVar4;
      if (piVar4 == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *piVar4;
      }
      break;
    }
    piVar4 = *(int **)(DAT_008553f4[2] + 4);
    DAT_008553f4[2] = (int)piVar4;
    if (piVar4 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *piVar4;
    }
    if (iVar8 == 0) {
      return 0;
    }
  } while(BEA_LOOP_GUARD(( true )));
joined_r0x00439f1f:
  if (iVar7 == 0) {
LAB_00439f76:
    iVar7 = 0;
LAB_00439f78:
    fVar1 = *(float *)(iVar8 + 0x18);
    uVar11 = (uint)(ushort)((ushort)(fVar1 < 0.0f) << 8 | (ushort)bea_isnan(fVar1) << 10 |
                           (ushort)(fVar1 == 0.0f) << 0xe);
    if ((fVar1 == 0.0f) == 0) {
      *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(iVar7 + 0x18);
      *(undefined4 *)(iVar8 + 0x1c) = *(undefined4 *)(iVar7 + 0x1c);
      *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iVar7 + 0xc);
      *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar7 + 0x10);
      *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar7 + 0x20);
      *(undefined4 *)(iVar8 + 0x28) = *(undefined4 *)(iVar7 + 0x28);
      *(undefined4 *)(iVar8 + 0x24) = *(undefined4 *)(iVar7 + 0x24);
      *(undefined4 *)(iVar8 + 0x14) = *(undefined4 *)(iVar7 + 0x14);
      *(undefined4 *)(iVar8 + 0x2c) = *(undefined4 *)(iVar7 + 0x2c);
      *(undefined4 *)(iVar8 + 0x30) = *(undefined4 *)(iVar7 + 0x30);
      uVar11 = *(uint *)(iVar7 + 0x34);
      *(uint *)(iVar8 + 0x34) = uVar11;
      *(undefined4 *)(iVar8 + 0x38) = *(undefined4 *)(iVar7 + 0x38);
      pcVar5 = *(char **)(iVar7 + 4);
      if (pcVar5 != (char *)0x0) {
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)(iVar8 + 4)));
        *(undefined4 *)(iVar8 + 4) = 0;
        iVar7 = 0;
        cVar3 = *pcVar5;
        while (BEA_LOOP_GUARD((cVar3 != '\0'))) {
          iVar9 = iVar7 + 1;
          iVar7 = iVar7 + 1;
          cVar3 = pcVar5[iVar9];
        }
        iVar7 = iVar7 + 1;
        uVar10 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar7), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850), bea_arg(0x194));
        *(undefined4 *)(iVar8 + 4) = uVar10;
        uVar11 = 0;
        if (0 < iVar7) {
          do {
            *(char *)(*(int *)(iVar8 + 4) + uVar11) = pcVar5[uVar11];
            uVar11 = uVar11 + 1;
          } while (BEA_LOOP_GUARD(((int)uVar11 < iVar7)));
        }
      }
    }
    return uVar11;
  }
  pbVar12 = *(byte **)(iVar7 + 8);
  pbVar6 = (byte *)(this_ + 8);
  do {
    bVar2 = *pbVar6;
    bVar13 = bVar2 < *pbVar12;
    if (bVar2 != *pbVar12) {
LAB_00439f4a:
      iVar9 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_00439f4f;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar6[1];
    bVar13 = bVar2 < pbVar12[1];
    if (bVar2 != pbVar12[1]) goto LAB_00439f4a;
    pbVar6 = pbVar6 + 2;
    pbVar12 = pbVar12 + 2;
  } while (BEA_LOOP_GUARD((bVar2 != 0)));
  iVar9 = 0;
LAB_00439f4f:
  if (iVar9 == 0) goto LAB_00439f78;
  piVar4 = *(int **)(DAT_008553f4[2] + 4);
  DAT_008553f4[2] = (int)piVar4;
  if (piVar4 == (int *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *piVar4;
  }
  goto joined_r0x00439f1f;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00439e70, ap_00439e70));
