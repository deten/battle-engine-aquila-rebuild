// auto-ported from 004b27a0_FUN_004b27a0.c (FUN_004b27a0, 2514 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0063003b GLOBAL_AT(char, 0x0063003b)
#define DAT_0063003a GLOBAL_AT(char, 0x0063003a)
#define DAT_00630039 GLOBAL_AT(char, 0x00630039)
#define DAT_00630038 GLOBAL_AT(char, 0x00630038)
#define DAT_0063000f GLOBAL_AT(char, 0x0063000f)
#define DAT_0063000e GLOBAL_AT(char, 0x0063000e)
#define DAT_0063000d GLOBAL_AT(char, 0x0063000d)
#define DAT_0063000c GLOBAL_AT(char, 0x0063000c)
#define DAT_00704da8 GLOBAL_AT(int, 0x00704da8)
#define DAT_00704d5c GLOBAL_AT(int, 0x00704d5c)
#define DAT_00704d58 GLOBAL_AT(int, 0x00704d58)
#define DAT_00704da0 GLOBAL_AT(int, 0x00704da0)
#define s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70 ((char*)0x0062fe70)
#define s_Size__d__sizeof__d_0062fd48 ((char*)0x0062fd48)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef uint (BEA_THISCALL* FUN_00423910_t)(uint32_t);
static const bea_guard<FUN_00423910_t> FUN_00423910 = {(FUN_00423910_t)0x00423910};
typedef bool (BEA_THISCALL* FUN_00423960_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00423960_t> FUN_00423960 = {(FUN_00423960_t)0x00423960};
typedef undefined4 (BEA_THISCALL* FUN_004ae860_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004ae860_t> FUN_004ae860 = {(FUN_004ae860_t)0x004ae860};
typedef int (BEA_CDECL* FUN_004b3180_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004b3180_t> FUN_004b3180 = {(FUN_004b3180_t)0x004b3180};
typedef int (BEA_CDECL* FUN_004d59f0_t)(uint32_t);
static const bea_guard<FUN_004d59f0_t> FUN_004d59f0 = {(FUN_004d59f0_t)0x004d59f0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_THISCALL* FUN_0054e160_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0054e160_t> FUN_0054e160 = {(FUN_0054e160_t)0x0054e160};

static void * BEA_CDECL ap_004b27a0(int *param_1, void *param_2, int param_3)
{
  void *this_local;
  int *this_00;
  void *this_01;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  int &local_18 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x18);
  int &local_14 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x14);
  int &local_10 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x20 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x4);
  this_01 = param_2;
  this_00 = param_1;
  iVar7 = 0;
  this_local = *(void **)((int)param_2 + 0x138);
  uVar3 = *(undefined4 *)((int)param_2 + 0xfc);
  *(undefined4 *)((int)param_2 + 0xfc) = 0;
  FUN_00423910(bea_arg(param_1));
  FUN_00423910(bea_arg(this_00));
  if (*this_00 != 0x13c) {
    CRenderThing__vslot3(s_Size__d__sizeof__d_0062fd48);
  }
  FUN_00423960(bea_arg(this_00), bea_arg(this_01), bea_arg(*this_00), bea_arg(1));
  *(int *)((int)this_01 + 0x128) = param_3;
  FUN_004ae860(bea_arg(this_01), bea_arg(*(undefined4 *)((int)this_01 + 0xa8)), bea_arg(*(undefined4 *)((int)this_01 + 0xac)), bea_arg(*(undefined4 *)((int)this_01 + 0xb0)), bea_arg(*(undefined4 *)((int)this_01 + 0xb8)), bea_arg(*(undefined4 *)((int)this_01 + 0xb4)));
  if (0 < *(int *)((int)this_01 + 0xb8)) {
    uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_01 + 0xb8)), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x979));
    *(undefined4 *)((int)this_01 + 0xc4) = uVar1;
  }
  iVar6 = *(int *)((int)this_01 + 0xbc);
  if (0 < iVar6) {
    if (*(int *)((int)this_01 + 200) != 0) {
      iVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar6 << 4), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x97f));
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        param_2 = (void *)(iVar6 + -1);
      }
      *(int *)((int)this_01 + 200) = iVar2;
    }
    if (*(int *)((int)this_01 + 0xcc) != 0) {
      uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_01 + 0xbc) << 2), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x981));
      *(undefined4 *)((int)this_01 + 0xcc) = uVar1;
    }
    CRenderThing__vslot3(&DAT_009c3df0);
    CRenderThing__vslot3(&DAT_009c3df0);
  }
  if (0 < *(int *)((int)this_01 + 0xc0)) {
    if (*(int *)((int)this_01 + 0xd0) != 0) {
      uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_01 + 0xc0) << 2), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x98a));
      *(undefined4 *)((int)this_01 + 0xd0) = uVar1;
    }
    if (0 < *(int *)((int)this_01 + 0xac)) {
      if (*(int *)((int)this_01 + 0xd4) != 0) {
        uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_01 + 0xac) << 2), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x98e));
        *(undefined4 *)((int)this_01 + 0xd4) = uVar1;
      }
      if (*(int *)((int)this_01 + 0xd8) != 0) {
        uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_01 + 0xac) << 2), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x990));
        *(undefined4 *)((int)this_01 + 0xd8) = uVar1;
      }
      iVar6 = 0;
      if (0 < *(int *)((int)this_01 + 0xac)) {
        do {
          uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_01 + 0xc0) << 2), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x993));
          *(undefined4 *)(*(int *)((int)this_01 + 0xd4) + iVar6 * 4) = uVar1;
          uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x994));
          iVar6 = iVar6 + 1;
          *(undefined4 *)(*(int *)((int)this_01 + 0xd8) + -4 + iVar6 * 4) = uVar1;
        } while (BEA_LOOP_GUARD((iVar6 < *(int *)((int)this_01 + 0xac))));
      }
      CRenderThing__vslot3(&DAT_009c3df0);
      CRenderThing__vslot3(&DAT_009c3df0);
    }
  }
  if (0 < *(int *)((int)this_01 + 0xa8)) {
    FUN_00423910(bea_arg(this_00));
    FUN_00423960(bea_arg(this_00), bea_arg(&param_2), bea_arg(4), bea_arg(1));
    if (param_2 != (void *)0x60) {
      CRenderThing__vslot3(s_Size__d__sizeof__d_0062fd48);
    }
    iVar6 = 0;
    if (0 < *(int *)((int)this_01 + 0xa8)) {
      do {
        FUN_00423960(bea_arg(this_00), bea_arg(iVar7 + *(int *)((int)this_01 + 0x134)), bea_arg(param_2), bea_arg(1));
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x60;
      } while (BEA_LOOP_GUARD((iVar6 < *(int *)((int)this_01 + 0xa8))));
    }
  }
  if (0 < *(int *)((int)this_01 + 0xb0)) {
    FUN_00423910(bea_arg(this_00));
    iVar7 = 0;
    if (0 < *(int *)((int)this_01 + 0xb0)) {
      iVar6 = 0;
      do {
        FUN_00423960(bea_arg(this_00), bea_arg(&local_18), bea_arg(4), bea_arg(3));
        iVar6 = iVar6 + 0xc;
        *(int *)(*(int *)((int)this_01 + 0x80) + -0xc + iVar6) =
             local_18 * 0x60 + *(int *)((int)this_01 + 0x134);
        *(int *)(*(int *)((int)this_01 + 0x80) + -8 + iVar6) =
             local_14 * 0x60 + *(int *)((int)this_01 + 0x134);
        iVar7 = iVar7 + 1;
        *(int *)(*(int *)((int)this_01 + 0x80) + -4 + iVar6) =
             local_10 * 0x60 + *(int *)((int)this_01 + 0x134);
      } while (BEA_LOOP_GUARD((iVar7 < *(int *)((int)this_01 + 0xb0))));
    }
  }
  if (0 < *(int *)((int)this_01 + 0xac)) {
    FUN_00423910(bea_arg(this_00));
    iVar7 = 0;
    if (0 < *(int *)((int)this_01 + 0xb4)) {
      do {
        FUN_00423960(bea_arg(this_00), bea_arg(*(undefined4 *)(*(int *)((int)this_01 + 0x84) + iVar7 * 4)), bea_arg(0x10), bea_arg(*(undefined4 *)((int)this_01 + 0xac)));
        iVar7 = iVar7 + 1;
      } while (BEA_LOOP_GUARD((iVar7 < *(int *)((int)this_01 + 0xb4))));
    }
  }
  iVar7 = param_3;
  if (0 < *(int *)((int)this_01 + 0x90)) {
    FUN_00423910(bea_arg(this_00));
    uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_01 + 0x90) << 2), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0x9de));
    iVar7 = param_3;
    *(undefined4 *)((int)this_01 + 0x94) = uVar1;
    iVar6 = 0;
    if (0 < *(int *)((int)this_01 + 0x90)) {
      do {
        FUN_00423960(bea_arg(this_00), bea_arg(&param_2), bea_arg(4), bea_arg(1));
        iVar6 = iVar6 + 1;
        *(undefined4 *)(*(int *)((int)this_01 + 0x94) + -4 + iVar6 * 4) =
             *(undefined4 *)(*(int *)(iVar7 + 0x160) + (int)param_2 * 4);
      } while (BEA_LOOP_GUARD((iVar6 < *(int *)((int)this_01 + 0x90))));
    }
  }
  if (*(int *)((int)this_01 + 0x98) != 0) {
    FUN_00423910(bea_arg(this_00));
    FUN_00423960(bea_arg(this_00), bea_arg(&param_2), bea_arg(4), bea_arg(1));
    *(undefined4 *)((int)this_01 + 0x98) =
         *(undefined4 *)(*(int *)(iVar7 + 0x160) + (int)param_2 * 4);
  }
  if (*(int *)((int)this_01 + 0x9c) != 0) {
    FUN_00423910(bea_arg(this_00));
    FUN_00423960(bea_arg(this_00), bea_arg(&param_2), bea_arg(4), bea_arg(1));
    *(undefined4 *)((int)this_01 + 0x9c) =
         *(undefined4 *)(*(int *)(iVar7 + 0x160) + (int)param_2 * 4);
  }
  FUN_00423910(bea_arg(this_00));
  uVar3 = FUN_004b3180(bea_arg(this_00), bea_arg(uVar3));
  *(undefined4 *)((int)this_01 + 0xfc) = uVar3;
  if (0 < *(int *)((int)this_01 + 0xb8)) {
    FUN_00423910(bea_arg(this_00));
    FUN_00423960(bea_arg(this_00), bea_arg(*(undefined4 *)((int)this_01 + 0xc4)), bea_arg(1), bea_arg(*(undefined4 *)((int)this_01 + 0xb8)));
  }
  if (0 < *(int *)((int)this_01 + 0xbc)) {
    if ((*(int *)((int)this_01 + 0x10c) != 0) &&
       (iVar6 = FUN_00423910(bea_arg(this_00)),
       iVar6 == ((DAT_0063003b * 0x100 + (int)DAT_0063003a) * 0x100 + (int)DAT_00630039) * 0x100 +
                (int)DAT_00630038)) {
      iVar7 = *(int *)((int)this_01 + 0xbc);
      pvVar4 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar7 * 0x30), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0xa2a));
      param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = pvVar4;
        if (-1 < iVar7 + -1) {
          do {
            FUN_004011b0(bea_arg(pvVar4), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
            pvVar4 = (void *)((int)pvVar4 + 0x30);
            iVar7 = iVar7 + -1;
            pvVar5 = param_2;
          } while (BEA_LOOP_GUARD((iVar7 != 0)));
        }
      }
      *(void **)((int)this_01 + 0x10c) = pvVar5;
      FUN_00423960(bea_arg(this_00), bea_arg(pvVar5), bea_arg(0x30), bea_arg(*(undefined4 *)((int)this_01 + 0xbc)));
      iVar7 = param_3;
    }
    if (*(int *)((int)this_01 + 200) != 0) {
      FUN_00423910(bea_arg(this_00));
      FUN_00423960(bea_arg(this_00), bea_arg(*(undefined4 *)((int)this_01 + 200)), bea_arg(0x10), bea_arg(*(undefined4 *)((int)this_01 + 0xbc)));
    }
    if (*(int *)((int)this_01 + 0xcc) != 0) {
      FUN_00423910(bea_arg(this_00));
      FUN_00423960(bea_arg(this_00), bea_arg(*(undefined4 *)((int)this_01 + 0xcc)), bea_arg(4), bea_arg(*(undefined4 *)((int)this_01 + 0xbc)));
    }
  }
  if (0 < *(int *)((int)this_01 + 0xc0)) {
    FUN_00423910(bea_arg(this_00));
    iVar6 = 0;
    if (0 < *(int *)((int)this_01 + 0xc0)) {
      do {
        FUN_00423960(bea_arg(this_00), bea_arg(&param_2), bea_arg(4), bea_arg(1));
        iVar6 = iVar6 + 1;
        *(undefined4 *)(*(int *)((int)this_01 + 0xd0) + -4 + iVar6 * 4) =
             *(undefined4 *)(*(int *)(iVar7 + 0x160) + (int)param_2 * 4);
      } while (BEA_LOOP_GUARD((iVar6 < *(int *)((int)this_01 + 0xc0))));
    }
    if (*(int *)((int)this_01 + 0xd4) != 0) {
      FUN_00423910(bea_arg(this_00));
      iVar7 = 0;
      if (0 < *(int *)((int)this_01 + 0xac)) {
        do {
          FUN_00423960(bea_arg(this_00), bea_arg(*(undefined4 *)(*(int *)((int)this_01 + 0xd4) + iVar7 * 4)), bea_arg(4), bea_arg(*(undefined4 *)((int)this_01 + 0xc0)));
          iVar7 = iVar7 + 1;
        } while (BEA_LOOP_GUARD((iVar7 < *(int *)((int)this_01 + 0xac))));
      }
    }
    if (*(int *)((int)this_01 + 0xd8) != 0) {
      FUN_00423910(bea_arg(this_00));
      iVar7 = 0;
      if (0 < *(int *)((int)this_01 + 0xac)) {
        do {
          FUN_00423960(bea_arg(this_00), bea_arg(*(undefined4 *)(*(int *)((int)this_01 + 0xd8) + iVar7 * 4)), bea_arg(4), bea_arg(3));
          iVar7 = iVar7 + 1;
        } while (BEA_LOOP_GUARD((iVar7 < *(int *)((int)this_01 + 0xac))));
      }
    }
  }
  if (*(int *)((int)this_01 + 0x100) != 0) {
    uVar3 = FUN_004d59f0(bea_arg(this_00));
    *(undefined4 *)((int)this_01 + 0x100) = uVar3;
  }
  if (*(int *)((int)this_01 + 0x104) != 0) {
    iVar7 = *(int *)((int)this_01 + 0x118);
    iVar6 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar7 << 4), bea_arg(0x74), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0xa90));
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      param_2 = (void *)(iVar7 + -1);
    }
    *(int *)((int)this_01 + 0x104) = iVar6;
    FUN_00423910(bea_arg(this_00));
    FUN_00423960(bea_arg(this_00), bea_arg(*(undefined4 *)((int)this_01 + 0x104)), bea_arg(0x10), bea_arg(*(undefined4 *)((int)this_01 + 0x118)));
    CRenderThing__vslot3(&DAT_009c3df0);
  }
  if (*(int *)((int)this_01 + 0x108) == 0) {
    *(undefined4 *)((int)this_01 + 0x110) = 0;
  }
  else {
    iVar7 = FUN_00423910(bea_arg(this_00));
    if (iVar7 == ((DAT_0063000f * 0x100 + (int)DAT_0063000e) * 0x100 + (int)DAT_0063000d) * 0x100 +
                 (int)DAT_0063000c) {
      DAT_00704da8 = DAT_00704da8 + *(int *)((int)this_01 + 0x118) * 0x30;
      iVar7 = *(int *)((int)this_01 + 0x118);
      pvVar4 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar7 * 0x30), bea_arg(0x74), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0xab6));
      param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = pvVar4;
        if (-1 < iVar7 + -1) {
          do {
            FUN_004011b0(bea_arg(pvVar4), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
            pvVar4 = (void *)((int)pvVar4 + 0x30);
            iVar7 = iVar7 + -1;
            pvVar5 = param_2;
          } while (BEA_LOOP_GUARD((iVar7 != 0)));
        }
      }
      *(void **)((int)this_01 + 0x108) = pvVar5;
      FUN_00423960(bea_arg(this_00), bea_arg(pvVar5), bea_arg(0x30), bea_arg(*(undefined4 *)((int)this_01 + 0x118)));
      CRenderThing__vslot3(&DAT_009c3df0);
    }
  }
  if (*(int *)((int)this_01 + 0x124) != 0) {
    FUN_00423910(bea_arg(this_00));
    FUN_00423960(bea_arg(this_00), bea_arg(&param_1), bea_arg(4), bea_arg(1));
    *(undefined4 *)((int)this_01 + 0x124) =
         *(undefined4 *)(*(int *)(param_3 + 0x160) + (int)param_1 * 4);
  }
  DAT_00704d5c = 99999;
  DAT_00704d58 = 99999;
  DAT_00704da0 = 0;
  *(void **)((int)this_01 + 0x138) = this_local;
  FUN_0054e160(bea_arg(this_local), bea_arg(this_00), bea_arg((uint)(*(int *)((int)this_01 + 0x8c) == 3)));
  return (void *)(this_01);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b27a0, ap_004b27a0));
