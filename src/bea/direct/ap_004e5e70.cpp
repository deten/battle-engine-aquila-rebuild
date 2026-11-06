// auto-ported from 004e5e70_vslot9.c (CSquad::vslot9, 901 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x7a0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CInitThing;
typedef char CSquad;
#define DAT_008553fc GLOBAL_AT(undefined4*, 0x008553fc)
#define DAT_008550a0 GLOBAL_AT(int, 0x008550a0)
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CComplexThing__vslot9_t> CComplexThing__vslot9 = {(CComplexThing__vslot9_t)0x004f3fd0};
typedef CInitThing * (BEA_THISCALL* CInitThing__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CInitThing__vslot0_t> CInitThing__vslot0 = {(CInitThing__vslot0_t)0x0040e1b0};
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef void* (BEA_THISCALL* FUN_00406d30_t)(uint32_t);
static const bea_guard<FUN_00406d30_t> FUN_00406d30 = {(FUN_00406d30_t)0x00406d30};
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef undefined4 * (BEA_CDECL* FUN_0050df80_t)(int, ...);
static const bea_guard<FUN_0050df80_t> FUN_0050df80 = {(FUN_0050df80_t)0x0050df80};

static uint32_t BEA_THISCALL ap_004e5e70(CSquad * this_, int param_1)
{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int *piVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  bool bVar13;
  alignas(16) uint8_t bea_frame_[0x7a0] = {};   // the original stack frame (emulate_frame)
  int &local_798 = *reinterpret_cast<int *>(bea_frame_ + 0x7a0 - 0x798);
  undefined1 (&auStack_790)[8] = *reinterpret_cast<undefined1 (*)[8]>(bea_frame_ + 0x7a0 - 0x790);
  int &iStack_788 = *reinterpret_cast<int *>(bea_frame_ + 0x7a0 - 0x788);
  undefined ** &local_780 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x7a0 - 0x780);
  undefined4 &local_77c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x7a0 - 0x77c);
  undefined4 &local_778 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x7a0 - 0x778);
  undefined4 &local_774 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x7a0 - 0x774);
  undefined4 &local_770 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x7a0 - 0x770);
  undefined4 (&local_76c)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x7a0 - 0x76c);
  undefined4 &local_73c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x7a0 - 0x73c);
  undefined4 &local_738 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x7a0 - 0x738);
  undefined4 &local_734 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x7a0 - 0x734);
  undefined4 &local_720 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x7a0 - 0x720);
  undefined4 &local_71c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x7a0 - 0x71c);
  undefined4 &local_6e0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x7a0 - 0x6e0);
  undefined4 &local_6dc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x7a0 - 0x6dc);
  undefined1 (&local_6d4)[84] = *reinterpret_cast<undefined1 (*)[84]>(bea_frame_ + 0x7a0 - 0x6d4);
  undefined1 (&local_680)[172] = *reinterpret_cast<undefined1 (*)[172]>(bea_frame_ + 0x7a0 - 0x680);
  undefined1 (&local_5d4)[512] = *reinterpret_cast<undefined1 (*)[512]>(bea_frame_ + 0x7a0 - 0x5d4);
  undefined4 &local_3d4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x7a0 - 0x3d4);
  undefined4 &local_3d0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x7a0 - 0x3d0);
  undefined4 &local_3c4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x7a0 - 0x3c4);
  undefined ** (&appuStack_3c0)[239] = *reinterpret_cast<undefined ** (*)[239]>(bea_frame_ + 0x7a0 - 0x3c0);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x7a0 - 0x4);
  *(undefined4 *)(this_ + 0x88) = 0;
  *(undefined4 *)(this_ + 0x9c) = *(undefined4 *)(param_1 + 0x4c0);
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  this_[0x2c] = (CSquad)((byte)this_[0x2c] & 0xfd);
  *(undefined4 *)(this_ + 0x7c) = *(undefined4 *)(param_1 + 0xa0);
  if (param_1 != -0x3c0) {
    piVar8 = (int *)*DAT_008553fc;
    DAT_008553fc[2] = (int)piVar8;
    if (piVar8 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar8;
    }
    while (BEA_LOOP_GUARD((iVar4 != 0))) {
      pbVar10 = *(byte **)(iVar4 + 0xb0);
      pbVar2 = (byte *)(param_1 + 0x3c0);
      do {
        bVar1 = *pbVar2;
        bVar13 = bVar1 < *pbVar10;
        if (bVar1 != *pbVar10) {
LAB_004e5f06:
          iVar3 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
          goto LAB_004e5f0b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar13 = bVar1 < pbVar10[1];
        if (bVar1 != pbVar10[1]) goto LAB_004e5f06;
        pbVar2 = pbVar2 + 2;
        pbVar10 = pbVar10 + 2;
      } while (BEA_LOOP_GUARD((bVar1 != 0)));
      iVar3 = 0;
LAB_004e5f0b:
      if (iVar3 == 0) goto LAB_004e5f34;
      piVar8 = *(int **)(DAT_008553fc[2] + 4);
      DAT_008553fc[2] = (int)piVar8;
      if (piVar8 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar8;
      }
    }
  }
  iVar4 = 0;
LAB_004e5f34:
  *(int *)(this_ + 0xa0) = iVar4;
  *(undefined4 *)(this_ + 0x1c) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this_ + 0x20) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this_ + 0x24) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this_ + 0x28) = *(undefined4 *)(param_1 + 0x10);
  FUN_0048dcf0(bea_arg(&local_780));
  local_77c = *(undefined4 *)(param_1 + 4);
  local_774 = *(undefined4 *)(param_1 + 0xc);
  local_778 = *(undefined4 *)(param_1 + 8);
  local_770 = *(undefined4 *)(param_1 + 0x10);
  local_73c = *(undefined4 *)(param_1 + 0x44);
  local_720 = *(undefined4 *)(param_1 + 0x60);
  local_738 = *(undefined4 *)(param_1 + 0x48);
  local_734 = *(undefined4 *)(param_1 + 0x4c);
  local_780 = ((void*)0x005dc1c0);
  local_3c4 = 0;
  local_6e0 = *(undefined4 *)(param_1 + 0xa0);
  puVar11 = (undefined4 *)(param_1 + 0x14);
  puVar12 = local_76c;
  for (iVar4 = 0xc; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = iVar4 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  local_71c = *(undefined4 *)(param_1 + 100);
  local_6dc = *(undefined4 *)(param_1 + 0xa4);
  puVar9 = local_5d4;
  puVar5 = (undefined1 *)(param_1 + 0x1ac);
  do {
    puVar6 = puVar5 + 1;
    puVar9[-0x100] = puVar5[-0x100];
    *puVar9 = *puVar5;
    puVar6[(int)(local_6d4 + (0x53 - param_1))] = puVar5[0x100];
    puVar9 = puVar9 + 1;
    puVar5 = puVar6;
  } while (BEA_LOOP_GUARD(((int)(puVar6 + (-0x1ac - param_1)) < 0x100)));
  local_3d0 = *(undefined4 *)(param_1 + 0x3b0);
  local_3d4 = *(undefined4 *)(param_1 + 0x3ac);
  iVar4 = bea_vcall<uint32_t>(this_, 0x14c);
  if (((iVar4 == 0) && (*(int *)(this_ + 0x84) == 0)) && (*(int *)(param_1 + 0x3b0) == 0)) {
    local_6d4[0] = 0;
    local_5d4[0] = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xac) = 0;
    *(undefined1 *)(param_1 + 0x1ac) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x3bc);
  local_798 = 0;
  if (0 < iVar4) {
    do {
      if (param_1 != -0x3c0) {
        iVar3 = 0;
        iVar7 = FUN_00406d20(bea_arg(DAT_008553fc));
        while (BEA_LOOP_GUARD((iVar7 != 0))) {
          pbVar10 = *(byte **)(iVar7 + 0xb0);
          pbVar2 = (byte *)(param_1 + 0x3c0);
          do {
            bVar1 = *pbVar2;
            bVar13 = bVar1 < *pbVar10;
            if (bVar1 != *pbVar10) {
LAB_004e60ef:
              iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_004e60f4;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar13 = bVar1 < pbVar10[1];
            if (bVar1 != pbVar10[1]) goto LAB_004e60ef;
            pbVar2 = pbVar2 + 2;
            pbVar10 = pbVar10 + 2;
          } while (BEA_LOOP_GUARD((bVar1 != 0)));
          iVar7 = 0;
LAB_004e60f4:
          if (iVar7 == 0) goto LAB_004e610f;
          iVar3 = iVar3 + 1;
          iVar7 = FUN_00406d30(bea_arg(DAT_008553fc));
        }
      }
      iVar3 = -1;
LAB_004e610f:
      piVar8 = (int *)FUN_0050df80(iVar3);
      if (piVar8 != (int *)0x0) {
        FUN_0048dcf0(bea_arg(appuStack_3c0));
        appuStack_3c0[0] = ((void*)0x005dc1c0);
        uStack_4 = 0;
        CInitThing__vslot0(bea_arg((CInitThing *)appuStack_3c0), bea_arg(&local_780));
        uStack_4 = *(undefined4 *)(this_ + 0xa0);
        bea_vcall<uint32_t>(piVar8, 0x24, appuStack_3c0);
        bea_vcall<uint32_t>(this_, 0x10c, auStack_790,piVar8,local_798,*(undefined4 *)(param_1 + 0x3bc));
        iStack_788 = piVar8[9];
        bea_vcall<uint32_t>(piVar8, 0x50, auStack_790);
      }
      local_798 = local_798 + 1;
    } while (BEA_LOOP_GUARD((local_798 < iVar4)));
  }
  CComplexThing__vslot9(bea_arg((CComplexThing *)this_), bea_arg(param_1));
  *(undefined4 *)(this_ + 0x8c) = *(undefined4 *)(this_ + 0x1c);
  *(undefined4 *)(this_ + 0x90) = *(undefined4 *)(this_ + 0x20);
  *(undefined4 *)(this_ + 0x94) = *(undefined4 *)(this_ + 0x24);
  *(undefined4 *)(this_ + 0x98) = *(undefined4 *)(this_ + 0x28);
  return FUN_004e5b20(bea_arg(&DAT_008550a0), bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e5e70, ap_004e5e70));
