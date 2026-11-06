// auto-ported from 00437d00_vslot1.c (CRoundBasedOn::vslot1, 732 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CRoundBasedOn;
#define DAT_008553f0 GLOBAL_AT(undefined4*, 0x008553f0)
#define DAT_009c3df0 GLOBAL_AT(char, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850 ((char*)0x00625850)
typedef uint32_t (BEA_THISCALL* FUN_00437fe0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00437fe0_t> FUN_00437fe0 = {(FUN_00437fe0_t)0x00437fe0};
typedef uint32_t (BEA_THISCALL* FUN_00438050_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00438050_t> FUN_00438050 = {(FUN_00438050_t)0x00438050};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static undefined4 BEA_THISCALL ap_00437d00(CRoundBasedOn * this_, byte *param_1)
{
  char cVar1;
  byte bVar2;
  CRoundBasedOn CVar3;
  int *piVar4;
  undefined4 uVar5;
  uint32_t eax_in = 0;
  byte *pbVar6;
  int iVar7;
  void *this_00;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  CRoundBasedOn *pCVar13;
  char *pcVar14;
  CRoundBasedOn *pCVar15;
  char *pcVar16;
  bool bVar17;
  
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  piVar4 = (int *)*DAT_008553f0;
  DAT_008553f0[2] = (int)piVar4;
  if (piVar4 == (int *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)*piVar4;
  }
  if (this_00 == (void *)0x0) {
    return 0;
  }
  do {
    pbVar12 = *(byte **)((int)this_00 + 0x18);
    pbVar6 = param_1;
    do {
      bVar2 = *pbVar6;
      bVar17 = bVar2 < *pbVar12;
      if (bVar2 != *pbVar12) {
LAB_00437d58:
        iVar7 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
        goto LAB_00437d5d;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar6[1];
      bVar17 = bVar2 < pbVar12[1];
      if (bVar2 != pbVar12[1]) goto LAB_00437d58;
      pbVar6 = pbVar6 + 2;
      pbVar12 = pbVar12 + 2;
    } while (BEA_LOOP_GUARD((bVar2 != 0)));
    iVar7 = 0;
LAB_00437d5d:
    if (iVar7 == 0) {
      if (this_00 == (void *)0x0) {
        return 0;
      }
      if (this_ + 8 == (CRoundBasedOn *)0x0) {
        return 0;
      }
      piVar4 = (int *)*DAT_008553f0;
      DAT_008553f0[2] = (int)piVar4;
      if (piVar4 == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *piVar4;
      }
      if (iVar7 == 0) {
        return 0;
      }
      break;
    }
    piVar4 = *(int **)(DAT_008553f0[2] + 4);
    DAT_008553f0[2] = (int)piVar4;
    if (piVar4 == (int *)0x0) {
      this_00 = (void *)0x0;
    }
    else {
      this_00 = (void *)*piVar4;
    }
    if (this_00 == (void *)0x0) {
      return 0;
    }
  } while(BEA_LOOP_GUARD(( true )));
LAB_00437db9:
  pCVar15 = *(CRoundBasedOn **)(iVar7 + 0x18);
  pCVar13 = this_ + 8;
  do {
    CVar3 = *pCVar13;
    bVar17 = (byte)CVar3 < (byte)*pCVar15;
    if (CVar3 != *pCVar15) {
LAB_00437de2:
      iVar8 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
      goto LAB_00437de7;
    }
    if (CVar3 == (CRoundBasedOn)0x0) break;
    CVar3 = pCVar13[1];
    bVar17 = (byte)CVar3 < (byte)pCVar15[1];
    if (CVar3 != pCVar15[1]) goto LAB_00437de2;
    pCVar13 = pCVar13 + 2;
    pCVar15 = pCVar15 + 2;
  } while (BEA_LOOP_GUARD((CVar3 != (CRoundBasedOn)0x0)));
  iVar8 = 0;
LAB_00437de7:
  if (iVar8 == 0) {
    if (iVar7 == 0) {
      return 0;
    }
    *(undefined4 *)((int)this_00 + 0x1c) = *(undefined4 *)(iVar7 + 0x1c);
    *(undefined4 *)((int)this_00 + 0x20) = *(undefined4 *)(iVar7 + 0x20);
    *(undefined4 *)((int)this_00 + 0x24) = *(undefined4 *)(iVar7 + 0x24);
    *(undefined4 *)((int)this_00 + 0x28) = *(undefined4 *)(iVar7 + 0x28);
    *(undefined4 *)((int)this_00 + 0x2c) = *(undefined4 *)(iVar7 + 0x2c);
    *(undefined4 *)((int)this_00 + 0x30) = *(undefined4 *)(iVar7 + 0x30);
    *(undefined4 *)((int)this_00 + 0x34) = *(undefined4 *)(iVar7 + 0x34);
    *(undefined4 *)((int)this_00 + 0x40) = *(undefined4 *)(iVar7 + 0x40);
    *(undefined4 *)((int)this_00 + 0x38) = *(undefined4 *)(iVar7 + 0x38);
    *(undefined4 *)((int)this_00 + 0x8c) = *(undefined4 *)(iVar7 + 0x8c);
    *(undefined4 *)((int)this_00 + 0x44) = *(undefined4 *)(iVar7 + 0x44);
    *(undefined4 *)((int)this_00 + 0x5c) = *(undefined4 *)(iVar7 + 0x5c);
    *(undefined4 *)((int)this_00 + 0x68) = *(undefined4 *)(iVar7 + 0x68);
    *(undefined4 *)((int)this_00 + 0x6c) = *(undefined4 *)(iVar7 + 0x6c);
    *(undefined4 *)((int)this_00 + 0x70) = *(undefined4 *)(iVar7 + 0x70);
    *(undefined4 *)((int)this_00 + 100) = *(undefined4 *)(iVar7 + 100);
    *(undefined4 *)((int)this_00 + 0x98) = *(undefined4 *)(iVar7 + 0x98);
    *(undefined4 *)((int)this_00 + 0x3c) = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)((int)this_00 + 0x58) = *(undefined4 *)(iVar7 + 0x58);
    *(undefined4 *)((int)this_00 + 0x48) = *(undefined4 *)(iVar7 + 0x48);
    *(undefined4 *)((int)this_00 + 0x78) = *(undefined4 *)(iVar7 + 0x78);
    pcVar14 = *(char **)(iVar7 + 0x10);
    if (pcVar14 == (char *)0x0) goto LAB_00437efe;
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_00 + 0x10)));
    uVar10 = 0xffffffff;
    pcVar9 = pcVar14;
    goto code_r0x00437ec4;
  }
  piVar4 = *(int **)(DAT_008553f0[2] + 4);
  DAT_008553f0[2] = (int)piVar4;
  if (piVar4 == (int *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *piVar4;
  }
  if (iVar7 == 0) {
    return 0;
  }
  goto LAB_00437db9;
  while(BEA_LOOP_GUARD(( true ))) {
    uVar10 = uVar10 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    if (cVar1 == '\0') break;
code_r0x00437ec4:
    if (uVar10 == 0) break;
  }
  pcVar9 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(~uVar10), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850), bea_arg(0x249));
  uVar10 = 0xffffffff;
  *(char **)((int)this_00 + 0x10) = pcVar9;
  do {
    pcVar16 = pcVar14;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar16 = pcVar14 + 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar16;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar10 = ~uVar10;
  pcVar14 = pcVar16 + -uVar10;
  for (uVar11 = uVar10 >> 2; BEA_LOOP_GUARD((uVar11 != 0)); uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar14;
    pcVar14 = pcVar14 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar10 = uVar10 & 3; BEA_LOOP_GUARD((uVar10 != 0)); uVar10 = uVar10 - 1) {
    *pcVar9 = *pcVar14;
    pcVar14 = pcVar14 + 1;
    pcVar9 = pcVar9 + 1;
  }
LAB_00437efe:
  pcVar14 = *(char **)(iVar7 + 0x14);
  if (pcVar14 != (char *)0x0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_00 + 0x14)));
    uVar10 = 0xffffffff;
    pcVar9 = pcVar14;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    pcVar9 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(~uVar10), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850), bea_arg(0x254));
    uVar10 = 0xffffffff;
    *(char **)((int)this_00 + 0x14) = pcVar9;
    do {
      pcVar16 = pcVar14;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar16 = pcVar14 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar16;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar10 = ~uVar10;
    pcVar14 = pcVar16 + -uVar10;
    for (uVar11 = uVar10 >> 2; BEA_LOOP_GUARD((uVar11 != 0)); uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar10 = uVar10 & 3; BEA_LOOP_GUARD((uVar10 != 0)); uVar10 = uVar10 - 1) {
      *pcVar9 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  FUN_00438050(bea_arg(this_00), bea_arg(*(undefined4 *)(iVar7 + 8)));
  FUN_00437fe0(bea_arg(this_00), bea_arg(*(undefined4 *)(iVar7 + 0xc)));
  *(undefined4 *)((int)this_00 + 0x4c) = *(undefined4 *)(iVar7 + 0x4c);
  *(undefined4 *)((int)this_00 + 0x50) = *(undefined4 *)(iVar7 + 0x50);
  *(undefined4 *)((int)this_00 + 0x54) = *(undefined4 *)(iVar7 + 0x54);
  *(undefined4 *)((int)this_00 + 0x80) = *(undefined4 *)(iVar7 + 0x80);
  *(undefined4 *)((int)this_00 + 0x88) = *(undefined4 *)(iVar7 + 0x88);
  *(undefined4 *)((int)this_00 + 0x84) = *(undefined4 *)(iVar7 + 0x84);
  *(undefined4 *)((int)this_00 + 0x90) = *(undefined4 *)(iVar7 + 0x90);
  *(undefined4 *)((int)this_00 + 0x94) = *(undefined4 *)(iVar7 + 0x94);
  *(undefined4 *)((int)this_00 + 0x74) = *(undefined4 *)(iVar7 + 0x74);
  uVar5 = *(undefined4 *)(iVar7 + 0x60);
  *(undefined4 *)((int)this_00 + 0x60) = uVar5;
  *(undefined4 *)((int)this_00 + 0xa4) = *(undefined4 *)(iVar7 + 0xa4);
  return uVar5;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00437d00, ap_00437d00));
