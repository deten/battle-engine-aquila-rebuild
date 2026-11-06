// auto-ported from 004ff4f0_vslot4.c (CUnitAI::vslot4, 539 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CUnitAI;
typedef char fStack_18;
#define DAT_008550a0 GLOBAL_AT(undefined4*, 0x008550a0)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef undefined4 (BEA_THISCALL* FUN_004fb3d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb3d0_t> FUN_004fb3d0 = {(FUN_004fb3d0_t)0x004fb3d0};
typedef uint (BEA_THISCALL* FUN_004fb500_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fb500_t> FUN_004fb500 = {(FUN_004fb500_t)0x004fb500};
typedef uint (BEA_THISCALL* FUN_004fb5a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb5a0_t> FUN_004fb5a0 = {(FUN_004fb5a0_t)0x004fb5a0};
typedef uint32_t (BEA_THISCALL* FUN_004fb840_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb840_t> FUN_004fb840 = {(FUN_004fb840_t)0x004fb840};
typedef int (BEA_THISCALL* FUN_004fd3d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fd3d0_t> FUN_004fd3d0 = {(FUN_004fd3d0_t)0x004fd3d0};
typedef undefined4 (BEA_STDCALL* FUN_004fd5b0_t)(uint32_t);
static const bea_guard<FUN_004fd5b0_t> FUN_004fd5b0 = {(FUN_004fd5b0_t)0x004fd5b0};
typedef uint32_t (BEA_THISCALL* FUN_004fdad0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fdad0_t> FUN_004fdad0 = {(FUN_004fdad0_t)0x004fdad0};

static void BEA_THISCALL ap_004ff4f0(CUnitAI * this_)
{
  CUnitAI *this_00;
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  float10 fVar9;
  float10 fVar10;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  float &fStack_18 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x18);
  undefined1 (&auStack_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x20 - 0x10);
  this_00 = this_ + 0xc;
  if ((*(int *)(this_ + 0xc) != 0) && ((*(byte *)(*(int *)(this_ + 0xc) + 0x2c) & 4) != 0)) {
    FUN_00401000(bea_arg(this_00), bea_arg(0));
  }
  if ((*(int **)(*(int *)(this_ + 8) + 0x148) == (int *)0x0) ||
     (iVar5 = bea_vcall<uint32_t>(*(int **)(*(int *)(this_ + 8) + 0x148), 0x14c), iVar5 != 0)) {
    iVar5 = bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x188);
    if (iVar5 != 0) {
      puVar3 = DAT_008550a0;
      if (DAT_008550a0 == (undefined4 *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)*DAT_008550a0;
      }
      while (BEA_LOOP_GUARD((piVar8 != (int *)0x0))) {
        if ((((piVar8 != *(int **)(*(int *)(this_ + 8) + 0x148)) &&
             (iVar5 = bea_vcall<uint32_t>(piVar8, 0x124), iVar5 != 0)) &&
            (iVar6 = FUN_004fd3d0(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)(iVar5 + 0x138))), iVar6 != 0))
           && (iVar5 = FUN_004fb3d0(bea_arg(*(void **)(this_ + 8)), bea_arg(iVar5)), iVar5 != 0)) {
          iVar5 = *(int *)(this_ + 8);
          iVar6 = bea_vcall<uint32_t>(piVar8, 0x120, auStack_10);
          // hand fix (NOTES A1-14, bug class 11): the original stores dx here (`flds (%eax); fsubs (%ebx);
          // fstps 0x18(%esp)`); Ghidra dropped the store and read fStack_18 as never written (0)
          fStack_18 = *(float *)iVar6 - *(float *)(iVar5 + 0x1c);
          fVar4 = *(float *)(iVar6 + 4) - *(float *)(iVar5 + 0x20);
          fVar1 = *(float *)(iVar6 + 8);
          fVar2 = *(float *)(iVar5 + 0x24);
          iVar5 = *(int *)(*(int *)(this_ + 8) + 0x164);
          fVar9 = (float10)bea_vcall<float10>(piVar8, 0x150);
          fVar9 = ((float10)1.0f - fVar9 * (float10)0.01f) * (float10)*(float *)(iVar5 + 0x158);
          fVar10 = (float10)(fVar1 - fVar2);
          if ((float10)fStack_18 * (float10)fStack_18 +
              (float10)fVar4 * (float10)fVar4 + fVar10 * fVar10 < fVar9 * fVar9) {
            uVar7 = bea_vcall<uint32_t>(piVar8, 0x124);
            FUN_004fdad0(bea_arg(*(void **)(this_ + 8)), bea_arg(uVar7));
          }
        }
        puVar3 = (undefined4 *)puVar3[1];
        if (puVar3 == (undefined4 *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)*puVar3;
        }
      }
    }
    if ((*(int *)this_00 != 0) && (*(int *)(this_ + 0x10) != 0)) {
      FUN_004fb840(bea_arg(*(void **)(this_ + 8)), bea_arg(*(int *)this_00));
      iVar5 = FUN_004fb5a0(bea_arg(*(void **)(this_ + 8)), bea_arg(*(int *)this_00));
      *(int *)(this_ + 0x1c) = iVar5;
      if (iVar5 == 0) {
        *(undefined4 *)(this_ + 0x18) = 0;
        return;
      }
LAB_004ff6da:
      uVar7 = FUN_004fb500(bea_arg(*(void **)(this_ + 8)), bea_arg(*(int *)this_00), bea_arg(0));
      *(undefined4 *)(this_ + 0x18) = uVar7;
      return;
    }
    bea_vcall<uint32_t>(this_, 0x2c);
  }
  else {
    *(undefined4 *)(this_ + 0x18) = 0;
    *(undefined4 *)(this_ + 0x1c) = 0;
    if (*(int *)this_00 != 0) {
      iVar5 = FUN_004fd5b0(bea_arg(*(int *)this_00));
      if (iVar5 == 0) {
        FUN_00401000(bea_arg(this_00), bea_arg(0));
        return;
      }
      FUN_004fb840(bea_arg(*(void **)(this_ + 8)), bea_arg(*(int *)this_00));
      iVar5 = FUN_004fb5a0(bea_arg(*(void **)(this_ + 8)), bea_arg(*(int *)this_00));
      *(int *)(this_ + 0x1c) = iVar5;
      if (iVar5 != 0) goto LAB_004ff6da;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ff4f0, ap_004ff4f0));
