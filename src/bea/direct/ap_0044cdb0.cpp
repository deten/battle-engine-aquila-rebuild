// auto-ported from 0044cdb0_vslot14.c (CFeature::vslot14, 294 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x3e0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CFeature;
#define DAT_008553f8 GLOBAL_AT(undefined4*, 0x008553f8)
typedef undefined4 (BEA_THISCALL* CComplexThing__vslot14_t)(uint32_t);
static const bea_guard<CComplexThing__vslot14_t> CComplexThing__vslot14 = {(CComplexThing__vslot14_t)0x004f43d0};
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef undefined4 * (BEA_CDECL* FUN_0050ff10_t)(uint32_t);
static const bea_guard<FUN_0050ff10_t> FUN_0050ff10 = {(FUN_0050ff10_t)0x0050ff10};

static undefined4 BEA_THISCALL ap_0044cdb0(CFeature * this_)
{
  int iVar1;
  int *piVar2;
  uint32_t eax_in = 0;
  int *piVar3;
  int iVar4;

  alignas(16) uint8_t bea_frame_[0x3e0] = {};   // the original stack frame (emulate_frame)
  undefined ** &local_3d8 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x3e0 - 0x3d8);
  undefined4 &local_3d4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3d4);
  undefined4 &local_3d0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3d0);
  undefined4 &local_3cc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3cc);
  undefined4 &local_3c8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3c8);
  undefined4 &local_338 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x338);
  int &local_1c = *reinterpret_cast<int *>(bea_frame_ + 0x3e0 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x18);
  CFeature * &local_14 = *reinterpret_cast<CFeature * *>(bea_frame_ + 0x3e0 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x4);
  if (((byte)this_[0x2c] & 1) == 0) {
    CComplexThing__vslot14(bea_arg((CComplexThing *)this_));
    eax_in = 0;
    if (*(int *)(*(int *)(this_ + 0xe4) + 8) != 0) {
      piVar3 = (int *)FUN_0050ff10(bea_arg(*(int *)(*(int *)(this_ + 0xe4) + 8)));
      eax_in = 0;
      if (piVar3 != (int *)0x0) {
        FUN_0048dcf0(bea_arg(&local_3d8));
        local_3d8 = ((void*)0x005d8c80);
        local_18 = 0;
        local_c = 0;
        local_4 = 0;
        local_8 = 0;
        iVar1 = *(int *)(*(int *)(this_ + 0xe4) + 8);
        iVar4 = 0;
        piVar2 = (int *)*DAT_008553f8;
        DAT_008553f8[2] = (int)piVar2;
        if (piVar2 == (int *)0x0) {
          local_1c = 0;
        }
        else {
          local_1c = *piVar2;
        }
        while (BEA_LOOP_GUARD((local_1c != 0))) {
          if (iVar4 == iVar1) goto LAB_0044ce7b;
          iVar4 = iVar4 + 1;
          piVar2 = *(int **)(DAT_008553f8[2] + 4);
          DAT_008553f8[2] = (int)piVar2;
          if (piVar2 == (int *)0x0) {
            local_1c = 0;
          }
          else {
            local_1c = *piVar2;
          }
        }
        local_1c = 0;
LAB_0044ce7b:
        local_10 = 1;
        local_3d4 = *(undefined4 *)(this_ + 0x1c);
        local_3d0 = *(undefined4 *)(this_ + 0x20);
        local_3cc = *(undefined4 *)(this_ + 0x24);
        local_3c8 = *(undefined4 *)(this_ + 0x28);
        local_338 = *(undefined4 *)(this_ + 0xec);
        local_14 = this_;
        eax_in = bea_vcall<uint32_t>(piVar3, 0x24, &local_3d8);
      }
    }
  }
  return eax_in;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044cdb0, ap_0044cdb0));
