// auto-ported from 004e37f0_FUN_004e37f0.c (FUN_004e37f0, 502 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_008553fc GLOBAL_AT(undefined4*, 0x008553fc)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef undefined4 (BEA_CDECL* FUN_0050f680_t)(uint32_t);
static const bea_guard<FUN_0050f680_t> FUN_0050f680 = {(FUN_0050f680_t)0x0050f680};

static void * BEA_THISCALL ap_004e37f0(void * this_, int param_1, undefined4 param_2)
{
  byte bVar1;
  byte *pbVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined ***)this_ = ((void*)0x005d92d4);
  *(undefined4 *)((int)this_ + 8) = 0;
  FUN_0048dcf0(bea_arg((undefined4 *)((int)this_ + 0x10)));
  *(undefined4 *)((int)this_ + 0x10) = ((void*)0x005dc1c0);
  *(undefined4 *)((int)this_ + 0x3cc) = 0;
  *(undefined ***)this_ = ((void*)0x005dee94);
  *(int *)((int)this_ + 0x3d0) = param_1;
  *(undefined4 *)((int)this_ + 0x3f0) = param_2;
  *(undefined4 *)((int)this_ + 0x3d8) = 0;
  *(undefined4 *)((int)this_ + 0x3e0) = 0;
  *(undefined4 *)((int)this_ + 0x3e4) = 1;
  *(undefined4 *)((int)this_ + 1000) = 0;
  pbVar2 = *(byte **)(param_1 + 4);
  if (pbVar2 != (byte *)0x0) {
    param_1 = 0;
    piVar3 = (int *)*DAT_008553fc;
    DAT_008553fc[2] = (int)piVar3;
    if (piVar3 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar3;
    }
    while (BEA_LOOP_GUARD((iVar5 != 0))) {
      pbVar7 = *(byte **)(iVar5 + 0xb0);
      pbVar4 = pbVar2;
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_004e38c3:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_004e38c8;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_004e38c3;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (BEA_LOOP_GUARD((bVar1 != 0)));
      iVar5 = 0;
LAB_004e38c8:
      if (iVar5 == 0) goto LAB_004e38f5;
      param_1 = param_1 + 1;
      piVar3 = *(int **)(DAT_008553fc[2] + 4);
      DAT_008553fc[2] = (int)piVar3;
      if (piVar3 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar3;
      }
    }
  }
  param_1 = -1;
LAB_004e38f5:
  *(int *)((int)this_ + 0x3dc) = param_1;
  *(undefined4 *)((int)this_ + 0x3d4) = 0;
  FUN_00401000(bea_arg((void *)((int)this_ + 8)), bea_arg(0));
  *(undefined4 *)((int)this_ + 0xc) = 0;
  *(undefined4 *)((int)this_ + 0x3ec) = 0;
  *(undefined4 *)((int)this_ + 0x3f4) = 1;
  pbVar2 = *(byte **)(*(int *)((int)this_ + 0x3d0) + 4);
  if (pbVar2 != (byte *)0x0) {
    piVar3 = (int *)*DAT_008553fc;
    DAT_008553fc[2] = (int)piVar3;
    if (piVar3 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar3;
    }
    while (BEA_LOOP_GUARD((iVar5 != 0))) {
      pbVar7 = *(byte **)(iVar5 + 0xb0);
      pbVar4 = pbVar2;
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_004e3981:
          iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_004e3986;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_004e3981;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (BEA_LOOP_GUARD((bVar1 != 0)));
      iVar6 = 0;
LAB_004e3986:
      if (iVar6 == 0) goto LAB_004e39ab;
      piVar3 = *(int **)(DAT_008553fc[2] + 4);
      DAT_008553fc[2] = (int)piVar3;
      if (piVar3 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar3;
      }
    }
  }
  iVar5 = 0;
LAB_004e39ab:
  iVar5 = FUN_0050f680(bea_arg(*(undefined4 *)(iVar5 + 0xe0)));
  if (iVar5 == 0) {
    *(undefined4 *)(*(int *)((int)this_ + 0x3d0) + 0x10) = 1;
  }
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e37f0, ap_004e37f0));
