// auto-ported from 00425c60_vslot8.c (CCollisionSeekingRound::vslot8, 452 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CCollisionSeekingRound;
typedef char CCollisionSeekingThing;
typedef bool (BEA_THISCALL* CCollisionSeekingThing__vslot8_t)(uint32_t, uint32_t);
static const bea_guard<CCollisionSeekingThing__vslot8_t> CCollisionSeekingThing__vslot8 = {(CCollisionSeekingThing__vslot8_t)0x00426900};
typedef uint32_t (BEA_THISCALL* FUN_004f3ac0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f3ac0_t> FUN_004f3ac0 = {(FUN_004f3ac0_t)0x004f3ac0};

static int BEA_THISCALL ap_00425c60(CCollisionSeekingRound * this_, int param_1)
{
  void *this_00;
  int iVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float *pfVar11;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x18);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x20 - 0x10);
  iVar10 = CCollisionSeekingThing__vslot8(bea_arg((CCollisionSeekingThing *)this_), bea_arg(param_1));
  if (iVar10 != 0) {
    this_00 = *(void **)(param_1 + 8);
    if (this_00 == *(void **)(*(int *)(this_ + 8) + 0xec)) {
      return 0;
    }
    iVar1 = *(int *)(*(int *)(this_ + 8) + 0xf0);
    if ((((*(float *)(iVar1 + 0x30) == 0.0f) && (*(float *)(iVar1 + 0x3c) == 0.0f)) &&
        (*(float *)(iVar1 + 0x28) <= 0.0f)) &&
       ((*(int *)(iVar1 + 0x6c) == 0 &&
        (((*(uint *)((int)this_00 + 0x34) & 0x20) != 0 ||
         ((*(uint *)((int)this_00 + 0x34) & 0x4000) != 0)))))) {
      FUN_004f3ac0(bea_arg(this_00), bea_arg(&local_20));
      fVar2 = *(float *)(param_1 + 0x1c);
      piVar3 = *(int **)(this_ + 8);
      fVar4 = bea_fcast<float>(piVar3[7]) - local_20;
      fVar5 = bea_fcast<float>(piVar3[8]) - local_1c;
      fVar6 = bea_fcast<float>(piVar3[9]) - local_18;
      pfVar11 = (float *)bea_vcall<uint32_t>(piVar3, 0x6c, local_10);
      fVar7 = fVar4 - (fVar4 + *pfVar11);
      fVar9 = fVar5 - (fVar5 + pfVar11[1]);
      fVar8 = fVar6 - (fVar6 + pfVar11[2]);
      // class 19: the asm's order (2 sums)
      fVar7 = (fVar8 * fVar6 + fVar9 * fVar5 + fVar7 * fVar4) /
              (fVar8 * fVar8 + fVar9 * fVar9 + fVar7 * fVar7);
      fVar4 = ((fVar4 + *pfVar11) - fVar4) * fVar7 + fVar4;
      fVar5 = ((fVar5 + pfVar11[1]) - fVar5) * fVar7 + fVar5;
      fVar6 = ((fVar6 + pfVar11[2]) - fVar6) * fVar7 + fVar6;
      if (fVar2 * fVar2 < fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) {   // class 19: the asm's order
        return 0;
      }
    }
  }
  return iVar10;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00425c60, ap_00425c60));
