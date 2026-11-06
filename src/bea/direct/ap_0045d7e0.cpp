// auto-ported from 0045d7e0_vslot2.c (CFEPGoodies::vslot2, 2255 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CFEPGoodies;
typedef char _DAT_00679af8;
#define DAT_008a1374 GLOBAL_AT(int, 0x008a1374)
#define DAT_006798b0 GLOBAL_AT(int, 0x006798b0)
#define DAT_006798b4 GLOBAL_AT(int, 0x006798b4)
#define DAT_00675688 GLOBAL_AT(int, 0x00675688)
#define DAT_0089bda8 GLOBAL_AT(int, 0x0089bda8)
#define DAT_0089bda4 GLOBAL_AT(int, 0x0089bda4)
#define _DAT_00679af8 GLOBAL_AT(float, 0x00679af8)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_00662dcc GLOBAL_AT(int, 0x00662dcc)
#define DAT_00889a48 GLOBAL_AT(int, 0x00889a48)
#define DAT_0089d690 GLOBAL_AT(int, 0x0089d690)
#define _DAT_008a956c GLOBAL_AT(int, 0x008a956c)
#define DAT_0089d94c GLOBAL_AT(int, 0x0089d94c)
#define DAT_0089bdf5 GLOBAL_AT(char, 0x0089bdf5)
#define DAT_006292ec GLOBAL_AT(int, 0x006292ec)
#define DAT_006292f0 GLOBAL_AT(int, 0x006292f0)
#define DAT_0089be48 GLOBAL_AT(int, 0x0089be48)
#define DAT_0089be28 GLOBAL_AT(int, 0x0089be28)
#define s_GILL_M_on_a_fork_00629378 ((char*)0x00629378)
#define s_UsTheMovie_0062936c ((char*)0x0062936c)
typedef undefined4 (BEA_THISCALL* FUN_0044dea0_t)(uint32_t);
static const bea_guard<FUN_0044dea0_t> FUN_0044dea0 = {(FUN_0044dea0_t)0x0044dea0};
typedef uint32_t (BEA_STDCALL* FUN_00452db0_t)(uint32_t);
static const bea_guard<FUN_00452db0_t> FUN_00452db0 = {(FUN_00452db0_t)0x00452db0};
typedef uint32_t (BEA_CDECL* FUN_00452de0_t)(void);
static const bea_guard<FUN_00452de0_t> FUN_00452de0 = {(FUN_00452de0_t)0x00452de0};
typedef int (BEA_CDECL* FUN_0045cb80_t)(int, int, ...);
static const bea_guard<FUN_0045cb80_t> FUN_0045cb80 = {(FUN_0045cb80_t)0x0045cb80};
typedef uint32_t (BEA_THISCALL* FUN_0045cc10_t)(uint32_t);
static const bea_guard<FUN_0045cc10_t> FUN_0045cc10 = {(FUN_0045cc10_t)0x0045cc10};
typedef uint32_t (BEA_THISCALL* FUN_0045cd10_t)(uint32_t);
static const bea_guard<FUN_0045cd10_t> FUN_0045cd10 = {(FUN_0045cd10_t)0x0045cd10};
typedef bool (BEA_THISCALL* FUN_00465490_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00465490_t> FUN_00465490 = {(FUN_00465490_t)0x00465490};
typedef undefined4 (BEA_THISCALL* FUN_00465640_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00465640_t> FUN_00465640 = {(FUN_00465640_t)0x00465640};
typedef uint32_t (BEA_CDECL* FUN_0046d810_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0046d810_t> FUN_0046d810 = {(FUN_0046d810_t)0x0046d810};
typedef uint32_t (BEA_THISCALL* FUN_004bb490_t)(uint32_t);
static const bea_guard<FUN_004bb490_t> FUN_004bb490 = {(FUN_004bb490_t)0x004bb490};
typedef uint32_t (BEA_THISCALL* FUN_004bb8c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004bb8c0_t> FUN_004bb8c0 = {(FUN_004bb8c0_t)0x004bb8c0};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};

static void BEA_THISCALL ap_0045d7e0(CFEPGoodies * this_, int param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  float10 fVar13;
  float10 fVar14;

  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  char (&local_100)[256] = *reinterpret_cast<char (*)[256]>(bea_frame_ + 0x100 - 0x100);
  iVar7 = FUN_00465490(bea_arg(&DAT_008a1374), bea_arg(0));
  DAT_006798b0 = (uint)(iVar7 != 0);
  iVar7 = FUN_00465490(bea_arg(&DAT_008a1374), bea_arg(5));
  DAT_006798b4 = (uint)(iVar7 != 0);
  if (*(int *)(this_ + 0x1d4) == 0) {
    fVar1 = (1.0f - *(float *)(this_ + 400)) * 0.1f + *(float *)(this_ + 400);
    *(float *)(this_ + 400) = fVar1;
    if (ABS(1.0f - fVar1) < 0.001f) {
      *(undefined4 *)(this_ + 400) = 0x3f800000;
    }
    fVar1 = -*(float *)(this_ + 0x194) * 0.4f + *(float *)(this_ + 0x194);
    *(float *)(this_ + 0x194) = fVar1;
    if (ABS(-fVar1) < 0.005f) {
      *(undefined4 *)(this_ + 0x194) = 0;
    }
    if ((*(int *)(this_ + 400) == 0x3f800000) || (*(float *)(this_ + 0x194) == 0.0f)) {
      FUN_0045cd10(bea_arg(this_));
      iVar7 = FUN_0044dea0(bea_arg(&DAT_00675688));
      if (iVar7 == 0) {
        if (param_1 != 0) {
          return;
        }
        fVar1 = 0.0f;
        if ((DAT_0089bda8 < 0x21d) || (399 < DAT_0089bda4)) {
          if ((DAT_0089bda8 < 100) && (DAT_0089bda4 < 400)) {
            fVar1 = (float)(DAT_0089bda8 + -100);
          }
        }
        else {
          fVar1 = (float)(DAT_0089bda8 + -0x21c);
        }
        fVar1 = _DAT_00679af8 * fVar1 * fVar1 * fVar1 * 0.002f + *(float *)(this_ + 0x134);
        *(float *)(this_ + 0x134) = fVar1;
        if (fVar1 < 0.0f) {
          *(undefined4 *)(this_ + 0x134) = 0;
        }
        if (5100.0f < *(float *)(this_ + 0x134)) {
          *(undefined4 *)(this_ + 0x134) = 0x459f6000;
        }
        goto LAB_0045df1a;
      }
    }
  }
  else {
    FUN_0045cc10(bea_arg(this_));
    fVar1 = -*(float *)(this_ + 400) * 0.1f + *(float *)(this_ + 400);
    *(float *)(this_ + 400) = fVar1;
    if (ABS(-fVar1) < 0.001f) {
      *(undefined4 *)(this_ + 400) = 0;
    }
    if (*(int *)(this_ + 0x1d8) == 2) {
      if ((*(float *)(this_ + 0x194) < 1.0f) &&
         (fVar1 = (1.0f - *(float *)(this_ + 0x194)) * 0.3f + *(float *)(this_ + 0x194),
         *(float *)(this_ + 0x194) = fVar1, ABS(1.0f - fVar1) < 0.005f)) {
        *(undefined4 *)(this_ + 0x194) = 0x3f800000;
      }
      if (*(int *)(this_ + 0x158) == 0) {
        fVar13 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
        fVar1 = (float)(fVar13 - (float10)*(float *)(this_ + 0x184));
        *(float *)(this_ + 0x180) = *(float *)(this_ + 0x180) - fVar1;
        *(float *)(this_ + 0x184) = (float)fVar13;
        fVar13 = (float10)fVar1 * (float10)*(float *)(this_ + 0x174) +
                 (float10)*(float *)(this_ + 0x15c);
        *(float *)(this_ + 0x15c) = (float)fVar13;
        fVar2 = fVar1 * *(float *)(this_ + 0x17c) + *(float *)(this_ + 0x164);
        *(float *)(this_ + 0x164) = fVar2;
        fVar1 = fVar1 * *(float *)(this_ + 0x178) + *(float *)(this_ + 0x160);
        *(float *)(this_ + 0x160) = fVar1;
        fVar3 = fVar2 * 3.14f * 0.0055555557f;
        fVar6 = fVar1 * 3.14f * 0.0055555557f;
        fVar13 = fVar13 * (float10)3.14f * (float10)0.0055555557f;
        fVar14 = (float10)fcos(fVar13);
        fVar1 = (float)fVar14;
        fVar13 = (float10)fsin(fVar13);
        fVar14 = (float10)fcos((float10)fVar3);
        fVar2 = (float)fVar14;
        fVar14 = (float10)fsin((float10)fVar3);
        fVar3 = (float)fVar14;
        fVar14 = (float10)fcos((float10)fVar6);
        fVar4 = (float)fVar14;
        fVar14 = (float10)fsin((float10)fVar6);
        *(float *)(this_ + 0x1a0) =
             (float)((float10)fVar2 * (float10)fVar1 - fVar14 * (float10)fVar3 * fVar13);
        *(float *)(this_ + 0x1a4) = (float)-((float10)fVar4 * fVar13);
        *(float *)(this_ + 0x1a8) =
             (float)((float10)fVar3 * (float10)fVar1 + fVar14 * (float10)fVar2 * fVar13);
        *(float *)(this_ + 0x1b0) =
             (float)((float10)fVar2 * fVar13 + fVar14 * (float10)fVar3 * (float10)fVar1);
        *(float *)(this_ + 0x1b4) = fVar4 * fVar1;
        *(float *)(this_ + 0x1b8) =
             (float)((float10)fVar3 * fVar13 -
                    (float10)(float)(fVar14 * (float10)fVar2) * (float10)fVar1);
        *(float *)(this_ + 0x1c0) = -(fVar4 * fVar3);
        *(float *)(this_ + 0x1c4) = (float)fVar14;
        *(float *)(this_ + 0x1c8) = fVar4 * fVar2;
      }
      fVar1 = _DAT_00679af8 * 10.0f + *(float *)(this_ + 0x188);
      *(float *)(this_ + 0x188) = fVar1;
      if (*(float *)(this_ + 0x18c) + 10.0f < fVar1) {
        *(undefined4 *)(this_ + 0x188) = 0xc2c80000;
      }
      if ((*(int *)(this_ + 0x154) == 2) && (*(int *)(this_ + 0x194) == 0x3f800000)) {
        iVar7 = FUN_0045cb80(*(undefined4 *)(this_ + 0x13c),*(undefined4 *)(this_ + 0x140));
        if ((iVar7 < 0xc9) || (0xe8 < iVar7)) {
          pcVar11 = s_GILL_M_on_a_fork_00629378;
          if (iVar7 == 0x4d) {
            pcVar11 = s_UsTheMovie_0062936c;
          }
          uVar9 = 0xffffffff;
          do {
            pcVar12 = pcVar11;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar12 = pcVar11 + 1;
            cVar5 = *pcVar11;
            pcVar11 = pcVar12;
          } while (BEA_LOOP_GUARD((cVar5 != '\0')));
          uVar9 = ~uVar9;
          pcVar11 = pcVar12 + -uVar9;
          pcVar12 = local_100;
          for (uVar10 = uVar9 >> 2; BEA_LOOP_GUARD((uVar10 != 0)); uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar9 = uVar9 & 3; BEA_LOOP_GUARD((uVar9 != 0)); uVar9 = uVar9 - 1) {
            *pcVar12 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar12 = pcVar12 + 1;
          }
        }
        else if (iVar7 == 0xe8) {
          FUN_0046d810(bea_arg(local_100), bea_arg(0x21));
        }
        else {
          FUN_0046d810(bea_arg(local_100), bea_arg(iVar7 + -200));
        }
        if (DAT_00662dcc != 0) {
          FUN_004bb490(bea_arg(&DAT_00889a48));
        }
        FUN_00452de0();
        if (((((((iVar7 < 0xc9) || (0xe8 < iVar7)) || (iVar7 == 0xd1)) ||
              ((iVar7 == 0xd4 || (iVar7 == 0xd5)))) ||
             ((iVar7 == 0xd6 || ((iVar7 == 0xd7 || (iVar7 == 0xd8)))))) || (iVar7 == 0xe4)) ||
           (iVar7 == 0xe7)) {
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
        }
        FUN_00465640(bea_arg(&DAT_0089d690), bea_arg(local_100), bea_arg(0), bea_arg(uVar8), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(1));
        FUN_00452db0(bea_arg(1));
        if (DAT_00662dcc != 0) {
          FUN_004bb8c0(bea_arg(&DAT_00889a48), bea_arg(0), bea_arg(0));
        }
        *(undefined4 *)(this_ + 0x1d4) = 0;
      }
      if ((*(int *)(this_ + 0x154) == 3) && (*(int *)(this_ + 0x194) == 0x3f800000)) {
        iVar7 = FUN_0045cb80(*(undefined4 *)(this_ + 0x13c),*(undefined4 *)(this_ + 0x140));
        switch(iVar7 + -0x43) {
        case 0:
          _DAT_008a956c = 0x386;
          break;
        case 1:
          _DAT_008a956c = 0x387;
          break;
        case 2:
          _DAT_008a956c = 0x388;
          break;
        case 3:
          _DAT_008a956c = 0x389;
          break;
        default:
          _DAT_008a956c = 0x385;
        }
        switch(iVar7 + -0x43) {
        case 0:
          DAT_0089d94c = 0x386;
          break;
        case 1:
          DAT_0089d94c = 0x387;
          break;
        case 2:
          DAT_0089d94c = 0x388;
          break;
        case 3:
          DAT_0089d94c = 0x389;
          break;
        default:
          DAT_0089d94c = 0x385;
        }
        *(undefined4 *)(this_ + 0x1d4) = 0;
      }
      if (*(int *)(this_ + 0x154) == 4) {
        FUN_0045cb80(*(undefined4 *)(this_ + 0x13c),*(undefined4 *)(this_ + 0x140));
        *(undefined4 *)(this_ + 0x1d4) = 0;
      }
      if (1.0f <= *(float *)(this_ + 0x194)) {
        if (*(int *)(this_ + 0x154) == 0) {
          if (DAT_0089bdf5 == '\0') {
            DAT_006292ec = -1;
          }
          else {
            if (DAT_006292ec != -1) {
              *(float *)(this_ + 0x198) =
                   *(float *)(this_ + 0x198) -
                   (float)(DAT_0089bda8 - DAT_006292ec) / (*(float *)(this_ + 0x194) * 256.0f);
              *(float *)(this_ + 0x19c) =
                   *(float *)(this_ + 0x19c) -
                   (float)(DAT_0089bda4 - DAT_006292f0) / (*(float *)(this_ + 0x194) * 256.0f);
              if (*(float *)(this_ + 0x198) < -0.8f) {
                *(undefined4 *)(this_ + 0x198) = 0xbf4ccccd;
              }
              if (0.8f < *(float *)(this_ + 0x198)) {
                *(undefined4 *)(this_ + 0x198) = 0x3f4ccccd;
              }
              if (*(float *)(this_ + 0x19c) < -0.8f) {
                *(undefined4 *)(this_ + 0x19c) = 0xbf4ccccd;
              }
              if (0.8f < *(float *)(this_ + 0x19c)) {
                *(undefined4 *)(this_ + 0x19c) = 0x3f4ccccd;
              }
            }
            DAT_006292ec = DAT_0089bda8;
            DAT_006292f0 = DAT_0089bda4;
          }
          if (DAT_0089be48 < 0) {
            bea_vcall<uint32_t>(this_, 0xc, 0x23,(float)DAT_0089be48 * 0.025f);
          }
          else {
            if (DAT_0089be48 < 1) goto LAB_0045df11;
            bea_vcall<uint32_t>(this_, 0xc, 0x22,(float)DAT_0089be48 * 0.025f);
          }
          DAT_0089be48 = DAT_0089be48 / 2;
        }
        else if (*(int *)(this_ + 0x154) == 1) {
          if (DAT_0089bdf5 == '\0') {
            DAT_006292ec = -1;
          }
          else {
            *(undefined4 *)(this_ + 0x158) = 1;
            if (DAT_006292ec != -1) {
              bea_vcall<uint32_t>(this_, 0xc, 0x28,(float)(DAT_0089bda8 - DAT_006292ec) * 0.15f);
              bea_vcall<uint32_t>(this_, 0xc, 0x26,(float)(DAT_0089bda4 - DAT_006292f0) * -0.15f);
              if (*(float *)(this_ + 0x198) < -0.8f) {
                *(undefined4 *)(this_ + 0x198) = 0xbf4ccccd;
              }
              if (0.8f < *(float *)(this_ + 0x198)) {
                *(undefined4 *)(this_ + 0x198) = 0x3f4ccccd;
              }
              if (*(float *)(this_ + 0x19c) < -0.8f) {
                *(undefined4 *)(this_ + 0x19c) = 0xbf4ccccd;
              }
              if (0.8f < *(float *)(this_ + 0x19c)) {
                *(undefined4 *)(this_ + 0x19c) = 0x3f4ccccd;
              }
            }
            DAT_006292ec = DAT_0089bda8;
            DAT_006292f0 = DAT_0089bda4;
          }
        }
      }
    }
  }
LAB_0045df11:
  if (param_1 != 0) {
    return;
  }
LAB_0045df1a:
  if (DAT_0089be28 != 0) {
    DAT_0089be28 = 0;
    bea_vcall<uint32_t>(this_, 0xc, 0x2e,0x3f800000);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0045d7e0, ap_0045d7e0));
