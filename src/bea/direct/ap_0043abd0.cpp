// auto-ported from 0043abd0_vslot1.c (CExplosionBasedOn::vslot1, 710 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CExplosionBasedOn;
#define DAT_008553f8 GLOBAL_AT(undefined4*, 0x008553f8)
#define DAT_009c3df0 GLOBAL_AT(char, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850 ((char*)0x00625850)
typedef uint32_t (BEA_THISCALL* FUN_0043aea0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0043aea0_t> FUN_0043aea0 = {(FUN_0043aea0_t)0x0043aea0};
typedef uint32_t (BEA_THISCALL* FUN_0043af10_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0043af10_t> FUN_0043af10 = {(FUN_0043af10_t)0x0043af10};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static undefined4 BEA_THISCALL ap_0043abd0(CExplosionBasedOn * this_, byte *param_1)
{
  char cVar1;
  byte bVar2;
  CExplosionBasedOn CVar3;
  int *piVar4;
  undefined4 uVar5;
  uint32_t eax_in = 0;
  byte *pbVar6;
  int iVar7;
  void *this_00;
  CExplosionBasedOn *pCVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  CExplosionBasedOn *pCVar14;
  char *pcVar15;
  char *pcVar16;
  bool bVar17;
  
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  piVar4 = (int *)*DAT_008553f8;
  DAT_008553f8[2] = (int)piVar4;
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
    pbVar13 = *(byte **)((int)this_00 + 0x30);
    pbVar6 = param_1;
    do {
      bVar2 = *pbVar6;
      bVar17 = bVar2 < *pbVar13;
      if (bVar2 != *pbVar13) {
LAB_0043ac28:
        iVar7 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
        goto LAB_0043ac2d;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar6[1];
      bVar17 = bVar2 < pbVar13[1];
      if (bVar2 != pbVar13[1]) goto LAB_0043ac28;
      pbVar6 = pbVar6 + 2;
      pbVar13 = pbVar13 + 2;
    } while (BEA_LOOP_GUARD((bVar2 != 0)));
    iVar7 = 0;
LAB_0043ac2d:
    if (iVar7 == 0) {
      if (this_00 == (void *)0x0) {
        return 0;
      }
      if (this_ + 8 == (CExplosionBasedOn *)0x0) {
        return 0;
      }
      piVar4 = (int *)*DAT_008553f8;
      DAT_008553f8[2] = (int)piVar4;
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
    piVar4 = *(int **)(DAT_008553f8[2] + 4);
    DAT_008553f8[2] = (int)piVar4;
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
LAB_0043ac89:
  pCVar14 = *(CExplosionBasedOn **)(iVar7 + 0x30);
  pCVar8 = this_ + 8;
  do {
    CVar3 = *pCVar8;
    bVar17 = (byte)CVar3 < (byte)*pCVar14;
    if (CVar3 != *pCVar14) {
LAB_0043acb2:
      iVar9 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
      goto LAB_0043acb7;
    }
    if (CVar3 == (CExplosionBasedOn)0x0) break;
    CVar3 = pCVar8[1];
    bVar17 = (byte)CVar3 < (byte)pCVar14[1];
    if (CVar3 != pCVar14[1]) goto LAB_0043acb2;
    pCVar8 = pCVar8 + 2;
    pCVar14 = pCVar14 + 2;
  } while (BEA_LOOP_GUARD((CVar3 != (CExplosionBasedOn)0x0)));
  iVar9 = 0;
LAB_0043acb7:
  if (iVar9 == 0) {
    if (iVar7 == 0) {
      return 0;
    }
    pcVar15 = *(char **)(iVar7 + 0x18);
    if (pcVar15 == (char *)0x0) goto LAB_0043ad44;
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_00 + 0x18)));
    uVar11 = 0xffffffff;
    pcVar10 = pcVar15;
    goto code_r0x0043ad0a;
  }
  piVar4 = *(int **)(DAT_008553f8[2] + 4);
  DAT_008553f8[2] = (int)piVar4;
  if (piVar4 == (int *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *piVar4;
  }
  if (iVar7 == 0) {
    return 0;
  }
  goto LAB_0043ac89;
  while(BEA_LOOP_GUARD(( true ))) {
    uVar11 = uVar11 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    if (cVar1 == '\0') break;
code_r0x0043ad0a:
    if (uVar11 == 0) break;
  }
  pcVar10 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(~uVar11), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850), bea_arg(0x51e));
  uVar11 = 0xffffffff;
  *(char **)((int)this_00 + 0x18) = pcVar10;
  do {
    pcVar16 = pcVar15;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar16 = pcVar15 + 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar16;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar11 = ~uVar11;
  pcVar15 = pcVar16 + -uVar11;
  for (uVar12 = uVar11 >> 2; BEA_LOOP_GUARD((uVar12 != 0)); uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar15;
    pcVar15 = pcVar15 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar11 = uVar11 & 3; BEA_LOOP_GUARD((uVar11 != 0)); uVar11 = uVar11 - 1) {
    *pcVar10 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    pcVar10 = pcVar10 + 1;
  }
LAB_0043ad44:
  pcVar15 = *(char **)(iVar7 + 0x20);
  if (pcVar15 != (char *)0x0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_00 + 0x20)));
    uVar11 = 0xffffffff;
    pcVar10 = pcVar15;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    pcVar10 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(~uVar11), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850), bea_arg(0x534));
    uVar11 = 0xffffffff;
    *(char **)((int)this_00 + 0x20) = pcVar10;
    do {
      pcVar16 = pcVar15;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar16 = pcVar15 + 1;
      cVar1 = *pcVar15;
      pcVar15 = pcVar16;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar11 = ~uVar11;
    pcVar15 = pcVar16 + -uVar11;
    for (uVar12 = uVar11 >> 2; BEA_LOOP_GUARD((uVar12 != 0)); uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar11 = uVar11 & 3; BEA_LOOP_GUARD((uVar11 != 0)); uVar11 = uVar11 - 1) {
      *pcVar10 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  pcVar15 = *(char **)(iVar7 + 0x1c);
  if (pcVar15 != (char *)0x0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_00 + 0x1c)));
    uVar11 = 0xffffffff;
    pcVar10 = pcVar15;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    pcVar10 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(~uVar11), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850), bea_arg(0x529));
    uVar11 = 0xffffffff;
    *(char **)((int)this_00 + 0x1c) = pcVar10;
    do {
      pcVar16 = pcVar15;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar16 = pcVar15 + 1;
      cVar1 = *pcVar15;
      pcVar15 = pcVar16;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar11 = ~uVar11;
    pcVar15 = pcVar16 + -uVar11;
    for (uVar12 = uVar11 >> 2; BEA_LOOP_GUARD((uVar12 != 0)); uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar11 = uVar11 & 3; BEA_LOOP_GUARD((uVar11 != 0)); uVar11 = uVar11 - 1) {
      *pcVar10 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  pcVar15 = *(char **)(iVar7 + 0x24);
  if (pcVar15 != (char *)0x0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_00 + 0x24)));
    uVar11 = 0xffffffff;
    pcVar10 = pcVar15;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    pcVar10 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(~uVar11), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850), bea_arg(0x53f));
    uVar11 = 0xffffffff;
    *(char **)((int)this_00 + 0x24) = pcVar10;
    do {
      pcVar16 = pcVar15;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar16 = pcVar15 + 1;
      cVar1 = *pcVar15;
      pcVar15 = pcVar16;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar11 = ~uVar11;
    pcVar15 = pcVar16 + -uVar11;
    for (uVar12 = uVar11 >> 2; BEA_LOOP_GUARD((uVar12 != 0)); uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar11 = uVar11 & 3; BEA_LOOP_GUARD((uVar11 != 0)); uVar11 = uVar11 - 1) {
      *pcVar10 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  *(undefined4 *)((int)this_00 + 0x34) = *(undefined4 *)(iVar7 + 0x34);
  *(undefined4 *)((int)this_00 + 0x38) = *(undefined4 *)(iVar7 + 0x38);
  *(undefined4 *)((int)this_00 + 0x3c) = *(undefined4 *)(iVar7 + 0x3c);
  FUN_0043aea0(bea_arg(this_00), bea_arg(*(undefined4 *)(iVar7 + 0x28)));
  FUN_0043af10(bea_arg(this_00), bea_arg(*(undefined4 *)(iVar7 + 0x2c)));
  uVar5 = *(undefined4 *)(iVar7 + 0x44);
  *(undefined4 *)((int)this_00 + 0x44) = uVar5;
  *(undefined4 *)((int)this_00 + 0x4c) = *(undefined4 *)(iVar7 + 0x4c);
  *(undefined4 *)((int)this_00 + 0x48) = *(undefined4 *)(iVar7 + 0x48);
  return uVar5;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0043abd0, ap_0043abd0));
