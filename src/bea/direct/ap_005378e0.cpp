// auto-ported from 005378e0_FUN_005378e0.c (FUN_005378e0, 481 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0089c5e4 GLOBAL_AT(int, 0x0089c5e4)
#define DAT_0089c5e8 GLOBAL_AT(int, 0x0089c5e8)
#define DAT_0089c5ec GLOBAL_AT(undefined4, 0x0089c5ec)
#define DAT_0089c7f0 GLOBAL_AT(int, 0x0089c7f0)
#define DAT_0089c7f4 GLOBAL_AT(int, 0x0089c7f4)
#define DAT_0089c7f8 GLOBAL_AT(int, 0x0089c7f8)
#define DAT_0089c7fc GLOBAL_AT(int, 0x0089c7fc)
#define DAT_0089c800 GLOBAL_AT(int, 0x0089c800)
#define DAT_0089c804 GLOBAL_AT(int, 0x0089c804)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define DAT_008a9d84 GLOBAL_AT(int, 0x008a9d84)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064fa40 ((char*)0x0064fa40)
typedef int (BEA_THISCALL* FUN_0044b2a0_t)(uint32_t);
static const bea_guard<FUN_0044b2a0_t> FUN_0044b2a0 = {(FUN_0044b2a0_t)0x0044b2a0};
typedef void * (BEA_THISCALL* FUN_004b6e50_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b6e50_t> FUN_004b6e50 = {(FUN_004b6e50_t)0x004b6e50};
typedef uint32_t (BEA_THISCALL* FUN_004b7ca0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004b7ca0_t> FUN_004b7ca0 = {(FUN_004b7ca0_t)0x004b7ca0};
typedef uint32_t (BEA_THISCALL* FUN_004de1f0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004de1f0_t> FUN_004de1f0 = {(FUN_004de1f0_t)0x004de1f0};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef undefined * (BEA_THISCALL* FUN_004f2580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2580_t> FUN_004f2580 = {(FUN_004f2580_t)0x004f2580};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 BEA_THISCALL ap_005378e0(void * this_, undefined4 *param_1, undefined4 param_2, undefined4 param_3)
{
  void *this_00;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *this_01;
  void *this_02;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float fVar9;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  undefined4 &uStack_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x24);
  undefined4 &uStack_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x20);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x1c);
  undefined4 &uStack_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x18);
  undefined4 &uStack_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x14);
  void * &pvStack_10 = *reinterpret_cast<void * *>(bea_frame_ + 0x30 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x30 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x4);
  puVar1 = param_1;
  uVar2 = bea_vcall<uint32_t>(*param_1, 0x30);
  uStack_14 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(uVar2));
  uVar2 = bea_vcall<uint32_t>(param_1[1], 0x30);
  uStack_18 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(uVar2));
  fVar8 = (float10)bea_vcall<float10>(param_1[2], 0x34);
  fStack_1c = (float)fVar8;
  uStack_20 = bea_vcall<uint32_t>(param_1[3], 0x30);
  puVar3 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x228), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(0x76e));
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = ((void*)0x005e4f2c);
    puVar3[1] = DAT_0089c5e4;
    *puVar3 = ((void*)0x005d92d4);
    puVar3[2] = DAT_0089c5e8;
    puVar6 = &DAT_0089c5ec;
    puVar7 = puVar3 + 3;
    for (iVar5 = 0x81; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    puVar3[0x84] = DAT_0089c7f0;
    puVar3[0x85] = DAT_0089c7f4;
    puVar3[0x86] = DAT_0089c7f8;
    puVar3[0x87] = DAT_0089c7fc;
    puVar3[0x88] = DAT_0089c800;
    puVar3[0x89] = DAT_0089c804;
    *puVar3 = ((void*)0x005e4f1c);
  }
  FUN_004e5b20(bea_arg((void *)((int)this_ + 0x28)), bea_arg(puVar3));
  DAT_0089c800 = 1;
  this_01 = (void *)FUN_0044b2a0(bea_arg(&DAT_00672fc8));
  uVar2 = 0;
  if (this_01 != (void *)0x0) {
    uStack_24 = 0x3d4ccccd;
    uVar2 = FUN_004de1f0(bea_arg(this_01), bea_arg(0x7d1), bea_arg(&uStack_24), bea_arg(this_), bea_arg(puVar3));
    this_00 = DAT_008a9d84;
    param_1 = (undefined4 *)0x0;
    if ((*(byte *)(*(int *)((int)this_ + 0x10) + 0x34) & 0x10) != 0) {
      param_1 = (undefined4 *)*(int *)((int)this_ + 0x10);
    }
    if (DAT_008a9d84 != (void *)0x0) {
      this_02 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x3c), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(0x77d));
      uVar2 = 0;
      pvStack_10 = this_02;
      if (this_02 != (void *)0x0) {
        fVar9 = fStack_1c;
        uVar2 = uStack_20;
        uVar4 = bea_vcall<uint32_t>(puVar1[1], 0x30);
        uVar2 = FUN_004b6e50(bea_arg(this_02), bea_arg(uStack_14), bea_arg(uStack_18), bea_arg(uVar4), bea_arg(fVar9), bea_arg(param_1), bea_arg(this_01), bea_arg(uVar2));
      }
      uVar2 = FUN_004b7ca0(bea_arg(this_00), bea_arg(uVar2));
    }
  }
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005378e0, ap_005378e0));
