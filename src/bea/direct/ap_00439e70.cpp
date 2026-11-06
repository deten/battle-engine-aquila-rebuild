// auto-ported from 00439e70_vslot1.c (CSpawnerBasedOn::vslot1, 464 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CSpawnerBasedOn;
#define DAT_008553f4 GLOBAL_AT(undefined4*, 0x008553f4)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850 ((char*)0x00625850)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static undefined4 BEA_THISCALL ap_00439e70(CSpawnerBasedOn * this_, byte *param_1)
{
  float fVar1;
  byte bVar2;
  CSpawnerBasedOn CVar3;
  char cVar4;
  int *piVar5;
  char *pcVar6;
  uint32_t eax_in = 0;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  CSpawnerBasedOn *pCVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  byte *pbVar14;
  CSpawnerBasedOn *pCVar15;
  bool bVar16;
  
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  piVar5 = (int *)*DAT_008553f4;
  DAT_008553f4[2] = (int)piVar5;
  if (piVar5 == (int *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *piVar5;
  }
  if (iVar9 == 0) {
    return 0;
  }
  do {
    pbVar14 = *(byte **)(iVar9 + 8);
    pbVar7 = param_1;
    do {
      bVar2 = *pbVar7;
      bVar16 = bVar2 < *pbVar14;
      if (bVar2 != *pbVar14) {
LAB_00439ec8:
        iVar8 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
        goto LAB_00439ecd;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar7[1];
      bVar16 = bVar2 < pbVar14[1];
      if (bVar2 != pbVar14[1]) goto LAB_00439ec8;
      pbVar7 = pbVar7 + 2;
      pbVar14 = pbVar14 + 2;
    } while (BEA_LOOP_GUARD((bVar2 != 0)));
    iVar8 = 0;
LAB_00439ecd:
    if (iVar8 == 0) {
      if (iVar9 == 0) {
        return 0;
      }
      if (this_ + 8 == (CSpawnerBasedOn *)0x0) goto LAB_00439f76;
      piVar5 = (int *)*DAT_008553f4;
      DAT_008553f4[2] = (int)piVar5;
      if (piVar5 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *piVar5;
      }
      break;
    }
    piVar5 = *(int **)(DAT_008553f4[2] + 4);
    DAT_008553f4[2] = (int)piVar5;
    if (piVar5 == (int *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *piVar5;
    }
    if (iVar9 == 0) {
      return 0;
    }
  } while(BEA_LOOP_GUARD(( true )));
joined_r0x00439f1f:
  if (iVar8 == 0) {
LAB_00439f76:
    iVar8 = 0;
LAB_00439f78:
    fVar1 = *(float *)(iVar9 + 0x18);
    uVar13 = bea_piece32((ushort)((ushort)(fVar1 < 0.0f) << 8 | (ushort)bea_isnan(fVar1) << 10 |
                           (ushort)(fVar1 == 0.0f) << 0xe));
    if ((fVar1 == 0.0f) == 0) {
      *(undefined4 *)(iVar9 + 0x18) = *(undefined4 *)(iVar8 + 0x18);
      *(undefined4 *)(iVar9 + 0x1c) = *(undefined4 *)(iVar8 + 0x1c);
      *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)(iVar8 + 0xc);
      *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(iVar8 + 0x10);
      *(undefined4 *)(iVar9 + 0x20) = *(undefined4 *)(iVar8 + 0x20);
      *(undefined4 *)(iVar9 + 0x28) = *(undefined4 *)(iVar8 + 0x28);
      *(undefined4 *)(iVar9 + 0x24) = *(undefined4 *)(iVar8 + 0x24);
      *(undefined4 *)(iVar9 + 0x14) = *(undefined4 *)(iVar8 + 0x14);
      *(undefined4 *)(iVar9 + 0x2c) = *(undefined4 *)(iVar8 + 0x2c);
      *(undefined4 *)(iVar9 + 0x30) = *(undefined4 *)(iVar8 + 0x30);
      uVar13 = *(uint *)(iVar8 + 0x34);
      *(uint *)(iVar9 + 0x34) = uVar13;
      *(undefined4 *)(iVar9 + 0x38) = *(undefined4 *)(iVar8 + 0x38);
      pcVar6 = *(char **)(iVar8 + 4);
      if (pcVar6 != (char *)0x0) {
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)(iVar9 + 4)));
        *(undefined4 *)(iVar9 + 4) = 0;
        iVar8 = 0;
        cVar4 = *pcVar6;
        while (BEA_LOOP_GUARD((cVar4 != '\0'))) {
          iVar11 = iVar8 + 1;
          iVar8 = iVar8 + 1;
          cVar4 = pcVar6[iVar11];
        }
        iVar8 = iVar8 + 1;
        uVar12 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar8), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850), bea_arg(0x194));
        *(undefined4 *)(iVar9 + 4) = uVar12;
        uVar13 = 0;
        if (0 < iVar8) {
          do {
            *(char *)(*(int *)(iVar9 + 4) + uVar13) = pcVar6[uVar13];
            uVar13 = uVar13 + 1;
          } while (BEA_LOOP_GUARD(((int)uVar13 < iVar8)));
        }
      }
    }
    return uVar13;
  }
  pCVar15 = *(CSpawnerBasedOn **)(iVar8 + 8);
  pCVar10 = this_ + 8;
  do {
    CVar3 = *pCVar10;
    bVar16 = (byte)CVar3 < (byte)*pCVar15;
    if (CVar3 != *pCVar15) {
LAB_00439f4a:
      iVar11 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
      goto LAB_00439f4f;
    }
    if (CVar3 == (CSpawnerBasedOn)0x0) break;
    CVar3 = pCVar10[1];
    bVar16 = (byte)CVar3 < (byte)pCVar15[1];
    if (CVar3 != pCVar15[1]) goto LAB_00439f4a;
    pCVar10 = pCVar10 + 2;
    pCVar15 = pCVar15 + 2;
  } while (BEA_LOOP_GUARD((CVar3 != (CSpawnerBasedOn)0x0)));
  iVar11 = 0;
LAB_00439f4f:
  if (iVar11 == 0) goto LAB_00439f78;
  piVar5 = *(int **)(DAT_008553f4[2] + 4);
  DAT_008553f4[2] = (int)piVar5;
  if (piVar5 == (int *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar5;
  }
  goto joined_r0x00439f1f;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00439e70, ap_00439e70));
