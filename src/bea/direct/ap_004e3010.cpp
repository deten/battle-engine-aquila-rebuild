// auto-ported from 004e3010_vslot9.c (CSpawnerThing::vslot9, 798 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
// @autoport-repair: 1 float/pointer cast(s) made bit copies (compiler-located, tools/repair_fcasts.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CSpawnerThing;
#define DAT_009c3df0 GLOBAL_AT(char, 0x009c3df0)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define DAT_008553fc GLOBAL_AT(undefined4*, 0x008553fc)
#define s_C__dev_ONSLAUGHT2_SpawnerThng_cp_00632650 ((char*)0x00632650)
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CComplexThing__vslot9_t> CComplexThing__vslot9 = {(CComplexThing__vslot9_t)0x004f3fd0};
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef undefined4 (BEA_CDECL* FUN_0050d9e0_t)(uint32_t);
static const bea_guard<FUN_0050d9e0_t> FUN_0050d9e0 = {(FUN_0050d9e0_t)0x0050d9e0};
typedef undefined4 (BEA_CDECL* FUN_0050f680_t)(uint32_t);
static const bea_guard<FUN_0050f680_t> FUN_0050f680 = {(FUN_0050f680_t)0x0050f680};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_THISCALL ap_004e3010(CSpawnerThing * this_, CSpawnerThing *param_1)
{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int *piVar4;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  CSpawnerThing *pCVar12;
  char *pcVar13;
  byte *pbVar14;
  CSpawnerThing *pCVar15;
  char *pcVar16;
  bool bVar17;
  iVar7 = (int)param_1;
  *(undefined4 *)((int)param_1 + 0x70) = 0xffffffff;
  this_[0x2c] = (CSpawnerThing)((byte)this_[0x2c] & 0xfd);
  *(undefined4 *)(this_ + 0xac) = *(undefined4 *)((int)param_1 + 4);
  *(undefined4 *)(this_ + 0xb0) = *(undefined4 *)((int)param_1 + 8);
  *(undefined4 *)(this_ + 0xb4) = *(undefined4 *)((int)param_1 + 0xc);
  *(undefined4 *)(this_ + 0xb8) = *(undefined4 *)((int)param_1 + 0x10);
  *(undefined4 *)(this_ + 0x108) = *(undefined4 *)((int)param_1 + 0x60);
  *(undefined4 *)(this_ + 0xec) = *(undefined4 *)((int)param_1 + 0x44);
  *(undefined4 *)(this_ + 0xf0) = *(undefined4 *)((int)param_1 + 0x48);
  puVar11 = (undefined4 *)((int)param_1 + 0x14);
  pCVar12 = this_ + 0xbc;
  for (iVar8 = 0xc; BEA_LOOP_GUARD((iVar8 != 0)); iVar8 = iVar8 + -1) {
    *(undefined4 *)pCVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    pCVar12 = pCVar12 + 4;
  }
  *(undefined4 *)(this_ + 0xf4) = *(undefined4 *)((int)param_1 + 0x4c);
  *(undefined4 *)(this_ + 0x148) = *(undefined4 *)((int)param_1 + 0xa0);
  *(undefined4 *)(this_ + 0x14c) = *(undefined4 *)((int)param_1 + 0xa4);
  *(undefined4 *)(this_ + 0x454) = *(undefined4 *)((int)param_1 + 0x3ac);
  *(undefined4 *)(this_ + 0x458) = *(undefined4 *)((int)param_1 + 0x3b0);
  uVar9 = 0xffffffff;
  *(undefined4 *)(this_ + 0x454) = 1;
  pcVar5 = (char *)((int)param_1 + 0x2ac);
  do {
    pcVar13 = pcVar5;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar13 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar13;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar9 = ~uVar9;
  pCVar12 = (CSpawnerThing *)(pcVar13 + -uVar9);
  pCVar15 = this_ + 0x154;
  for (uVar10 = uVar9 >> 2; BEA_LOOP_GUARD((uVar10 != 0)); uVar10 = uVar10 - 1) {
    *(undefined4 *)pCVar15 = *(undefined4 *)pCVar12;
    pCVar12 = pCVar12 + 4;
    pCVar15 = pCVar15 + 4;
  }
  for (uVar9 = uVar9 & 3; BEA_LOOP_GUARD((uVar9 != 0)); uVar9 = uVar9 - 1) {
    *pCVar15 = *pCVar12;
    pCVar12 = pCVar12 + 1;
    pCVar15 = pCVar15 + 1;
  }
  uVar9 = 0xffffffff;
  pcVar5 = (char *)((int)param_1 + 0x4d0);
  do {
    pcVar13 = pcVar5;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar13 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar13;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar9 = ~uVar9;
  pCVar12 = (CSpawnerThing *)(pcVar13 + -uVar9);
  pCVar15 = this_ + 0x354;
  for (uVar10 = uVar9 >> 2; BEA_LOOP_GUARD((uVar10 != 0)); uVar10 = uVar10 - 1) {
    *(undefined4 *)pCVar15 = *(undefined4 *)pCVar12;
    pCVar12 = pCVar12 + 4;
    pCVar15 = pCVar15 + 4;
  }
  for (uVar9 = uVar9 & 3; BEA_LOOP_GUARD((uVar9 != 0)); uVar9 = uVar9 - 1) {
    *pCVar15 = *pCVar12;
    pCVar12 = pCVar12 + 1;
    pCVar15 = pCVar15 + 1;
  }
  *(undefined4 *)((int)param_1 + 0x70) = 0xffffffff;
  param_1 = this_ + 0x354;
  CComplexThing__vslot9(bea_arg((CComplexThing *)this_), bea_arg(iVar7));
  if (*(int *)(iVar7 + 0x3ac) == 0) {
    *(undefined4 *)(this_ + 0xa4) = 1;
  }
  else {
    *(undefined4 *)(this_ + 0xa4) = 0;
  }
  *(undefined4 *)(this_ + 0x84) = *(undefined4 *)(iVar7 + 0x3c8);
  *(undefined4 *)(this_ + 0x88) = *(undefined4 *)(iVar7 + 0x3c4);
  *(undefined4 *)(this_ + 0x8c) = *(undefined4 *)(iVar7 + 0x3cc);
  *(undefined4 *)(this_ + 0x94) = *(undefined4 *)(iVar7 + 0x3bc);
  *(undefined4 *)(this_ + 0x90) = *(undefined4 *)(iVar7 + 0x3c0);
  *(undefined4 *)(this_ + 0x98) = 0;
  *(undefined4 *)(this_ + 0x9c) = 0;
  *(undefined4 *)(this_ + 0x80) = 0;
  uVar9 = 0xffffffff;
  *(uint *)(this_ + 0xa0) = (uint)(*(int *)(this_ + 0x94) < 0);
  pcVar5 = (char *)(iVar7 + 0x3d0);
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  pcVar5 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(~uVar9), bea_arg(8), bea_arg(s_C__dev_ONSLAUGHT2_SpawnerThng_cp_00632650), bea_arg(0x43));
  uVar9 = 0xffffffff;
  *(char **)(this_ + 0x468) = pcVar5;
  pcVar13 = (char *)(iVar7 + 0x3d0);
  do {
    pcVar16 = pcVar13;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar16 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar16;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar9 = ~uVar9;
  pcVar13 = pcVar16 + -uVar9;
  for (uVar10 = uVar9 >> 2; BEA_LOOP_GUARD((uVar10 != 0)); uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar9 = uVar9 & 3; BEA_LOOP_GUARD((uVar9 != 0)); uVar9 = uVar9 - 1) {
    *pcVar5 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar5 = pcVar5 + 1;
  }
  if ((*(int *)(this_ + 0xa4) == 0) && (*(int *)(this_ + 0x94) != 0)) {
    param_1 = (CSpawnerThing *)(uintptr_t)bea_piece32((DAT_00672fd0 + *(float *)(this_ + 0x84)));
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(this_), bea_arg(&param_1), bea_arg(0), bea_arg(0), bea_arg(0));
    *(float *)(this_ + 0x80) = DAT_00672fd0 + *(float *)(this_ + 0x84);
  }
  FUN_00401000(bea_arg(this_ + 0x7c), bea_arg(0));
  pbVar3 = *(byte **)(this_ + 0x468);
  if (pbVar3 != (byte *)0x0) {
    piVar4 = (int *)*DAT_008553fc;
    DAT_008553fc[2] = (int)piVar4;
    if (piVar4 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar4;
    }
    while (BEA_LOOP_GUARD((iVar7 != 0))) {
      pbVar14 = *(byte **)(iVar7 + 0xb0);
      pbVar6 = pbVar3;
      do {
        bVar2 = *pbVar6;
        bVar17 = bVar2 < *pbVar14;
        if (bVar2 != *pbVar14) {
LAB_004e3297:
          iVar8 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_004e329c;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar6[1];
        bVar17 = bVar2 < pbVar14[1];
        if (bVar2 != pbVar14[1]) goto LAB_004e3297;
        pbVar6 = pbVar6 + 2;
        pbVar14 = pbVar14 + 2;
      } while (BEA_LOOP_GUARD((bVar2 != 0)));
      iVar8 = 0;
LAB_004e329c:
      if (iVar8 == 0) {
        if ((iVar7 != 0) && (iVar7 = FUN_0050f680(bea_arg(*(undefined4 *)(iVar7 + 0xe0))), iVar7 == 0)) {
          iVar7 = *(int *)(this_ + 0x90);
          *(undefined4 *)(this_ + 0x90) = 1;
          *(int *)(this_ + 0x94) = iVar7 * *(int *)(this_ + 0x94);
        }
        break;
      }
      piVar4 = *(int **)(DAT_008553fc[2] + 4);
      DAT_008553fc[2] = (int)piVar4;
      if (piVar4 == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *piVar4;
      }
    }
  }
  FUN_0050d9e0(bea_arg(*(undefined4 *)(this_ + 0x468)));
  param_1 = (CSpawnerThing *)0xbf800000;
  return FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(this_), bea_arg(&param_1), bea_arg(0), bea_arg(0), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e3010, ap_004e3010));
