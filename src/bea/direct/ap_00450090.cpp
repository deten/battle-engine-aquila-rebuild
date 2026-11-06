// auto-ported from 00450090_vslot3.c (CFEPBEConfig::vslot3, 743 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CFEPBEConfig;
#define DAT_0089da34 GLOBAL_AT(int, 0x0089da34)
#define DAT_0089d94c GLOBAL_AT(int, 0x0089d94c)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_008a9bb8 GLOBAL_AT(int, 0x008a9bb8)
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
#define _DAT_006602a8 GLOBAL_AT(undefined4*, 0x006602a8)
#define DAT_006602a0 GLOBAL_AT(undefined4*, 0x006602a0)
#define DAT_008a9cc4 GLOBAL_AT(char, 0x008a9cc4)
#define _DAT_008a956c GLOBAL_AT(int, 0x008a956c)
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef void* (BEA_THISCALL* FUN_00406d30_t)(uint32_t);
static const bea_guard<FUN_00406d30_t> FUN_00406d30 = {(FUN_00406d30_t)0x00406d30};
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef char (BEA_CDECL* FUN_00521650_t)(void);
static const bea_guard<FUN_00521650_t> FUN_00521650 = {(FUN_00521650_t)0x00521650};

static void BEA_THISCALL ap_00450090(CFEPBEConfig * this_, undefined4 param_1, undefined4 param_2)
{
  char cVar1;
  byte bVar2;
  int *piVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  bool bVar13;
  float10 fVar14;
  
  switch(param_1) {
  case 0x2a:
    piVar3 = (int *)FUN_00406d20(bea_arg(&DAT_0089da34));
    if (piVar3 != (int *)0x0) {
      while (BEA_LOOP_GUARD((DAT_0089d94c != *piVar3))) {
        piVar3 = (int *)FUN_00406d30(bea_arg(&DAT_0089da34));
        if (piVar3 == (int *)0x0) {
          return;
        }
      }
      if ((piVar3 != (int *)0x0) && (1 < piVar3[8])) {
        *(int *)(this_ + 0x10) = *(int *)(this_ + 0x10) + 1;
        piVar3 = (int *)FUN_00406d20(bea_arg(&DAT_0089da34));
        while (BEA_LOOP_GUARD((piVar3 != (int *)0x0))) {
          if (DAT_0089d94c == *piVar3) {
            if (piVar3 != (int *)0x0) {
              iVar6 = piVar3[8];
              goto LAB_0045033d;
            }
            break;
          }
          piVar3 = (int *)FUN_00406d30(bea_arg(&DAT_0089da34));
        }
        iVar6 = 0;
LAB_0045033d:
        if (iVar6 + -1 < *(int *)(this_ + 0x10)) {
          *(undefined4 *)(this_ + 0x10) = 0;
        }
        FUN_00468770(0);
        *(undefined4 *)(this_ + 0x14) = 0x3f800000;
        fVar14 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
        *(float *)(this_ + 0x1c) = (float)fVar14;
      }
    }
    break;
  case 0x2b:
    piVar3 = (int *)FUN_00406d20(bea_arg(&DAT_0089da34));
    if (piVar3 != (int *)0x0) {
      while (BEA_LOOP_GUARD((DAT_0089d94c != *piVar3))) {
        piVar3 = (int *)FUN_00406d30(bea_arg(&DAT_0089da34));
        if (piVar3 == (int *)0x0) {
          return;
        }
      }
      if ((piVar3 != (int *)0x0) && (1 < piVar3[8])) {
        iVar6 = *(int *)(this_ + 0x10);
        *(int *)(this_ + 0x10) = iVar6 + -1;
        if (iVar6 + -1 < 0) {
          piVar3 = (int *)FUN_00406d20(bea_arg(&DAT_0089da34));
          while (BEA_LOOP_GUARD((piVar3 != (int *)0x0))) {
            if (DAT_0089d94c == *piVar3) {
              if (piVar3 != (int *)0x0) {
                iVar6 = piVar3[8];
                goto LAB_004502a3;
              }
              break;
            }
            piVar3 = (int *)FUN_00406d30(bea_arg(&DAT_0089da34));
          }
          iVar6 = 0;
LAB_004502a3:
          *(int *)(this_ + 0x10) = iVar6 + -1;
        }
        FUN_00468770(0);
        *(undefined4 *)(this_ + 0x18) = 0x3f800000;
        fVar14 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
        *(float *)(this_ + 0x1c) = (float)fVar14;
        return;
      }
    }
    break;
  case 0x2c:
    DAT_008a9bb8 = *(undefined4 *)(this_ + 0x10);
    iVar6 = *(int *)(this_ + 0x10);
    piVar3 = (int *)FUN_00406d20(bea_arg(&DAT_0089da34));
    while (BEA_LOOP_GUARD((piVar3 != (int *)0x0))) {
      if (DAT_0089d94c == *piVar3) {
        if (piVar3 != (int *)0x0) {
          iVar11 = 0;
          puVar4 = (undefined4 *)FUN_00406d20(bea_arg(piVar3 + 5));
          if (puVar4 != (undefined4 *)0x0) goto LAB_00450122;
        }
        break;
      }
      piVar3 = (int *)FUN_00406d30(bea_arg(&DAT_0089da34));
    }
    goto LAB_004501e2;
  case 0x2e:
    FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(5), bea_arg(0x19));
    FUN_00468770(2);
    return;
  }
  return;
  while(BEA_LOOP_GUARD(( true ))) {
    iVar11 = iVar11 + 1;
    puVar4 = *(undefined4 **)(piVar3[7] + 4);
    piVar3[7] = (int)puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)*puVar4;
    }
    if (puVar4 == (undefined4 *)0x0) break;
LAB_00450122:
    if (iVar11 == iVar6) {
      if ((byte *)*puVar4 != (byte *)0x0) {
        _DAT_006602a8 = DAT_006602a0;
        if (DAT_006602a0 == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *DAT_006602a0;
        }
        if (iVar6 != 0) goto LAB_0045016a;
      }
      break;
    }
  }
  goto LAB_004501e2;
  while(BEA_LOOP_GUARD(( true ))) {
    _DAT_006602a8 = (int *)_DAT_006602a8[1];
    if (_DAT_006602a8 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *_DAT_006602a8;
    }
    if (iVar6 == 0) break;
LAB_0045016a:
    pbVar5 = *(byte **)(iVar6 + 0xa8);
    pbVar9 = (byte *)*puVar4;
    do {
      bVar2 = *pbVar5;
      bVar13 = bVar2 < *pbVar9;
      if (bVar2 != *pbVar9) {
LAB_00450196:
        iVar11 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        goto LAB_0045019b;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar13 = bVar2 < pbVar9[1];
      if (bVar2 != pbVar9[1]) goto LAB_00450196;
      pbVar5 = pbVar5 + 2;
      pbVar9 = pbVar9 + 2;
    } while (BEA_LOOP_GUARD((bVar2 != 0)));
    iVar11 = 0;
LAB_0045019b:
    if (iVar11 == 0) {
      if (iVar6 != 0) {
        uVar7 = 0xffffffff;
        pcVar10 = *(char **)(iVar6 + 0x6c);
        goto code_r0x004501c7;
      }
      break;
    }
  }
  goto LAB_004501e2;
  while(BEA_LOOP_GUARD(( true ))) {
    uVar7 = uVar7 - 1;
    pcVar12 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar12;
    if (cVar1 == '\0') break;
code_r0x004501c7:
    pcVar12 = pcVar10;
    if (uVar7 == 0) break;
  }
  uVar7 = ~uVar7;
  pcVar10 = pcVar12 + -uVar7;
  pcVar12 = (char *)&DAT_008a9cc4;
  for (uVar8 = uVar7 >> 2; BEA_LOOP_GUARD((uVar8 != 0)); uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar7 = uVar7 & 3; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
    *pcVar12 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar12 = pcVar12 + 1;
  }
LAB_004501e2:
  if ((0xe6 < DAT_0089d94c) && (iVar6 = FUN_00521650(), iVar6 != 0)) {
    FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(4), bea_arg(0x19));
    FUN_00468770(1);
    return;
  }
  _DAT_008a956c = DAT_0089d94c;
  FUN_00468770(1);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00450090, ap_00450090));
