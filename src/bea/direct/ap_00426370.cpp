// auto-ported from 00426370_vslot9.c (CCollisionSeekingThing::vslot9, 118 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CCollisionSeekingThing;
typedef uint32_t (BEA_THISCALL* FUN_004f3ac0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f3ac0_t> FUN_004f3ac0 = {(FUN_004f3ac0_t)0x004f3ac0};

static float * BEA_THISCALL ap_00426370(CCollisionSeekingThing * this_, undefined4 param_1)
{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  undefined4 &uStack_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x14);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x10);
  float &fStack_c = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0xc);
  float &fStack_8 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x8);
  if (*(undefined4 **)(this_ + 0x14) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)(this_ + 0x14), 0x0, 1);
  }
  *(undefined4 *)(this_ + 0x14) = param_1;
  FUN_004f3ac0(bea_arg(*(void **)(this_ + 8)), bea_arg(&local_10));
  iVar3 = *(int *)(this_ + 8);
  fVar1 = *(float *)(iVar3 + 0x20);
  fVar2 = *(float *)(iVar3 + 0x24);
  iVar4 = *(int *)(this_ + 0x14);
  *(float *)(iVar4 + 4) = local_10 - *(float *)(iVar3 + 0x1c);
  *(float *)(iVar4 + 8) = fStack_c - fVar1;
  *(float *)(iVar4 + 0xc) = fStack_8 - fVar2;
  *(undefined4 *)(iVar4 + 0x10) = uStack_14;
  return (float *)((float *)(iVar4 + 4));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00426370, ap_00426370));
