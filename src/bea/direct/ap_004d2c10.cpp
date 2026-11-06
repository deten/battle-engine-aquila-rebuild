// auto-ported from 004d2c10_FUN_004d2c10.c (FUN_004d2c10, 967 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008a9d38 GLOBAL_AT(int, 0x008a9d38)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define s_C__dev_ONSLAUGHT2_Player_cpp_00631690 ((char*)0x00631690)
typedef void * (BEA_THISCALL* FUN_00416d10_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00416d10_t> FUN_00416d10 = {(FUN_00416d10_t)0x00416d10};
typedef void * (BEA_THISCALL* FUN_004198d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004198d0_t> FUN_004198d0 = {(FUN_004198d0_t)0x004198d0};
typedef uint32_t (BEA_THISCALL* FUN_0044b2d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b2d0_t> FUN_0044b2d0 = {(FUN_0044b2d0_t)0x0044b2d0};
typedef uint32_t (BEA_THISCALL* FUN_004705e0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004705e0_t> FUN_004705e0 = {(FUN_004705e0_t)0x004705e0};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_004d2c10(void * this_, float param_1)
{
  void *pvVar1;
  float *pfVar2;
  void *this_00;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  float (&local_3c)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x40 - 0x3c);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x28);
  float &local_24 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x24);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x18);
  float &local_14 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x14);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x40 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x4);
  if (*(int *)((int)this_ + 0x1c) == 0) {
    return;
  }
  *(undefined4 *)((int)this_ + 0x24) = 0;
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x28), bea_arg(s_C__dev_ONSLAUGHT2_Player_cpp_00631690), bea_arg(0xa0));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    FUN_004e5840(bea_arg(pvVar1));
  }
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pfVar2 = (float *)(*(int *)((int)this_ + 0x1c) + 0x3c);
  pfVar5 = local_3c;
  for (iVar4 = 0xc; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = iVar4 + -1) {
    *pfVar5 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar5 = pfVar5 + 1;
  }
  if (((((DAT_008a9d38 == 0xe7) || (DAT_008a9d38 == 0xe8)) || (DAT_008a9d38 == 0x14b)) ||
      ((DAT_008a9d38 == 0xdd || (DAT_008a9d38 == 0xde)))) ||
     ((DAT_008a9d38 == 0x20c || ((DAT_008a9d38 == 0x20b || (DAT_008a9d38 == 0x14c)))))) {
    pfVar2 = (float *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x26), bea_arg(s_C__dev_ONSLAUGHT2_Player_cpp_00631690), bea_arg(0xb1));
    if (pfVar2 != (float *)0x0) {
      *pfVar2 = local_3c[0] * 5.0f;
      pfVar2[1] = local_2c * 5.0f;
      pfVar2[2] = local_1c * 5.0f;
      goto LAB_004d2e24;
    }
  }
  else {
    pfVar2 = (float *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x26), bea_arg(s_C__dev_ONSLAUGHT2_Player_cpp_00631690), bea_arg(0xb5));
    if (pfVar2 == (float *)0x0) {
      pfVar2 = (float *)0x0;
    }
    else {
      *pfVar2 = local_3c[2] * -4.3f + local_3c[1] * 10.0f;
      pfVar2[1] = local_24 * -4.3f + local_28 * 10.0f;
      pfVar2[2] = local_14 * -4.3f + local_18 * 10.0f;
    }
    FUN_004e5b20(bea_arg(pvVar1), bea_arg(pfVar2));
    pfVar2 = (float *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x26), bea_arg(s_C__dev_ONSLAUGHT2_Player_cpp_00631690), bea_arg(0xb6));
    if (pfVar2 != (float *)0x0) {
      *pfVar2 = local_3c[0] * 5.0f + local_3c[2] * 1.3f;
      pfVar2[1] = local_24 * 1.3f + local_2c * 5.0f;
      pfVar2[2] = local_14 * 1.3f + local_1c * 5.0f;
      goto LAB_004d2e24;
    }
  }
  pfVar2 = (float *)0x0;
LAB_004d2e24:
  FUN_004e5b20(bea_arg(pvVar1), bea_arg(pfVar2));
  pfVar2 = (float *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x26), bea_arg(s_C__dev_ONSLAUGHT2_Player_cpp_00631690), bea_arg(0xb9));
  if (pfVar2 == (float *)0x0) {
    pfVar2 = (float *)0x0;
  }
  else {
    *pfVar2 = local_3c[2] * -1.3f + local_3c[1] * -9.0f;
    pfVar2[1] = local_24 * -1.3f + local_28 * -9.0f;
    pfVar2[2] = local_14 * -1.3f + local_18 * -9.0f;
  }
  FUN_004e5b20(bea_arg(pvVar1), bea_arg(pfVar2));
  pfVar2 = (float *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x26), bea_arg(s_C__dev_ONSLAUGHT2_Player_cpp_00631690), bea_arg(0xba));
  if (pfVar2 == (float *)0x0) {
    pfVar2 = (float *)0x0;
  }
  else {
    *pfVar2 = local_3c[1] * -2.5f;
    pfVar2[1] = local_28 * -2.5f;
    pfVar2[2] = local_18 * -2.5f;
  }
  FUN_004e5b20(bea_arg(pvVar1), bea_arg(pfVar2));
  this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x14), bea_arg(0x28), bea_arg(s_C__dev_ONSLAUGHT2_Player_cpp_00631690), bea_arg(0xbc));
  if (this_00 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00416d10(bea_arg(this_00), bea_arg(pvVar1), bea_arg(3));
  }
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x9c), bea_arg(0x26), bea_arg(s_C__dev_ONSLAUGHT2_Player_cpp_00631690), bea_arg(0xbe));
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004198d0(bea_arg(pvVar1), bea_arg(*(undefined4 *)((int)this_ + 0x1c)), bea_arg(uVar3), bea_arg(param_1));
  }
  FUN_004705e0(bea_arg(&DAT_008a9a98), bea_arg(*(int *)((int)this_ + 0x2c) + -1), bea_arg(uVar3), bea_arg(1));
  if (0.0f < param_1) {
    param_1 = param_1 - 0.05f;
  }
  FUN_0044b2d0(bea_arg(&DAT_00672fc8), bea_arg(&param_1), bea_arg(4000), bea_arg(this_), bea_arg(0), bea_arg(0), bea_arg(0));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d2c10, ap_004d2c10));
