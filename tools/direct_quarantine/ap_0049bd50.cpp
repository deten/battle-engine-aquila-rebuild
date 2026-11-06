// auto-ported from 0049bd50_FUN_0049bd50.c (FUN_0049bd50, 167 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x60: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00499e30_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00499e30_t> FUN_00499e30 = {(FUN_00499e30_t)0x00499e30};
typedef uint32_t (BEA_THISCALL* FUN_0049bd50_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0049bd50_t> FUN_0049bd50 = {(FUN_0049bd50_t)0x0049bd50};

static void BEA_THISCALL ap_0049bd50(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, undefined4 param_14, undefined4 param_15, undefined4 param_16, int param_17, undefined4 param_18, undefined4 param_19, undefined4 param_20, undefined4 param_21)
{
  alignas(16) uint8_t bea_frame_[0x60] = {};   // the original stack frame (emulate_frame)

  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x34);
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 &local_58 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x58);
  undefined4 &local_54 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x54);
  undefined4 &local_50 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x50);
  undefined4 &local_4c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x4c);
  undefined4 &local_48 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x48);
  undefined4 &local_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x44);
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x40);
  undefined4 &local_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x3c);
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x38);
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  iVar1 = param_17;
  puVar8 = &param_5;
  puVar7 = &param_1;
  uVar6 = 0x49bd81;
  FUN_00499e30(bea_arg(this_), bea_arg(puVar7), bea_arg(puVar8), bea_arg(param_17), bea_arg(&param_18), bea_arg(&param_19), bea_arg(param_20), bea_arg(param_21));
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0x90)) {
    do {
      uVar9 = *(undefined4 *)(*(int *)(iVar1 + 0x94) + iVar3 * 4);
      puVar4 = &param_5;
      puVar5 = (undefined4 *)&local_58;
      uVar10 = param_18;
      uVar11 = param_19;
      uVar12 = param_20;
      uVar13 = param_21;
      for (iVar2 = 0xc; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_0049bd50(bea_arg(this_), bea_arg(param_1), bea_arg(param_2), bea_arg(param_3), bea_arg(param_4), bea_arg(local_58), bea_arg(local_54), bea_arg(local_50), bea_arg(local_4c), bea_arg(local_48), bea_arg(local_44), bea_arg(local_40), bea_arg(local_3c), bea_arg(local_38), bea_arg(local_34), bea_arg(puVar7), bea_arg(puVar8), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar11), bea_arg(uVar12), bea_arg(uVar13));
      iVar3 = iVar3 + 1;
    } while (BEA_LOOP_GUARD((iVar3 < *(int *)(iVar1 + 0x90))));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0049bd50, ap_0049bd50));
