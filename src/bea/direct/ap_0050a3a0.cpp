// auto-ported from 0050a3a0_vslot9.c (CWingmanStart::vslot9, 933 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CWingmanStart;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_008a9bc0 GLOBAL_AT(int, 0x008a9bc0)
#define DAT_008553fc GLOBAL_AT(undefined4*, 0x008553fc)
#define s_Jason_Fighter_0063d274 ((char*)0x0063d274)
#define s_Tara_Fighter_00633b98 ((char*)0x00633b98)
#define s_Billy_Fighter_00633b88 ((char*)0x00633b88)
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CComplexThing__vslot9_t> CComplexThing__vslot9 = {(CComplexThing__vslot9_t)0x004f3fd0};
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef void* (BEA_THISCALL* FUN_00406d30_t)(uint32_t);
static const bea_guard<FUN_00406d30_t> FUN_00406d30 = {(FUN_00406d30_t)0x00406d30};
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef int (BEA_CDECL* FUN_004e36c0_t)(uint32_t);
static const bea_guard<FUN_004e36c0_t> FUN_004e36c0 = {(FUN_004e36c0_t)0x004e36c0};
typedef undefined4 (BEA_CDECL* FUN_0050d9e0_t)(uint32_t);
static const bea_guard<FUN_0050d9e0_t> FUN_0050d9e0 = {(FUN_0050d9e0_t)0x0050d9e0};
typedef undefined4 * (BEA_CDECL* FUN_0050df80_t)(int, ...);
static const bea_guard<FUN_0050df80_t> FUN_0050df80 = {(FUN_0050df80_t)0x0050df80};

static void BEA_THISCALL ap_0050a3a0(CWingmanStart * this_, int param_1)
{
  undefined4 *puVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  float10 fVar10;
  
  puVar1 = (undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  this_[0x2c] = (CWingmanStart)((byte)this_[0x2c] & 0xfd);
  fVar10 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(puVar1));
  if (fVar10 < (float10)*(float *)(param_1 + 0xc)) {
    fVar10 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(puVar1));
    *(float *)(param_1 + 0xc) = (float)fVar10;
  }
  CComplexThing__vslot9(bea_arg((CComplexThing *)this_), bea_arg(param_1));
  *(undefined4 *)(this_ + 0x84) = *puVar1;
  *(undefined4 *)(this_ + 0x88) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this_ + 0x8c) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this_ + 0x90) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this_ + 0xc4) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this_ + 200) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this_ + 0xcc) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this_ + 0x120) = *(undefined4 *)(param_1 + 0xa0);
  if (DAT_008a9bc0 == 0) {
    uVar6 = FUN_004e36c0(bea_arg(s_Tara_Fighter_00633b98));
    uVar6 = FUN_0050df80(uVar6);
    FUN_00401000(bea_arg(this_ + 0x7c), bea_arg(uVar6));
    piVar3 = (int *)*DAT_008553fc;
    DAT_008553fc[2] = (int)piVar3;
    if (piVar3 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *piVar3;
    }
    while (BEA_LOOP_GUARD((iVar8 != 0))) {
      pbVar7 = *(byte **)(iVar8 + 0xb0);
      pcVar5 = s_Tara_Fighter_00633b98;
      do {
        bVar2 = *pcVar5;
        bVar9 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_0050a6ea:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_0050a6ef;
        }
        if (bVar2 == 0) break;
        bVar2 = pcVar5[1];
        bVar9 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_0050a6ea;
        pcVar5 = pcVar5 + 2;
        pbVar7 = pbVar7 + 2;
      } while (BEA_LOOP_GUARD((bVar2 != 0)));
      iVar4 = 0;
LAB_0050a6ef:
      if (iVar4 == 0) goto LAB_0050a714;
      piVar3 = *(int **)(DAT_008553fc[2] + 4);
      DAT_008553fc[2] = (int)piVar3;
      if (piVar3 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *piVar3;
      }
    }
    iVar8 = 0;
LAB_0050a714:
    *(int *)(this_ + 0x43c) = iVar8;
    pcVar5 = s_Tara_Fighter_00633b98;
  }
  else if (DAT_008a9bc0 == 1) {
    iVar8 = 0;
    iVar4 = FUN_00406d20(bea_arg(DAT_008553fc));
    while (BEA_LOOP_GUARD((iVar4 != 0))) {
      pbVar7 = *(byte **)(iVar4 + 0xb0);
      pcVar5 = s_Billy_Fighter_00633b88;
      do {
        bVar2 = *pcVar5;
        bVar9 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_0050a5a6:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_0050a5ab;
        }
        if (bVar2 == 0) break;
        bVar2 = pcVar5[1];
        bVar9 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_0050a5a6;
        pcVar5 = pcVar5 + 2;
        pbVar7 = pbVar7 + 2;
      } while (BEA_LOOP_GUARD((bVar2 != 0)));
      iVar4 = 0;
LAB_0050a5ab:
      if (iVar4 == 0) goto LAB_0050a5c2;
      iVar8 = iVar8 + 1;
      iVar4 = FUN_00406d30(bea_arg(DAT_008553fc));
    }
    iVar8 = -1;
LAB_0050a5c2:
    uVar6 = FUN_0050df80(iVar8);
    FUN_00401000(bea_arg(this_ + 0x7c), bea_arg(uVar6));
    piVar3 = (int *)*DAT_008553fc;
    DAT_008553fc[2] = (int)piVar3;
    if (piVar3 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *piVar3;
    }
    while (BEA_LOOP_GUARD((iVar8 != 0))) {
      pbVar7 = *(byte **)(iVar8 + 0xb0);
      pcVar5 = s_Billy_Fighter_00633b88;
      do {
        bVar2 = *pcVar5;
        bVar9 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_0050a62d:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_0050a632;
        }
        if (bVar2 == 0) break;
        bVar2 = pcVar5[1];
        bVar9 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_0050a62d;
        pcVar5 = pcVar5 + 2;
        pbVar7 = pbVar7 + 2;
      } while (BEA_LOOP_GUARD((bVar2 != 0)));
      iVar4 = 0;
LAB_0050a632:
      if (iVar4 == 0) {
        pcVar5 = s_Billy_Fighter_00633b88;
        *(int *)(this_ + 0x43c) = iVar8;
        goto LAB_0050a71f;
      }
      piVar3 = *(int **)(DAT_008553fc[2] + 4);
      DAT_008553fc[2] = (int)piVar3;
      if (piVar3 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *piVar3;
      }
    }
    pcVar5 = s_Billy_Fighter_00633b88;
    *(undefined4 *)(this_ + 0x43c) = 0;
  }
  else {
    iVar8 = 0;
    iVar4 = FUN_00406d20(bea_arg(DAT_008553fc));
    while (BEA_LOOP_GUARD((iVar4 != 0))) {
      pbVar7 = *(byte **)(iVar4 + 0xb0);
      pcVar5 = s_Jason_Fighter_0063d274;
      do {
        bVar2 = *pcVar5;
        bVar9 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_0050a48a:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_0050a48f;
        }
        if (bVar2 == 0) break;
        bVar2 = pcVar5[1];
        bVar9 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_0050a48a;
        pcVar5 = pcVar5 + 2;
        pbVar7 = pbVar7 + 2;
      } while (BEA_LOOP_GUARD((bVar2 != 0)));
      iVar4 = 0;
LAB_0050a48f:
      if (iVar4 == 0) goto LAB_0050a4a6;
      iVar8 = iVar8 + 1;
      iVar4 = FUN_00406d30(bea_arg(DAT_008553fc));
    }
    iVar8 = -1;
LAB_0050a4a6:
    uVar6 = FUN_0050df80(iVar8);
    FUN_00401000(bea_arg(this_ + 0x7c), bea_arg(uVar6));
    piVar3 = (int *)*DAT_008553fc;
    DAT_008553fc[2] = (int)piVar3;
    if (piVar3 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *piVar3;
    }
    while (BEA_LOOP_GUARD((iVar8 != 0))) {
      pbVar7 = *(byte **)(iVar8 + 0xb0);
      pcVar5 = s_Jason_Fighter_0063d274;
      do {
        bVar2 = *pcVar5;
        bVar9 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_0050a511:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_0050a516;
        }
        if (bVar2 == 0) break;
        bVar2 = pcVar5[1];
        bVar9 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_0050a511;
        pcVar5 = pcVar5 + 2;
        pbVar7 = pbVar7 + 2;
      } while (BEA_LOOP_GUARD((bVar2 != 0)));
      iVar4 = 0;
LAB_0050a516:
      if (iVar4 == 0) {
        pcVar5 = s_Jason_Fighter_0063d274;
        *(int *)(this_ + 0x43c) = iVar8;
        goto LAB_0050a71f;
      }
      piVar3 = *(int **)(DAT_008553fc[2] + 4);
      DAT_008553fc[2] = (int)piVar3;
      if (piVar3 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *piVar3;
      }
    }
    pcVar5 = s_Jason_Fighter_0063d274;
    *(undefined4 *)(this_ + 0x43c) = 0;
  }
LAB_0050a71f:
  FUN_0050d9e0(bea_arg(pcVar5));
  if (*(int **)(this_ + 0x7c) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)(this_ + 0x7c), 0x24, this_ + 0x80);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050a3a0, ap_0050a3a0));
