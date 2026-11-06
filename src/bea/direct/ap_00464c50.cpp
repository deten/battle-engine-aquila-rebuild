// auto-ported from 00464c50_FUN_00464c50.c (FUN_00464c50, 2111 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x230: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_008a9694 GLOBAL_AT(int, 0x008a9694)
#define DAT_00677614 GLOBAL_AT(int, 0x00677614)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_00675688 GLOBAL_AT(int, 0x00675688)
#define _DAT_00677630 GLOBAL_AT(int, 0x00677630)
#define _DAT_00677634 GLOBAL_AT(int, 0x00677634)
#define DAT_008a9584 GLOBAL_AT(int, 0x008a9584)
#define DAT_00662aa8 GLOBAL_AT(int, 0x00662aa8)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00660620 GLOBAL_AT(int, 0x00660620)
#define DAT_006799d0 GLOBAL_AT(char, 0x006799d0)
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
#define DAT_008a968c GLOBAL_AT(int, 0x008a968c)
#define DAT_008a9690 GLOBAL_AT(int, 0x008a9690)
#define DAT_008a18dc GLOBAL_AT(char, 0x008a18dc)
#define s_C__dev_ONSLAUGHT2_FEPSaveGame_cp_00629a78 ((char*)0x00629a78)
typedef uint32_t (BEA_STDCALL* CFEPBEConfig__vslot7_t)(uint32_t);
static const bea_guard<CFEPBEConfig__vslot7_t> CFEPBEConfig__vslot7 = {(CFEPBEConfig__vslot7_t)0x00452b60};
typedef undefined1 (BEA_CDECL* CMovieCamera__vslot7_t)(void);
static const bea_guard<CMovieCamera__vslot7_t> CMovieCamera__vslot7 = {(CMovieCamera__vslot7_t)0x0041a200};
typedef undefined4 (BEA_STDCALL* CRenderThing__vslot18_t)(uint32_t);
static const bea_guard<CRenderThing__vslot18_t> CRenderThing__vslot18 = {(CRenderThing__vslot18_t)0x004d6b20};
typedef uint32_t (BEA_THISCALL* FUN_004213c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004213c0_t> FUN_004213c0 = {(FUN_004213c0_t)0x004213c0};
typedef int (BEA_CDECL* FUN_00421430_t)(void);
static const bea_guard<FUN_00421430_t> FUN_00421430 = {(FUN_00421430_t)0x00421430};
typedef int (BEA_THISCALL* FUN_0044d390_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044d390_t> FUN_0044d390 = {(FUN_0044d390_t)0x0044d390};
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef undefined * (BEA_CDECL* FUN_0046a2a0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_0046a2a0_t> FUN_0046a2a0 = {(FUN_0046a2a0_t)0x0046a2a0};
typedef undefined4 (BEA_STDCALL* FUN_00514960_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00514960_t> FUN_00514960 = {(FUN_00514960_t)0x00514960};
typedef undefined4 (BEA_STDCALL* FUN_005149c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005149c0_t> FUN_005149c0 = {(FUN_005149c0_t)0x005149c0};
typedef undefined4 (BEA_STDCALL* FUN_00514a80_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00514a80_t> FUN_00514a80 = {(FUN_00514a80_t)0x00514a80};
typedef undefined4 (BEA_STDCALL* FUN_00514be0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00514be0_t> FUN_00514be0 = {(FUN_00514be0_t)0x00514be0};
typedef bool (BEA_STDCALL* FUN_00514ec0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00514ec0_t> FUN_00514ec0 = {(FUN_00514ec0_t)0x00514ec0};
typedef undefined4 (BEA_STDCALL* FUN_00514f80_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00514f80_t> FUN_00514f80 = {(FUN_00514f80_t)0x00514f80};
typedef undefined4 (BEA_STDCALL* FUN_00515190_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515190_t> FUN_00515190 = {(FUN_00515190_t)0x00515190};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef wchar_t * (BEA_CDECL* FUN_00524830_t)(undefined4, ...);
static const bea_guard<FUN_00524830_t> FUN_00524830 = {(FUN_00524830_t)0x00524830};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef short * (BEA_CDECL* FUN_0055e624_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e624_t> FUN_0055e624 = {(FUN_0055e624_t)0x0055e624};
typedef short * (BEA_CDECL* FUN_0055e64e_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e64e_t> FUN_0055e64e = {(FUN_0055e64e_t)0x0055e64e};
typedef int (BEA_CDECL* FUN_005d04ec_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005d04ec_t> FUN_005d04ec = {(FUN_005d04ec_t)0x005d04ec};

static void BEA_THISCALL ap_00464c50(void * this_)
{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;

  alignas(16) uint8_t bea_frame_[0x230] = {};   // the original stack frame (emulate_frame)
  int &local_224 = *reinterpret_cast<int *>(bea_frame_ + 0x230 - 0x224);
  int &local_220 = *reinterpret_cast<int *>(bea_frame_ + 0x230 - 0x220);
  uint &local_21c = *reinterpret_cast<uint *>(bea_frame_ + 0x230 - 0x21c);
  int &local_218 = *reinterpret_cast<int *>(bea_frame_ + 0x230 - 0x218);
  void * &local_214 = *reinterpret_cast<void * *>(bea_frame_ + 0x230 - 0x214);
  int &local_210 = *reinterpret_cast<int *>(bea_frame_ + 0x230 - 0x210);
  int &local_20c = *reinterpret_cast<int *>(bea_frame_ + 0x230 - 0x20c);
  int &local_208 = *reinterpret_cast<int *>(bea_frame_ + 0x230 - 0x208);
  undefined1 (&local_204)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x230 - 0x204);
  undefined2 (&local_200)[256] = *reinterpret_cast<undefined2 (*)[256]>(bea_frame_ + 0x230 - 0x200);
  local_214 = this_;
  CMovieCamera__vslot7();
  FUN_00514960(bea_arg(DAT_008a9694), bea_arg(&local_210), bea_arg(&local_218), bea_arg(&local_208), bea_arg(local_204));
  FUN_005149c0(bea_arg(DAT_008a9694), bea_arg(&local_220));
  iVar5 = DAT_008a9694;
  if (local_210 == 0) {
    uVar1 = FUN_0046a2a0(0x3c,DAT_008a9694);
    FUN_0055e64e(bea_arg(local_200), bea_arg(uVar1));
    DAT_00677614 = 0;
    uVar10 = 0;
    uVar9 = 3;
    uVar8 = 0;
    uVar7 = 10;
    uVar6 = 0;
    uVar1 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
    FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43c80000), bea_arg(0x3dcccccd), bea_arg(local_200), bea_arg(uVar1), bea_arg(uVar6), bea_arg(uVar7), bea_arg(uVar8), bea_arg(uVar9), bea_arg(uVar10));
    _DAT_00677630 = 0;
    _DAT_00677634 = 0;
    return;
  }
  if (local_218 == 0) {
    uVar11 = 9;
    uVar10 = 2;
    uVar9 = 0;
    uVar8 = 10;
    uVar7 = 0;
    uVar1 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
    iVar5 = iVar5 + 1;
    uVar6 = 0x75;
    goto LAB_00464f45;
  }
  iVar5 = CRenderThing__vslot18(bea_arg(DAT_008a9694));
  if (iVar5 == 0) {
    if (DAT_008a9584 != 1) goto LAB_00464dd6;
    local_21c = CONCAT31(((*(uint32_t*)((char*)&local_21c) >> 8) & 0xffffffu),1);
  }
  else {
    if (DAT_008a9584 == 1) {
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 10;
      uVar7 = 0;
      iVar5 = DAT_008a9584;
      uVar1 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
      uVar6 = FUN_0046a2a0(0x29,0);
      FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43960000), bea_arg(0x3dcccccd), bea_arg(uVar6), bea_arg(uVar1), bea_arg(uVar7), bea_arg(uVar8), bea_arg(uVar9), bea_arg(iVar5), bea_arg(uVar10));
      DAT_008a9584 = 0;
      _DAT_00677630 = 0;
      _DAT_00677634 = 0x32;
      return;
    }
LAB_00464dd6:
    local_21c = (uint)((*(uint32_t*)((char*)&local_21c) >> 8) & 0xffffffu) << 8;
  }
  piVar12 = &local_20c;
  uVar1 = FUN_00421430();
  FUN_00515190(bea_arg(uVar1), bea_arg(piVar12));
  if (((local_208 < local_20c) || (0xfff < local_220)) && ((char)local_21c == '\0')) {
    local_200[0] = 0;
    if (local_220 < 0x1000) {
      uVar1 = FUN_0046a2a0(0x9e,DAT_008a9694 + 1);
    }
    else {
      uVar1 = FUN_0046a2a0(0xa0,DAT_008a9694 + 1);
    }
    FUN_0055e624(bea_arg(local_200), bea_arg(uVar1));
    uVar10 = 4;
    uVar9 = 2;
    uVar8 = 0;
    uVar7 = 10;
    uVar6 = 0;
    uVar1 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
    FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43960000), bea_arg(0x3dcccccd), bea_arg(local_200), bea_arg(uVar1), bea_arg(uVar6), bea_arg(uVar7), bea_arg(uVar8), bea_arg(uVar9), bea_arg(uVar10));
    return;
  }
  *(undefined4 *)((int)this_ + 0x10) = DAT_00662aa8;
  local_224 = -1;
  FUN_005149c0(bea_arg(DAT_008a9694), bea_arg(&local_220));
  iVar5 = 0;
  if (0 < local_220) {
    do {
      FUN_00514a80(bea_arg(DAT_008a9694), bea_arg(iVar5), bea_arg(local_200));
      iVar2 = FUN_005d04ec(bea_arg((int)this_ + 0x14), bea_arg(local_200));
      if (iVar2 == 0) {
        local_224 = iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (BEA_LOOP_GUARD((iVar5 < local_220)));
  }
  if ((local_224 == -1) || ((char)local_21c != '\0')) {
    uVar1 = FUN_0046a2a0((-(uint)(DAT_008a9694 != -1) & 0xffffffec) + 0x8e,DAT_008a9694);
    CFEPBEConfig__vslot7(bea_arg(uVar1));
    iVar5 = (int)this_ + 0x14;
    iVar2 = FUN_00514be0(bea_arg(DAT_008a9694), bea_arg(iVar5), bea_arg(&local_224), bea_arg(local_21c & 0xff));
    if (iVar2 == 6) {
      DAT_00677614 = 0;
      *(int *)((int)this_ + 0x214) = local_224;
      FUN_0055e64e(bea_arg((int)this_ + 0x218), bea_arg(iVar5));
      uVar10 = 3;
      uVar9 = 2;
      uVar8 = 0;
      uVar7 = 10;
      uVar6 = 0;
      uVar1 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
      puVar3 = (undefined2 *)FUN_0046a2a0(0x27,0);
    }
    else {
      if (iVar2 == 0) {
        uVar1 = FUN_00421430();
        iVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(uVar1), bea_arg(0x61), bea_arg(s_C__dev_ONSLAUGHT2_FEPSaveGame_cp_00629a78), bea_arg(0x217));
        FUN_004213c0(bea_arg(&DAT_00660620), bea_arg(iVar2));
        iVar4 = FUN_00514f80(bea_arg(DAT_008a9694), bea_arg(local_224), bea_arg(iVar5), bea_arg(iVar2), bea_arg(uVar1));
        DAT_00677614 = 0;
        if (iVar4 == 0) {
          if (*(int *)((int)local_214 + 0x10) == 0) {
            uVar1 = 0x25;
          }
          else {
            uVar1 = 0x24;
          }
          uVar1 = FUN_0046a2a0(uVar1,0);
          if (DAT_006799d0 != '\0') {
            uVar1 = FUN_00524830(0xd6);
          }
          uVar11 = 0;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 10;
          uVar7 = 0x3c;
          DAT_00677614 = 0;
          uVar6 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
          FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43c80000), bea_arg(0x3dcccccd), bea_arg(uVar1), bea_arg(uVar6), bea_arg(uVar7), bea_arg(uVar8), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar11));
          FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(DAT_008a968c), bea_arg(DAT_008a9690));
          DAT_008a9584 = 1;
          DAT_008a18dc = 0;
        }
        else if (iVar4 == 7) {
          DAT_00677614 = 0;
          uVar1 = FUN_0046a2a0(0x3c,DAT_008a9694);
          FUN_0055e64e(bea_arg(local_200), bea_arg(uVar1));
          DAT_00677614 = 0;
          uVar10 = 0;
          uVar9 = 3;
          uVar8 = 0;
          uVar7 = 10;
          uVar6 = 0;
          uVar1 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
          FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43c80000), bea_arg(0x3dcccccd), bea_arg(local_200), bea_arg(uVar1), bea_arg(uVar6), bea_arg(uVar7), bea_arg(uVar8), bea_arg(uVar9), bea_arg(uVar10));
          _DAT_00677630 = 0;
          _DAT_00677634 = 0;
        }
        else if (iVar4 == 5) {
          FUN_00514ec0(bea_arg(DAT_008a9694), bea_arg(local_224), bea_arg(iVar5));
          DAT_00677614 = 0;
          FUN_005149c0(bea_arg(DAT_008a9694), bea_arg(&local_214));
          local_200[0] = 0;
          uVar1 = FUN_0046a2a0(0x9e,DAT_008a9694 + 1);
          FUN_0055e624(bea_arg(local_200), bea_arg(uVar1));
          uVar10 = 4;
          uVar9 = 2;
          uVar8 = 0;
          uVar7 = 10;
          uVar6 = 0;
          uVar1 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
          FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43960000), bea_arg(0x3dcccccd), bea_arg(local_200), bea_arg(uVar1), bea_arg(uVar6), bea_arg(uVar7), bea_arg(uVar8), bea_arg(uVar9), bea_arg(uVar10));
        }
        else {
          uVar1 = FUN_0046a2a0(0x26,DAT_008a9694);
          FUN_0055e64e(bea_arg(local_200), bea_arg(uVar1));
          DAT_00677614 = 0;
          uVar10 = 0;
          uVar9 = 3;
          uVar8 = 0;
          uVar7 = 10;
          uVar6 = 0;
          uVar1 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
          FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43c80000), bea_arg(0x3dcccccd), bea_arg(local_200), bea_arg(uVar1), bea_arg(uVar6), bea_arg(uVar7), bea_arg(uVar8), bea_arg(uVar9), bea_arg(uVar10));
          FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0), bea_arg(0));
        }
        if (iVar2 == 0) {
          DAT_006799d0 = 0;
          return;
        }
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar2));
        DAT_006799d0 = 0;
        return;
      }
      if ((iVar2 != 5) && (iVar2 != 8)) {
        DAT_00677614 = 0;
        CMovieCamera__vslot7();
        FUN_00514960(bea_arg(DAT_008a9694), bea_arg(&local_210), bea_arg(&local_218), bea_arg(0), bea_arg(0));
        if ((local_210 != 0) && (local_218 != 0)) {
          uVar1 = FUN_0046a2a0(0x26,DAT_008a9694);
          FUN_0055e64e(bea_arg(local_200), bea_arg(uVar1));
          DAT_00677614 = 0;
          uVar10 = 0;
          uVar9 = 3;
          uVar8 = 0;
          uVar7 = 10;
          uVar6 = 0;
          uVar1 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
          FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43c80000), bea_arg(0x3dcccccd), bea_arg(local_200), bea_arg(uVar1), bea_arg(uVar6), bea_arg(uVar7), bea_arg(uVar8), bea_arg(uVar9), bea_arg(uVar10));
          FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0), bea_arg(0));
          DAT_006799d0 = 0;
          return;
        }
        uVar1 = FUN_0046a2a0(0x3c,DAT_008a9694);
        FUN_0055e64e(bea_arg(local_200), bea_arg(uVar1));
        DAT_00677614 = 0;
        uVar10 = 0;
        uVar9 = 3;
        uVar8 = 0;
        uVar7 = 10;
        uVar6 = 0;
        uVar1 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
        FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43c80000), bea_arg(0x3dcccccd), bea_arg(local_200), bea_arg(uVar1), bea_arg(uVar6), bea_arg(uVar7), bea_arg(uVar8), bea_arg(uVar9), bea_arg(uVar10));
        _DAT_00677630 = 0;
        _DAT_00677634 = 0;
        DAT_006799d0 = 0;
        return;
      }
      if (local_224 != -1) {
        FUN_00514ec0(bea_arg(DAT_008a9694), bea_arg(local_224), bea_arg(iVar5));
      }
      DAT_00677614 = 0;
      FUN_005149c0(bea_arg(DAT_008a9694), bea_arg(&local_214));
      local_200[0] = 0;
      if (iVar2 == 8) {
        uVar1 = FUN_0046a2a0(0xa0,DAT_008a9694 + 1);
      }
      else {
        uVar1 = FUN_0046a2a0(0x9e,DAT_008a9694 + 1);
      }
      FUN_0055e624(bea_arg(local_200), bea_arg(uVar1));
      uVar10 = 4;
      uVar9 = 2;
      uVar8 = 0;
      uVar7 = 10;
      uVar6 = 0;
      uVar1 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
      puVar3 = local_200;
    }
    FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43960000), bea_arg(0x3dcccccd), bea_arg(puVar3), bea_arg(uVar1), bea_arg(uVar6), bea_arg(uVar7), bea_arg(uVar8), bea_arg(uVar9), bea_arg(uVar10));
    DAT_006799d0 = 0;
    return;
  }
  DAT_00677614 = 0;
  *(int *)((int)this_ + 0x214) = local_224;
  FUN_0055e64e(bea_arg((int)this_ + 0x218), bea_arg((int)this_ + 0x14));
  uVar11 = 3;
  uVar10 = 2;
  uVar9 = 0;
  uVar8 = 10;
  uVar7 = 0;
  uVar1 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
  iVar5 = 0;
  uVar6 = 0x27;
LAB_00464f45:
  uVar6 = FUN_0046a2a0(uVar6,iVar5);
  FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43960000), bea_arg(0x3dcccccd), bea_arg(uVar6), bea_arg(uVar1), bea_arg(uVar7), bea_arg(uVar8), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar11));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00464c50, ap_00464c50));
