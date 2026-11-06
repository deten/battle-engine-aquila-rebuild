// auto-ported from 0044e300_FUN_0044e300.c (FUN_0044e300, 468 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x3f0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
#define DAT_008553f8 GLOBAL_AT(undefined4*, 0x008553f8)
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef int (BEA_THISCALL* FUN_004b24d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b24d0_t> FUN_004b24d0 = {(FUN_004b24d0_t)0x004b24d0};
typedef undefined4 * (BEA_CDECL* FUN_0050ff10_t)(uint32_t);
static const bea_guard<FUN_0050ff10_t> FUN_0050ff10 = {(FUN_0050ff10_t)0x0050ff10};

static void BEA_THISCALL ap_0044e300(void * this_)
{
  void *this_00;
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  float10 fVar7;

  alignas(16) uint8_t bea_frame_[0x3f0] = {};   // the original stack frame (emulate_frame)
  undefined1 (&auStack_3ec)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x3f0 - 0x3ec);
  undefined1 (&auStack_3e8)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x3f0 - 0x3e8);
  undefined ** &local_3d8 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x3f0 - 0x3d8);
  undefined4 &uStack_3d4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0x3d4);
  undefined4 &uStack_3d0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0x3d0);
  float &fStack_3cc = *reinterpret_cast<float *>(bea_frame_ + 0x3f0 - 0x3cc);
  undefined4 &uStack_3c8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0x3c8);
  undefined4 &uStack_368 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0x368);
  undefined4 &uStack_338 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0x338);
  int &local_1c = *reinterpret_cast<int *>(bea_frame_ + 0x3f0 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0x18);
  void * &local_14 = *reinterpret_cast<void * *>(bea_frame_ + 0x3f0 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0x4);
  if (*(int *)((int)this_ + 0x164) != 0) {
    FUN_0048dcf0(bea_arg(&local_3d8));
    local_3d8 = ((void*)0x005d8c80);
    local_1c = 0;
    local_18 = 0;
    local_14 = (void *)0x0;
    local_10 = 0;
    local_c = 0;
    local_4 = 0;
    local_8 = 0;
    fVar7 = bea_fcast<float10>(bea_vcall<float10>((int)this_ + 8, 0x18));
    iVar2 = bea_vcall<uint32_t>((int)this_ + 8, 0x1c);
    iVar3 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x30), 0x24);
    this_00 = (void *)**(undefined4 **)(iVar3 + 0x160);
    if (iVar2 < 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = bea_vcall<uint32_t>((int)this_ + 8, 0x70);
      uVar4 = FUN_004b24d0(bea_arg(this_00), bea_arg(bea_fcast<float>(fVar7)), bea_arg(iVar2), bea_arg(auStack_3ec), bea_arg(uVar4));
    }
    if (*(int **)((int)this_ + 0x30) == (int *)0x0) {
      puVar5 = (undefined4 *)((int)this_ + 0x1c);
    }
    else {
      puVar5 = (undefined4 *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x30), 0x20, auStack_3e8,uVar4);
    }
    uStack_3d4 = *puVar5;
    uStack_3d0 = puVar5[1];
    fStack_3cc = bea_fcast<float>(puVar5[2]);
    uStack_3c8 = puVar5[3];
    uStack_338 = *(undefined4 *)((int)this_ + 0x138);
    if ((fStack_3cc < DAT_006fbdfc) &&
       (piVar6 = (int *)FUN_0050ff10(bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0x164) + 0xec))),
       piVar6 != (int *)0x0)) {
      local_10 = 0;
      local_c = 0;
      if (*(int *)((int)this_ + 0x280) == 1) {
        uStack_368 = 0xffffffff;
      }
      iVar3 = 0;
      iVar2 = *(int *)(*(int *)((int)this_ + 0x164) + 0xec);
      piVar1 = (int *)*DAT_008553f8;
      DAT_008553f8[2] = (int)piVar1;
      if (piVar1 == (int *)0x0) {
        local_1c = 0;
      }
      else {
        local_1c = *piVar1;
      }
      while (((local_1c != 0))) {
        if (iVar3 == iVar2) goto LAB_0044e496;
        iVar3 = iVar3 + 1;
        piVar1 = *(int **)(DAT_008553f8[2] + 4);
        DAT_008553f8[2] = (int)piVar1;
        if (piVar1 == (int *)0x0) {
          local_1c = 0;
        }
        else {
          local_1c = *piVar1;
        }
      }
      local_1c = 0;
LAB_0044e496:
      local_18 = 2;
      if (fStack_3cc <= DAT_006fbdfc) {
        local_18 = 0;
      }
      local_14 = this_;
      bea_vcall<uint32_t>(piVar6, 0x24, &local_3d8);
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044e300, ap_0044e300));
