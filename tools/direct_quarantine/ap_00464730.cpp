// auto-ported from 00464730_vslot2.c (CFEPSaveGame::vslot2, 839 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x1a0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CFEPSaveGame;
#define DAT_00677614 GLOBAL_AT(int, 0x00677614)
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
#define DAT_0067762c GLOBAL_AT(int, 0x0067762c)
#define DAT_00677624 GLOBAL_AT(int, 0x00677624)
#define DAT_008a9694 GLOBAL_AT(int, 0x008a9694)
#define DAT_008a9580 GLOBAL_AT(int, 0x008a9580)
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_00675688 GLOBAL_AT(int, 0x00675688)
#define _DAT_00677630 GLOBAL_AT(int, 0x00677630)
#define _DAT_00677634 GLOBAL_AT(int, 0x00677634)
typedef uint32_t (BEA_STDCALL* CFEPBEConfig__vslot7_t)(uint32_t);
static const bea_guard<CFEPBEConfig__vslot7_t> CFEPBEConfig__vslot7 = {(CFEPBEConfig__vslot7_t)0x00452b60};
typedef undefined1 (BEA_CDECL* CMovieCamera__vslot7_t)(void);
static const bea_guard<CMovieCamera__vslot7_t> CMovieCamera__vslot7 = {(CMovieCamera__vslot7_t)0x0041a200};
typedef undefined4 (BEA_STDCALL* CRenderThing__vslot18_t)(uint32_t);
static const bea_guard<CRenderThing__vslot18_t> CRenderThing__vslot18 = {(CRenderThing__vslot18_t)0x004d6b20};
typedef int (BEA_THISCALL* FUN_0044d390_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044d390_t> FUN_0044d390 = {(FUN_0044d390_t)0x0044d390};
typedef uint32_t (BEA_THISCALL* FUN_00464c50_t)(uint32_t);
static const bea_guard<FUN_00464c50_t> FUN_00464c50 = {(FUN_00464c50_t)0x00464c50};
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef undefined * (BEA_CDECL* FUN_0046a2a0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_0046a2a0_t> FUN_0046a2a0 = {(FUN_0046a2a0_t)0x0046a2a0};
typedef undefined4 (BEA_STDCALL* FUN_00514960_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00514960_t> FUN_00514960 = {(FUN_00514960_t)0x00514960};
typedef bool (BEA_STDCALL* FUN_00514ec0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00514ec0_t> FUN_00514ec0 = {(FUN_00514ec0_t)0x00514ec0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef wchar_t * (BEA_CDECL* FUN_00524830_t)(undefined4, ...);
static const bea_guard<FUN_00524830_t> FUN_00524830 = {(FUN_00524830_t)0x00524830};
typedef short * (BEA_CDECL* FUN_0055e64e_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e64e_t> FUN_0055e64e = {(FUN_0055e64e_t)0x0055e64e};

static void BEA_THISCALL ap_00464730(CFEPSaveGame * this_, int param_1)
{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;

  alignas(16) uint8_t bea_frame_[0x1a0] = {};   // the original stack frame (emulate_frame)
  int &local_198 = *reinterpret_cast<int *>(bea_frame_ + 0x1a0 - 0x198);
  int &local_194 = *reinterpret_cast<int *>(bea_frame_ + 0x1a0 - 0x194);
  undefined1 (&local_190)[400] = *reinterpret_cast<undefined1 (*)[400]>(bea_frame_ + 0x1a0 - 0x190);
  if (param_1 == 3) {
    return;
  }
  CMovieCamera__vslot7();
  if (param_1 == 0) {
    if (DAT_00677614 != 0) goto LAB_00464777;
    FUN_00464c50(bea_arg(this_));
  }
  if (DAT_00677614 == 0) {
    DAT_009c68ac = 0;
    DAT_009c690d = 1;
    return;
  }
LAB_00464777:
  iVar2 = DAT_0067762c;
  if (DAT_00677624 == 3) {
    bVar4 = DAT_0067762c != 0;
    DAT_0067762c = 0xffffffff;
    if (bVar4) {
      if (iVar2 != 1) {
        DAT_0067762c = 0xffffffff;
        DAT_009c68ac = 0;
        DAT_009c690d = 1;
        return;
      }
      if (*(int *)(this_ + 0x214) != -1) {
        uVar1 = FUN_0046a2a0(0x7a,DAT_008a9694);
        CFEPBEConfig__vslot7(bea_arg(uVar1));
        iVar2 = FUN_00514ec0(bea_arg(DAT_008a9694), bea_arg(*(undefined4 *)(this_ + 0x214)), bea_arg(this_ + 0x218));
        if (iVar2 != 0) {
          *(undefined4 *)(this_ + 0x214) = 0xffffffff;
          *(undefined2 *)(this_ + 0x218) = 0;
          DAT_008a9580 = 1;
          FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0xd), bea_arg(0x14));
          uVar10 = 0;
          uVar9 = 3;
          uVar8 = 0;
          uVar7 = 10;
          uVar6 = 0;
          DAT_00677614 = 0;
          uVar1 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
          uVar5 = FUN_00524830(0x76);
          FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43c80000), bea_arg(0x3dcccccd), bea_arg(uVar5), bea_arg(uVar1), bea_arg(uVar6), bea_arg(uVar7), bea_arg(uVar8), bea_arg(uVar9), bea_arg(uVar10));
          _DAT_00677630 = 0xd;
          _DAT_00677634 = 0;
          DAT_009c68ac = 0;
          DAT_009c690d = 1;
          return;
        }
        *(undefined4 *)(this_ + 0x214) = 0xffffffff;
      }
      FUN_00464c50(bea_arg(this_));
      DAT_009c68ac = 0;
      DAT_009c690d = 1;
      return;
    }
    *(undefined4 *)(this_ + 0x214) = 0xffffffff;
    *(undefined2 *)(this_ + 0x218) = 0;
    DAT_008a9580 = 1;
    uVar1 = 0xd;
  }
  else {
    if (DAT_00677624 != 9) {
      DAT_009c68ac = 0;
      DAT_009c690d = 1;
      return;
    }
    DAT_0067762c = 0xffffffff;
    if (iVar2 != 0) {
      if (iVar2 != 1) {
        DAT_0067762c = 0xffffffff;
        DAT_009c68ac = 0;
        DAT_009c690d = 1;
        return;
      }
      FUN_00514960(bea_arg(DAT_008a9694), bea_arg(&local_194), bea_arg(&local_198), bea_arg(0), bea_arg(0));
      if (local_194 == 0) {
        uVar1 = FUN_0046a2a0(0x3c,DAT_008a9694);
        FUN_0055e64e(bea_arg(local_190), bea_arg(uVar1));
        DAT_00677614 = 0;
        uVar9 = 0;
        uVar8 = 3;
        uVar7 = 0;
        uVar6 = 10;
        uVar5 = 0;
        uVar1 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
        FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43c80000), bea_arg(0x3dcccccd), bea_arg(local_190), bea_arg(uVar1), bea_arg(uVar5), bea_arg(uVar6), bea_arg(uVar7), bea_arg(uVar8), bea_arg(uVar9));
        _DAT_00677630 = 0;
        _DAT_00677634 = 0;
        DAT_009c68ac = 0;
        DAT_009c690d = 1;
        return;
      }
      if (local_198 == 0) {
        uVar1 = FUN_0046a2a0(0x76,DAT_008a9694);
        CFEPBEConfig__vslot7(bea_arg(uVar1));
        iVar2 = CRenderThing__vslot18(bea_arg(DAT_008a9694));
        if (iVar2 == 0) {
          CMovieCamera__vslot7();
          DAT_00677614 = 0;
          DAT_009c68ac = 0;
          DAT_009c690d = 1;
          return;
        }
        CMovieCamera__vslot7();
        iVar2 = DAT_008a9694;
        uVar9 = 0;
        uVar8 = 3;
        uVar7 = 0;
        uVar6 = 10;
        uVar5 = 0;
        DAT_00677614 = 0;
        uVar1 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
        puVar3 = (undefined1 *)FUN_0046a2a0(0x77,iVar2 + 1);
      }
      else {
        uVar1 = FUN_0046a2a0(0x3c,DAT_008a9694);
        FUN_0055e64e(bea_arg(local_190), bea_arg(uVar1));
        DAT_00677614 = 0;
        uVar9 = 0;
        uVar8 = 3;
        uVar7 = 0;
        uVar6 = 10;
        uVar5 = 0;
        uVar1 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
        puVar3 = local_190;
      }
      FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43c80000), bea_arg(0x3dcccccd), bea_arg(puVar3), bea_arg(uVar1), bea_arg(uVar5), bea_arg(uVar6), bea_arg(uVar7), bea_arg(uVar8), bea_arg(uVar9));
      _DAT_00677630 = 0;
      _DAT_00677634 = 0;
      DAT_009c68ac = 0;
      DAT_009c690d = 1;
      return;
    }
    uVar1 = 0;
  }
  FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(uVar1), bea_arg(0x14));
  DAT_009c690d = 1;
  DAT_009c68ac = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00464730, ap_00464730));
