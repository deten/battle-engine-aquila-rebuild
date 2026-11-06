// auto-ported from 00407350_vslot39.c (CBattleEngine::vslot39, 380 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBattleEngine;
typedef char CUnit;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
typedef uint32_t (BEA_THISCALL* CUnit__vslot39_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<CUnit__vslot39_t> CUnit__vslot39 = {(CUnit__vslot39_t)0x004fcc30};
typedef uint32_t (BEA_THISCALL* FUN_0040dfb0_t)(uint32_t);
static const bea_guard<FUN_0040dfb0_t> FUN_0040dfb0 = {(FUN_0040dfb0_t)0x0040dfb0};

static void BEA_THISCALL ap_00407350(CBattleEngine * this_, int *param_1, int param_2)
{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  float &fStack_40 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x40);
  float &fStack_3c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x3c);
  float &fStack_38 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x38);
  undefined4 &uStack_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x34);
  float &fStack_30 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x30);
  float &fStack_2c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x2c);
  float &fStack_28 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x28);
  undefined1 (&auStack_20)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x40 - 0x20);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x1c);
  float &fStack_18 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x18);
  undefined1 (&auStack_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x40 - 0x10);
  if (*(int *)(param_2 + 200) != 0) {
    *(undefined4 *)(this_ + 0x314) = 0;
  }
  if ((((byte)this_[0x2c] & 4) != 0) &&
     (((param_1[0xd] & 0x10U) != 0 || ((param_1[0xd] & 0x2100000U) != 0)))) {
    FUN_0040dfb0(bea_arg(this_));
    bea_vcall<uint32_t>(this_, 0x38);
  }
  CUnit__vslot39(bea_arg((CUnit *)this_), bea_arg(param_1), bea_arg(param_2));
  if (*(int *)(param_2 + 200) == 1) {
    if ((param_1[0xd] & 0x100000U) != 0) {
      bea_vcall<uint32_t>(this_, 0x118, param_1);
    }
    iVar2 = *(int *)(this_ + 0x4a8) * 0x10;
    fStack_40 = *(float *)(this_ + iVar2 + 0x318);
    fStack_3c = *(float *)(this_ + iVar2 + 0x31c);
    fStack_38 = *(float *)(this_ + iVar2 + 800);
    uStack_34 = *(undefined4 *)(this_ + iVar2 + 0x324);
    pfVar3 = (float *)bea_vcall<uint32_t>(param_1, 0x6c, auStack_20);
    fStack_30 = *pfVar3 + *pfVar3;
    fStack_2c = pfVar3[1] + pfVar3[1];
    fStack_28 = pfVar3[2] + pfVar3[2];
    fVar1 = (DAT_00672fd0 - *(float *)(this_ + *(int *)(this_ + 0x4a8) * 4 + 0x458)) * 20.0f;
    pfVar3 = (float *)bea_vcall<uint32_t>(param_1, 0x6c, auStack_10);
    fStack_1c = fVar1 * pfVar3[1];
    fStack_18 = fVar1 * pfVar3[2];
    fStack_2c = fStack_1c + fStack_2c;
    fStack_28 = fStack_18 + fStack_28;
    // the asm adds T*p.x to the doubled vector first (0x407465), then x (0x407485): under the
    // game's 24-bit precision the grouping matters (multiplayer tour, 2026-11-01)
    fStack_40 = fStack_40 + (fVar1 * *pfVar3 + fStack_30);
    fStack_3c = fStack_3c + fStack_2c;
    fStack_38 = fStack_38 + fStack_28;
    bea_vcall<uint32_t>(this_, 0x4c, &fStack_40);
    iVar2 = *(int *)(this_ + 0x4a8);
    iVar4 = iVar2 + 1;
    *(int *)(this_ + 0x4a8) = iVar4;
    if (0x12 < iVar4) {
      *(int *)(this_ + 0x4a8) = iVar2;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00407350, ap_00407350));
