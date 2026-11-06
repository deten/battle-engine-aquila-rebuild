// auto-ported from 0048b010_FUN_0048b010.c (FUN_0048b010, 1500 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x400: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define s_C__dev_ONSLAUGHT2_InfluenceMap_c_0062d61c ((char*)0x0062d61c)
#define s_C__dev_ONSLAUGHT2_InfluenceMap_h_0062d5f8 ((char*)0x0062d5f8)
#define s_Loading_influence_map_0062d640 ((char*)0x0062d640)
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef uint32_t (BEA_THISCALL* FUN_0042b500_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042b500_t> FUN_0042b500 = {(FUN_0042b500_t)0x0042b500};
typedef undefined4 (BEA_THISCALL* FUN_0042b800_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b800_t> FUN_0042b800 = {(FUN_0042b800_t)0x0042b800};
typedef uint32_t (BEA_THISCALL* FUN_0048b620_t)(uint32_t);
static const bea_guard<FUN_0048b620_t> FUN_0048b620 = {(FUN_0048b620_t)0x0048b620};
typedef uint32_t (BEA_THISCALL* FUN_0048b8e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0048b8e0_t> FUN_0048b8e0 = {(FUN_0048b8e0_t)0x0048b8e0};
typedef uint32_t (BEA_THISCALL* FUN_0048bf70_t)(uint32_t);
static const bea_guard<FUN_0048bf70_t> FUN_0048bf70 = {(FUN_0048bf70_t)0x0048bf70};
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef void * (BEA_THISCALL* FUN_004f3e10_t)(uint32_t);
static const bea_guard<FUN_004f3e10_t> FUN_004f3e10 = {(FUN_004f3e10_t)0x004f3e10};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_0048b010(void * this_, void *param_1)
{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *this_00;
  alignas(16) uint8_t bea_frame_[0x400] = {};   // the original stack frame (emulate_frame)
  int &iStack_3fc = *reinterpret_cast<int *>(bea_frame_ + 0x400 - 0x3fc);
  int &iStack_3f8 = *reinterpret_cast<int *>(bea_frame_ + 0x400 - 0x3f8);
  int &iStack_3f4 = *reinterpret_cast<int *>(bea_frame_ + 0x400 - 0x3f4);
  int &iStack_3f0 = *reinterpret_cast<int *>(bea_frame_ + 0x400 - 0x3f0);
  int &iStack_3ec = *reinterpret_cast<int *>(bea_frame_ + 0x400 - 0x3ec);
  int &iStack_3e8 = *reinterpret_cast<int *>(bea_frame_ + 0x400 - 0x3e8);
  int &iStack_3e4 = *reinterpret_cast<int *>(bea_frame_ + 0x400 - 0x3e4);
  int &iStack_3e0 = *reinterpret_cast<int *>(bea_frame_ + 0x400 - 0x3e0);
  int &iStack_3dc = *reinterpret_cast<int *>(bea_frame_ + 0x400 - 0x3dc);
  int &iStack_3d8 = *reinterpret_cast<int *>(bea_frame_ + 0x400 - 0x3d8);
  void * &local_3d4 = *reinterpret_cast<void * *>(bea_frame_ + 0x400 - 0x3d4);
  int * &piStack_3d0 = *reinterpret_cast<int * *>(bea_frame_ + 0x400 - 0x3d0);
  uint &uStack_3cc = *reinterpret_cast<uint *>(bea_frame_ + 0x400 - 0x3cc);
  undefined1 (&auStack_3c8)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x400 - 0x3c8);
  int &iStack_3c4 = *reinterpret_cast<int *>(bea_frame_ + 0x400 - 0x3c4);
  int &iStack_3c0 = *reinterpret_cast<int *>(bea_frame_ + 0x400 - 0x3c0);
  undefined4 &uStack_3bc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x400 - 0x3bc);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x400 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x400 - 0x4);
  uStack_4 = 0xffffffff;
  pvVar1 = (void *)((int)this_ + 8);
  local_3d4 = this_;
  piVar3 = (int *)FUN_00406d20(bea_arg(pvVar1));
  while (BEA_LOOP_GUARD((piVar3 != (int *)0x0))) {
    FUN_004e5bd0(bea_arg(pvVar1), bea_arg(piVar3));
    bea_vcall<uint32_t>(piVar3, 0x8);
    piVar3 = (int *)FUN_00406d20(bea_arg(pvVar1));
  }
  this_00 = (void *)((int)this_ + 0x18);
  iVar4 = FUN_00406d20(bea_arg(this_00));
  while (BEA_LOOP_GUARD((iVar4 != 0))) {
    FUN_004e5bd0(bea_arg(this_00), bea_arg(iVar4));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar4));
    iVar4 = FUN_00406d20(bea_arg(this_00));
  }
  FUN_0042b500(bea_arg(&DAT_00663498), bea_arg(s_Loading_influence_map_0062d640));
  FUN_00548570(bea_arg(param_1), bea_arg(&uStack_3cc), bea_arg(2));
  if ((uStack_3cc & 0xffff) == 0) {
    FUN_00548570(bea_arg(param_1), bea_arg(&iStack_3f4), bea_arg(4));
    for (; BEA_LOOP_GUARD((iStack_3f4 != 0)); iStack_3f4 = iStack_3f4 + -1) {
      FUN_00548570(bea_arg(param_1), bea_arg(&iStack_3e0), bea_arg(4));
      FUN_00548570(bea_arg(param_1), bea_arg(&iStack_3fc), bea_arg(4));
      FUN_00548570(bea_arg(param_1), bea_arg(&iStack_3e4), bea_arg(4));
      piVar3 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc4), bea_arg(0x20), bea_arg(s_C__dev_ONSLAUGHT2_InfluenceMap_c_0062d61c), bea_arg(0x46));
      uStack_4 = 0;
      piStack_3d0 = piVar3;
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        iStack_3ec = iStack_3e4;
        iStack_3dc = iStack_3fc;
        iStack_3e8 = iStack_3e0;
        FUN_004f3e10(bea_arg(piVar3));
        (*(uint8_t*)((char*)&uStack_4 + 0)) = 1;
        FUN_004e5840(bea_arg(piVar3 + 0x1f));
        piVar3[0x23] = iStack_3e8;
        uStack_4 = CONCAT31(((*(uint32_t*)((char*)&uStack_4) >> 8) & 0xffffffu),2);
        *piVar3 = (int)((void*)0x005dc050);
        piVar3[2] = (int)((void*)0x005dbfd8);
        piVar3[0x24] = iStack_3dc;
        piVar3[0x25] = iStack_3ec;
        piVar3[0x26] = 0;
        piVar3[0x2f] = 0;
        piVar3[0x2d] = 0;
        FUN_0048b620(bea_arg(piVar3));
      }
      uStack_4 = 0xffffffff;
      FUN_0048dcf0(bea_arg(auStack_3c8));
      iStack_3c4 = iStack_3e0;
      iStack_3c0 = iStack_3fc;
      bea_vcall<uint32_t>(piVar3, 0x24, auStack_3c8);
      FUN_004e5b20(bea_arg(pvVar1), bea_arg(piVar3));
    }
    FUN_00548570(bea_arg(param_1), bea_arg(&iStack_3f0), bea_arg(4));
    for (; BEA_LOOP_GUARD((iStack_3f0 != 0)); iStack_3f0 = iStack_3f0 + -1) {
      FUN_00548570(bea_arg(param_1), bea_arg(&iStack_3e4), bea_arg(4));
      FUN_00548570(bea_arg(param_1), bea_arg(&iStack_3ec), bea_arg(4));
      iVar6 = iStack_3e4;
      iVar4 = 0;
      iStack_3f8 = FUN_00406d20(bea_arg(pvVar1));
      iVar5 = iStack_3ec;
      while (BEA_LOOP_GUARD((iStack_3f8 != 0))) {
        if (iVar4 == iVar6) goto LAB_0048b502;
        iVar4 = iVar4 + 1;
        piVar3 = *(int **)(*(int *)((int)this_ + 0x10) + 4);
        *(int **)((int)this_ + 0x10) = piVar3;
        if (piVar3 == (int *)0x0) {
          iStack_3f8 = 0;
        }
        else {
          iStack_3f8 = *piVar3;
        }
      }
      iStack_3f8 = 0;
LAB_0048b502:
      iVar6 = 0;
      iVar4 = FUN_00406d20(bea_arg(pvVar1));
      while (BEA_LOOP_GUARD((iVar4 != 0))) {
        if (iVar6 == iVar5) goto LAB_0048b537;
        iVar6 = iVar6 + 1;
        piVar3 = *(int **)(*(int *)((int)this_ + 0x10) + 4);
        *(int **)((int)this_ + 0x10) = piVar3;
        if (piVar3 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *piVar3;
        }
      }
      iVar4 = 0;
LAB_0048b537:
      piVar3 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x20), bea_arg(s_C__dev_ONSLAUGHT2_InfluenceMap_h_0062d5f8), bea_arg(0x73));
      iVar5 = iStack_3f8;
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        *piVar3 = iVar4;
        piVar3[1] = 1;
      }
      FUN_004e5a80(bea_arg((void *)(iStack_3f8 + 0x7c)), bea_arg(piVar3));
      piVar3 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x20), bea_arg(s_C__dev_ONSLAUGHT2_InfluenceMap_h_0062d5f8), bea_arg(0x73));
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        *piVar3 = iVar5;
        piVar3[1] = 1;
      }
      FUN_004e5a80(bea_arg((void *)(iVar4 + 0x7c)), bea_arg(piVar3));
    }
  }
  else if ((uStack_3cc & 0xffff) == 1) {
    FUN_00548570(bea_arg(param_1), bea_arg(&iStack_3f4), bea_arg(4));
    for (; BEA_LOOP_GUARD((iStack_3f4 != 0)); iStack_3f4 = iStack_3f4 + -1) {
      FUN_00548570(bea_arg(param_1), bea_arg(&iStack_3fc), bea_arg(4));
      FUN_00548570(bea_arg(param_1), bea_arg(&iStack_3e0), bea_arg(4));
      FUN_00548570(bea_arg(param_1), bea_arg(&iStack_3ec), bea_arg(4));
      FUN_00548570(bea_arg(param_1), bea_arg(&iStack_3d8), bea_arg(4));
      piVar3 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc4), bea_arg(0x20), bea_arg(s_C__dev_ONSLAUGHT2_InfluenceMap_c_0062d61c), bea_arg(0x74));
      uStack_4 = 3;
      piStack_3d0 = piVar3;
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        iStack_3e8 = iStack_3d8;
        iStack_3dc = iStack_3ec;
        iStack_3f8 = iStack_3fc;
        iStack_3e4 = iStack_3e0;
        FUN_004f3e10(bea_arg(piVar3));
        (*(uint8_t*)((char*)&uStack_4 + 0)) = 4;
        FUN_004e5840(bea_arg(piVar3 + 0x1f));
        piVar3[0x23] = iStack_3f8;
        piVar3[0x24] = iStack_3e4;
        piVar3[0x25] = iStack_3dc;
        uStack_4 = CONCAT31(((*(uint32_t*)((char*)&uStack_4) >> 8) & 0xffffffu),5);
        *piVar3 = (int)((void*)0x005dc050);
        piVar3[2] = (int)((void*)0x005dbfd8);
        piVar3[0x26] = iStack_3e8;
        piVar3[0x2f] = 0;
        piVar3[0x2d] = 0;
        FUN_0048b620(bea_arg(piVar3));
      }
      uStack_4 = 0xffffffff;
      FUN_0048dcf0(bea_arg(auStack_3c8));
      iStack_3c4 = iStack_3fc;
      iStack_3c0 = iStack_3e0;
      bea_vcall<uint32_t>(piVar3, 0x24, auStack_3c8);
      FUN_004e5b20(bea_arg(pvVar1), bea_arg(piVar3));
    }
    FUN_00548570(bea_arg(param_1), bea_arg(&iStack_3f0), bea_arg(4));
    if (iStack_3f0 != 0) {
      do {
        FUN_00548570(bea_arg(param_1), bea_arg(&iStack_3e8), bea_arg(4));
        FUN_00548570(bea_arg(param_1), bea_arg(&iStack_3dc), bea_arg(4));
        FUN_00548570(bea_arg(param_1), bea_arg(&iStack_3f8), bea_arg(4));
        iVar5 = iStack_3e8;
        iVar4 = 0;
        iStack_3fc = FUN_00406d20(bea_arg(pvVar1));
        iVar6 = iStack_3dc;
        while (BEA_LOOP_GUARD((iStack_3fc != 0))) {
          if (iVar4 == iVar5) goto LAB_0048b2a7;
          iVar4 = iVar4 + 1;
          piVar3 = *(int **)(*(int *)((int)this_ + 0x10) + 4);
          *(int **)((int)this_ + 0x10) = piVar3;
          if (piVar3 == (int *)0x0) {
            iStack_3fc = 0;
          }
          else {
            iStack_3fc = *piVar3;
          }
        }
        iStack_3fc = 0;
LAB_0048b2a7:
        iVar5 = 0;
        iVar4 = FUN_00406d20(bea_arg(pvVar1));
        iVar2 = iStack_3f8;
        while (BEA_LOOP_GUARD((iVar4 != 0))) {
          if (iVar5 == iVar6) goto LAB_0048b2dc;
          iVar5 = iVar5 + 1;
          piVar3 = *(int **)(*(int *)((int)this_ + 0x10) + 4);
          *(int **)((int)this_ + 0x10) = piVar3;
          if (piVar3 == (int *)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *piVar3;
          }
        }
        iVar4 = 0;
LAB_0048b2dc:
        piVar3 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x20), bea_arg(s_C__dev_ONSLAUGHT2_InfluenceMap_h_0062d5f8), bea_arg(0x73));
        if (piVar3 == (int *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          *piVar3 = iVar4;
          piVar3[1] = iVar2;
        }
        FUN_004e5a80(bea_arg((void *)(iStack_3fc + 0x7c)), bea_arg(piVar3));
        iVar5 = iStack_3f8;
        piVar3 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x20), bea_arg(s_C__dev_ONSLAUGHT2_InfluenceMap_h_0062d5f8), bea_arg(0x73));
        if (piVar3 == (int *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3[1] = iVar5;
          *piVar3 = iStack_3fc;
        }
        FUN_004e5a80(bea_arg((void *)(iVar4 + 0x7c)), bea_arg(piVar3));
        iStack_3f0 = iStack_3f0 + -1;
      } while (BEA_LOOP_GUARD((iStack_3f0 != 0)));
      iStack_3f0 = 0;
    }
  }
  pvVar1 = local_3d4;
  FUN_0048b8e0(bea_arg(local_3d4), bea_arg(0));
  FUN_0048bf70(bea_arg(pvVar1));
  return FUN_0042b800(bea_arg(&DAT_00663498), bea_arg(s_Loading_influence_map_0062d640), bea_arg(1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048b010, ap_0048b010));
