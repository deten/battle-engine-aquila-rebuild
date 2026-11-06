// auto-ported from 00458ee0_vslot5.c (CFEPDevSelect::vslot5, 1694 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x630: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CFEPDevSelect;
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
#define DAT_00677614 GLOBAL_AT(int, 0x00677614)
#define DAT_00675688 GLOBAL_AT(int, 0x00675688)
#define _DAT_00675688 GLOBAL_AT(int, 0x00675688)
#define DAT_008a968c GLOBAL_AT(int, 0x008a968c)
#define DAT_008a9580 GLOBAL_AT(int, 0x008a9580)
#define DAT_00662aa8 GLOBAL_AT(int, 0x00662aa8)
typedef undefined4 (BEA_CDECL* CControllerDefinition__vslot7_t)(void);
static const bea_guard<CControllerDefinition__vslot7_t> CControllerDefinition__vslot7 = {(CControllerDefinition__vslot7_t)0x005019c0};
typedef int (BEA_THISCALL* FUN_0044d390_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044d390_t> FUN_0044d390 = {(FUN_0044d390_t)0x0044d390};
typedef undefined4 (BEA_THISCALL* FUN_0044d6f0_t)(uint32_t);
static const bea_guard<FUN_0044d6f0_t> FUN_0044d6f0 = {(FUN_0044d6f0_t)0x0044d6f0};
typedef uint32_t (BEA_STDCALL* FUN_00452df0_t)(uint32_t);
static const bea_guard<FUN_00452df0_t> FUN_00452df0 = {(FUN_00452df0_t)0x00452df0};
typedef uint32_t (BEA_STDCALL* FUN_00453140_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00453140_t> FUN_00453140 = {(FUN_00453140_t)0x00453140};
typedef uint32_t (BEA_STDCALL* FUN_004595b0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004595b0_t> FUN_004595b0 = {(FUN_004595b0_t)0x004595b0};
typedef uint32_t (BEA_STDCALL* FUN_00465710_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00465710_t> FUN_00465710 = {(FUN_00465710_t)0x00465710};
typedef uint32_t (BEA_THISCALL* FUN_004659a0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004659a0_t> FUN_004659a0 = {(FUN_004659a0_t)0x004659a0};
typedef uint32_t (BEA_THISCALL* FUN_00467200_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00467200_t> FUN_00467200 = {(FUN_00467200_t)0x00467200};
typedef uint32_t (BEA_STDCALL* FUN_00467bd0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00467bd0_t> FUN_00467bd0 = {(FUN_00467bd0_t)0x00467bd0};
typedef undefined * (BEA_CDECL* FUN_0046a2a0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_0046a2a0_t> FUN_0046a2a0 = {(FUN_0046a2a0_t)0x0046a2a0};
typedef uint32_t (BEA_STDCALL* FUN_00513930_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513930_t> FUN_00513930 = {(FUN_00513930_t)0x00513930};
typedef undefined4 (BEA_STDCALL* FUN_00514950_t)(uint32_t);
static const bea_guard<FUN_00514950_t> FUN_00514950 = {(FUN_00514950_t)0x00514950};
typedef undefined4 (BEA_STDCALL* FUN_00514960_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00514960_t> FUN_00514960 = {(FUN_00514960_t)0x00514960};
typedef undefined4 (BEA_STDCALL* FUN_005149a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005149a0_t> FUN_005149a0 = {(FUN_005149a0_t)0x005149a0};
typedef undefined4 (BEA_STDCALL* FUN_005151a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005151a0_t> FUN_005151a0 = {(FUN_005151a0_t)0x005151a0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef undefined4 (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};

static uint32_t BEA_THISCALL ap_00458ee0(CFEPDevSelect * this_, float param_1, int param_2)
{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  alignas(16) uint8_t bea_frame_[0x630] = {};   // the original stack frame (emulate_frame)
  float &local_628 = *reinterpret_cast<float *>(bea_frame_ + 0x630 - 0x628);
  int &local_624 = *reinterpret_cast<int *>(bea_frame_ + 0x630 - 0x624);
  undefined8 &local_620 = *reinterpret_cast<undefined8 *>(bea_frame_ + 0x630 - 0x620);
  int &local_618 = *reinterpret_cast<int *>(bea_frame_ + 0x630 - 0x618);
  int &local_614 = *reinterpret_cast<int *>(bea_frame_ + 0x630 - 0x614);
  longlong &local_610 = *reinterpret_cast<longlong *>(bea_frame_ + 0x630 - 0x610);
  int (&local_608)[2] = *reinterpret_cast<int (*)[2]>(bea_frame_ + 0x630 - 0x608);
  undefined1 (&local_600)[512] = *reinterpret_cast<undefined1 (*)[512]>(bea_frame_ + 0x630 - 0x600);
  undefined1 (&local_400)[512] = *reinterpret_cast<undefined1 (*)[512]>(bea_frame_ + 0x630 - 0x400);
  undefined1 (&local_200)[512] = *reinterpret_cast<undefined1 (*)[512]>(bea_frame_ + 0x630 - 0x200);
  FUN_00467200(bea_arg(&DAT_0089d758), bea_arg(param_1), bea_arg(param_2));
  if (param_1 <= 0.0f) goto LAB_004593e7;
  FUN_00514950(bea_arg(&local_610));
  if (param_2 == 0xd) {
    fVar6 = (param_1 - 0.5f) + (param_1 - 0.5f);
    if (0.0f <= fVar6) {
joined_r0x00458f97:
      if (1.0f < fVar6) {
        fVar6 = 1.0f;
      }
    }
    else {
      fVar6 = 0.0f;
    }
  }
  else {
    fVar6 = (param_1 - 0.75f) * 4.0f;
    if (0.0f <= fVar6) goto joined_r0x00458f97;
    fVar6 = 0.0f;
  }
  local_620 = (ulonglong)ROUND(fVar6 * 255.0f);
  if ((int)local_620 < 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)local_620;
    if (0xff < (int)local_620) {
      iVar4 = 0xff;
    }
  }
  FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(3));
  FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(3));
  FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
  iVar1 = CControllerDefinition__vslot7();
  if (iVar1 != 0) {
    FUN_00514960(bea_arg(0xffffffff), bea_arg(0), bea_arg(0), bea_arg(&local_624), bea_arg(&local_628));
    fVar6 = (float)(int)local_628;
    local_620 = CONCAT44((*(uint32_t*)((char*)&local_620 + 4)),fVar6);
    FUN_004595b0(bea_arg(0x43480000), bea_arg(0x42f00000), bea_arg(fVar6 - (float)local_624), bea_arg(fVar6), bea_arg(0x3f63d70a), bea_arg(0x3f800000), bea_arg(iVar4), bea_arg((uint)(*(int *)(this_ + 0xc) == 0)), bea_arg(1), bea_arg(1), bea_arg(1));
  }
  uVar5 = 0;
  if (0 < (int)local_610) {
    do {
      FUN_00514960(bea_arg(uVar5), bea_arg(&local_614), bea_arg(&local_618), bea_arg(&local_624), bea_arg(&local_628));
      if ((local_614 == 0) || (local_618 == 0)) {
        local_624 = 0;
        local_628 = 0.0f;
      }
      if ((*(int *)(this_ + 0xc) == 1) && (*(uint *)(this_ + 8) == uVar5)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      local_620 = CONCAT44((*(uint32_t*)((char*)&local_620 + 4)),uVar5) & 0xffffffff00000001;
      FUN_004595b0(bea_arg((float)(uVar5 & 1) * 48.0f + (float)((int)uVar5 / 2) * 96.0f + 152.0f), bea_arg(0x438c0000), bea_arg((float)(int)local_628 - (float)local_624), bea_arg((float)(int)local_628), bea_arg(0x3f63d70a), bea_arg(0x3f000000), bea_arg(iVar4), bea_arg(uVar2), bea_arg(0), bea_arg(local_618), bea_arg(local_614));
      uVar5 = uVar5 + 1;
    } while (BEA_LOOP_GUARD(((int)uVar5 < (int)local_610)));
  }
  piVar13 = local_608;
  uVar2 = FUN_0046a2a0(0x53,0);
  pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
  FUN_00540680(bea_arg(pvVar3), bea_arg(uVar2), bea_arg(piVar13));
  uVar14 = 0x3f800000;
  uVar12 = 0x3f800000;
  uVar11 = 0x3f4a3d71;
  uVar10 = 0;
  uVar2 = FUN_0046a2a0(0x53,0);
  uVar5 = iVar4 * 0xff0000 & 0xff7f7f00U | 0x7f7f00;
  uVar7 = 0x43aa0000;
  fVar6 = ((410.0f - (float)local_608[0]) - 10.0f) + 100.0f;
  pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
  FUN_004659a0(bea_arg(pvVar3), bea_arg(fVar6), bea_arg(uVar7), bea_arg(uVar5), bea_arg(uVar2), bea_arg(uVar10), bea_arg(uVar11), bea_arg(uVar12), bea_arg(uVar14));
  uVar5 = iVar4 * 0xff0000 & 0xff7f7f7fU | 0x7f7f7f;
  if (*(int *)(this_ + 0xc) == 0) {
    iVar4 = CControllerDefinition__vslot7();
    if (iVar4 != 0) {
      FUN_00514960(bea_arg(0xffffffff), bea_arg(&local_614), bea_arg(&local_618), bea_arg(&local_624), bea_arg(&local_628));
      local_624 = local_624 + -0x800;
      if (local_624 < 0) {
        local_624 = 0;
      }
      FUN_005151a0(bea_arg(local_624), bea_arg(local_600));
      FUN_005151a0(bea_arg(local_628), bea_arg(local_400));
      uVar15 = 0x3f800000;
      uVar14 = 0x3f800000;
      uVar12 = 0x3f4a3d71;
      uVar11 = 0;
      uVar2 = FUN_0046a2a0(0x55,0);
      uVar10 = 0x43aa0000;
      uVar7 = 0x42b80000;
      uVar8 = uVar5;
      pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_004659a0(bea_arg(pvVar3), bea_arg(uVar7), bea_arg(uVar10), bea_arg(uVar8), bea_arg(uVar2), bea_arg(uVar11), bea_arg(uVar12), bea_arg(uVar14), bea_arg(uVar15));
      uVar14 = 0x3f800000;
      uVar12 = 0x3f800000;
      uVar11 = 0x3f4a3d71;
      puVar9 = local_600;
      uVar10 = 0;
      uVar7 = 0x43aa0000;
      uVar2 = 0x43ff0000;
      pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
      FUN_004659a0(bea_arg(pvVar3), bea_arg(uVar2), bea_arg(uVar7), bea_arg(uVar5), bea_arg(puVar9), bea_arg(uVar10), bea_arg(uVar11), bea_arg(uVar12), bea_arg(uVar14));
    }
  }
  else {
    FUN_00514960(bea_arg(*(undefined4 *)(this_ + 0x10)), bea_arg(&local_614), bea_arg(&local_618), bea_arg(&local_624), bea_arg(&local_628));
    local_624 = local_624 + -0x800;
    if (local_624 < 0) {
      local_624 = 0;
    }
    if ((local_614 != 0) && (local_618 != 0)) {
      FUN_005149a0(bea_arg(*(undefined4 *)(this_ + 0x10)), bea_arg(local_200));
      FUN_005151a0(bea_arg(local_624), bea_arg(local_600));
      FUN_005151a0(bea_arg(local_628), bea_arg(local_400));
      DAT_009c68ac = 0;
      DAT_009c690d = 1;
    }
  }
  if (((*(int *)(this_ + 0x10) == -2) && (DAT_00677614 == 0)) && (param_1 == 1.0f)) {
    uVar15 = 0;
    uVar14 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    _DAT_00675688 = 0;
    uVar2 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
    uVar7 = FUN_0046a2a0(0x58,0);
    FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43aa0000), bea_arg(0x43e10000), bea_arg(0x3dcccccd), bea_arg(uVar7), bea_arg(uVar2), bea_arg(uVar10), bea_arg(uVar11), bea_arg(uVar12), bea_arg(uVar14), bea_arg(uVar15));
    FUN_0044d6f0(bea_arg(&DAT_00675688));
    _DAT_00675688 = 1;
    DAT_00677614 = 0;
  }
  FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(1));
  FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(1));
  FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
LAB_004593e7:
  if ((*(int *)(this_ + 0x10) != -2) || (DAT_00677614 != 0)) {
    FUN_00453140(bea_arg(5), bea_arg(param_1));
  }
  if (DAT_008a968c == 6) {
    iVar4 = 3;
  }
  else {
    iVar4 = (DAT_008a9580 != 0) + 1;
  }
  FUN_00453140(bea_arg(iVar4), bea_arg(param_1));
  local_628 = (param_1 - 0.75f) * 4.0f;
  if (0.0f <= local_628) {
    if (1.0f < local_628) {
      local_628 = 1.0f;
    }
  }
  else {
    local_628 = 0.0f;
  }
  FUN_00452df0(bea_arg(local_628));
  if (DAT_008a9580 == 0) {
    iVar4 = 0xd;
    uVar2 = 0x1f;
  }
  else {
    uVar2 = 0x1e;
    iVar4 = 0x12 - (uint)(DAT_00662aa8 != 0);
  }
  uVar7 = FUN_0046a2a0(iVar4,0);
  FUN_00467bd0(bea_arg(uVar7), bea_arg(param_1), bea_arg(param_2));
  local_610 = (longlong)ROUND(local_628 * 255.0f);
  if ((int)local_610 < 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)local_610;
    if (0xff < (int)local_610) {
      iVar4 = 0xff;
    }
  }
  piVar13 = local_608;
  uVar7 = FUN_0046a2a0(uVar2,0);
  pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
  FUN_00540680(bea_arg(pvVar3), bea_arg(uVar7), bea_arg(piVar13));
  uVar16 = 0;
  uVar15 = 0;
  uVar14 = 0x447a0000;
  uVar2 = FUN_0046a2a0(uVar2,0);
  uVar5 = (iVar4 * 0xff & 0xff00U) << 0x10 ^ 0x3f3f5f;
  uVar12 = 0x3f800000;
  uVar11 = 0x3f800000;
  fVar6 = 395.0f - (float)local_608[0] * 0.5f;
  uVar10 = 0x3c23d70a;
  uVar7 = 0x42c80000;
  FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
  return FUN_00465710(bea_arg(fVar6), bea_arg(uVar7), bea_arg(uVar10), bea_arg(uVar11), bea_arg(uVar12), bea_arg(uVar5), bea_arg(uVar2), bea_arg(uVar14), bea_arg(uVar15), bea_arg(uVar16));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00458ee0, ap_00458ee0));
