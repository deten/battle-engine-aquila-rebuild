// auto-ported from 004e6200_vslot58.c (CSquad::vslot58, 944 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x790: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CSquad;
#define DAT_008553fc GLOBAL_AT(undefined4*, 0x008553fc)
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef undefined4 * (BEA_CDECL* FUN_0050df80_t)(int, ...);
static const bea_guard<FUN_0050df80_t> FUN_0050df80 = {(FUN_0050df80_t)0x0050df80};

static void BEA_THISCALL ap_004e6200(CSquad * this_, int param_1)
{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  bool bVar14;

  alignas(16) uint8_t bea_frame_[0x790] = {};   // the original stack frame (emulate_frame)
  int &local_784 = *reinterpret_cast<int *>(bea_frame_ + 0x790 - 0x784);
  undefined ** &local_780 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x790 - 0x780);
  undefined4 &local_77c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x77c);
  undefined4 &local_778 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x778);
  undefined4 &local_774 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x774);
  undefined4 &local_770 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x770);
  undefined4 (&local_76c)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x790 - 0x76c);
  undefined4 &local_73c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x73c);
  undefined4 &local_738 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x738);
  undefined4 &local_734 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x734);
  undefined4 &local_720 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x720);
  undefined4 &local_71c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x71c);
  undefined4 &local_6e0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x6e0);
  undefined4 &local_6dc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x6dc);
  undefined1 (&local_6d4)[84] = *reinterpret_cast<undefined1 (*)[84]>(bea_frame_ + 0x790 - 0x6d4);
  undefined1 (&local_680)[172] = *reinterpret_cast<undefined1 (*)[172]>(bea_frame_ + 0x790 - 0x680);
  undefined1 (&local_5d4)[84] = *reinterpret_cast<undefined1 (*)[84]>(bea_frame_ + 0x790 - 0x5d4);
  undefined1 (&auStack_580)[172] = *reinterpret_cast<undefined1 (*)[172]>(bea_frame_ + 0x790 - 0x580);
  undefined1 (&auStack_4d4)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x790 - 0x4d4);
  undefined4 &local_3d4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x3d4);
  undefined4 &local_3d0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x3d0);
  undefined4 &local_3c4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x3c4);
  undefined ** &ppuStack_3c0 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x790 - 0x3c0);
  undefined4 &uStack_3bc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x3bc);
  undefined4 &uStack_3b8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x3b8);
  undefined4 &uStack_3b4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x3b4);
  undefined4 &uStack_3b0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x3b0);
  undefined4 (&auStack_3ac)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x790 - 0x3ac);
  undefined4 &uStack_37c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x37c);
  undefined4 &uStack_378 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x378);
  undefined4 &uStack_374 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x374);
  undefined4 &uStack_360 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x360);
  undefined4 &uStack_35c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x35c);
  undefined4 &uStack_320 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x320);
  undefined4 &uStack_31c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x31c);
  undefined1 (&auStack_314)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x790 - 0x314);
  undefined1 (&auStack_214)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x790 - 0x214);
  undefined1 (&auStack_114)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x790 - 0x114);
  undefined4 &uStack_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x14);
  undefined4 &uStack_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x790 - 0x10);
  int &iStack_4 = *reinterpret_cast<int *>(bea_frame_ + 0x790 - 0x4);
  FUN_0048dcf0(bea_arg(&local_780));
  local_780 = ((void*)0x005dc1c0);
  local_3c4 = 0;
  local_77c = *(undefined4 *)(param_1 + 4);
  local_778 = *(undefined4 *)(param_1 + 8);
  local_774 = *(undefined4 *)(param_1 + 0xc);
  local_73c = *(undefined4 *)(param_1 + 0x44);
  local_770 = *(undefined4 *)(param_1 + 0x10);
  local_720 = *(undefined4 *)(param_1 + 0x60);
  local_738 = *(undefined4 *)(param_1 + 0x48);
  local_734 = *(undefined4 *)(param_1 + 0x4c);
  local_6e0 = *(undefined4 *)(param_1 + 0xa0);
  puVar12 = (undefined4 *)(param_1 + 0x14);
  puVar13 = local_76c;
  for (iVar9 = 0xc; BEA_LOOP_GUARD((iVar9 != 0)); iVar9 = iVar9 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  local_71c = *(undefined4 *)(param_1 + 100);
  local_6dc = *(undefined4 *)(param_1 + 0xa4);
  puVar10 = local_5d4;
  puVar4 = (undefined1 *)(param_1 + 0x1ac);
  do {
    puVar5 = puVar4 + 1;
    puVar10[-0x100] = puVar4[-0x100];
    *puVar10 = *puVar4;
    puVar5[(int)(local_6d4 + (0x53 - param_1))] = puVar4[0x100];
    puVar10 = puVar10 + 1;
    puVar4 = puVar5;
  } while (BEA_LOOP_GUARD(((int)(puVar5 + (-0x1ac - param_1)) < 0x100)));
  local_3d0 = *(undefined4 *)(param_1 + 0x3b0);
  local_3d4 = *(undefined4 *)(param_1 + 0x3ac);
  iVar9 = bea_vcall<uint32_t>(this_, 0x14c);
  if (((iVar9 == 0) && (*(int *)(this_ + 0x84) == 0)) && (*(int *)(param_1 + 0x3b0) == 0)) {
    local_6d4[0] = 0;
    local_5d4[0] = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xac) = 0;
    *(undefined1 *)(param_1 + 0x1ac) = 0;
  }
  local_784 = *(int *)(param_1 + 0x3bc);
  if (0 < local_784) {
    pbVar1 = (byte *)(param_1 + 0x3c0);
    do {
      if (pbVar1 != (byte *)0x0) {
        iVar9 = 0;
        piVar8 = (int *)*DAT_008553fc;
        DAT_008553fc[2] = (int)piVar8;
        if (piVar8 == (int *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *piVar8;
        }
        while (BEA_LOOP_GUARD((iVar7 != 0))) {
          pbVar11 = *(byte **)(iVar7 + 0xb0);
          pbVar6 = pbVar1;
          do {
            bVar2 = *pbVar6;
            bVar14 = bVar2 < *pbVar11;
            if (bVar2 != *pbVar11) {
LAB_004e63a0:
              iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
              goto LAB_004e63a5;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar6[1];
            bVar14 = bVar2 < pbVar11[1];
            if (bVar2 != pbVar11[1]) goto LAB_004e63a0;
            pbVar6 = pbVar6 + 2;
            pbVar11 = pbVar11 + 2;
          } while (BEA_LOOP_GUARD((bVar2 != 0)));
          iVar7 = 0;
LAB_004e63a5:
          if (iVar7 == 0) goto LAB_004e63ce;
          iVar9 = iVar9 + 1;
          piVar8 = *(int **)(DAT_008553fc[2] + 4);
          DAT_008553fc[2] = (int)piVar8;
          if (piVar8 == (int *)0x0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *piVar8;
          }
        }
      }
      iVar9 = -1;
LAB_004e63ce:
      piVar8 = (int *)FUN_0050df80(iVar9);
      if (piVar8 != (int *)0x0) {
        FUN_0048dcf0(bea_arg(&ppuStack_3c0));
        uStack_3bc = local_77c;
        uStack_3b8 = local_778;
        uStack_3b0 = local_770;
        uStack_3b4 = local_774;
        uStack_378 = local_738;
        ppuStack_3c0 = ((void*)0x005dc1c0);
        uStack_360 = local_720;
        uStack_37c = local_73c;
        puVar12 = local_76c;
        puVar13 = auStack_3ac;
        for (iVar9 = 0xc; BEA_LOOP_GUARD((iVar9 != 0)); iVar9 = iVar9 + -1) {
          *puVar13 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        }
        uStack_374 = local_734;
        uStack_35c = local_71c;
        uStack_320 = local_6e0;
        uStack_31c = local_6dc;
        puVar10 = auStack_114;
        iVar9 = 0xac;
        do {
          *(undefined1 *)((int)&ppuStack_3c0 + iVar9) = *(undefined1 *)((int)&local_780 + iVar9);
          puVar10[-0x100] = local_680[iVar9];
          *puVar10 = auStack_580[iVar9];
          puVar10 = puVar10 + 1;
          iVar7 = iVar9 + -0xab;
          iVar9 = iVar9 + 1;
        } while (BEA_LOOP_GUARD((iVar7 < 0x100)));
        uStack_14 = local_3d4;
        uStack_10 = local_3d0;
        if (pbVar1 != (byte *)0x0) {
          piVar3 = (int *)*DAT_008553fc;
          DAT_008553fc[2] = (int)piVar3;
          if (piVar3 == (int *)0x0) {
            iStack_4 = 0;
          }
          else {
            iStack_4 = *piVar3;
          }
          while (BEA_LOOP_GUARD((iStack_4 != 0))) {
            pbVar11 = *(byte **)(iStack_4 + 0xb0);
            pbVar6 = pbVar1;
            do {
              bVar2 = *pbVar6;
              bVar14 = bVar2 < *pbVar11;
              if (bVar2 != *pbVar11) {
LAB_004e6542:
                iVar9 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                goto LAB_004e6547;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar6[1];
              bVar14 = bVar2 < pbVar11[1];
              if (bVar2 != pbVar11[1]) goto LAB_004e6542;
              pbVar6 = pbVar6 + 2;
              pbVar11 = pbVar11 + 2;
            } while (BEA_LOOP_GUARD((bVar2 != 0)));
            iVar9 = 0;
LAB_004e6547:
            if (iVar9 == 0) goto LAB_004e656c;
            piVar3 = *(int **)(DAT_008553fc[2] + 4);
            DAT_008553fc[2] = (int)piVar3;
            if (piVar3 == (int *)0x0) {
              iStack_4 = 0;
            }
            else {
              iStack_4 = *piVar3;
            }
          }
        }
        iStack_4 = 0;
LAB_004e656c:
        bea_vcall<uint32_t>(piVar8, 0xe8, &ppuStack_3c0);
        bea_vcall<uint32_t>(piVar8, 0x4, 1);
      }
      local_784 = local_784 + -1;
    } while (BEA_LOOP_GUARD((local_784 != 0)));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e6200, ap_004e6200));
