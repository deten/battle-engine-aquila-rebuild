// auto-ported from 00458710_FUN_00458710.c (FUN_00458710, 724 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x340: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_008a9694 GLOBAL_AT(int, 0x008a9694)
#define DAT_008a9580 GLOBAL_AT(int, 0x008a9580)
#define DAT_00677614 GLOBAL_AT(int, 0x00677614)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_00675688 GLOBAL_AT(int, 0x00675688)
#define _DAT_00677634 GLOBAL_AT(int, 0x00677634)
#define _DAT_00677630 GLOBAL_AT(int, 0x00677630)
#define DAT_00662aa8 GLOBAL_AT(int, 0x00662aa8)
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
typedef int (BEA_CDECL* FUN_00421430_t)(void);
static const bea_guard<FUN_00421430_t> FUN_00421430 = {(FUN_00421430_t)0x00421430};
typedef int (BEA_THISCALL* FUN_0044d390_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044d390_t> FUN_0044d390 = {(FUN_0044d390_t)0x0044d390};
typedef uint32_t (BEA_STDCALL* FUN_00464bc0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00464bc0_t> FUN_00464bc0 = {(FUN_00464bc0_t)0x00464bc0};
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};
typedef undefined * (BEA_CDECL* FUN_0046a2a0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_0046a2a0_t> FUN_0046a2a0 = {(FUN_0046a2a0_t)0x0046a2a0};
typedef undefined4 (BEA_STDCALL* FUN_00514960_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00514960_t> FUN_00514960 = {(FUN_00514960_t)0x00514960};
typedef undefined4 (BEA_STDCALL* FUN_005149a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005149a0_t> FUN_005149a0 = {(FUN_005149a0_t)0x005149a0};
typedef undefined4 (BEA_STDCALL* FUN_005149c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005149c0_t> FUN_005149c0 = {(FUN_005149c0_t)0x005149c0};
typedef undefined4 (BEA_STDCALL* FUN_00515190_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515190_t> FUN_00515190 = {(FUN_00515190_t)0x00515190};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef short * (BEA_CDECL* FUN_0055e64e_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e64e_t> FUN_0055e64e = {(FUN_0055e64e_t)0x0055e64e};

static undefined4 BEA_THISCALL ap_00458710(void * this_)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;

  alignas(16) uint8_t bea_frame_[0x340] = {};   // the original stack frame (emulate_frame)
  int &local_338 = *reinterpret_cast<int *>(bea_frame_ + 0x340 - 0x338);
  int &local_334 = *reinterpret_cast<int *>(bea_frame_ + 0x340 - 0x334);
  int &local_330 = *reinterpret_cast<int *>(bea_frame_ + 0x340 - 0x330);
  int &local_32c = *reinterpret_cast<int *>(bea_frame_ + 0x340 - 0x32c);
  undefined1 (&local_328)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x340 - 0x328);
  int &local_324 = *reinterpret_cast<int *>(bea_frame_ + 0x340 - 0x324);
  undefined1 (&local_320)[400] = *reinterpret_cast<undefined1 (*)[400]>(bea_frame_ + 0x340 - 0x320);
  undefined1 (&local_190)[400] = *reinterpret_cast<undefined1 (*)[400]>(bea_frame_ + 0x340 - 0x190);
  iVar1 = *(int *)((int)this_ + 0x10);
  if (iVar1 != -2) {
    DAT_008a9694 = iVar1;
    if (DAT_008a9580 == 0) {
      FUN_00514960(bea_arg(*(undefined4 *)((int)this_ + 0x10)), bea_arg(&local_334), bea_arg(&local_338), bea_arg(&local_32c), bea_arg(local_328));
      FUN_005149c0(bea_arg(*(undefined4 *)((int)this_ + 0x10)), bea_arg(&local_330));
      if (local_334 == 0) {
        FUN_005149a0(bea_arg(DAT_008a9694), bea_arg(local_190));
        uVar2 = FUN_0046a2a0(0x74,DAT_008a9694);
        FUN_0055e64e(bea_arg(local_320), bea_arg(uVar2));
        DAT_00677614 = 0;
        uVar7 = 0;
        uVar6 = 3;
        uVar5 = 0;
        uVar4 = 10;
        uVar3 = 0;
        uVar2 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
        FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43c80000), bea_arg(0x3dcccccd), bea_arg(local_320), bea_arg(uVar2), bea_arg(uVar3), bea_arg(uVar4), bea_arg(uVar5), bea_arg(uVar6), bea_arg(uVar7));
        _DAT_00677634 = 0;
        _DAT_00677630 = 9;
        return 0;
      }
      if (local_338 == 0) {
        FUN_00468770(1);
        uVar9 = 0;
        uVar7 = 1;
        uVar6 = 0;
        uVar5 = 10;
        uVar4 = 0;
        uVar2 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
        iVar1 = *(int *)((int)this_ + 0x10);
        uVar3 = 0x98;
LAB_00458893:
        uVar3 = FUN_0046a2a0(uVar3,iVar1 + 1);
        FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43960000), bea_arg(0x3dcccccd), bea_arg(uVar3), bea_arg(uVar2), bea_arg(uVar4), bea_arg(uVar5), bea_arg(uVar6), bea_arg(uVar7), bea_arg(uVar9));
        return 1;
      }
      uVar2 = 0xe;
    }
    else {
      FUN_00514960(bea_arg(*(undefined4 *)((int)this_ + 0x10)), bea_arg(&local_324), bea_arg(&local_330), bea_arg(&local_32c), bea_arg(local_328));
      FUN_005149c0(bea_arg(*(undefined4 *)((int)this_ + 0x10)), bea_arg(&local_334));
      if (local_324 == 0) {
        FUN_005149a0(bea_arg(DAT_008a9694), bea_arg(local_190));
        uVar2 = FUN_0046a2a0(0x74,DAT_008a9694);
        FUN_0055e64e(bea_arg(local_320), bea_arg(uVar2));
        DAT_00677614 = 0;
        uVar7 = 0;
        uVar6 = 3;
        uVar5 = 0;
        uVar4 = 10;
        uVar3 = 0;
        uVar2 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
        FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43c80000), bea_arg(0x3dcccccd), bea_arg(local_320), bea_arg(uVar2), bea_arg(uVar3), bea_arg(uVar4), bea_arg(uVar5), bea_arg(uVar6), bea_arg(uVar7));
        _DAT_00677634 = 0;
        _DAT_00677630 = 9;
        return 0;
      }
      if (local_330 != 0) {
        piVar8 = &local_338;
        uVar2 = FUN_00421430();
        FUN_00515190(bea_arg(uVar2), bea_arg(piVar8));
        if ((local_32c < local_338) || (0xfff < local_334)) {
          if (0 < local_334) {
            FUN_00464bc0(bea_arg(DAT_00662aa8), bea_arg((uint)(0xfff < local_334)), bea_arg(0));
            return 1;
          }
          FUN_00468770(1);
          uVar9 = 0;
          uVar7 = 1;
          uVar6 = 0;
          uVar5 = 10;
          uVar4 = 0;
          uVar2 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
          iVar1 = *(int *)((int)this_ + 0x10);
          uVar3 = 0x9f;
          goto LAB_00458893;
        }
      }
      uVar2 = 0xd;
    }
    FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(uVar2), bea_arg(0x46));
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00458710, ap_00458710));
