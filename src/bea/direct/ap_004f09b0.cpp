// auto-ported from 004f09b0_vslot66.c (CTentacle::vslot66, 481 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x3e0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CComponent;
typedef char CTentacle;
typedef char CUnit;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_008553f8 GLOBAL_AT(undefined4*, 0x008553f8)
#define s_Bone_02d_00632d2c ((char*)0x00632d2c)
typedef uint32_t (BEA_THISCALL* CComponent__vslot66_t)(uint32_t);
static const bea_guard<CComponent__vslot66_t> CComponent__vslot66 = {(CComponent__vslot66_t)0x00428110};
typedef uint32_t (BEA_THISCALL* CUnit__vslot66_t)(uint32_t);
static const bea_guard<CUnit__vslot66_t> CUnit__vslot66 = {(CUnit__vslot66_t)0x004fa8d0};
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef float10 (BEA_THISCALL* FUN_004b0fb0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b0fb0_t> FUN_004b0fb0 = {(FUN_004b0fb0_t)0x004b0fb0};
typedef uint32_t (BEA_THISCALL* FUN_004fd230_t)(uint32_t);
static const bea_guard<FUN_004fd230_t> FUN_004fd230 = {(FUN_004fd230_t)0x004fd230};
typedef undefined4 * (BEA_CDECL* FUN_0050ff10_t)(uint32_t);
static const bea_guard<FUN_0050ff10_t> FUN_0050ff10 = {(FUN_0050ff10_t)0x0050ff10};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static uint32_t BEA_THISCALL ap_004f09b0(CTentacle * this_)
{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  CTentacle *pCVar5;
  int *piVar6;
  int iVar7;
  // 0x10 more than Ghidra's frame: it placed the CExplosionInitThing 0xc too high (the
  // ebp/esi/edi pushes), and the object runs to +0x3d8; the asm zeroes +0x3bc..+0x3d4
  // and CExplosion::vslot9 (0x44b930) reads +0x3cc..+0x3d4 (level 800's Hydra crashed
  // on +0x3d4, 2026-10-29)
  alignas(16) uint8_t bea_frame_[0x3f0] = {};   // the original stack frame (emulate_frame)
  undefined1 (&auStack_3d4)[8] = *reinterpret_cast<undefined1 (*)[8]>(bea_frame_ + 0x3e0 - 0x3d4);
  undefined ** &ppuStack_3cc = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x3e0 - 0x3cc);
  undefined1 (&auStack_3c8)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x3e0 - 0x3c8);
  undefined1 (&auStack_3b8)[140] = *reinterpret_cast<undefined1 (*)[140]>(bea_frame_ + 0x3e0 - 0x3b8);
  undefined4 &uStack_32c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x32c);
  int &iStack_10 = *reinterpret_cast<int *>(bea_frame_ + 0x3e0 - 0x10);
  undefined4 &uStack_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0xc);
  CTentacle * &pCStack_8 = *reinterpret_cast<CTentacle * *>(bea_frame_ + 0x3e0 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x4);
  if (((byte)this_[0x2c] & 4) == 0) {
    return CComponent__vslot66(bea_arg((CComponent *)this_));
  }
  if (*(float *)(this_ + 0x308) < DAT_00672fd0) {
    iVar3 = bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
    FUN_0048dcf0(bea_arg(&ppuStack_3cc));
    ppuStack_3cc = ((void*)0x005d8c80);
    iStack_10 = 0;
    uStack_c = 0;
    pCStack_8 = (CTentacle *)0x0;
    uStack_4 = 0;
    memset(bea_frame_ + 0x3e0 - 0x3cc + 0x3cc, 0, 0xc);   // the object's +0x3cc..+0x3d4
    FUN_0055de9b(auStack_3d4,s_Bone_02d_00632d2c,*(int *)(this_ + 0x304));
    iVar7 = 0;
    if (0 < *(int *)(iVar3 + 0x15c)) {
      do {
        iVar4 = FUN_00568390(bea_arg(*(int *)(*(int *)(iVar3 + 0x160) + iVar7 * 4) + 0xdc), bea_arg(auStack_3d4));
        if (iVar4 == 0) {
          if (this_ == (CTentacle *)0x0) {
            pCVar5 = (CTentacle *)0x0;
          }
          else {
            pCVar5 = this_ + 8;
          }
          FUN_004b0fb0(bea_arg(*(void **)(*(int *)(iVar3 + 0x160) + iVar7 * 4)), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(pCVar5), bea_arg(auStack_3b8), bea_arg(auStack_3c8), bea_arg(0), bea_arg(1), bea_arg(0));
          break;
        }
        iVar7 = iVar7 + 1;
      } while (BEA_LOOP_GUARD((iVar7 < *(int *)(iVar3 + 0x15c))));
    }
    piVar6 = (int *)FUN_0050ff10(bea_arg(*(undefined4 *)(*(int *)(this_ + 0x164) + 0xec)));
    if (piVar6 != (int *)0x0) {
      iVar7 = 0;
      iVar3 = *(int *)(*(int *)(this_ + 0x164) + 0xec);
      piVar1 = (int *)*DAT_008553f8;
      DAT_008553f8[2] = (int)piVar1;
      if (piVar1 == (int *)0x0) {
        iStack_10 = 0;
      }
      else {
        iStack_10 = *piVar1;
      }
      while (BEA_LOOP_GUARD((iStack_10 != 0))) {
        if (iVar7 == iVar3) goto LAB_004f0b0e;
        iVar7 = iVar7 + 1;
        piVar1 = *(int **)(DAT_008553f8[2] + 4);
        DAT_008553f8[2] = (int)piVar1;
        if (piVar1 == (int *)0x0) {
          iStack_10 = 0;
        }
        else {
          iStack_10 = *piVar1;
        }
      }
      iStack_10 = 0;
LAB_004f0b0e:
      uStack_32c = *(undefined4 *)(this_ + 0x138);
      uStack_4 = 0;
      uStack_c = 0;
      pCStack_8 = this_;
      bea_vcall<uint32_t>(piVar6, 0x24, &ppuStack_3cc);
    }
    fVar2 = DAT_00672fd0 + 0.1f;
    iVar3 = *(int *)(this_ + 0x304);
    *(int *)(this_ + 0x304) = iVar3 + -1;
    *(float *)(this_ + 0x308) = fVar2;
    if (iVar3 + -1 == 0) {
      FUN_004fd230(bea_arg(this_));
      bea_vcall<uint32_t>(this_, 0x38);
    }
  }
  return CUnit__vslot66(bea_arg((CUnit *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f09b0, ap_004f09b0));
