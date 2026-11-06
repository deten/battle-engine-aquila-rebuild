// auto-ported from 00461e20_FUN_00461e20.c (FUN_00461e20, 668 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x220: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_008a1388 GLOBAL_AT(int, 0x008a1388)
#define DAT_008a1898 GLOBAL_AT(int, 0x008a1898)
#define _DAT_008a18d8 GLOBAL_AT(int, 0x008a18d8)
#define DAT_008a9694 GLOBAL_AT(int, 0x008a9694)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00660620 GLOBAL_AT(int, 0x00660620)
#define DAT_00677614 GLOBAL_AT(int, 0x00677614)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_00675688 GLOBAL_AT(int, 0x00675688)
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
#define DAT_008a968c GLOBAL_AT(int, 0x008a968c)
#define DAT_008a9690 GLOBAL_AT(int, 0x008a9690)
#define DAT_008a9584 GLOBAL_AT(int, 0x008a9584)
#define DAT_0082b5b0 GLOBAL_AT(char, 0x0082b5b0)
#define s_C__dev_ONSLAUGHT2_FEPLoadGame_cp_006293c0 ((char*)0x006293c0)
typedef uint32_t (BEA_STDCALL* CFEPBEConfig__vslot7_t)(uint32_t);
static const bea_guard<CFEPBEConfig__vslot7_t> CFEPBEConfig__vslot7 = {(CFEPBEConfig__vslot7_t)0x00452b60};
typedef undefined1 (BEA_CDECL* CMovieCamera__vslot7_t)(void);
static const bea_guard<CMovieCamera__vslot7_t> CMovieCamera__vslot7 = {(CMovieCamera__vslot7_t)0x0041a200};
typedef undefined4 (BEA_STDCALL* CRenderThing__vslot18_t)(uint32_t);
static const bea_guard<CRenderThing__vslot18_t> CRenderThing__vslot18 = {(CRenderThing__vslot18_t)0x004d6b20};
typedef undefined4 (BEA_THISCALL* FUN_00421200_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00421200_t> FUN_00421200 = {(FUN_00421200_t)0x00421200};
typedef int (BEA_CDECL* FUN_00421430_t)(void);
static const bea_guard<FUN_00421430_t> FUN_00421430 = {(FUN_00421430_t)0x00421430};
typedef int (BEA_THISCALL* FUN_0044d390_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044d390_t> FUN_0044d390 = {(FUN_0044d390_t)0x0044d390};
typedef uint32_t (BEA_CDECL* FUN_00464b30_t)(uint32_t);
static const bea_guard<FUN_00464b30_t> FUN_00464b30 = {(FUN_00464b30_t)0x00464b30};
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef undefined * (BEA_CDECL* FUN_0046a2a0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_0046a2a0_t> FUN_0046a2a0 = {(FUN_0046a2a0_t)0x0046a2a0};
typedef undefined4 (BEA_STDCALL* FUN_00514960_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00514960_t> FUN_00514960 = {(FUN_00514960_t)0x00514960};
typedef undefined4 (BEA_STDCALL* FUN_00515080_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00515080_t> FUN_00515080 = {(FUN_00515080_t)0x00515080};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef uint32_t (BEA_CDECL* FUN_0051f680_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0051f680_t> FUN_0051f680 = {(FUN_0051f680_t)0x0051f680};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef int (BEA_CDECL* FUN_0055e607_t)(uint32_t);
static const bea_guard<FUN_0055e607_t> FUN_0055e607 = {(FUN_0055e607_t)0x0055e607};
typedef short * (BEA_CDECL* FUN_0055e64e_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e64e_t> FUN_0055e64e = {(FUN_0055e64e_t)0x0055e64e};

static void BEA_THISCALL ap_00461e20(void * this_)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;

  alignas(16) uint8_t bea_frame_[0x220] = {};   // the original stack frame (emulate_frame)
  int &local_214 = *reinterpret_cast<int *>(bea_frame_ + 0x220 - 0x214);
  int &local_210 = *reinterpret_cast<int *>(bea_frame_ + 0x220 - 0x210);
  int &local_20c = *reinterpret_cast<int *>(bea_frame_ + 0x220 - 0x20c);
  undefined1 (&local_208)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x220 - 0x208);
  undefined1 (&local_204)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x220 - 0x204);
  undefined1 (&local_200)[512] = *reinterpret_cast<undefined1 (*)[512]>(bea_frame_ + 0x220 - 0x200);
  if (*(int *)((int)this_ + 0x40) == -1) {
    return;
  }
  iVar4 = (int)this_ + 0x44;
  FUN_0055e64e(bea_arg(&DAT_008a1388), bea_arg(iVar4));
  FUN_0055e64e(bea_arg(&DAT_008a1898), bea_arg(iVar4));
  _DAT_008a18d8 = FUN_0055e607(bea_arg(iVar4));
  CMovieCamera__vslot7();
  FUN_00514960(bea_arg(DAT_008a9694), bea_arg(&local_20c), bea_arg(&local_210), bea_arg(0), bea_arg(0));
  if ((local_20c == 0) || (local_210 == 0)) {
    FUN_00464b30(bea_arg(0x3d));
    return;
  }
  CRenderThing__vslot18(bea_arg(DAT_008a9694));
  uVar1 = FUN_00421430();
  iVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(uVar1), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_FEPLoadGame_cp_006293c0), bea_arg(0xb3));
  uVar3 = FUN_0046a2a0((-(uint)(DAT_008a9694 != -1) & 0xffffffec) + 0x8d,DAT_008a9694);
  CFEPBEConfig__vslot7(bea_arg(uVar3));
  iVar4 = FUN_00515080(bea_arg(DAT_008a9694), bea_arg(*(undefined4 *)((int)this_ + 0x40)), bea_arg(iVar4), bea_arg(iVar2), bea_arg(uVar1), bea_arg(local_208));
  if (iVar4 == 0) {
    iVar4 = FUN_00421200(bea_arg(&DAT_00660620), bea_arg(iVar2), bea_arg(1));
    DAT_00677614 = 0;
    uVar11 = 0;
    if (iVar4 != 0) {
      uVar10 = 0;
      uVar8 = 0;
      uVar9 = 10;
      uVar7 = 0x3c;
      uVar3 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
      uVar6 = FUN_0046a2a0(0x38,0);
      FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43c80000), bea_arg(0x3dcccccd), bea_arg(uVar6), bea_arg(uVar3), bea_arg(uVar7), bea_arg(uVar9), bea_arg(uVar8), bea_arg(uVar10), bea_arg(uVar11));
      FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(DAT_008a968c), bea_arg(DAT_008a9690));
      DAT_008a9584 = 1;
      if (DAT_0082b5b0 == '\0') {
        FUN_0051f680(bea_arg(iVar2), bea_arg(uVar1));
      }
      goto LAB_0046208e;
    }
    uVar9 = 3;
    uVar7 = 0;
    uVar6 = 10;
    uVar3 = 0;
    uVar1 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
    puVar5 = (undefined1 *)FUN_0046a2a0(0x42,0);
LAB_00462063:
    FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43c80000), bea_arg(0x3dcccccd), bea_arg(puVar5), bea_arg(uVar1), bea_arg(uVar3), bea_arg(uVar6), bea_arg(uVar7), bea_arg(uVar9), bea_arg(uVar11));
  }
  else {
    CMovieCamera__vslot7();
    FUN_00514960(bea_arg(DAT_008a9694), bea_arg(&local_214), bea_arg(local_204), bea_arg(0), bea_arg(0));
    if (local_214 != 0) {
      DAT_00677614 = 0;
      uVar1 = FUN_0046a2a0(0x41,DAT_008a9694);
      FUN_0055e64e(bea_arg(local_200), bea_arg(uVar1));
      uVar11 = 0;
      uVar9 = 3;
      uVar7 = 0;
      uVar6 = 10;
      uVar3 = 0;
      uVar1 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
      puVar5 = local_200;
      goto LAB_00462063;
    }
    FUN_00464b30(bea_arg(0x3d));
  }
  FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0), bea_arg(0));
LAB_0046208e:
  if (iVar2 == 0) {
    return;
  }
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar2));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00461e20, ap_00461e20));
