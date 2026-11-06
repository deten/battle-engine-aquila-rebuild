// auto-ported from 004b4ba0_FUN_004b4ba0.c (FUN_004b4ba0, 289 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x60: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004b4ba0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b4ba0_t> FUN_004b4ba0 = {(FUN_004b4ba0_t)0x004b4ba0};
typedef uint32_t (BEA_CDECL* FUN_004b5330_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b5330_t> FUN_004b5330 = {(FUN_004b5330_t)0x004b5330};

static void BEA_THISCALL ap_004b4ba0(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, undefined4 param_14, undefined4 param_15, undefined4 param_16, int param_17, undefined4 param_18, undefined4 param_19, undefined4 param_20)
{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;

  alignas(16) uint8_t bea_frame_[0x60] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_54 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x54);
  undefined4 &local_50 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x50);
  undefined4 &local_4c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x4c);
  undefined4 &local_48 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x48);
  undefined4 &local_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x44);
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x40);
  undefined4 &local_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x3c);
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x34);
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  void * &local_4 = *reinterpret_cast<void * *>(bea_frame_ + 0x60 - 0x4);
  iVar1 = param_17;
  puVar7 = &param_1;
  uVar5 = 0x4b4bd2;
  uVar6 = param_18;
  local_4 = this_;
  FUN_004b5330(bea_arg(param_18), bea_arg(puVar7), bea_arg(&param_5), bea_arg(param_17), bea_arg(&local_4), bea_arg(&param_20));
  param_17 = 0;
  puVar2 = &param_5;
  puVar4 = (undefined4 *)(*(int *)(iVar1 + 0x88) * 0x30 + *(int *)this_);
  for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x88) * 0x10 + *(int *)((int)this_ + 4));
  *puVar2 = param_1;
  puVar2[1] = param_2;
  puVar2[2] = param_3;
  puVar2[3] = param_4;
  *(undefined4 *)(*(int *)((int)this_ + 0xc) + *(int *)(iVar1 + 0x88) * 4) =
       *(undefined4 *)((int)local_4 + 0x88);
  *(undefined4 *)(*(int *)((int)this_ + 8) + *(int *)(iVar1 + 0x88) * 4) = param_20;
  if (0 < *(int *)(iVar1 + 0x90)) {
    do {
      uVar8 = *(undefined4 *)(*(int *)(iVar1 + 0x94) + param_17 * 4);
      puVar2 = &param_5;
      puVar4 = (undefined4 *)&local_54;
      uVar9 = param_18;
      uVar10 = param_19;
      uVar11 = param_20;
      for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_004b4ba0(bea_arg(this_), bea_arg(param_1), bea_arg(param_2), bea_arg(param_3), bea_arg(param_4), bea_arg(local_54), bea_arg(local_50), bea_arg(local_4c), bea_arg(local_48), bea_arg(local_44), bea_arg(local_40), bea_arg(local_3c), bea_arg(local_38), bea_arg(local_34), bea_arg(uVar5), bea_arg(uVar6), bea_arg(puVar7), bea_arg(uVar8), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar11));
      param_17 = param_17 + 1;
    } while (BEA_LOOP_GUARD((param_17 < *(int *)(iVar1 + 0x90))));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b4ba0, ap_004b4ba0));
