// auto-ported from 00412650_FUN_00412650.c (FUN_00412650, 330 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_008553e8 GLOBAL_AT(undefined4*, 0x008553e8)
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef undefined4 (BEA_CDECL* FUN_0050f6d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0050f6d0_t> FUN_0050f6d0 = {(FUN_0050f6d0_t)0x0050f6d0};

static void BEA_THISCALL ap_00412650(void * this_)
{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined4 &uStack_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0xc);
  undefined4 &uStack_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x8);
  while(BEA_LOOP_GUARD(( true ))) {
    piVar5 = *(int **)this_;
    *(int **)((int)this_ + 8) = piVar5;
    if ((piVar5 == (int *)0x0) || (piVar5 = (int *)*piVar5, piVar5 == (int *)0x0)) break;
    FUN_004e5bd0(bea_arg(this_), bea_arg(piVar5));
    bea_vcall<uint32_t>(piVar5, 0x4, 1);
  }
  uStack_c = 0;
  uStack_8 = 0xffffffff;
  iVar8 = *(int *)(*(int *)((int)this_ + 0x18) + 0x4b0);
  puVar6 = *(undefined4 **)(iVar8 + 0x50);
  *(undefined4 **)(iVar8 + 0x58) = puVar6;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)*puVar6;
  }
  if (puVar6 == (undefined4 *)0x0) {
    *(undefined4 *)((int)this_ + 0x10) = 0;
    return;
  }
  do {
    pbVar2 = (byte *)*puVar6;
    if (pbVar2 != (byte *)0x0) {
      iVar8 = 0;
      puVar6 = (undefined4 *)*DAT_008553e8;
      DAT_008553e8[2] = puVar6;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = (undefined4 *)*puVar6;
      }
      while (BEA_LOOP_GUARD((puVar6 != (undefined4 *)0x0))) {
        pbVar7 = (byte *)*puVar6;
        pbVar3 = pbVar2;
        do {
          bVar1 = *pbVar3;
          bVar9 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_004126fa:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_004126ff;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar9 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_004126fa;
          pbVar3 = pbVar3 + 2;
          pbVar7 = pbVar7 + 2;
        } while (BEA_LOOP_GUARD((bVar1 != 0)));
        iVar4 = 0;
LAB_004126ff:
        if (iVar4 == 0) goto LAB_00412728;
        iVar8 = iVar8 + 1;
        puVar6 = *(undefined4 **)(DAT_008553e8[2] + 4);
        DAT_008553e8[2] = puVar6;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = (undefined4 *)*puVar6;
        }
      }
    }
    iVar8 = -1;
LAB_00412728:
    piVar5 = (int *)FUN_0050f6d0(bea_arg(iVar8), bea_arg(0xffffffff));
    if (piVar5 != (int *)0x0) {
      uStack_c = *(undefined4 *)((int)this_ + 0x18);
      bea_vcall<uint32_t>(piVar5, 0xc, &uStack_c);
      FUN_004e5b20(bea_arg(this_), bea_arg(piVar5));
    }
    iVar8 = *(int *)(*(int *)((int)this_ + 0x18) + 0x4b0);
    puVar6 = *(undefined4 **)(*(int *)(iVar8 + 0x58) + 4);
    *(undefined4 **)(iVar8 + 0x58) = puVar6;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)*puVar6;
    }
    if (puVar6 == (undefined4 *)0x0) {
      *(undefined4 *)((int)this_ + 0x10) = 0;
      return;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00412650, ap_00412650));
