// auto-ported from 0053c2e0_FUN_0053c2e0.c (FUN_0053c2e0, 560 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00650424 GLOBAL_AT(int, 0x00650424)
#define DAT_00650428 GLOBAL_AT(int, 0x00650428)
typedef uint32_t (BEA_THISCALL* FUN_00418920_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00418920_t> FUN_00418920 = {(FUN_00418920_t)0x00418920};
typedef undefined4 (BEA_THISCALL* FUN_00558690_t)(uint32_t);
static const bea_guard<FUN_00558690_t> FUN_00558690 = {(FUN_00558690_t)0x00558690};

static void BEA_THISCALL ap_0053c2e0(void * this_, int param_1)
{
  float fVar1;
  byte *pbVar2;
  undefined4 uVar3;
  float *pfVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  undefined2 (&local_18)[4] = *reinterpret_cast<undefined2 (*)[4]>(bea_frame_ + 0x20 - 0x18);
  int &local_10 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x10);
  undefined4 * &puStack_c = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0x20 - 0xc);
  longlong &local_8 = *reinterpret_cast<longlong *>(bea_frame_ + 0x20 - 0x8);
  puVar9 = this_;
  for (iVar6 = 0xf00; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  puVar9 = (undefined4 *)((int)this_ + 0x1a00);
  for (iVar6 = 0x280; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
    *puVar9 = 0x2020202;
    puVar9 = puVar9 + 1;
  }
  local_18[0] = 0;
  local_18[1] = 0x2222;
  local_18[2] = 0x2444;
  local_18[3] = 0x2666;
  FUN_00418920(bea_arg(*(void **)((int)this_ + 0x3c08)), bea_arg(0), bea_arg(0), bea_arg(0xf));
  iVar6 = *(int *)(param_1 + 0x2b8);
  if (iVar6 != 0) {
    puVar9 = *(undefined4 **)(iVar6 + 0x1c);
    *(undefined4 **)(iVar6 + 0x24) = puVar9;
    if (puVar9 == (undefined4 *)0x0) {
      pfVar4 = (float *)0x0;
    }
    else {
      pfVar4 = (float *)*puVar9;
    }
    while (BEA_LOOP_GUARD((pfVar4 != (float *)0x0))) {
      for (fVar1 = -*pfVar4; BEA_LOOP_GUARD((fVar1 < 0.0f)); fVar1 = fVar1 + 6.2831855f) {
      }
      for (; BEA_LOOP_GUARD((6.2831855f < fVar1)); fVar1 = fVar1 - 6.2831855f) {
      }
      local_8 = (longlong)ROUND(fVar1 * 0.15915494f * 512.0f);
      uVar3 = (int)local_8;
      FUN_00418920(bea_arg(*(void **)((int)this_ + 0x3c08)), bea_arg(1), bea_arg((int)local_8), bea_arg(0xf));
      local_8 = (longlong)ROUND(pfVar4[1] * 0.6666667f);
      FUN_00418920(bea_arg(*(void **)((int)this_ + 0x3c08)), bea_arg(2), bea_arg(uVar3), bea_arg(0xf - (int)local_8));
      puVar9 = *(undefined4 **)(*(int *)(iVar6 + 0x24) + 4);
      *(undefined4 **)(iVar6 + 0x24) = puVar9;
      if (puVar9 == (undefined4 *)0x0) {
        pfVar4 = (float *)0x0;
      }
      else {
        pfVar4 = (float *)*puVar9;
      }
    }
  }
  piVar5 = (int *)FUN_00558690(bea_arg(*(void **)((int)this_ + *(int *)((int)this_ + 0x3c10) * 4 + 0x3c00)));
  iVar6 = bea_vcall<uint32_t>(piVar5, 0x4c, piVar5,0,&local_10,0,0x800);
  if (-1 < iVar6) {
    uVar8 = DAT_00650424 * 2;
    puVar9 = puStack_c;
    for (uVar7 = (DAT_00650424 & 0x7fffffff) >> 1; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    for (uVar8 = uVar8 & 3; BEA_LOOP_GUARD((uVar8 != 0)); uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar9 = 0;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    puStack_c = (undefined4 *)((int)puStack_c + local_10);
    if (DAT_00650424 < 0x200) {
      iVar6 = (int)(0x200 / (ulonglong)DAT_00650424);
    }
    else {
      iVar6 = 1;
    }
    param_1 = 0x1e;
    pbVar2 = this_;
    uVar8 = DAT_00650424;
    uVar7 = DAT_00650424;
    puVar9 = puStack_c;
    do {
      for (; BEA_LOOP_GUARD((uVar8 != 0)); uVar8 = uVar8 - 1) {
        *(undefined2 *)puStack_c = local_18[*pbVar2];
        pbVar2 = pbVar2 + iVar6;
        puStack_c = (undefined4 *)((int)puStack_c + 2);
        uVar7 = DAT_00650424;
      }
      puStack_c = (undefined4 *)((int)puVar9 + local_10);
      param_1 = param_1 + -1;
      uVar8 = uVar7;
      puVar9 = puStack_c;
    } while (BEA_LOOP_GUARD((param_1 != 0)));
    for (iVar6 = DAT_00650428 + -0x1f; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
      puVar9 = puStack_c;
      for (uVar8 = (uVar7 & 0x7fffffff) >> 1; BEA_LOOP_GUARD((uVar8 != 0)); uVar8 = uVar8 - 1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      for (uVar8 = uVar7 * 2 & 3; BEA_LOOP_GUARD((uVar8 != 0)); uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar9 = 0;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      puStack_c = (undefined4 *)((int)puStack_c + local_10);
      uVar7 = DAT_00650424;
    }
    piVar5 = (int *)FUN_00558690(bea_arg(*(void **)((int)this_ + *(int *)((int)this_ + 0x3c10) * 4 + 0x3c00)));
    bea_vcall<uint32_t>(piVar5, 0x50, piVar5,0);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053c2e0, ap_0053c2e0));
