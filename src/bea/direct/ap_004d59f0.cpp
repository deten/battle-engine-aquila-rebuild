// auto-ported from 004d59f0_FUN_004d59f0.c (FUN_004d59f0, 1063 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_array_h_0062d590 ((char*)0x0062d590)
#define s_Size__d__sizeof__d_0062fd48 ((char*)0x0062fd48)
#define s__C__dev_ONSLAUGHT2_PolyBucket_cp_006316bb ((char*)0x006316bb)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint (BEA_THISCALL* FUN_00423910_t)(uint32_t);
static const bea_guard<FUN_00423910_t> FUN_00423910 = {(FUN_00423910_t)0x00423910};
typedef bool (BEA_THISCALL* FUN_00423960_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00423960_t> FUN_00423960 = {(FUN_00423960_t)0x00423960};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_005491b0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005491b0_t> FUN_005491b0 = {(FUN_005491b0_t)0x005491b0};
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055dc20_t> FUN_0055dc20 = {(FUN_0055dc20_t)0x0055dc20};

static int BEA_CDECL ap_004d59f0(int *param_1)
{
  undefined4 *puVar1;
  int *this_local;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  int &local_34 = *reinterpret_cast<int *>(bea_frame_ + 0x40 - 0x34);
  int &local_30 = *reinterpret_cast<int *>(bea_frame_ + 0x40 - 0x30);
  int &local_2c = *reinterpret_cast<int *>(bea_frame_ + 0x40 - 0x2c);
  int &local_28 = *reinterpret_cast<int *>(bea_frame_ + 0x40 - 0x28);
  int &local_24 = *reinterpret_cast<int *>(bea_frame_ + 0x40 - 0x24);
  int &local_20 = *reinterpret_cast<int *>(bea_frame_ + 0x40 - 0x20);
  int &local_1c = *reinterpret_cast<int *>(bea_frame_ + 0x40 - 0x1c);
  int * &local_18 = *reinterpret_cast<int * *>(bea_frame_ + 0x40 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x14);
  undefined2 &local_10 = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x40 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x40 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x4);
  this_local = param_1;
  iVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xb8), bea_arg(0x46), bea_arg(s__C__dev_ONSLAUGHT2_PolyBucket_cp_006316bb + 1), bea_arg(0x470));
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x40) = 0;
    *(undefined4 *)(iVar2 + 0x44) = 0;
    *(undefined4 *)(iVar2 + 0x48) = 0;
    *(undefined4 *)(iVar2 + 0x50) = 0x3f800000;
    *(undefined4 *)(iVar2 + 0x60) = 0;
    *(undefined4 *)(iVar2 + 100) = 0;
    *(undefined4 *)(iVar2 + 0x78) = 0;
    *(undefined4 *)(iVar2 + 0x9c) = 0;
    *(undefined4 *)(iVar2 + 0x98) = 0;
    *(undefined4 *)(iVar2 + 0x7c) = 0;
  }
  FUN_00423910(bea_arg(param_1));
  FUN_00423910(bea_arg(param_1));
  if (*param_1 != 0xb8) {
    CRenderThing__vslot3(s_Size__d__sizeof__d_0062fd48);
  }
  FUN_00423960(bea_arg(param_1), bea_arg(iVar2), bea_arg(*param_1), bea_arg(1));
  uVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)(iVar2 + 0x6c) * *(int *)(iVar2 + 0x68) * 4), bea_arg(0x46), bea_arg(s__C__dev_ONSLAUGHT2_PolyBucket_cp_006316bb + 1), bea_arg(0x48c));
  *(undefined4 *)(iVar2 + 0x60) = uVar3;
  local_2c = 0;
  local_28 = 0;
  FUN_00423910(bea_arg(param_1));
  FUN_00423960(bea_arg(param_1), bea_arg(&local_2c), bea_arg(4), bea_arg(1));
  FUN_00423960(bea_arg(param_1), bea_arg(&local_28), bea_arg(4), bea_arg(1));
  iVar6 = local_2c;
  local_18 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(local_2c * 0x10 + 4), bea_arg(0x46), bea_arg(s__C__dev_ONSLAUGHT2_PolyBucket_cp_006316bb + 1), bea_arg(0x499));
  if (local_18 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *local_18 = iVar6;
    piVar4 = local_18 + 1;
    FUN_0055dc20(bea_arg(piVar4), bea_arg(0x10), bea_arg(iVar6), bea_arg(((void*)0x004d5e20)), bea_arg(((void*)0x004d3af0)));
  }
  *(int **)(iVar2 + 0x80) = piVar4;
  uVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(local_28 * 2), bea_arg(0x46), bea_arg(s__C__dev_ONSLAUGHT2_PolyBucket_cp_006316bb + 1), bea_arg(0x49a));
  *(undefined4 *)(iVar2 + 0x84) = uVar3;
  iVar6 = 0;
  *(undefined4 *)(iVar2 + 0x7c) = 1;
  local_24 = 0;
  if (0 < *(int *)(iVar2 + 0x6c) * *(int *)(iVar2 + 0x68)) {
    param_1 = (int *)0x0;
    do {
      *(undefined4 *)(*(int *)(iVar2 + 0x60) + iVar6 * 4) = 0;
      FUN_00423910(bea_arg(this_local));
      FUN_00423960(bea_arg(this_local), bea_arg(&local_20), bea_arg(4), bea_arg(1));
      if (local_20 == 1) {
        FUN_00423910(bea_arg(this_local));
        piVar4 = (int *)((int)param_1 + *(int *)(iVar2 + 0x80));
        local_18 = *(int **)(iVar2 + 0x84);
        FUN_00423910(bea_arg(this_local));
        FUN_00423960(bea_arg(this_local), bea_arg(&local_1c), bea_arg(4), bea_arg(1));
        piVar4[3] = 1;
        iVar5 = (int)local_18 + local_24 * 2;
        piVar4[2] = local_1c;
        local_24 = local_24 + local_1c;
        *piVar4 = iVar5;
        FUN_00423960(bea_arg(this_local), bea_arg(iVar5), bea_arg(2), bea_arg(local_1c));
        param_1 = (int *)((int)param_1 + 0x10);
        *(int **)(*(int *)(iVar2 + 0x60) + iVar6 * 4) = piVar4;
      }
      iVar6 = iVar6 + 1;
    } while (BEA_LOOP_GUARD((iVar6 < *(int *)(iVar2 + 0x6c) * *(int *)(iVar2 + 0x68))));
  }
  FUN_00423910(bea_arg(this_local));
  FUN_00423960(bea_arg(this_local), bea_arg(&local_34), bea_arg(4), bea_arg(1));
  FUN_00423910(bea_arg(this_local));
  uVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(local_34 * 0xc), bea_arg(0x46), bea_arg(s__C__dev_ONSLAUGHT2_PolyBucket_cp_006316bb + 1), bea_arg(0x4ca));
  *(undefined4 *)(iVar2 + 100) = uVar3;
  iVar6 = 0;
  if (0 < local_34) {
    param_1 = (int *)0x0;
    do {
      iVar5 = (int)param_1 + *(int *)(iVar2 + 100);
      FUN_00423910(bea_arg(this_local));
      FUN_00423960(bea_arg(this_local), bea_arg(iVar5 + 8), bea_arg(4), bea_arg(1));
      FUN_00423960(bea_arg(this_local), bea_arg(iVar5), bea_arg(6), bea_arg(1));
      FUN_00423960(bea_arg(this_local), bea_arg(iVar5 + 6), bea_arg(2), bea_arg(1));
      iVar6 = iVar6 + 1;
      param_1 = (int *)((int)param_1 + 0xc);
    } while (BEA_LOOP_GUARD((iVar6 < local_34)));
  }
  FUN_00423910(bea_arg(this_local));
  FUN_00423960(bea_arg(this_local), bea_arg(&local_30), bea_arg(4), bea_arg(1));
  piVar4 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x46), bea_arg(s__C__dev_ONSLAUGHT2_PolyBucket_cp_006316bb + 1), bea_arg(0x4da));
  local_18 = piVar4;
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4[1] = local_30;
    iVar6 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(local_30 * 6), bea_arg(0x54), bea_arg(s_C__dev_ONSLAUGHT2_array_h_0062d590), bea_arg(0x12));
    if (iVar6 == 0) {
      piVar4[2] = 0;
      *piVar4 = 0;
    }
    else {
      *piVar4 = iVar6;
      piVar4[2] = 0;
    }
  }
  *(int **)(iVar2 + 0x98) = piVar4;
  param_1 = (int *)0x0;
  if (local_30 < 1) {
    *(undefined4 *)(iVar2 + 0x94) = 0;
  }
  else {
    do {
      FUN_00423910(bea_arg(this_local));
      FUN_00423960(bea_arg(this_local), bea_arg(&local_14), bea_arg(6), bea_arg(1));
      piVar4 = *(int **)(iVar2 + 0x98);
      iVar6 = piVar4[2] + 1;
      piVar4[2] = iVar6;
      if (piVar4[1] < iVar6) {
        iVar5 = FUN_005491b0(bea_arg(&DAT_009c3df0), bea_arg(*piVar4), bea_arg(iVar6 * 0xc));
        *piVar4 = iVar5;
        piVar4[1] = iVar6 * 2;
      }
      puVar1 = (undefined4 *)(*piVar4 + -6 + piVar4[2] * 6);
      *puVar1 = local_14;
      *(undefined2 *)(puVar1 + 1) = local_10;
      param_1 = (int *)((int)param_1 + 1);
    } while (BEA_LOOP_GUARD(((int)param_1 < local_30)));
    *(undefined4 *)(iVar2 + 0x94) = 0;
  }
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d59f0, ap_004d59f0));
