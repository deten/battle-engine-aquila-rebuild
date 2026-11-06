// auto-ported from 004b0d00_FUN_004b0d00.c (FUN_004b0d00, 679 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x130: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char Mat34;
typedef char Vec3;
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Vec3* (BEA_THISCALL* FUN_00401ee0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ee0_t> FUN_00401ee0 = {(FUN_00401ee0_t)0x00401ee0};
typedef Mat34* (BEA_THISCALL* FUN_00401f10_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401f10_t> FUN_00401f10 = {(FUN_00401f10_t)0x00401f10};
typedef Vec3* (BEA_THISCALL* FUN_0040d120_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d120_t> FUN_0040d120 = {(FUN_0040d120_t)0x0040d120};
typedef Vec3* (BEA_THISCALL* FUN_0040d150_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d150_t> FUN_0040d150 = {(FUN_0040d150_t)0x0040d150};

static void BEA_THISCALL ap_004b0d00(void * this_, int param_1, int param_2, float param_3, undefined4 *param_4, float *param_5)
{
  byte bVar1;
  byte bVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;

  alignas(16) uint8_t bea_frame_[0x130] = {};   // the original stack frame (emulate_frame)
  float &local_128 = *reinterpret_cast<float *>(bea_frame_ + 0x130 - 0x128);
  float &local_124 = *reinterpret_cast<float *>(bea_frame_ + 0x130 - 0x124);
  float &local_120 = *reinterpret_cast<float *>(bea_frame_ + 0x130 - 0x120);
  float &local_11c = *reinterpret_cast<float *>(bea_frame_ + 0x130 - 0x11c);
  byte &local_118 = *reinterpret_cast<byte *>(bea_frame_ + 0x130 - 0x118);
  undefined3 &uStack_117 = *reinterpret_cast<undefined3 *>(bea_frame_ + 0x130 - 0x117);
  byte &local_114 = *reinterpret_cast<byte *>(bea_frame_ + 0x130 - 0x114);
  undefined3 &uStack_113 = *reinterpret_cast<undefined3 *>(bea_frame_ + 0x130 - 0x113);
  undefined1 (&local_110)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x130 - 0x110);
  float &local_10c = *reinterpret_cast<float *>(bea_frame_ + 0x130 - 0x10c);
  float &local_108 = *reinterpret_cast<float *>(bea_frame_ + 0x130 - 0x108);
  undefined1 (&local_100)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x130 - 0x100);
  float &local_f0 = *reinterpret_cast<float *>(bea_frame_ + 0x130 - 0xf0);
  float &local_ec = *reinterpret_cast<float *>(bea_frame_ + 0x130 - 0xec);
  float &local_e8 = *reinterpret_cast<float *>(bea_frame_ + 0x130 - 0xe8);
  float &local_e0 = *reinterpret_cast<float *>(bea_frame_ + 0x130 - 0xe0);
  float &local_dc = *reinterpret_cast<float *>(bea_frame_ + 0x130 - 0xdc);
  float &local_d8 = *reinterpret_cast<float *>(bea_frame_ + 0x130 - 0xd8);
  undefined1 (&local_d0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x130 - 0xd0);
  undefined1 (&local_c0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x130 - 0xc0);
  undefined1 (&local_b0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x130 - 0xb0);
  undefined1 (&local_a0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x130 - 0xa0);
  float &local_90 = *reinterpret_cast<float *>(bea_frame_ + 0x130 - 0x90);
  float &local_8c = *reinterpret_cast<float *>(bea_frame_ + 0x130 - 0x8c);
  float &local_88 = *reinterpret_cast<float *>(bea_frame_ + 0x130 - 0x88);
  undefined1 (&local_80)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x130 - 0x80);
  undefined1 (&local_70)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x130 - 0x70);
  undefined1 (&local_60)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x130 - 0x60);
  undefined1 (&local_50)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x130 - 0x50);
  undefined1 (&local_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x130 - 0x40);
  undefined4 (&local_30)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x130 - 0x30);
  iVar7 = *(int *)((int)this_ + 0xb8);
  if (iVar7 <= param_1) {
    param_1 = iVar7 + -1;
  }
  if (iVar7 <= param_2) {
    param_2 = iVar7 + -1;
  }
  bVar1 = *(byte *)(*(int *)((int)this_ + 0xc4) + param_1);
  bVar2 = *(byte *)(*(int *)((int)this_ + 0xc4) + param_2);
  (*(uint32_t*)((char*)&local_114)) = CONCAT31(uStack_113,bVar2);
  iVar7 = *(int *)((int)this_ + 200);
  (*(uint32_t*)((char*)&local_118)) = CONCAT31(uStack_117,bVar1);
  pfVar3 = (float *)((uint)bVar2 * 0x10 + iVar7);
  iVar9 = (uint)bVar1 * 0x10;
  pfVar6 = (float *)(iVar7 + iVar9);
  iVar8 = (uint)bVar1 * 0x30;
  local_10c = (pfVar3[1] - *(float *)(iVar7 + 4 + iVar9)) * param_3;
  local_108 = (pfVar3[2] - pfVar6[2]) * param_3;
  local_128 = (*pfVar3 - *(float *)(iVar7 + iVar9)) * param_3 + *pfVar6;
  local_124 = local_10c + pfVar6[1];
  local_120 = local_108 + pfVar6[2];
  *param_5 = local_128;
  param_5[1] = local_124;
  param_5[2] = local_120;
  param_5[3] = local_11c;
  pvVar10 = (void *)((uint)bVar2 * 0x30 + *(int *)((int)this_ + 0x10c));
  iVar7 = iVar8 + *(int *)((int)this_ + 0x10c);
  FUN_00401ec0(bea_arg(local_110), bea_arg(*(float *)((int)pvVar10 + 0x20) - *(float *)(iVar7 + 0x20)), bea_arg(*(float *)((int)pvVar10 + 0x24) - *(float *)(iVar7 + 0x24)), bea_arg(*(float *)((int)pvVar10 + 0x28) - *(float *)(iVar7 + 0x28)));
  FUN_00401ec0(bea_arg(&local_128), bea_arg(*(float *)((int)pvVar10 + 0x10) - *(float *)(iVar7 + 0x10)), bea_arg(*(float *)((int)pvVar10 + 0x14) - *(float *)(iVar7 + 0x14)), bea_arg(*(float *)((int)pvVar10 + 0x18) - *(float *)(iVar7 + 0x18)));
  puVar12 = local_110;
  pfVar3 = &local_128;
  uVar4 = FUN_0040d120(bea_arg(pvVar10), bea_arg(local_50), bea_arg(iVar7));
  FUN_00401f10(bea_arg(local_b0), bea_arg(uVar4), bea_arg(pfVar3), bea_arg(puVar12));
  FUN_00401ec0(bea_arg(local_c0), bea_arg(local_90 * param_3), bea_arg(local_8c * param_3), bea_arg(local_88 * param_3));
  puVar12 = local_c0;
  uVar4 = FUN_0040d150(bea_arg(local_a0), bea_arg(local_60), bea_arg(param_3));
  uVar5 = FUN_0040d150(bea_arg(local_b0), bea_arg(local_70), bea_arg(param_3));
  FUN_00401f10(bea_arg(local_100), bea_arg(uVar5), bea_arg(uVar4), bea_arg(puVar12));
  pvVar10 = (void *)(iVar8 + *(int *)((int)this_ + 0x10c));
  FUN_00401ec0(bea_arg(local_80), bea_arg(local_e0 + *(float *)((int)pvVar10 + 0x20)), bea_arg(local_dc + *(float *)((int)pvVar10 + 0x24)), bea_arg(local_d8 + *(float *)((int)pvVar10 + 0x28)));
  FUN_00401ec0(bea_arg(local_d0), bea_arg(local_f0 + *(float *)((int)pvVar10 + 0x10)), bea_arg(local_ec + *(float *)((int)pvVar10 + 0x14)), bea_arg(local_e8 + *(float *)((int)pvVar10 + 0x18)));
  puVar13 = local_80;
  puVar12 = local_d0;
  uVar4 = FUN_00401ee0(bea_arg(pvVar10), bea_arg(local_40), bea_arg(local_100));
  FUN_00401f10(bea_arg(local_30), bea_arg(uVar4), bea_arg(puVar12), bea_arg(puVar13));
  puVar11 = local_30;
  for (iVar7 = 0xc; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
    *param_4 = *puVar11;
    puVar11 = puVar11 + 1;
    param_4 = param_4 + 1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b0d00, ap_004b0d00));
