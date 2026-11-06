// auto-ported from 004ffbb0_vslot10.c (CUnitAI::vslot10, 538 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
typedef char CUnitAI;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};

static void BEA_THISCALL ap_004ffbb0(CUnitAI * this_, undefined4 param_1)
{
  int *piVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;

  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  float &fStack_44 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x44);
  float &fStack_40 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x40);
  float &fStack_3c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x3c);
  float &fStack_38 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x38);
  undefined4 &uStack_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x34);
  undefined1 (&auStack_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x50 - 0x30);
  if (((*(int *)(this_ + 0x28) == 0) || ((*(byte *)(*(int *)(this_ + 0x28) + 0x2c) & 4) != 0)) &&
     (iVar3 = bea_vcall<uint32_t>(*(int **)(this_ + 8), 0xe4), iVar3 == 1)) {
    bea_vcall<uint32_t>(*(int **)(this_ + 8), 0xc8);
    return;
  }
  if ((((*(int **)(this_ + 0x28) == (int *)0x0) ||
       (iVar3 = bea_vcall<uint32_t>(*(int **)(this_ + 0x28), 0x184), iVar3 == 0)) ||
      ((*(int *)(this_ + 0x2c) == 0 || (*(float *)(this_ + 0x44) <= DAT_00672fd0)))) ||
     (((bea_vcall<uint32_t>(*(int **)(this_ + 0x28), 0x160, *(int *)(this_ + 0x2c),*(undefined4 *)(this_ + 0x30),&fStack_40,auStack_30),
       fStack_40 == 0.0f && (fStack_3c == 0.0f)) && (fStack_38 == 0.0f)))) {
    if (*(int *)(*(int *)(this_ + 8) + 0x38) != 0) {
      *(undefined4 *)(*(int *)(*(int *)(this_ + 8) + 0x38) + 0x20) = 0;
    }
    bea_vcall<uint32_t>(this_, 0x18);
    if (*(int *)(*(int *)(this_ + 8) + 0x74) == 0) {
      return;
    }
    param_1 = 0xbf800000;
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0x7d3), bea_arg(*(int *)(this_ + 8)), bea_arg(&param_1), bea_arg(0), bea_arg(0), bea_arg(0));
    return;
  }
  fVar5 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&fStack_40));
  if (fVar5 - (float10)0.1f < (float10)fStack_38) {
    fStack_38 = (float)(fVar5 - (float10)0.1f);
  }
  piVar1 = *(int **)(this_ + 8);
  fVar2 = (fStack_40 - (float)piVar1[7]) * (fStack_40 - (float)piVar1[7]) +
          (fStack_3c - (float)piVar1[8]) * (fStack_3c - (float)piVar1[8]) +
          (fStack_38 - (float)piVar1[9]) * (fStack_38 - (float)piVar1[9]);
  if ((piVar1[0xd] & 0x400U) == 0) {
    if (0.5625f <= fVar2) goto LAB_004ffcf6;
  }
  else if (6.25f <= fVar2) goto LAB_004ffcf6;
  *(int *)(this_ + 0x30) = *(int *)(this_ + 0x30) + 1;
LAB_004ffcf6:
  bea_vcall<uint32_t>(piVar1, 0xf4, fStack_40,fStack_3c,fStack_38,uStack_34,1);
  uVar4 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
  uVar4 = uVar4 & 0x8000ffff;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xffff0000) + 1;
  }
  fStack_44 = (float)(int)uVar4 * 1.5258789e-06f + DAT_00672fd0 + 0.1f;
  FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0xbba), bea_arg(this_), bea_arg(&fStack_44), bea_arg(0), bea_arg(0), bea_arg(param_1));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ffbb0, ap_004ffbb0));
