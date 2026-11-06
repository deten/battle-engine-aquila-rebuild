// auto-ported from 0047f750_FUN_0047f750.c (FUN_0047f750, 610 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x120: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_Got_size__d__expected__d_0062cbf4 ((char*)0x0062cbf4)
#define s_C__dev_ONSLAUGHT2_HeightField_cp_0062cbd0 ((char*)0x0062cbd0)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint (BEA_THISCALL* FUN_00423910_t)(uint32_t);
static const bea_guard<FUN_00423910_t> FUN_00423910 = {(FUN_00423910_t)0x00423910};
typedef bool (BEA_THISCALL* FUN_00423960_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00423960_t> FUN_00423960 = {(FUN_00423960_t)0x00423960};
typedef uint32_t (BEA_THISCALL* FUN_0047e8e0_t)(uint32_t);
static const bea_guard<FUN_0047e8e0_t> FUN_0047e8e0 = {(FUN_0047e8e0_t)0x0047e8e0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_THISCALL ap_0047f750(void * this_, int *param_1)
{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;

  alignas(16) uint8_t bea_frame_[0x120] = {};   // the original stack frame (emulate_frame)
  uint &local_114 = *reinterpret_cast<uint *>(bea_frame_ + 0x120 - 0x114);
  uint &local_110 = *reinterpret_cast<uint *>(bea_frame_ + 0x120 - 0x110);
  uint &local_10c = *reinterpret_cast<uint *>(bea_frame_ + 0x120 - 0x10c);
  uint &local_108 = *reinterpret_cast<uint *>(bea_frame_ + 0x120 - 0x108);
  uint &local_104 = *reinterpret_cast<uint *>(bea_frame_ + 0x120 - 0x104);
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x120 - 0x100);
  if (*(int *)((int)this_ + 0x24) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x24)));
    *(undefined4 *)((int)this_ + 0x24) = 0;
  }
  if (*(int *)((int)this_ + 0x1028) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x1028)));
    *(undefined4 *)((int)this_ + 0x1028) = 0;
  }
  FUN_00423910(bea_arg(param_1));
  FUN_00423910(bea_arg(param_1));
  if (*param_1 != 0x13dc) {
    FUN_0055de9b(local_100,s_Got_size__d__expected__d_0062cbf4,*param_1,0x13dc);
    CRenderThing__vslot3(local_100);
  }
  FUN_00423960(bea_arg(param_1), bea_arg(this_), bea_arg(0x13dc), bea_arg(1));
  FUN_00423910(bea_arg(param_1));
  FUN_0047e8e0(bea_arg(this_));
  local_104 = *(uint *)((int)this_ + 0x108c);
  local_10c = local_104 >> 8 & 0xff;
  local_110 = *(uint *)((int)this_ + 0x107c);
  local_108 = local_104 >> 0x10 & 0xff;
  local_104 = local_104 & 0xff;
  uVar5 = (local_110 >> 0x10 & 0xff) + local_108;
  uVar4 = (local_110 & 0xff) + local_104;
  uVar1 = (local_110 >> 8 & 0xff) + local_10c;
  local_114 = uVar5;
  if (uVar5 < uVar4) {
    local_114 = uVar4;
  }
  if (local_114 < uVar1) {
    local_114 = uVar1;
  }
  if (0xff < local_114) {
    uVar5 = (uVar5 * 0xff) / local_114;
    uVar1 = (uVar1 * 0xff) / local_114;
    uVar4 = (uVar4 * 0xff) / local_114;
  }
  *(uint *)((int)this_ + 0x107c) =
       (local_108 * 0xffff + uVar5) * 0x10000 | (uVar1 - local_10c) * 0x100 | uVar4 - local_104 |
       0xff000000;
  uVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xa2000), bea_arg(0x22), bea_arg(s_C__dev_ONSLAUGHT2_HeightField_cp_0062cbd0), bea_arg(0x880))
  ;
  *(undefined4 *)((int)this_ + 0x1028) = uVar2;
  iVar7 = 0;
  do {
    local_110 = 0x40;
    do {
      local_10c = 9;
      do {
        iVar6 = 9;
        do {
          FUN_00423960(bea_arg(param_1), bea_arg(&local_114), bea_arg(2), bea_arg(1));
          *(undefined2 *)(iVar7 + *(int *)((int)this_ + 0x1028)) = (undefined2)local_114;
          iVar7 = iVar7 + 2;
          iVar6 = iVar6 + -1;
        } while (BEA_LOOP_GUARD((iVar6 != 0)));
        local_10c = local_10c + -1;
      } while (BEA_LOOP_GUARD((local_10c != 0)));
      local_110 = local_110 + -1;
    } while (BEA_LOOP_GUARD((local_110 != 0)));
  } while (BEA_LOOP_GUARD((iVar7 < 0xa2000)));
  for (puVar3 = (uint *)((int)this_ + 0x10d0); BEA_LOOP_GUARD((puVar3 < (uint *)((int)this_ + 0x13dc)));
      puVar3 = puVar3 + 3) {
    uVar1 = *puVar3;
    *puVar3 = uVar1 * 2;
    if (0xf80000 < uVar1 * 2) {
      *puVar3 = 0xf80000;
    }
    uVar1 = puVar3[1];
    *puVar3 = *puVar3 & 0xf80000;
    puVar3[1] = uVar1 * 2;
    if (0x7e000 < uVar1 * 2) {
      puVar3[1] = 0x7e000;
    }
    uVar1 = puVar3[2];
    puVar3[1] = puVar3[1] & 0x7e000;
    puVar3[2] = uVar1 * 2;
    if (0x1f00 < uVar1 * 2) {
      puVar3[2] = 0x1f00;
    }
    puVar3[2] = puVar3[2] & 0x1f00;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047f750, ap_0047f750));
