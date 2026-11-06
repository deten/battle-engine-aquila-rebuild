// auto-ported from 0054e160_FUN_0054e160.c (FUN_0054e160, 920 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define _DAT_009c63a4 GLOBAL_AT(int, 0x009c63a4)
#define _DAT_009c63a8 GLOBAL_AT(short, 0x009c63a8)
#define DAT_009c3df0 GLOBAL_AT(char, 0x009c3df0)
#define DAT_00854e6c GLOBAL_AT(char, 0x00854e6c)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define s_C__dev_ONSLAUGHT2_DXMeshVB_cpp_00651244 ((char*)0x00651244)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint (BEA_THISCALL* FUN_00423910_t)(uint32_t);
static const bea_guard<FUN_00423910_t> FUN_00423910 = {(FUN_00423910_t)0x00423910};
typedef bool (BEA_THISCALL* FUN_00423960_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00423960_t> FUN_00423960 = {(FUN_00423960_t)0x00423960};
typedef uint32_t (BEA_THISCALL* FUN_00423990_t)(uint32_t);
static const bea_guard<FUN_00423990_t> FUN_00423990 = {(FUN_00423990_t)0x00423990};
typedef undefined4 (BEA_THISCALL* FUN_004239b0_t)(uint32_t);
static const bea_guard<FUN_004239b0_t> FUN_004239b0 = {(FUN_004239b0_t)0x004239b0};
typedef int (BEA_THISCALL* FUN_00513770_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513770_t> FUN_00513770 = {(FUN_00513770_t)0x00513770};
typedef uint32_t (BEA_THISCALL* FUN_005137d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005137d0_t> FUN_005137d0 = {(FUN_005137d0_t)0x005137d0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_0054e160(void * this_, void *param_1, int param_2)
{
  char cVar1;
  int iVar2;
  void *this_00;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  int &local_8 = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x4);
  this_00 = param_1;
  _DAT_009c63a4 = 0x2000000;
  _DAT_009c63a8 = 0x200;
  uVar3 = FUN_004239b0(bea_arg(param_1));
  local_8 = *(int *)((int)this_ + 4);
  iVar2 = *(int *)((int)this_ + 0x10c);
  local_4 = *(undefined4 *)this_;
  FUN_00423910(bea_arg(this_00));
  FUN_00423910(bea_arg(this_00));
  piVar8 = (int *)((int)this_ + 8);
  param_1 = (void *)0x40;
  do {
    if (*piVar8 != 0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*piVar8));
      *piVar8 = 0;
    }
    piVar8 = piVar8 + 1;
    param_1 = (void *)((int)param_1 + -1);
  } while (BEA_LOOP_GUARD((param_1 != (void *)0x0)));
  FUN_00423960(bea_arg(this_00), bea_arg(this_), bea_arg(0x128), bea_arg(1));
  *(int *)((int)this_ + 4) = local_8;
  *(int *)((int)this_ + 0x10c) = iVar2;
  *(undefined4 *)((int)this_ + 0x120) = uVar3;
  pcVar9 = (char *)(*(int *)((int)this_00 + 4) + 0x2c);
  uVar6 = 0xffffffff;
  pcVar4 = pcVar9;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  pcVar4 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(~uVar6), bea_arg(0x3a), bea_arg(s_C__dev_ONSLAUGHT2_DXMeshVB_cpp_00651244), bea_arg(0x6ce));
  uVar6 = 0xffffffff;
  *(char **)((int)this_ + 0x124) = pcVar4;
  do {
    pcVar11 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar6 = ~uVar6;
  pcVar9 = pcVar11 + -uVar6;
  for (uVar7 = uVar6 >> 2; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar6 = uVar6 & 3; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *pcVar4 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar4 = pcVar4 + 1;
  }
  iVar10 = 0;
  *(undefined4 *)this_ = local_4;
  if (0 < *(int *)((int)this_ + 0x108)) {
    do {
      puVar5 = (undefined4 *)
               FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x3c), bea_arg(0x3a), bea_arg(s_C__dev_ONSLAUGHT2_DXMeshVB_cpp_00651244), bea_arg(0x6dc))
      ;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = 0;
        puVar5[1] = 0;
      }
      *(undefined4 **)((int)this_ + iVar10 * 4 + 8) = puVar5;
      FUN_00423910(bea_arg(this_00));
      FUN_00423960(bea_arg(this_00), bea_arg(*(int *)((int)this_ + iVar10 * 4 + 8) + 8), bea_arg(4), bea_arg(1));
      FUN_00423960(bea_arg(this_00), bea_arg(*(int *)((int)this_ + iVar10 * 4 + 8) + 0xc), bea_arg(4), bea_arg(1));
      FUN_00423960(bea_arg(this_00), bea_arg(*(int *)((int)this_ + iVar10 * 4 + 8) + 0x10), bea_arg(4), bea_arg(1));
      FUN_00423960(bea_arg(this_00), bea_arg(*(int *)((int)this_ + iVar10 * 4 + 8) + 0x14), bea_arg(4), bea_arg(1));
      FUN_00423960(bea_arg(this_00), bea_arg(*(int *)((int)this_ + iVar10 * 4 + 8) + 0x18), bea_arg(4), bea_arg(1));
      FUN_00423960(bea_arg(this_00), bea_arg(*(int *)((int)this_ + iVar10 * 4 + 8) + 0x1c), bea_arg(4), bea_arg(1));
      FUN_00423910(bea_arg(this_00));
      uVar3 = 8;
      if ((DAT_00854e6c != '\0') && (param_2 != 0)) {
        uVar3 = 0x18;
      }
      iVar12 = *(int *)((int)this_ + iVar10 * 4 + 8);
      FUN_005137d0(bea_arg(&DAT_00855bb0), bea_arg(*(undefined4 *)(iVar12 + 0xc)), bea_arg(uVar3), bea_arg(0x65), bea_arg(1), bea_arg(iVar12 + 4));
      CRenderThing__vslot3(&DAT_009c3df0);
      piVar8 = *(int **)(*(int *)((int)this_ + iVar10 * 4 + 8) + 4);
      bea_vcall<uint32_t>(piVar8, 0x2c, piVar8,0,0,&param_1,0);
      FUN_00423960(bea_arg(this_00), bea_arg(param_1), bea_arg(2), bea_arg(*(undefined4 *)(*(int *)((int)this_ + iVar10 * 4 + 8) + 0x10)));
      piVar8 = *(int **)(*(int *)((int)this_ + iVar10 * 4 + 8) + 4);
      bea_vcall<uint32_t>(piVar8, 0x30, piVar8);
      FUN_00423910(bea_arg(this_00));
      iVar12 = *(int *)((int)this_ + 8);
      if (iVar10 == 0) {
        FUN_00513770(bea_arg(&DAT_00855bb0), bea_arg(*(undefined4 *)(iVar12 + 8)), bea_arg(uVar3), bea_arg(*(undefined4 *)((int)this_ + 0x118)), bea_arg(1), bea_arg(iVar12));
        CRenderThing__vslot3(&DAT_009c3df0);
        bea_vcall<uint32_t>(**(undefined4 **)((int)this_ + 8), 0x2c, (int *)**(undefined4 **)((int)this_ + 8),0,0,&local_4,0);
        FUN_00423960(bea_arg(this_00), bea_arg(local_4), bea_arg(*(undefined4 *)((int)this_ + 0x114)), bea_arg(*(undefined4 *)(*(int *)((int)this_ + 8) + 0x14)));
        bea_vcall<uint32_t>(**(undefined4 **)((int)this_ + 8), 0x30, (int *)**(undefined4 **)((int)this_ + 8));
      }
      else {
        *(undefined4 *)(*(int *)((int)this_ + iVar10 * 4 + 8) + 8) = *(undefined4 *)(iVar12 + 8);
        **(undefined4 **)((int)this_ + iVar10 * 4 + 8) = **(undefined4 **)((int)this_ + 8);
        *(undefined4 *)(*(int *)((int)this_ + iVar10 * 4 + 8) + 0x14) =
             *(undefined4 *)(*(int *)((int)this_ + 8) + 0x14);
        FUN_00423990(bea_arg(this_00));
      }
      FUN_00423910(bea_arg(this_00));
      iVar12 = 0x20;
      do {
        FUN_00423960(bea_arg(this_00), bea_arg(&local_8), bea_arg(4), bea_arg(1));
        if (local_8 == -1) {
          *(undefined4 *)(iVar12 + *(int *)((int)this_ + iVar10 * 4 + 8)) = 0;
        }
        else {
          *(int *)(iVar12 + *(int *)((int)this_ + iVar10 * 4 + 8)) =
               **(int **)(iVar2 + 0x128) + local_8 * 0x24;
        }
        iVar12 = iVar12 + 4;
      } while (BEA_LOOP_GUARD((iVar12 < 0x38)));
      iVar10 = iVar10 + 1;
    } while (BEA_LOOP_GUARD((iVar10 < *(int *)((int)this_ + 0x108))));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0054e160, ap_0054e160));
