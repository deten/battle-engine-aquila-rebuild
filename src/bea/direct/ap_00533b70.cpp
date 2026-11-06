// auto-ported from 00533b70_FUN_00533b70.c (FUN_00533b70, 821 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0083d9c0 GLOBAL_AT(float, 0x0083d9c0)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define s_FATAL_ERROR__null_thing_passed_t_0064fa9c ((char*)0x0064fa9c)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064fa40 ((char*)0x0064fa40)
typedef void * (BEA_THISCALL* FUN_00416d10_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00416d10_t> FUN_00416d10 = {(FUN_00416d10_t)0x00416d10};
typedef void * (BEA_THISCALL* FUN_004198d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004198d0_t> FUN_004198d0 = {(FUN_004198d0_t)0x004198d0};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_004705e0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004705e0_t> FUN_004705e0 = {(FUN_004705e0_t)0x004705e0};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_STDCALL ap_00533b70(undefined4 *param_1, undefined4 param_2, undefined4 param_3)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  void *pvVar14;
  float *pfVar15;
  float *pfVar16;
  undefined4 uVar17;
  void *pvVar18;
  float *pfVar19;
  float10 fVar20;
  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  undefined1 (&auStack_2c)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x30 - 0x2c);
  undefined1 (&auStack_1c)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x30 - 0x1c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x30 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x4);
  iVar13 = bea_vcall<uint32_t>(*param_1, 0x40);
  if (iVar13 == 0) {
    return FUN_00441740(&DAT_0066f580,s_FATAL_ERROR__null_thing_passed_t_0064fa9c);
  }
  pvVar14 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x28), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(0x1e5));
  pvVar18 = (void *)0x0;
  if (pvVar14 != (void *)0x0) {
    FUN_004e5840(bea_arg(pvVar14));
    pvVar18 = pvVar14;
  }
  pfVar15 = (float *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x26), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(0x1e6));
  if (pfVar15 == (float *)0x0) {
    pfVar15 = (float *)0x0;
  }
  else {
    if ((*(uint *)(iVar13 + 0x34) & 0x80000000) == 0) {
      pfVar19 = (float *)&DAT_0083d9c0;
    }
    else {
      pfVar19 = (float *)(iVar13 + 0x3c);
    }
    pfVar16 = (float *)bea_vcall<uint32_t>(param_1[1], 0x44, auStack_2c);
    fVar1 = pfVar19[8];
    fVar2 = *pfVar16;
    fVar3 = pfVar19[10];
    fVar4 = pfVar16[2];
    fVar5 = pfVar19[9];
    fVar6 = pfVar16[1];
    fVar7 = pfVar19[4];
    fVar8 = *pfVar16;
    fVar9 = pfVar19[6];
    fVar10 = pfVar16[2];
    fVar11 = pfVar19[5];
    fVar12 = pfVar16[1];
    *pfVar15 = *pfVar16 * *pfVar19 + pfVar19[1] * pfVar16[1] + pfVar19[2] * pfVar16[2];
    pfVar15[1] = fVar11 * fVar12 + fVar9 * fVar10 + fVar7 * fVar8;
    pfVar15[2] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
  }
  FUN_004e5b20(bea_arg(pvVar18), bea_arg(pfVar15));
  pfVar15 = (float *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x26), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(0x1e7));
  if (pfVar15 == (float *)0x0) {
    pfVar15 = (float *)0x0;
  }
  else {
    if ((*(uint *)(iVar13 + 0x34) & 0x80000000) == 0) {
      pfVar19 = (float *)&DAT_0083d9c0;
    }
    else {
      pfVar19 = (float *)(iVar13 + 0x3c);
    }
    pfVar16 = (float *)bea_vcall<uint32_t>(param_1[2], 0x44, auStack_2c);
    fVar1 = pfVar19[8];
    fVar2 = *pfVar16;
    fVar3 = pfVar19[10];
    fVar4 = pfVar16[2];
    fVar5 = pfVar19[9];
    fVar6 = pfVar16[1];
    fVar7 = pfVar19[4];
    fVar8 = *pfVar16;
    fVar9 = pfVar19[6];
    fVar10 = pfVar16[2];
    fVar11 = pfVar19[5];
    fVar12 = pfVar16[1];
    *pfVar15 = *pfVar19 * *pfVar16 + pfVar19[1] * pfVar16[1] + pfVar19[2] * pfVar16[2];
    pfVar15[1] = fVar11 * fVar12 + fVar9 * fVar10 + fVar7 * fVar8;
    pfVar15[2] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
  }
  FUN_004e5b20(bea_arg(pvVar18), bea_arg(pfVar15));
  pfVar15 = (float *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x26), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(0x1e8));
  if (pfVar15 == (float *)0x0) {
    pfVar15 = (float *)0x0;
  }
  else {
    if ((*(uint *)(iVar13 + 0x34) & 0x80000000) == 0) {
      pfVar19 = (float *)&DAT_0083d9c0;
    }
    else {
      pfVar19 = (float *)(iVar13 + 0x3c);
    }
    pfVar16 = (float *)bea_vcall<uint32_t>(param_1[3], 0x44, auStack_1c);
    fVar1 = pfVar19[8];
    fVar2 = *pfVar16;
    fVar3 = pfVar19[10];
    fVar4 = pfVar16[2];
    fVar5 = pfVar19[9];
    fVar6 = pfVar16[1];
    fVar7 = pfVar19[4];
    fVar8 = *pfVar16;
    fVar9 = pfVar19[6];
    fVar10 = pfVar16[2];
    fVar11 = pfVar19[5];
    fVar12 = pfVar16[1];
    *pfVar15 = *pfVar16 * *pfVar19 + pfVar19[1] * pfVar16[1] + pfVar19[2] * pfVar16[2];
    pfVar15[1] = fVar11 * fVar12 + fVar9 * fVar10 + fVar7 * fVar8;
    pfVar15[2] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
  }
  FUN_004e5b20(bea_arg(pvVar18), bea_arg(pfVar15));
  pvVar14 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x14), bea_arg(0x28), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(0x1e9));
  if (pvVar14 == (void *)0x0) {
    uVar17 = 0;
  }
  else {
    uVar17 = FUN_00416d10(bea_arg(pvVar14), bea_arg(pvVar18), bea_arg(3));
  }
  pvVar18 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x9c), bea_arg(0x26), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(0x1ea));
  if (pvVar18 == (void *)0x0) {
    uVar17 = 0;
  }
  else {
    fVar20 = (float10)bea_vcall<float10>(param_1[4], 0x34);
    uVar17 = FUN_004198d0(bea_arg(pvVar18), bea_arg(iVar13), bea_arg(uVar17), bea_arg((float)fVar20));
  }
  return FUN_004705e0(bea_arg(&DAT_008a9a98), bea_arg(0), bea_arg(uVar17), bea_arg(1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00533b70, ap_00533b70));
