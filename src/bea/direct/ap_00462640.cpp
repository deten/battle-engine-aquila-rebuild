// auto-ported from 00462640_vslot2.c (CFEPMain::vslot2, 1316 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CFEPMain;
typedef char _DAT_00679af8;
#define DAT_00660620 GLOBAL_AT(int, 0x00660620)
#define _DAT_0089d794 GLOBAL_AT(int, 0x0089d794)
#define _DAT_0089d798 GLOBAL_AT(int, 0x0089d798)
#define _DAT_0089d79c GLOBAL_AT(int, 0x0089d79c)
#define _DAT_0089d7a0 GLOBAL_AT(int, 0x0089d7a0)
#define DAT_00679940 GLOBAL_AT(undefined4, 0x00679940)
#define DAT_0089d764 GLOBAL_AT(undefined4, 0x0089d764)
#define _DAT_0089d7a4 GLOBAL_AT(int, 0x0089d7a4)
#define DAT_0082b400 GLOBAL_AT(int, 0x0082b400)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_00662df4 GLOBAL_AT(int, 0x00662df4)
#define DAT_00679988 GLOBAL_AT(char, 0x00679988)
#define DAT_00677614 GLOBAL_AT(int, 0x00677614)
#define DAT_00677624 GLOBAL_AT(int, 0x00677624)
#define DAT_00677608 GLOBAL_AT(int, 0x00677608)
#define DAT_00662dcc GLOBAL_AT(int, 0x00662dcc)
#define DAT_00889a48 GLOBAL_AT(int, 0x00889a48)
#define DAT_00896988 GLOBAL_AT(char, 0x00896988)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008a1388 GLOBAL_AT(short, 0x008a1388)
#define DAT_008a9694 GLOBAL_AT(int, 0x008a9694)
#define DAT_0067762c GLOBAL_AT(int, 0x0067762c)
#define _DAT_00677604 GLOBAL_AT(int, 0x00677604)
#define _DAT_00677630 GLOBAL_AT(int, 0x00677630)
#define _DAT_008a956c GLOBAL_AT(int, 0x008a956c)
#define _DAT_00679af8 GLOBAL_AT(float, 0x00679af8)
#define DAT_006630cc GLOBAL_AT(int, 0x006630cc)
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
#define DAT_008a1894 GLOBAL_AT(int, 0x008a1894)
#define DAT_008a9580 GLOBAL_AT(int, 0x008a9580)
#define DAT_008a1110 GLOBAL_AT(int, 0x008a1110)
#define DAT_008a968c GLOBAL_AT(int, 0x008a968c)
#define DAT_008a9690 GLOBAL_AT(int, 0x008a9690)
#define DAT_008a9584 GLOBAL_AT(int, 0x008a9584)
#define DAT_0089d94c GLOBAL_AT(int, 0x0089d94c)
#define DAT_0089dab8 GLOBAL_AT(int, 0x0089dab8)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define DAT_00675688 GLOBAL_AT(int, 0x00675688)
#define s_C__dev_ONSLAUGHT2_FEPMain_cpp_00629414 ((char*)0x00629414)
#define s_Firework_Explosion_Blue_Effect_00629434 ((char*)0x00629434)
typedef undefined1 (BEA_CDECL* CMovieCamera__vslot7_t)(void);
static const bea_guard<CMovieCamera__vslot7_t> CMovieCamera__vslot7 = {(CMovieCamera__vslot7_t)0x0041a200};
typedef uint32_t (BEA_THISCALL* FUN_0041b7c0_t)(uint32_t);
static const bea_guard<FUN_0041b7c0_t> FUN_0041b7c0 = {(FUN_0041b7c0_t)0x0041b7c0};
typedef int (BEA_THISCALL* FUN_0041b8f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0041b8f0_t> FUN_0041b8f0 = {(FUN_0041b8f0_t)0x0041b8f0};
typedef uint32_t (BEA_THISCALL* FUN_00421350_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00421350_t> FUN_00421350 = {(FUN_00421350_t)0x00421350};
typedef int (BEA_CDECL* FUN_00421430_t)(void);
static const bea_guard<FUN_00421430_t> FUN_00421430 = {(FUN_00421430_t)0x00421430};
typedef int (BEA_THISCALL* FUN_0044d390_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044d390_t> FUN_0044d390 = {(FUN_0044d390_t)0x0044d390};
typedef uint32_t (BEA_THISCALL* FUN_004589f0_t)(uint32_t);
static const bea_guard<FUN_004589f0_t> FUN_004589f0 = {(FUN_004589f0_t)0x004589f0};
typedef uint32_t (BEA_THISCALL* FUN_00460310_t)(uint32_t);
static const bea_guard<FUN_00460310_t> FUN_00460310 = {(FUN_00460310_t)0x00460310};
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef uint32_t (BEA_CDECL* FUN_004685a0_t)(void);
static const bea_guard<FUN_004685a0_t> FUN_004685a0 = {(FUN_004685a0_t)0x004685a0};
typedef uint32_t (BEA_THISCALL* FUN_004bb490_t)(uint32_t);
static const bea_guard<FUN_004bb490_t> FUN_004bb490 = {(FUN_004bb490_t)0x004bb490};
typedef uint32_t (BEA_THISCALL* FUN_004bb8c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004bb8c0_t> FUN_004bb8c0 = {(FUN_004bb8c0_t)0x004bb8c0};
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};
typedef int (BEA_THISCALL* FUN_004cd7a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cd7a0_t> FUN_004cd7a0 = {(FUN_004cd7a0_t)0x004cd7a0};
typedef undefined4 (BEA_THISCALL* FUN_004e2bb0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e2bb0_t> FUN_004e2bb0 = {(FUN_004e2bb0_t)0x004e2bb0};
typedef uint32_t (BEA_THISCALL* FUN_004e2c50_t)(uint32_t);
static const bea_guard<FUN_004e2c50_t> FUN_004e2c50 = {(FUN_004e2c50_t)0x004e2c50};
typedef undefined * (BEA_THISCALL* FUN_004f2580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2580_t> FUN_004f2580 = {(FUN_004f2580_t)0x004f2580};
typedef undefined4 (BEA_STDCALL* FUN_00514be0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00514be0_t> FUN_00514be0 = {(FUN_00514be0_t)0x00514be0};
typedef undefined4 (BEA_STDCALL* FUN_00514f80_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00514f80_t> FUN_00514f80 = {(FUN_00514f80_t)0x00514f80};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef uint32_t (BEA_CDECL* FUN_0051f680_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0051f680_t> FUN_0051f680 = {(FUN_0051f680_t)0x0051f680};
typedef uint32_t (BEA_THISCALL* FUN_0051fff0_t)(uint32_t);
static const bea_guard<FUN_0051fff0_t> FUN_0051fff0 = {(FUN_0051fff0_t)0x0051fff0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef int (BEA_CDECL* _rand_t)(void);
static const bea_guard<_rand_t> _rand = {(_rand_t)0x0055dbfe};

static undefined4 BEA_THISCALL ap_00462640(CFEPMain * this_, int param_1)
{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  int &local_14 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x14);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x4);
  if (param_1 != 3) {
    CMovieCamera__vslot7();
  }
  if (param_1 == 0) {
    iVar4 = FUN_0041b8f0(bea_arg(&DAT_00660620), bea_arg(800));
    if ((*(int *)(iVar4 + 4) != 0) ||
       (iVar4 = FUN_0041b8f0(bea_arg(&DAT_00660620), bea_arg(0x2e5)), *(int *)(iVar4 + 4) != 0)) {
      local_10 = 0.0f;
      local_c = 0xc1a00000;
      local_8 = 0.0f;
      _DAT_0089d794 = 0;
      _DAT_0089d798 = 0xc1a00000;
      _DAT_0089d79c = 0;
      _DAT_0089d7a0 = local_4;
      puVar9 = &DAT_00679940;
      puVar10 = &DAT_0089d764;
      for (iVar4 = 0xc; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = iVar4 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      _DAT_0089d7a4 = 0x3f800000;
      FUN_004685a0();
      iVar4 = _rand();
      if (iVar4 % 0x32 == 0) {
        uVar5 = FUN_004cd7a0(bea_arg(&DAT_0082b400), bea_arg(s_Firework_Explosion_Blue_Effect_00629434));
        uVar6 = _rand();
        local_14 = (uVar6 & 0xff) - 0x80;
        uVar6 = _rand();
        local_c = 0;
        local_10 = (float)(int)((uVar6 & 0xff) - 0x80) * 0.078125f;
        local_8 = (float)local_14 * 0.0390625f - 5.0f;
        FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(uVar5), bea_arg(0), bea_arg(local_10), bea_arg(0), bea_arg(local_8), bea_arg(local_4), bea_arg(0), bea_arg(0));
      }
    }
    if (DAT_00662df4 != 0) {
      if (DAT_00679988 == '\0') {
        *(undefined4 *)(this_ + 8) = 1;
        *(undefined4 *)(this_ + 0xc) = 1;
        bea_vcall<uint32_t>(this_, 0x2c);
        DAT_00679988 = '\x01';
      }
      else {
        *(undefined4 *)(this_ + 8) = 7;
        *(undefined4 *)(this_ + 0xc) = 7;
        bea_vcall<uint32_t>(this_, 0x2c);
      }
    }
    iVar4 = *(int *)(this_ + 8);
    while (BEA_LOOP_GUARD(((0 < iVar4 &&
           (iVar4 = bea_vcall<uint32_t>(this_, 0x24, *(undefined4 *)(this_ + 8)), iVar4 == 0))))) {
      iVar4 = *(int *)(this_ + 8) + -1;
      *(int *)(this_ + 8) = iVar4;
    }
    iVar4 = *(int *)(this_ + 8);
    iVar7 = bea_vcall<uint32_t>(this_, 0x28);
    if (iVar4 < iVar7 + -1) {
      do {
        iVar4 = bea_vcall<uint32_t>(this_, 0x24, iVar4);
        if (iVar4 != 0) break;
        iVar4 = *(int *)(this_ + 8) + 1;
        *(int *)(this_ + 8) = iVar4;
        iVar7 = bea_vcall<uint32_t>(this_, 0x28);
      } while (BEA_LOOP_GUARD((iVar4 < iVar7 + -1)));
    }
  }
  if (((DAT_00677614 != 0) && (DAT_00677624 == 8)) && (DAT_00677608 == 1)) {
    if (DAT_00662dcc != 0) {
      FUN_004bb490(bea_arg(&DAT_00889a48));
    }
    FUN_004e2c50(bea_arg(&DAT_00896988));
    uVar5 = FUN_00421430();
    uVar8 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(uVar5), bea_arg(0x61), bea_arg(s_C__dev_ONSLAUGHT2_FEPMain_cpp_00629414), bea_arg(0x94));
    FUN_00421350(bea_arg(&DAT_00660620), bea_arg(uVar8));
    if ((DAT_008a1388 != 0) &&
       (iVar4 = FUN_00514be0(bea_arg(DAT_008a9694), bea_arg(&DAT_008a1388), bea_arg(&local_14), bea_arg(1)), iVar4 == 0)) {
      FUN_00514f80(bea_arg(DAT_008a9694), bea_arg(local_14), bea_arg(&DAT_008a1388), bea_arg(uVar8), bea_arg(uVar5));
    }
    FUN_0051f680(bea_arg(uVar8), bea_arg(uVar5));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(uVar8));
    if (DAT_00662dcc != 0) {
      FUN_004bb8c0(bea_arg(&DAT_00889a48), bea_arg(0), bea_arg(0));
    }
  }
  uVar6 = DAT_0067762c;
  iVar4 = DAT_00677614;
  if ((DAT_00677614 != 0) && (DAT_00677624 == 0xb)) {
    DAT_0067762c = 0xffffffff;
    if (uVar6 == 0) {
      _DAT_00677604 = 0;
      DAT_00677608 = 2;
      _DAT_00677630 = 0xfffffffe;
      iVar4 = 0;
    }
    else {
      iVar4 = uVar6 - 1;
      if (iVar4 == 0) {
        _DAT_008a956c = 0xffffffff;
      }
    }
  }
  if ((*(int *)(this_ + 0x14) != -0x40800000) &&
     (fVar1 = *(float *)(this_ + 0x14), *(float *)(this_ + 0x14) = fVar1 + 0.05f, 1.0f < fVar1 + 0.05f))
  {
    *(undefined4 *)(this_ + 0x14) = 0x3f800000;
  }
  fVar1 = *(float *)(this_ + 0x1c);
  *(float *)(this_ + 0x1c) = fVar1 - 0.1f;
  if (fVar1 - 0.1f < 0.0f) {
    *(undefined4 *)(this_ + 0x1c) = 0;
  }
  fVar1 = *(float *)(this_ + 0x20) - 0.1f;
  *(float *)(this_ + 0x20) = fVar1;
  uVar6 = bea_piece32(CONCAT21((short)((uint)iVar4 >> 0x10),fVar1 < 0.0f)) << 8;
  if (fVar1 < 0.0f) {
    *(undefined4 *)(this_ + 0x20) = 0;
  }
  uVar3 = DAT_0067762c;
  if (DAT_00677614 == 0) {
LAB_00462a73:
    fVar1 = _DAT_00679af8 * 50.0f + *(float *)(this_ + 0x18);
    *(float *)(this_ + 0x18) = fVar1;
    if (param_1 != 0) goto LAB_00462b24;
    if (DAT_006630cc == 0) {
      uVar6 = uVar6 & 0xffff0000;
      if (165000.0f < fVar1) {
        uVar6 = FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0xc), bea_arg(0));
      }
    }
    else {
      uVar6 = FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0xc), bea_arg(0));
    }
  }
  else {
    if (DAT_00677624 == 1) {
      DAT_0067762c = 0xffffffff;
      uVar6 = uVar3;
      if (uVar3 == 1) {
        FUN_0041b7c0(bea_arg(&DAT_00660620));
        FUN_0051fff0(bea_arg(&DAT_008a1894));
        DAT_008a9580 = 1;
        FUN_004589f0(bea_arg(&DAT_008a1110));
        DAT_008a968c = 7;
        DAT_008a9690 = 0;
        DAT_008a9584 = 0;
        DAT_0089d94c = 100;
        uVar6 = FUN_00460310(bea_arg(&DAT_0089dab8));
      }
    }
    else {
      uVar6 = DAT_00677624 - 2U;
      if ((DAT_00677624 - 2U == 0) && (DAT_0067762c = 0xffffffff, uVar6 = uVar3, uVar3 == 1)) {
        DAT_008a9580 = 0;
        uVar6 = FUN_004589f0(bea_arg(&DAT_008a1110));
        DAT_008a968c = 7;
        DAT_008a9690 = 0x46;
      }
    }
    if (DAT_00677614 == 0) goto LAB_00462a73;
    if (param_1 != 0) goto LAB_00462b24;
  }
  if ((*(int *)(this_ + 8) != -1) && (uVar6 = FUN_004e2bb0(bea_arg(&DAT_00896988), bea_arg(0)), (char)uVar6 != '\0')) {
    uVar15 = 8;
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 10;
    uVar11 = 0;
    uVar5 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
    uVar8 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x3848a7));
    uVar6 = FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43960000), bea_arg(0x3dcccccd), bea_arg(uVar8), bea_arg(uVar5), bea_arg(uVar11), bea_arg(uVar12), bea_arg(uVar13), bea_arg(uVar14), bea_arg(uVar15));
  }
LAB_00462b24:
  fVar2 = (float)*(int *)(this_ + 0xc);
  fVar1 = (fVar2 - *(float *)(this_ + 0x10)) * 0.2f + *(float *)(this_ + 0x10);
  *(float *)(this_ + 0x10) = fVar1;
  fVar1 = ABS(fVar2 - fVar1);
  uVar5 = CONCAT22((short)(uVar6 >> 0x10),
                   (ushort)(fVar1 < 0.05f) << 8 | (ushort)bea_isnan(fVar1) << 10 |
                   (ushort)(fVar1 == 0.05f) << 0xe);
  if (fVar1 < 0.05f) {
    *(float *)(this_ + 0x10) = fVar2;
    return uVar5;
  }
  return uVar5;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00462640, ap_00462640));
