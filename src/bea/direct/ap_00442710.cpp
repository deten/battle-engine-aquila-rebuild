// auto-ported from 00442710_FUN_00442710.c (FUN_00442710, 349 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x3e0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_008553f8 GLOBAL_AT(undefined4*, 0x008553f8)
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef undefined4 * (BEA_CDECL* FUN_0050ff10_t)(uint32_t);
static const bea_guard<FUN_0050ff10_t> FUN_0050ff10 = {(FUN_0050ff10_t)0x0050ff10};

static void BEA_THISCALL ap_00442710(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;

  alignas(16) uint8_t bea_frame_[0x3e0] = {};   // the original stack frame (emulate_frame)
  undefined ** &local_3d8 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x3e0 - 0x3d8);
  undefined4 &local_3d4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3d4);
  undefined4 &local_3d0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3d0);
  undefined4 &local_3cc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3cc);
  undefined4 &local_3c8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3c8);
  undefined4 &local_36c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x36c);
  uint &local_368 = *reinterpret_cast<uint *>(bea_frame_ + 0x3e0 - 0x368);
  undefined4 &local_338 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x338);
  int &local_1c = *reinterpret_cast<int *>(bea_frame_ + 0x3e0 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x4);
  iVar1 = *(int *)(*(int *)(*(int *)((int)this_ + 0x3c) + 0x10) + 0x164);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xe8) != 0)) {
    piVar3 = (int *)FUN_0050ff10(bea_arg(*(int *)(iVar1 + 0xe8)));
    FUN_0048dcf0(bea_arg(&local_3d8));
    iVar1 = *(int *)(iVar1 + 0xe8);
    local_3d8 = ((void*)0x005d8c80);
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_4 = 0;
    local_8 = 0;
    piVar2 = (int *)*DAT_008553f8;
    iVar4 = 0;
    DAT_008553f8[2] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      local_1c = 0;
    }
    else {
      local_1c = *piVar2;
    }
    while (BEA_LOOP_GUARD((local_1c != 0))) {
      if (iVar4 == iVar1) goto LAB_004427d2;
      iVar4 = iVar4 + 1;
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
LAB_004427d2:
    iVar1 = *(int *)((int)this_ + 0x3c);
    local_18 = 1;
    local_338 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x138);
    if (piVar3 != (int *)0x0) {
      local_3d4 = param_1;
      local_3d0 = param_2;
      local_3cc = param_3;
      local_3c8 = param_4;
      if (*(int *)(iVar1 + 0x28) == 1) {
        local_368 = 0xffffffff;
      }
      else {
        local_368 = local_368 | 0x100;
      }
      local_36c = *(undefined4 *)(iVar1 + 0x10);
      bea_vcall<uint32_t>(piVar3, 0x24, &local_3d8);
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00442710, ap_00442710));
