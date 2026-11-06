// auto-ported from 004fd230_FUN_004fd230.c (FUN_004fd230, 334 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x3e0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (14 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_008553f8 GLOBAL_AT(undefined4*, 0x008553f8)
typedef int (BEA_THISCALL* FUN_00401fa0_t)(uint32_t);
static const bea_guard<FUN_00401fa0_t> FUN_00401fa0 = {(FUN_00401fa0_t)0x00401fa0};
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef undefined4 * (BEA_CDECL* FUN_0050ff10_t)(uint32_t);
static const bea_guard<FUN_0050ff10_t> FUN_0050ff10 = {(FUN_0050ff10_t)0x0050ff10};

static void BEA_THISCALL ap_004fd230(void * this_)
{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  alignas(16) uint8_t bea_frame_[0x3e0] = {};   // the original stack frame (emulate_frame)
  undefined ** &local_3d8 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x3e0 - 0x3d8);
  undefined4 &uStack_3d4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3d4);
  undefined4 &uStack_3d0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3d0);
  undefined4 &uStack_3cc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3cc);
  undefined4 &uStack_3c8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3c8);
  undefined4 &local_338 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x338);
  int &local_1c = *reinterpret_cast<int *>(bea_frame_ + 0x3e0 - 0x1c);
  uint &local_18 = *reinterpret_cast<uint *>(bea_frame_ + 0x3e0 - 0x18);
  void * &local_14 = *reinterpret_cast<void * *>(bea_frame_ + 0x3e0 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x4);
  if (*(int *)((int)this_ + 0x164) != 0) {
    piVar2 = (int *)FUN_0050ff10(bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0x164) + 0xe8)));
    FUN_0048dcf0(bea_arg(&local_3d8));
    local_3d8 = ((void*)0x005d8c80);
    local_18 = 0;
    local_4 = 0;
    local_8 = 0;
    iVar3 = *(int *)(*(int *)((int)this_ + 0x164) + 0xe8);
    piVar1 = (int *)*DAT_008553f8;
    iVar4 = 0;
    DAT_008553f8[2] = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      local_1c = 0;
    }
    else {
      local_1c = *piVar1;
    }
    while (BEA_LOOP_GUARD((local_1c != 0))) {
      if (iVar4 == iVar3) goto LAB_004fd2ea;
      iVar4 = iVar4 + 1;
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
LAB_004fd2ea:
    local_338 = *(undefined4 *)((int)this_ + 0x138);
    local_10 = 1;
    local_c = 1;
    local_14 = this_;
    iVar3 = bea_vcall<uint32_t>(this_, 0x10c);
    if (iVar3 == 0) {
      iVar3 = FUN_00401fa0(bea_arg(this_));
      local_18 = -(uint)(iVar3 != 0) & 2;
    }
    else {
      local_18 = 1;
    }
    if (piVar2 != (int *)0x0) {
      uStack_3d4 = *(undefined4 *)((int)this_ + 0x1c);
      uStack_3d0 = *(undefined4 *)((int)this_ + 0x20);
      uStack_3cc = *(undefined4 *)((int)this_ + 0x24);
      uStack_3c8 = *(undefined4 *)((int)this_ + 0x28);
      bea_vcall<uint32_t>(piVar2, 0x24, &local_3d8);
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fd230, ap_004fd230));
