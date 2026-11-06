// auto-ported from 0040a890_vslot40.c (CBattleEngine::vslot40, 917 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBattleEngine;
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_BattleEngine_c_006230bc ((char*)0x006230bc)
typedef uint32_t (BEA_THISCALL* FUN_00407940_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00407940_t> FUN_00407940 = {(FUN_00407940_t)0x00407940};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_0040a890(CBattleEngine * this_, float param_1, int param_2, int param_3, undefined4 param_4)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  float10 fVar10;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  int &local_30 = *reinterpret_cast<int *>(bea_frame_ + 0x30 - 0x30);
  undefined1 (&auStack_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x30 - 0x10);
  fVar4 = *(float *)(this_ + 0xf8);
  uVar5 = *(undefined4 *)(this_ + 0x100);
  uVar6 = *(undefined4 *)(this_ + 0xfc);
  if (0.0f < param_1) {
    local_30 = (int)(longlong)ROUND(param_1 * 256.0f);
    *(int *)(*(int *)(this_ + 0x574) + 0x48) = *(int *)(*(int *)(this_ + 0x574) + 0x48) + local_30;
    if (0.0f <= *(float *)(this_ + 0xf8)) {
      if (param_1 <= *(float *)(this_ + 0x100)) {
        fVar1 = *(float *)(*(int *)(this_ + 0x4b0) + 0x24) * 0.01f * param_1;
        if (param_3 == 0) {
          fVar1 = 0.0f;
        }
        *(float *)(this_ + 0x100) = *(float *)(this_ + 0x100) - fVar1;
        param_1 = param_1 - fVar1;
        if ((*(int *)(this_ + 0x2fc) == 0) && (*(int *)(*(int *)(this_ + 0x578) + 0x1c) != 0)) {
          *(float *)(this_ + 0x2f8) = fVar1 + *(float *)(this_ + 0x2f8);
        }
      }
      if ((*(float *)(this_ + 0x100) < param_1) && (param_3 != 0)) {
        if (*(int *)(this_ + 0x2fc) == 0) {
          *(float *)(this_ + 0x2f8) = *(float *)(this_ + 0x100) + *(float *)(this_ + 0x2f8);
        }
        param_1 = param_1 - *(float *)(this_ + 0x100);
        *(undefined4 *)(this_ + 0x100) = 0;
      }
      fVar1 = *(float *)(this_ + 0xf8);
      *(float *)(this_ + 0xf8) = fVar1 - param_1;
      if ((fVar1 - param_1 < 0.0f) && (*(int *)(this_ + 0x15c) == 1)) {
        bea_vcall<uint32_t>(this_, 0xc8);
      }
    }
    *(float *)(this_ + 0x2d4) = bea_fcast<float>(DAT_00672fd0);
    if (param_2 != 0) {
      fVar1 = *(float *)(param_2 + 0x1c);
      fVar7 = *(float *)(param_2 + 0x20);
      if (*(int *)(this_ + 0x25c) < 0xf) {
        pfVar9 = (float *)bea_vcall<uint32_t>(this_, 0x78, auStack_10);
        fVar2 = *pfVar9;
        fVar3 = pfVar9[1];
        pfVar9 = (float *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngine_c_006230bc), bea_arg(0xe0b));
        fVar10 = bea_fcast<float10>(fpatan(bea_fcast<float10>((fVar1 - fVar2)),bea_fcast<float10>((fVar7 - fVar3))));
        *pfVar9 = bea_fcast<float>((bea_fcast<float10>(*(float *)(this_ + 0x114)) - -fVar10));
        pfVar9[1] = bea_fcast<float>(DAT_00672fd0);
        FUN_004e5a80(bea_arg(this_ + 0x250), bea_arg(pfVar9));
      }
    }
  }
  if (10.0f < *(float *)(this_ + 0x2f8)) {
    *(undefined4 *)(this_ + 0x2f8) = 0x41200000;
  }
  if (*(int *)(this_ + 0x260) == 2) {
    *(undefined4 *)(this_ + 0xfc) = *(undefined4 *)(this_ + 0x100);
  }
  if (param_1 < 0.0f) {
    iVar8 = *(int *)(this_ + 0x4b0);
    if (*(float *)(this_ + 0xf8) < *(float *)(iVar8 + 0x1c)) {
      fVar1 = *(float *)(iVar8 + 0x1c) - *(float *)(this_ + 0xf8);
      if (-param_1 <= fVar1) {
        fVar1 = *(float *)(this_ + 0xf8) - param_1;
        param_1 = 0.0f;
        *(float *)(this_ + 0xf8) = fVar1;
      }
      else {
        param_1 = fVar1 + param_1;
        *(undefined4 *)(this_ + 0xf8) = *(undefined4 *)(iVar8 + 0x1c);
      }
    }
    if (*(float *)(this_ + 0xfc) < *(float *)(iVar8 + 0x20)) {
      if (-param_1 <= *(float *)(iVar8 + 0x20) - *(float *)(this_ + 0xfc)) {
        *(float *)(this_ + 0xfc) = *(float *)(this_ + 0xfc) - param_1;
      }
      else {
        *(undefined4 *)(this_ + 0xfc) = *(undefined4 *)(iVar8 + 0x20);
      }
    }
  }
  param_1 = (fVar4 - *(float *)(this_ + 0xf8)) * 0.125f;
  if (*(float *)(this_ + 0x100) != 0.0f) {
    param_1 = param_1 * 0.5f;
  }
  if (0.25f < param_1) {
    param_1 = 0.25f;
  }
  FUN_00407940(bea_arg(this_), bea_arg(param_1));
  if (0.05f < param_1) {
    param_1 = 0.05f;
  }
  *(float *)(this_ + 0x604) = param_1 * 50.0f + *(float *)(this_ + 0x604);
  if (*(int *)(this_ + 0x15c) == 0) {
    *(float *)(this_ + 0xf8) = fVar4;
    *(undefined4 *)(this_ + 0x100) = uVar5;
    *(undefined4 *)(this_ + 0xfc) = uVar6;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040a890, ap_0040a890));
