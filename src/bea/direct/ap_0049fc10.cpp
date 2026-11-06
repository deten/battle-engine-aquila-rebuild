// auto-ported from 0049fc10_vslot66.c (CMech::vslot66, 413 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x3e0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CGroundUnit;
typedef char CMech;
#define DAT_008553f8 GLOBAL_AT(undefined4*, 0x008553f8)
typedef uint32_t (BEA_THISCALL* CGroundUnit__vslot66_t)(uint32_t);
static const bea_guard<CGroundUnit__vslot66_t> CGroundUnit__vslot66 = {(CGroundUnit__vslot66_t)0x0047c970};
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef undefined4 * (BEA_CDECL* FUN_0050ff10_t)(uint32_t);
static const bea_guard<FUN_0050ff10_t> FUN_0050ff10 = {(FUN_0050ff10_t)0x0050ff10};

static uint32_t BEA_THISCALL ap_0049fc10(CMech * this_)
{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  alignas(16) uint8_t bea_frame_[0x3e0] = {};   // the original stack frame (emulate_frame)
  undefined ** &ppuStack_3d8 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x3e0 - 0x3d8);
  undefined4 &uStack_3d4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3d4);
  undefined4 &uStack_3d0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3d0);
  undefined4 &uStack_3cc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3cc);
  undefined4 &uStack_3c8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3c8);
  undefined4 &uStack_338 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x338);
  int &iStack_1c = *reinterpret_cast<int *>(bea_frame_ + 0x3e0 - 0x1c);
  undefined4 &uStack_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x18);
  // Hand-fixed 2026-10-27: a field of the message at &ppuStack_3d8 (the asm
  // stores edi at esp+0x3dc after two pushes = this slot); it was a separate
  // local, so the message went out with a null sender (level-523 replay,
  // bisected with 0x4cba90)
  CMech * &pCStack_14 = *reinterpret_cast<CMech * *>(bea_frame_ + 0x3e0 - 0x14);
  undefined4 &uStack_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x10);
  undefined4 &uStack_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0xc);
  undefined4 &uStack_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x4);
  if (((byte)this_[0x2c] & 4) != 0) {
    fVar5 = *(float *)(this_ + 0x264) + 0.002f;
    *(float *)(this_ + 0x264) = fVar5;
    fVar1 = *(float *)(this_ + 0x260);
    *(float *)(this_ + 0x260) = fVar5 + fVar1;
    if (-*(float *)(this_ + 0x268) <= fVar5 + fVar1) {
      *(float *)(this_ + 0x260) = -*(float *)(this_ + 0x268);
      *(float *)(this_ + 0x264) = fVar5 * -0.2f;
    }
    bea_vcall<uint32_t>(this_, 0x17c);
  }
  iVar2 = *(int *)(this_ + 0x70);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0xd0) != 0)) &&
     (piVar6 = (int *)FUN_0050ff10(bea_arg(*(undefined4 *)(*(int *)(this_ + 0x164) + 0xf0))),
     piVar6 != (int *)0x0)) {
    FUN_0048dcf0(bea_arg(&ppuStack_3d8));
    ppuStack_3d8 = ((void*)0x005d8c80);
    uStack_3d4 = *(undefined4 *)(iVar2 + 0xd4);
    uStack_10 = 0;
    uStack_3d0 = *(undefined4 *)(iVar2 + 0xd8);
    uStack_c = 0;
    uStack_4 = 0;
    uStack_3cc = *(undefined4 *)(iVar2 + 0xdc);
    uStack_8 = 0;
    uStack_3c8 = *(undefined4 *)(iVar2 + 0xe0);
    uStack_338 = *(undefined4 *)(this_ + 0x138);
    iVar3 = *(int *)(*(int *)(this_ + 0x164) + 0xf0);
    piVar4 = (int *)*DAT_008553f8;
    iVar7 = 0;
    DAT_008553f8[2] = (int)piVar4;
    if (piVar4 == (int *)0x0) {
      iStack_1c = 0;
    }
    else {
      iStack_1c = *piVar4;
    }
    while (BEA_LOOP_GUARD((iStack_1c != 0))) {
      if (iVar7 == iVar3) goto LAB_0049fd72;
      iVar7 = iVar7 + 1;
      piVar4 = *(int **)(DAT_008553f8[2] + 4);
      DAT_008553f8[2] = (int)piVar4;
      if (piVar4 == (int *)0x0) {
        iStack_1c = 0;
      }
      else {
        iStack_1c = *piVar4;
      }
    }
    iStack_1c = 0;
LAB_0049fd72:
    uStack_18 = 0;
    pCStack_14 = this_;
    bea_vcall<uint32_t>(piVar6, 0x24, &ppuStack_3d8);
    *(undefined4 *)(iVar2 + 0xd0) = 0;
  }
  return CGroundUnit__vslot66(bea_arg((CGroundUnit *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0049fc10, ap_0049fc10));
