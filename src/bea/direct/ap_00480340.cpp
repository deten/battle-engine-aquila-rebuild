// auto-ported from 00480340_vslot95.c (CHiveBoss::vslot95, 381 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x3f0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CHiveBoss;
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
#define DAT_008553f8 GLOBAL_AT(undefined4*, 0x008553f8)
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef undefined4 * (BEA_CDECL* FUN_0050ff10_t)(uint32_t);
static const bea_guard<FUN_0050ff10_t> FUN_0050ff10 = {(FUN_0050ff10_t)0x0050ff10};

static void BEA_THISCALL ap_00480340(CHiveBoss * this_)
{
  int iVar1;
  int *piVar2;
  CHiveBoss *pCVar3;
  int *piVar4;
  int iVar5;

  alignas(16) uint8_t bea_frame_[0x3f0] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_3e8)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x3f0 - 0x3e8);
  undefined ** &local_3d8 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x3f0 - 0x3d8);
  undefined4 &local_3d4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0x3d4);
  undefined4 &local_3d0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0x3d0);
  float &local_3cc = *reinterpret_cast<float *>(bea_frame_ + 0x3f0 - 0x3cc);
  undefined4 &local_3c8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0x3c8);
  undefined4 &uStack_368 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0x368);
  undefined4 &local_338 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0x338);
  int &local_1c = *reinterpret_cast<int *>(bea_frame_ + 0x3f0 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0x18);
  CHiveBoss * &local_14 = *reinterpret_cast<CHiveBoss * *>(bea_frame_ + 0x3f0 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3f0 - 0x4);
  if (*(int *)(this_ + 0x164) != 0) {
    FUN_0048dcf0(bea_arg(&local_3d8));
    local_3d8 = ((void*)0x005d8c80);
    local_1c = 0;
    local_18 = 0;
    local_14 = (CHiveBoss *)0x0;
    local_10 = 0;
    local_c = 0;
    local_4 = 0;
    local_8 = 0;
    if (*(int **)(this_ + 0x30) == (int *)0x0) {
      pCVar3 = this_ + 0x1c;
    }
    else {
      pCVar3 = (CHiveBoss *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x20, local_3e8,0);
    }
    local_3d4 = *(undefined4 *)pCVar3;
    local_3d0 = *(undefined4 *)(pCVar3 + 4);
    local_3cc = *(float *)(pCVar3 + 8);
    local_3c8 = *(undefined4 *)(pCVar3 + 0xc);
    local_338 = *(undefined4 *)(this_ + 0x138);
    if ((local_3cc < DAT_006fbdfc + 2.0f) &&
       (piVar4 = (int *)FUN_0050ff10(bea_arg(*(undefined4 *)(*(int *)(this_ + 0x164) + 0xec))),
       piVar4 != (int *)0x0)) {
      local_10 = 0;
      local_c = 0;
      uStack_368 = 0xffffffff;
      iVar1 = *(int *)(*(int *)(this_ + 0x164) + 0xec);
      iVar5 = 0;
      piVar2 = (int *)*DAT_008553f8;
      DAT_008553f8[2] = (int)piVar2;
      if (piVar2 == (int *)0x0) {
        local_1c = 0;
      }
      else {
        local_1c = *piVar2;
      }
      while (BEA_LOOP_GUARD((local_1c != 0))) {
        if (iVar5 == iVar1) goto LAB_0048047f;
        iVar5 = iVar5 + 1;
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
LAB_0048047f:
      local_18 = 2;
      if (local_3cc <= DAT_006fbdfc) {
        local_18 = 0;
      }
      local_14 = this_;
      bea_vcall<uint32_t>(piVar4, 0x24, &local_3d8);
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00480340, ap_00480340));
