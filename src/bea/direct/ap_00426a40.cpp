// auto-ported from 00426a40_vslot3.c (CCSRay::vslot3, 482 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0xe0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CCSRay;
typedef char CCollisionSeekingThing;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_collisionseeki_006246d8 ((char*)0x006246d8)
typedef uint32_t (BEA_THISCALL* CCollisionSeekingThing__vslot3_t)(uint32_t, uint32_t);
static const bea_guard<CCollisionSeekingThing__vslot3_t> CCollisionSeekingThing__vslot3 = {(CCollisionSeekingThing__vslot3_t)0x00426150};
typedef uint32_t (BEA_THISCALL* FUN_004098e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004098e0_t> FUN_004098e0 = {(FUN_004098e0_t)0x004098e0};
typedef undefined4 (BEA_THISCALL* FUN_004f3d10_t)(uint32_t);
static const bea_guard<FUN_004f3d10_t> FUN_004f3d10 = {(FUN_004f3d10_t)0x004f3d10};
typedef undefined4 (BEA_STDCALL* FUN_0050b030_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0050b030_t> FUN_0050b030 = {(FUN_0050b030_t)0x0050b030};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_00426a40(CCSRay * this_, int param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  int iVar8;

  alignas(16) uint8_t bea_frame_[0xe0] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_d4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xd4);
  undefined4 &local_d0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xd0);
  undefined4 &local_cc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xcc);
  undefined4 &local_c8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xc8);
  undefined4 &local_c4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xc4);
  undefined4 &local_c0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xc0);
  undefined4 &local_bc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xbc);
  undefined4 &local_b8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xb8);
  undefined4 &local_b4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xb4);
  undefined4 &local_b0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xb0);
  undefined4 &local_ac = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xac);
  undefined4 &local_a8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xa8);
  undefined4 &local_a4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xa4);
  undefined4 uVar9;
  void **ppvVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 &local_64 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x64);
  undefined4 &local_54 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x54);
  void * &local_50 = *reinterpret_cast<void * *>(bea_frame_ + 0xe0 - 0x50);
  undefined4 &local_4c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x4c);
  int &local_48 = *reinterpret_cast<int *>(bea_frame_ + 0xe0 - 0x48);
  undefined4 &local_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x44);
  undefined ** &local_40 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0xe0 - 0x40);
  undefined4 &local_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x3c);
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x34);
  undefined4 &local_30 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x28);
  float &local_24 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x24);
  undefined4 &local_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x18);
  float &local_14 = *reinterpret_cast<float *>(bea_frame_ + 0xe0 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0xe0 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0x4);
  CCollisionSeekingThing__vslot3(bea_arg((CCollisionSeekingThing *)this_), bea_arg(param_1));
  iVar8 = *(int *)(param_1 + 0xc);
  local_40 = ((void*)0x005d8bfc);
  local_3c = *(undefined4 *)(iVar8 + 4);
  local_38 = *(undefined4 *)(iVar8 + 8);
  local_34 = *(undefined4 *)(iVar8 + 0xc);
  local_30 = *(undefined4 *)(iVar8 + 0x10);
  local_2c = *(float *)(iVar8 + 0x14);
  local_28 = *(float *)(iVar8 + 0x18);
  local_24 = *(float *)(iVar8 + 0x1c);
  local_1c = *(float *)(iVar8 + 0x24);
  local_20 = *(undefined4 *)(iVar8 + 0x20);
  local_18 = *(float *)(iVar8 + 0x28);
  local_14 = *(float *)(iVar8 + 0x2c);
  local_10 = *(undefined4 *)(iVar8 + 0x30);
  puVar7 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x34), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_collisionseeki_006246d8), bea_arg(0x13a));
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    iVar8 = *(int *)(this_ + 8);
    fVar1 = *(float *)(iVar8 + 0x24);
    fVar2 = *(float *)(iVar8 + 0x20);
    fVar3 = *(float *)(iVar8 + 0x1c);
    fVar4 = *(float *)(iVar8 + 0x24);
    fVar5 = *(float *)(iVar8 + 0x20);
    fVar6 = *(float *)(iVar8 + 0x1c);
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = ((void*)0x005d8bfc);
    puVar7[5] = bea_piece32(local_2c + fVar6);
    puVar7[6] = bea_piece32(local_28 + fVar5);
    puVar7[7] = bea_piece32(local_24 + fVar4);
    puVar7[8] = local_64;
    puVar7[9] = bea_piece32(local_1c + fVar3);
    puVar7[10] = bea_piece32(local_18 + fVar2);
    puVar7[0xb] = bea_piece32(local_14 + fVar1);
    puVar7[0xc] = local_54;
  }
  uVar9 = *(undefined4 *)(param_1 + 4);
  uVar16 = 0xffffffff;
  uVar15 = 1;
  uVar14 = 4;
  uVar13 = 2;
  uVar12 = 1;
  ppvVar10 = &local_50;
  uVar11 = 0;
  local_50 = (void *)0x0;
  local_48 = 0;
  FUN_004098e0(bea_arg(&local_d4), bea_arg(puVar7));
  FUN_0050b030(bea_arg(local_d4), bea_arg(local_d0), bea_arg(local_cc), bea_arg(local_c8), bea_arg(local_c4), bea_arg(local_c0), bea_arg(local_bc), bea_arg(local_b8), bea_arg(local_b4), bea_arg(local_b0), bea_arg(local_ac), bea_arg(local_a8), bea_arg(local_a4), bea_arg(uVar9), bea_arg(ppvVar10), bea_arg(uVar11), bea_arg(uVar12), bea_arg(uVar13), bea_arg(uVar14), bea_arg(uVar15), bea_arg(uVar16));
  if (local_48 == 3) {
    iVar8 = FUN_004f3d10(bea_arg(local_50));
    if (iVar8 != 0) {
      bea_vcall<uint32_t>(this_, 0x18, iVar8);
    }
  }
  if (puVar7 != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(puVar7, 0x0, 1);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00426a40, ap_00426a40));
