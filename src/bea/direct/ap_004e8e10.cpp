// auto-ported from 004e8e10_vslot16.c (CNormalSquad::vslot16, 179 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CNormalSquad;
typedef char Vec3;
typedef Vec3* (BEA_THISCALL* FUN_0040d2c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d2c0_t> FUN_0040d2c0 = {(FUN_0040d2c0_t)0x0040d2c0};

static float10 BEA_THISCALL ap_004e8e10(CNormalSquad * this_)
{
  int *piVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  float &local_34 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x34);
  undefined4 &local_30 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x30);
  undefined4 &local_2c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x2c);
  undefined4 &local_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x28);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x1c);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x40 - 0x10);
  local_34 = 0.0;
  piVar1 = *(int **)(this_ + 0xa4);
  if (piVar1 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar1;
  }
  while (BEA_LOOP_GUARD((iVar5 != 0))) {
    local_30 = *(undefined4 *)(iVar5 + 4);
    iVar2 = *(int *)(iVar5 + 0x10);
    local_2c = *(undefined4 *)(iVar5 + 8);
    local_28 = 0;
    pfVar4 = (float *)FUN_0040d2c0(bea_arg((void *)(iVar2 + 0x3c)), bea_arg(local_10), bea_arg(&local_30));
    local_1c = pfVar4[1] + *(float *)(iVar2 + 0x20);
    fVar3 = (*pfVar4 + *(float *)(iVar2 + 0x1c)) - *(float *)(this_ + 0x1c);
    fVar3 = SQRT(fVar3 * fVar3 +
                 (local_1c - *(float *)(this_ + 0x20)) * (local_1c - *(float *)(this_ + 0x20)));
    if (local_34 < fVar3) {
      local_34 = fVar3;
    }
    piVar1 = (int *)piVar1[1];
    if (piVar1 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar1;
    }
  }
  return (float10)*(float *)(this_ + 0x104) * (float10)0.4f + (float10)local_34;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e8e10, ap_004e8e10));
