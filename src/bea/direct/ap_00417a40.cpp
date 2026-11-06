// auto-ported from 00417a40_vslot50.c (CBuilding::vslot50, 934 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x430: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CBuilding;
typedef char CUnit;
typedef char fStack_40c;
typedef char fStack_410;
typedef char fStack_414;
typedef char iStack_3f8;
#define DAT_008553f8 GLOBAL_AT(int, 0x008553f8)
#define DAT_0082b400 GLOBAL_AT(int, 0x0082b400)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_00660530 GLOBAL_AT(int, 0x00660530)
#define DAT_00660534 GLOBAL_AT(int, 0x00660534)
#define DAT_00660538 GLOBAL_AT(int, 0x00660538)
#define DAT_0066053c GLOBAL_AT(int, 0x0066053c)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define s_Generic_Mesh_00623b94 ((char*)0x00623b94)
typedef undefined4 (BEA_THISCALL* CUnit__vslot50_t)(uint32_t);
static const bea_guard<CUnit__vslot50_t> CUnit__vslot50 = {(CUnit__vslot50_t)0x004fd140};
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef uint32_t (BEA_THISCALL* FUN_004097a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004097a0_t> FUN_004097a0 = {(FUN_004097a0_t)0x004097a0};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef uint32_t (BEA_THISCALL* FUN_004cb040_t)(uint32_t);
static const bea_guard<FUN_004cb040_t> FUN_004cb040 = {(FUN_004cb040_t)0x004cb040};
typedef uint32_t (BEA_THISCALL* FUN_004cb050_t)(uint32_t);
static const bea_guard<FUN_004cb050_t> FUN_004cb050 = {(FUN_004cb050_t)0x004cb050};
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};
typedef int (BEA_THISCALL* FUN_004cd7a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cd7a0_t> FUN_004cd7a0 = {(FUN_004cd7a0_t)0x004cd7a0};
typedef uint32_t (BEA_THISCALL* FUN_004fcfe0_t)(uint32_t);
static const bea_guard<FUN_004fcfe0_t> FUN_004fcfe0 = {(FUN_004fcfe0_t)0x004fcfe0};
typedef undefined4 * (BEA_CDECL* FUN_0050ff10_t)(uint32_t);
static const bea_guard<FUN_0050ff10_t> FUN_0050ff10 = {(FUN_0050ff10_t)0x0050ff10};
typedef int (BEA_CDECL* _rand_t)(void);
static const bea_guard<_rand_t> _rand = {(_rand_t)0x0055dbfe};

static undefined4 BEA_THISCALL ap_00417a40(CBuilding * this_)
{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;

  alignas(16) uint8_t bea_frame_[0x430] = {};   // the original stack frame (emulate_frame)
  int &local_424 = *reinterpret_cast<int *>(bea_frame_ + 0x430 - 0x424);
  float &local_418 = *reinterpret_cast<float *>(bea_frame_ + 0x430 - 0x418);
  float &fStack_414 = *reinterpret_cast<float *>(bea_frame_ + 0x430 - 0x414);
  float &fStack_410 = *reinterpret_cast<float *>(bea_frame_ + 0x430 - 0x410);
  float &fStack_40c = *reinterpret_cast<float *>(bea_frame_ + 0x430 - 0x40c);
  undefined4 &uStack_408 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x408);
  undefined1 (&auStack_404)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x430 - 0x404);
  void * &pvStack_400 = *reinterpret_cast<void * *>(bea_frame_ + 0x430 - 0x400);
  float &fStack_3fc = *reinterpret_cast<float *>(bea_frame_ + 0x430 - 0x3fc);
  int &iStack_3f8 = *reinterpret_cast<int *>(bea_frame_ + 0x430 - 0x3f8);
  float &fStack_3f4 = *reinterpret_cast<float *>(bea_frame_ + 0x430 - 0x3f4);
  float &fStack_3f0 = *reinterpret_cast<float *>(bea_frame_ + 0x430 - 0x3f0);
  float &fStack_3ec = *reinterpret_cast<float *>(bea_frame_ + 0x430 - 0x3ec);
  undefined ** &local_3e4 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x430 - 0x3e4);
  undefined4 &local_3e0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x3e0);
  undefined4 &local_3dc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x3dc);
  undefined4 &local_3d8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x3d8);
  undefined4 &local_3d4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x3d4);
  undefined4 &local_344 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x344);
  int &local_28 = *reinterpret_cast<int *>(bea_frame_ + 0x430 - 0x28);
  undefined4 &local_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x24);
  undefined4 &local_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x20);
  undefined4 &local_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x430 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x4);
  iVar2 = CUnit__vslot50(bea_arg((CUnit *)this_));
  uVar4 = 0;
  if (iVar2 != 0) {
    FUN_004fcfe0(bea_arg(this_));
    if (*(int *)(this_ + 0x178) == 0) {
      piVar3 = (int *)FUN_0050ff10(bea_arg(*(undefined4 *)(*(int *)(this_ + 0x164) + 0xe8)));
      if (piVar3 != (int *)0x0) {
        FUN_0048dcf0(bea_arg(&local_3e4));
        local_3e4 = ((void*)0x005d8c80);
        local_28 = 0;
        iVar2 = *(int *)(*(int *)(this_ + 0x164) + 0xe8);
        iVar8 = 0;
        local_28 = FUN_00406d20(bea_arg(DAT_008553f8));
        while (BEA_LOOP_GUARD((local_28 != 0))) {
          if (iVar8 == iVar2) goto LAB_00417b29;
          iVar8 = iVar8 + 1;
          piVar1 = *(int **)(*(int *)((int)DAT_008553f8 + 8) + 4);
          *(int **)((int)DAT_008553f8 + 8) = piVar1;
          if (piVar1 == (int *)0x0) {
            local_28 = 0;
          }
          else {
            local_28 = *piVar1;
          }
        }
        local_28 = 0;
LAB_00417b29:
        local_3e0 = *(undefined4 *)(this_ + 0x1c);
        local_3dc = *(undefined4 *)(this_ + 0x20);
        local_3d8 = *(undefined4 *)(this_ + 0x24);
        local_3d4 = *(undefined4 *)(this_ + 0x28);
        local_344 = *(undefined4 *)(this_ + 0x138);
        bea_vcall<uint32_t>(piVar3, 0x24, &local_3e4);
      }
      *(undefined4 *)(this_ + 0xf8) = 0xbf800000;
      iVar2 = *(int *)(*(int *)(this_ + 0x164) + 0xe8);
      if (iVar2 != -1) {
        iVar9 = 0;
        iVar8 = FUN_00406d20(bea_arg(DAT_008553f8));
        while (BEA_LOOP_GUARD((iVar8 != 0))) {
          if (iVar9 == iVar2) goto LAB_00417bba;
          iVar9 = iVar9 + 1;
          piVar3 = *(int **)(*(int *)((int)DAT_008553f8 + 8) + 4);
          *(int **)((int)DAT_008553f8 + 8) = piVar3;
          if (piVar3 == (int *)0x0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *piVar3;
          }
        }
        iVar8 = 0;
LAB_00417bba:
        uVar4 = FUN_004cd7a0(bea_arg(&DAT_0082b400), bea_arg(*(undefined4 *)(iVar8 + 0x30)));
        FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(uVar4), bea_arg(0), bea_arg(*(undefined4 *)(this_ + 0x1c)), bea_arg(*(undefined4 *)(this_ + 0x20)), bea_arg(*(undefined4 *)(this_ + 0x24)), bea_arg(*(undefined4 *)(this_ + 0x28)), bea_arg(0), bea_arg(0));
      }
      uVar4 = FUN_004cd7a0(bea_arg(&DAT_0082b400), bea_arg(s_Generic_Mesh_00623b94));
      local_424 = 0x28;
      do {
        pvStack_400 = (void *)0x0;
        FUN_004cb040(bea_arg(auStack_404));
        FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(uVar4), bea_arg(auStack_404), bea_arg(DAT_00660530), bea_arg(DAT_00660534), bea_arg(DAT_00660538), bea_arg(DAT_0066053c), bea_arg(0), bea_arg(0));
        uVar5 = _rand();
        uVar6 = _rand();
        uVar7 = _rand();
        local_418 = *(float *)(this_ + 0x1c);
        iStack_3f8 = (uVar7 & 0xff) - 0x80;
        fStack_3fc = *(float *)(this_ + 0x20);
        fStack_414 = (float)iStack_3f8 * 0.0003125f;
        fStack_410 = (float)(int)((uVar6 & 0xff) - 0x80) * 0.0003125f;
        fStack_40c = (float)(int)((uVar5 & 0xff) - 0x80) * 0.0003125f;
        fStack_3ec = (*(float *)(this_ + 0x24) - 1.0f) + fStack_40c * 20.0f;
        fStack_3f0 = fStack_3fc + fStack_410 * 20.0f;
        fStack_3f4 = local_418 + fStack_414 * 20.0f;
        if (((pvStack_400 != (void *)0x0) &&
            (FUN_004097a0(bea_arg(pvStack_400), bea_arg(&fStack_3f4)), pvStack_400 != (void *)0x0)) &&
           (iVar2 = *(int *)((int)pvStack_400 + 0xa8), iVar2 != 0)) {
          fStack_40c = (fStack_40c + fStack_40c) - 0.04f;
          *(float *)(iVar2 + 0x48) = fStack_414;
          *(float *)(iVar2 + 0x4c) = fStack_410;
          *(float *)(iVar2 + 0x50) = fStack_40c;
          *(undefined4 *)(iVar2 + 0x54) = uStack_408;
          if (*(int **)(this_ + 0x30) != (int *)0x0) {
            iVar8 = bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x28);
            *(int *)(iVar2 + 0x8c) = iVar8;
            *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(iVar8 + 0x164);
          }
        }
        FUN_004cb050(bea_arg(auStack_404));
        local_424 = local_424 + -1;
      } while (BEA_LOOP_GUARD((local_424 != 0)));
    }
    if (*(int *)(this_ + 0x74) != 0) {
      local_418 = -1.0f;
      FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(5000), bea_arg(this_), bea_arg(&local_418), bea_arg(0), bea_arg(0), bea_arg(0));
    }
    uVar4 = 1;
  }
  return uVar4;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00417a40, ap_00417a40));
