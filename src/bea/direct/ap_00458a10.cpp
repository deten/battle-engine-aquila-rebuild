// auto-ported from 00458a10_vslot3.c (CFEPDevSelect::vslot3, 665 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CFEPDevSelect;
#define DAT_008a968c GLOBAL_AT(int, 0x008a968c)
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
#define DAT_008a9580 GLOBAL_AT(int, 0x008a9580)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_00675688 GLOBAL_AT(int, 0x00675688)
typedef undefined4 (BEA_CDECL* CControllerDefinition__vslot7_t)(void);
static const bea_guard<CControllerDefinition__vslot7_t> CControllerDefinition__vslot7 = {(CControllerDefinition__vslot7_t)0x005019c0};
typedef int (BEA_THISCALL* FUN_0044d390_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044d390_t> FUN_0044d390 = {(FUN_0044d390_t)0x0044d390};
typedef undefined4 (BEA_THISCALL* FUN_00458710_t)(uint32_t);
static const bea_guard<FUN_00458710_t> FUN_00458710 = {(FUN_00458710_t)0x00458710};
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};
typedef undefined * (BEA_CDECL* FUN_0046a2a0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_0046a2a0_t> FUN_0046a2a0 = {(FUN_0046a2a0_t)0x0046a2a0};
typedef undefined4 (BEA_STDCALL* FUN_00514950_t)(uint32_t);
static const bea_guard<FUN_00514950_t> FUN_00514950 = {(FUN_00514950_t)0x00514950};
typedef undefined4 (BEA_STDCALL* FUN_00514960_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00514960_t> FUN_00514960 = {(FUN_00514960_t)0x00514960};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};

static int BEA_THISCALL ap_00458a10(CFEPDevSelect * this_, int param_1, undefined4 param_2)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  int &local_8 = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0x8);
  undefined1 (&local_4)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x10 - 0x4);
  iVar1 = param_1 + -0x2a;
  switch(param_1) {
  case 0x2a:
    if (*(int *)(this_ + 0xc) == 1) {
      iVar4 = CControllerDefinition__vslot7();
      iVar1 = 0;
      if (iVar4 != 0) {
        uVar2 = FUN_00468770(0);
        *(undefined4 *)(this_ + 0xc) = 0;
        *(undefined4 *)(this_ + 0x10) = 0xffffffff;
        return uVar2;
      }
    }
    break;
  case 0x2b:
    if (*(int *)(this_ + 0xc) != 0) {
      return *(int *)(this_ + 0xc);
    }
    FUN_00514960(bea_arg(*(undefined4 *)(this_ + 8)), bea_arg(&param_1), bea_arg(&local_8), bea_arg(0), bea_arg(0));
    if (param_1 != 0) {
      *(undefined4 *)(this_ + 0xc) = 1;
      *(undefined4 *)(this_ + 0x10) = *(undefined4 *)(this_ + 8);
      uVar2 = FUN_00468770(0);
      return uVar2;
    }
    FUN_00514950(bea_arg(&param_1));
    iVar4 = -1;
    iVar1 = 0;
    if (param_1 < 1) {
LAB_00458b15:
      *(undefined4 *)(this_ + 0xc) = 0;
      *(undefined4 *)(this_ + 0x10) = 0xffffffff;
      return param_1;
    }
    do {
      if (iVar4 != -1) goto LAB_00458b2c;
      FUN_00514960(bea_arg(iVar1), bea_arg(&local_8), bea_arg(local_4), bea_arg(0), bea_arg(0));
      if (local_8 != 0) {
        iVar4 = iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (BEA_LOOP_GUARD((iVar1 < param_1)));
    if (iVar4 == -1) goto LAB_00458b15;
LAB_00458b2c:
    *(undefined4 *)(this_ + 0xc) = 1;
    goto LAB_00458be6;
  case 0x2c:
    iVar1 = FUN_00458710(bea_arg(this_));
    if ((char)iVar1 == '\0') {
      uVar2 = FUN_00468770(1);
      return uVar2;
    }
    break;
  case 0x2e:
    if (DAT_008a968c != 6) {
      FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0), bea_arg(0x46));
      uVar2 = FUN_00468770(2);
      return uVar2;
    }
    break;
  case 0x36:
    if (*(int *)(this_ + 0xc) != 1) {
      return iVar1;
    }
    iVar4 = -1;
    iVar5 = *(int *)(this_ + 8) + -1;
    if (iVar5 < 0) {
      return iVar1;
    }
    do {
      if (iVar4 != -1) goto LAB_00458be6;
      FUN_00514960(bea_arg(iVar5), bea_arg(&param_1), bea_arg(local_4), bea_arg(0), bea_arg(0));
      if (param_1 != 0) {
        iVar4 = iVar5;
      }
      iVar5 = iVar5 + -1;
    } while (BEA_LOOP_GUARD((-1 < iVar5)));
    goto LAB_00458bdd;
  case 0x37:
    if (*(int *)(this_ + 0xc) != 1) {
      return iVar1;
    }
    iVar4 = -1;
    FUN_00514950(bea_arg(&param_1));
    iVar1 = *(int *)(this_ + 8) + 1;
    if (param_1 <= iVar1) {
      return param_1;
    }
    do {
      if (iVar4 != -1) goto LAB_00458be6;
      FUN_00514960(bea_arg(iVar1), bea_arg(&local_8), bea_arg(local_4), bea_arg(0), bea_arg(0));
      if (local_8 != 0) {
        iVar4 = iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (BEA_LOOP_GUARD((iVar1 < param_1)));
LAB_00458bdd:
    iVar1 = param_1;
    if (iVar4 != -1) {
LAB_00458be6:
      *(int *)(this_ + 8) = iVar4;
      *(int *)(this_ + 0x10) = iVar4;
      uVar2 = FUN_00468770(0);
      return uVar2;
    }
    break;
  case 0x3c:
    iVar1 = 0;
    if (DAT_008a9580 != 0) {
      FUN_00468770(1);
      uVar10 = 7;
      uVar9 = 2;
      uVar8 = 0;
      uVar7 = 10;
      uVar6 = 0;
      uVar2 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
      uVar3 = FUN_0046a2a0(0x1a,0);
      iVar1 = FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43960000), bea_arg(0x3dcccccd), bea_arg(uVar3), bea_arg(uVar2), bea_arg(uVar6), bea_arg(uVar7), bea_arg(uVar8), bea_arg(uVar9), bea_arg(uVar10));
    }
  }
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00458a10, ap_00458a10));
