// auto-ported from 004ad600_FUN_004ad600.c (FUN_004ad600, 495 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_C__dev_ONSLAUGHT2_MeshCollisionV_0062fe40 ((char*)0x0062fe40)
#define s_Error__Can_t_find_mesh_part_in_0062fe20 ((char*)0x0062fe20)
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_004b0fb0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b0fb0_t> FUN_004b0fb0 = {(FUN_004b0fb0_t)0x004b0fb0};
typedef uint32_t (BEA_CDECL* FUN_004b4de0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b4de0_t> FUN_004b4de0 = {(FUN_004b4de0_t)0x004b4de0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_004ad600(void * this_, int param_1, int param_2, undefined4 param_3)
{
  void *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;

  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_4c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x4c);
  undefined4 &local_48 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x48);
  undefined4 &local_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x44);
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x40);
  undefined4 (&local_3c)[4] = *reinterpret_cast<undefined4 (*)[4]>(bea_frame_ + 0x50 - 0x3c);
  undefined4 &local_2c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x2c);
  undefined4 &local_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x24);
  undefined4 &local_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x18);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x50 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x4);
  if (*(int *)((int)this_ + 0x24) == 0) {
    iVar7 = *(int *)(param_1 + 0x15c);
    iVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar7 * 0x74), bea_arg(0x6c), bea_arg(s_C__dev_ONSLAUGHT2_MeshCollisionV_0062fe40), bea_arg(0x229));
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar5 = iVar4;
      if (-1 < iVar7 + -1) {
        do {
          FUN_004011b0(bea_arg(iVar5), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
          FUN_004011b0(bea_arg(iVar5 + 0x30), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
          iVar7 = iVar7 + -1;
          iVar5 = iVar5 + 0x74;
        } while (BEA_LOOP_GUARD((iVar7 != 0)));
      }
    }
    *(int *)((int)this_ + 0x24) = iVar4;
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 0x15c)) {
      iVar4 = 0;
      do {
        iVar7 = iVar7 + 1;
        *(undefined4 *)(iVar4 + 0x70 + *(int *)((int)this_ + 0x24)) = 0xbf800000;
        iVar4 = iVar4 + 0x74;
      } while (BEA_LOOP_GUARD((iVar7 < *(int *)(param_1 + 0x15c))));
    }
  }
  this_00 = *(void **)(*(int *)(param_1 + 0x160) + param_2 * 4);
  if (this_00 == (void *)0x0) {
    FUN_00441740(&DAT_0066f580,s_Error__Can_t_find_mesh_part_in_0062fe20);
  }
  else {
    if (*(int *)((int)this_ + 0x1c) == 0) {
      FUN_004b4de0(bea_arg(*(int *)((int)this_ + 0x14)), bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0x14) + 8)), bea_arg(this_00), bea_arg(&local_4c), bea_arg(local_3c), bea_arg(0), bea_arg(0));
    }
    else {
      FUN_004b0fb0(bea_arg(this_00), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0x14) + 8)), bea_arg(local_3c), bea_arg(&local_4c), bea_arg(0), bea_arg(1), bea_arg(0));
    }
    uVar3 = local_18;
    uVar2 = local_2c;
    uVar1 = local_3c[2];
    iVar7 = param_2 * 0x74;
    puVar6 = local_3c;
    puVar8 = (undefined4 *)(iVar7 + *(int *)((int)this_ + 0x24));
    for (iVar4 = 0xc; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = iVar4 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    local_2c = local_3c[1];
    local_3c[2] = local_1c;
    local_1c = uVar1;
    local_3c[1] = uVar2;
    local_18 = local_24;
    local_24 = uVar3;
    puVar6 = local_3c;
    puVar8 = (undefined4 *)(iVar7 + 0x30 + *(int *)((int)this_ + 0x24));
    for (iVar4 = 0xc; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = iVar4 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar6 = (undefined4 *)(iVar7 + 0x60 + *(int *)((int)this_ + 0x24));
    *puVar6 = local_4c;
    puVar6[1] = local_48;
    puVar6[2] = local_44;
    puVar6[3] = local_40;
    *(undefined4 *)(iVar7 + 0x70 + *(int *)((int)this_ + 0x24)) = param_3;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ad600, ap_004ad600));
