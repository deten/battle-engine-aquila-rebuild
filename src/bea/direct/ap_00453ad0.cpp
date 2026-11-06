// auto-ported from 00453ad0_vslot4.c (CControllerDefinition::vslot4, 1078 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CControllerDefinition;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_006290b4 GLOBAL_AT(char, 0x006290b4)
#define DAT_00888ff8 GLOBAL_AT(int, 0x00888ff8)
#define DAT_0067780c GLOBAL_AT(float, 0x0067780c)
#define DAT_00888f94 GLOBAL_AT(int, 0x00888f94)
#define DAT_00677870 GLOBAL_AT(int, 0x00677870)
#define DAT_00677874 GLOBAL_AT(int, 0x00677874)
#define DAT_008892dc GLOBAL_AT(undefined4, 0x008892dc)
#define DAT_0067786c GLOBAL_AT(int, 0x0067786c)
#define DAT_008a9564 GLOBAL_AT(int, 0x008a9564)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define s_FrontEnd_v2_FE_Arrow_tga_006290f4 ((char*)0x006290f4)
typedef uint32_t (BEA_CDECL* FUN_00453780_t)(int, ...);
static const bea_guard<FUN_00453780_t> FUN_00453780 = {(FUN_00453780_t)0x00453780};
typedef uint32_t (BEA_CDECL* FUN_00453f50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00453f50_t> FUN_00453f50 = {(FUN_00453f50_t)0x00453f50};
typedef uint32_t (BEA_CDECL* FUN_004541e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004541e0_t> FUN_004541e0 = {(FUN_004541e0_t)0x004541e0};
typedef uint32_t (BEA_THISCALL* FUN_00455010_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00455010_t> FUN_00455010 = {(FUN_00455010_t)0x00455010};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};
typedef undefined4 (BEA_THISCALL* FUN_004705d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004705d0_t> FUN_004705d0 = {(FUN_004705d0_t)0x004705d0};
typedef int * (BEA_CDECL* FUN_004f27f0_t)(void *, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};
typedef uint32_t (BEA_STDCALL* FUN_005159c0_t)(uint32_t);
static const bea_guard<FUN_005159c0_t> FUN_005159c0 = {(FUN_005159c0_t)0x005159c0};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef uint (BEA_CDECL* FUN_00523cc0_t)(float, float, float, float, ...);
static const bea_guard<FUN_00523cc0_t> FUN_00523cc0 = {(FUN_00523cc0_t)0x00523cc0};
typedef uint32_t (BEA_CDECL* FUN_005563d0_t)(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, ...);
static const bea_guard<FUN_005563d0_t> FUN_005563d0 = {(FUN_005563d0_t)0x005563d0};
#define _CIfmod(a0, a1) bea_x87call2(0x0055e3ea, (float10)(a0), (float10)(a1))

static void BEA_THISCALL ap_00453ad0(CControllerDefinition * this_, float param_1, float param_2, int param_3)
{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  short sVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  int *piVar9;
  undefined4 *puVar10;
  float *pfVar11;
  int iVar12;
  float10 fVar13;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  int &local_20 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x20);
  float (&afStack_18)[5] = *reinterpret_cast<float (*)[5]>(bea_frame_ + 0x20 - 0x18);
  float &fStack_4 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x4);
  local_20 = 0;
  do {
    FUN_00455010(bea_arg(this_), bea_arg(local_20), bea_arg(((float)local_20 - 1.0f) * 160.0f + param_1), bea_arg(param_2 + 5.0f), bea_arg(param_3));
    local_20 = local_20 + 1;
  } while (BEA_LOOP_GUARD((local_20 < 3)));
  if (*(int *)(this_ + 0x2c) == 0) {
    uVar2 = FUN_004f27f0(s_FrontEnd_v2_FE_Arrow_tga_006290f4,0,0,1,0,1);
    *(undefined4 *)(this_ + 0x2c) = uVar2;
  }
  if (0 < *(int *)(this_ + 0x20)) {
    fVar13 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
    fVar13 = _CIfmod((float10)2.0,fVar13);
    if (fVar13 < (float10)1.5f) {
      FUN_005563d0(param_1,param_2 + 15.0f,0,*(undefined4 *)(this_ + 0x2c),0xffffffff,0x3f800000,
                   0x3f800000,4,0,0x3f800000);
    }
    if ((param_3 != 0) &&
       (cVar1 = FUN_00523cc0(param_1 - 16.0f,(param_2 + 5.0f) - 6.0f,param_1 + 16.0f,param_2 + 31.0f),
       cVar1 != '\0')) {
      FUN_00468770(0);
      *(int *)(this_ + 0x20) = *(int *)(this_ + 0x20) + -1;
    }
  }
  if ((float)*(int *)(this_ + 0x20) < -0.5f) {
    fVar13 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
    fVar13 = _CIfmod((float10)2.0,fVar13);
    if (fVar13 < (float10)1.5f) {
      FUN_005563d0(param_1,(param_2 + 230.0f) - 10.0f,0,*(undefined4 *)(this_ + 0x2c),0xffffffff,
                   0x3f800000,0x3f800000,4,0,0x3f800000);
    }
    if ((param_3 != 0) &&
       (cVar1 = FUN_00523cc0(param_1 - 16.0f,(param_2 + 230.0f) - 26.0f,param_1 + 16.0f,param_2 + 236.0f)
       , cVar1 != '\0')) {
      FUN_00468770(0);
      *(int *)(this_ + 0x20) = *(int *)(this_ + 0x20) + 1;
    }
  }
  if ((DAT_006290b4 != '\0') || (iVar12 = 0, DAT_00888ff8 < 1)) {
    return;
  }
  pfVar8 = (float *)&DAT_0067780c;
  piVar9 = &DAT_00888f94;
  do {
    iVar6 = 0;
    pcVar3 = (char *)(piVar9[4] + 0x30);
    do {
      if ((*pcVar3 == '\0') && (*(char *)(*piVar9 + 0x30 + iVar6) != '\0')) {
        sVar5 = (short)iVar6;
        DAT_00677870 = 1;
        (*(uint16_t*)((char*)&DAT_00677874 + 2)) = sVar5;
        if (DAT_008892dc != -1) {
          puVar10 = &DAT_008892dc;
          do {
            if (*(char *)(puVar10 + -1) != '\0') {
              piVar9 = puVar10 + 1;
              iVar6 = 2;
              do {
                if ((*piVar9 == iVar12) && ((short)piVar9[2] == sVar5)) {
                  switch(piVar9[1]) {
                  default:
                    *piVar9 = -1;
                    break;
                  case 4:
                  case 5:
                  case 6:
                  case 7:
                  case 8:
                  case 9:
                  case 10:
                  case 0xb:
                  case 0xc:
                  case 0xd:
                  case 0xe:
                  case 0xf:
                  case 0x10:
                  case 0x11:
                    break;
                  }
                }
                piVar9 = piVar9 + 3;
                iVar6 = iVar6 + -1;
              } while (BEA_LOOP_GUARD((iVar6 != 0)));
            }
            piVar9 = puVar10 + 8;
            puVar10 = puVar10 + 8;
          } while (BEA_LOOP_GUARD((*piVar9 != -1)));
        }
        FUN_00453f50(bea_arg(DAT_0067786c), bea_arg(iVar12), bea_arg(((void*)0x004540c0)));
        FUN_00453780(0);
        goto LAB_00453ee9;
      }
      iVar6 = iVar6 + 1;
      pcVar3 = pcVar3 + 1;
    } while (BEA_LOOP_GUARD((iVar6 < 0x80)));
    piVar4 = DAT_008a9564;
    if (DAT_008a9564 == (int *)0x0) {
      piVar4 = (int *)FUN_004705d0(bea_arg(&DAT_008a9a98), bea_arg(0));
    }
    bea_vcall<uint32_t>(piVar4, 0x24, iVar12);
    bea_vcall<uint32_t>(piVar4, 0x28, iVar12);
    bea_vcall<uint32_t>(piVar4, 0x2c, iVar12);
    bea_vcall<uint32_t>(piVar4, 0x30, iVar12);
    bea_vcall<uint32_t>(piVar4, 0x34, iVar12);
    fVar13 = (float10)bea_vcall<float10>(piVar4, 0x38, iVar12);
    fStack_4 = (float)fVar13;
    iVar6 = -1;
    pfVar7 = afStack_18 + 1;
    pfVar11 = pfVar8;
    do {
      sVar5 = (short)iVar6;
      if (pfVar7[-1] - pfVar11[-1] < -0.6f) {
        DAT_00677870 = 5;
        (*(uint16_t*)((char*)&DAT_00677874 + 2)) = sVar5;
LAB_00453ee1:
        FUN_004541e0(bea_arg(DAT_0067786c), bea_arg(iVar12));
LAB_00453ee9:
        DAT_006290b4 = 1;
        FUN_005159c0(bea_arg(0));
        return;
      }
      if (0.6f < pfVar7[-1] - pfVar11[-1]) {
        DAT_00677870 = 4;
        (*(uint16_t*)((char*)&DAT_00677874 + 2)) = sVar5;
        goto LAB_00453ee1;
      }
      if (*pfVar7 - *pfVar11 < -0.6f) {
        DAT_00677870 = 5;
        (*(uint16_t*)((char*)&DAT_00677874 + 2)) = sVar5 + -1;
        goto LAB_00453ee1;
      }
      if (0.6f < *pfVar7 - *pfVar11) {
        DAT_00677870 = 4;
        (*(uint16_t*)((char*)&DAT_00677874 + 2)) = sVar5 + -1;
        goto LAB_00453ee1;
      }
      iVar6 = iVar6 + -2;
      pfVar7 = pfVar7 + 2;
      pfVar11 = pfVar11 + 2;
    } while (BEA_LOOP_GUARD((-6 < iVar6)));
    iVar12 = iVar12 + 1;
    piVar9 = piVar9 + 1;
    pfVar8 = pfVar8 + 6;
    if (DAT_00888ff8 <= iVar12) {
      return;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00453ad0, ap_00453ad0));
