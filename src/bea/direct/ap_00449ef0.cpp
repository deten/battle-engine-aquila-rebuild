// auto-ported from 00449ef0_FUN_00449ef0.c (FUN_00449ef0, 291 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x90: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_0040d320_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d320_t> FUN_0040d320 = {(FUN_0040d320_t)0x0040d320};

static void BEA_STDCALL ap_00449ef0(int *param_1, undefined4 *param_2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;

  alignas(16) uint8_t bea_frame_[0x90] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_90)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x90 - 0x90);
  undefined4 &uStack_8c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x8c);
  undefined4 &uStack_88 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x88);
  undefined4 &uStack_80 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x80);
  undefined4 &uStack_78 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x78);
  undefined4 &uStack_70 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x70);
  undefined4 &uStack_6c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x6c);
  undefined4 &local_60 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x60);
  undefined4 &local_5c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x5c);
  undefined4 &local_58 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x58);
  undefined4 &local_50 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x4c);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x48);
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x38);
  undefined1 (&auStack_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x90 - 0x30);
  fVar6 = bea_fcast<float10>(fcos(bea_fcast<float10>(1.570796012878418)));
  local_5c = 0;
  local_60 = 0x3f800000;
  local_58 = 0;
  local_50 = 0;
  local_4c = bea_fcast<float>(fVar6);
  fVar7 = bea_fcast<float10>(fsin(bea_fcast<float10>(1.570796012878418)));
  local_40 = 0;
  local_48 = bea_fcast<float>(-fVar7);
  local_3c = bea_fcast<float>(fVar7);
  local_38 = bea_fcast<float>(fVar6);
  bea_vcall<uint32_t>(param_1, 0x4, local_90);
  uVar3 = uStack_6c;
  uVar2 = uStack_70;
  uVar1 = uStack_80;
  uStack_80 = uStack_8c;
  uStack_8c = uVar1;
  uStack_70 = uStack_88;
  uStack_88 = uVar2;
  uStack_6c = uStack_78;
  uStack_78 = uVar3;
  puVar4 = (undefined4 *)FUN_0040d320(bea_arg(&local_60), bea_arg(auStack_30), bea_arg(local_90));
  for (iVar5 = 0xc; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
    *param_2 = *puVar4;
    puVar4 = puVar4 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00449ef0, ap_00449ef0));
