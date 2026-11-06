// auto-ported from 004d7e60_vslot14.c (CRocket::vslot14, 474 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x3e0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CRocket;
#define DAT_008553f8 GLOBAL_AT(undefined4*, 0x008553f8)
#define s_Big_Rocket_Explosion_00631cb4 ((char*)0x00631cb4)
typedef undefined4 (BEA_THISCALL* CComplexThing__vslot14_t)(uint32_t);
static const bea_guard<CComplexThing__vslot14_t> CComplexThing__vslot14 = {(CComplexThing__vslot14_t)0x004f43d0};
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef undefined4 * (BEA_CDECL* FUN_0050ff10_t)(uint32_t);
static const bea_guard<FUN_0050ff10_t> FUN_0050ff10 = {(FUN_0050ff10_t)0x0050ff10};

static CRocket * BEA_THISCALL ap_004d7e60(CRocket * this_)
{
  byte bVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  CRocket *pCVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;

  alignas(16) uint8_t bea_frame_[0x3e0] = {};   // the original stack frame (emulate_frame)
  undefined ** &local_3d8 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x3e0 - 0x3d8);
  undefined4 &local_3d4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3d4);
  undefined4 &local_3d0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3d0);
  undefined4 &local_3cc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3cc);
  undefined4 &local_3c8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3c8);
  undefined4 &local_338 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x338);
  int &local_1c = *reinterpret_cast<int *>(bea_frame_ + 0x3e0 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x18);
  CRocket * &local_14 = *reinterpret_cast<CRocket * *>(bea_frame_ + 0x3e0 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x4);
  pCVar6 = (CRocket *)(uint)(byte)(this_[0x2c]);
  if (((byte)this_[0x2c] & 1) == 0) {
    CComplexThing__vslot14(bea_arg((CComplexThing *)this_));
    iVar8 = 0;
    piVar2 = (int *)*DAT_008553f8;
    DAT_008553f8[2] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar2;
    }
    while (BEA_LOOP_GUARD((iVar4 != 0))) {
      pbVar7 = *(byte **)(iVar4 + 0x30);
      pcVar3 = s_Big_Rocket_Explosion_00631cb4;
      do {
        bVar1 = *pcVar3;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_004d7ed0:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_004d7ed5;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_004d7ed0;
        pcVar3 = pcVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (BEA_LOOP_GUARD((bVar1 != 0)));
      iVar4 = 0;
LAB_004d7ed5:
      if (iVar4 == 0) goto LAB_004d7efe;
      iVar8 = iVar8 + 1;
      piVar2 = *(int **)(DAT_008553f8[2] + 4);
      DAT_008553f8[2] = (int)piVar2;
      if (piVar2 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar2;
      }
    }
    iVar8 = -1;
LAB_004d7efe:
    piVar5 = (int *)FUN_0050ff10(bea_arg(iVar8));
    FUN_0048dcf0(bea_arg(&local_3d8));
    local_3d8 = ((void*)0x005d8c80);
    local_c = 0;
    local_4 = 0;
    local_8 = 0;
    piVar2 = (int *)*DAT_008553f8;
    DAT_008553f8[2] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      local_1c = 0;
    }
    else {
      local_1c = *piVar2;
    }
    while (BEA_LOOP_GUARD((local_1c != 0))) {
      pbVar7 = *(byte **)(local_1c + 0x30);
      pcVar3 = s_Big_Rocket_Explosion_00631cb4;
      do {
        bVar1 = *pcVar3;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_004d7f9f:
          iVar8 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_004d7fa4;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_004d7f9f;
        pcVar3 = pcVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (BEA_LOOP_GUARD((bVar1 != 0)));
      iVar8 = 0;
LAB_004d7fa4:
      if (iVar8 == 0) goto LAB_004d7fcd;
      piVar2 = *(int **)(DAT_008553f8[2] + 4);
      DAT_008553f8[2] = (int)piVar2;
      if (piVar2 == (int *)0x0) {
        local_1c = 0;
      }
      else {
        local_1c = *piVar2;
      }
    }
    local_1c = 0;
LAB_004d7fcd:
    local_18 = 0;
    local_338 = 2;
    local_10 = 1;
    pCVar6 = this_;
    if (piVar5 != (int *)0x0) {
      local_3d4 = *(undefined4 *)(this_ + 0x1c);
      local_3d0 = *(undefined4 *)(this_ + 0x20);
      local_3cc = *(undefined4 *)(this_ + 0x24);
      local_3c8 = *(undefined4 *)(this_ + 0x28);
      local_14 = this_;
      pCVar6 = (CRocket *)bea_vcall<uint32_t>(piVar5, 0x24, &local_3d8);
    }
  }
  return (CRocket *)(pCVar6);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d7e60, ap_004d7e60));
