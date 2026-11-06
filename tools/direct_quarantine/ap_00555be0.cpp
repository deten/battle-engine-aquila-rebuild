// auto-ported from 00555be0_FUN_00555be0.c (FUN_00555be0, 1979 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x90: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
// @autoport-repair: 10 float/pointer cast(s) made bit copies (compiler-located, tools/repair_fcasts.py)
// @hand-fixed 2026-10-28 check_fild: param_9 colour -> bea_fcast<float> (integer ops only at 0x555c20..0x555c38); FUN_00515940/00515b00 results are signed ints (mov [esp+0xc],eax; fild dword at 0x5562d9/0x5562f4): store raw bits, convert with (float)(int) instead of an unsigned qword conversion
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_008557f4 GLOBAL_AT(int, 0x008557f4)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_00897a98 GLOBAL_AT(int, 0x00897a98)
#define DAT_009c7fc8 GLOBAL_AT(char, 0x009c7fc8)
typedef undefined1 (BEA_CDECL* FUN_00465f00_t)(void);
static const bea_guard<FUN_00465f00_t> FUN_00465f00 = {(FUN_00465f00_t)0x00465f00};
typedef uint32_t (BEA_STDCALL* FUN_00513af0_t)(uint32_t);
static const bea_guard<FUN_00513af0_t> FUN_00513af0 = {(FUN_00513af0_t)0x00513af0};
typedef undefined4 (BEA_CDECL* FUN_00515940_t)(void);
static const bea_guard<FUN_00515940_t> FUN_00515940 = {(FUN_00515940_t)0x00515940};
typedef undefined4 (BEA_CDECL* FUN_00515b00_t)(void);
static const bea_guard<FUN_00515b00_t> FUN_00515b00 = {(FUN_00515b00_t)0x00515b00};
typedef int (BEA_THISCALL* FUN_0051a270_t)(uint32_t);
static const bea_guard<FUN_0051a270_t> FUN_0051a270 = {(FUN_0051a270_t)0x0051a270};
typedef ushort (BEA_THISCALL* FUN_0051a430_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0051a430_t> FUN_0051a430 = {(FUN_0051a430_t)0x0051a430};
typedef uint32_t (BEA_THISCALL* FUN_0051a6a0_t)(uint32_t);
static const bea_guard<FUN_0051a6a0_t> FUN_0051a6a0 = {(FUN_0051a6a0_t)0x0051a6a0};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef undefined4 (BEA_THISCALL* FUN_005588f0_t)(uint32_t);
static const bea_guard<FUN_005588f0_t> FUN_005588f0 = {(FUN_005588f0_t)0x005588f0};
#define _CIfmod(a0, a1) bea_x87call2(0x0055e3ea, (float10)(a0), (float10)(a1))

static uint32_t BEA_CDECL ap_00555be0(float param_1, float param_2, float param_3, int *param_4, undefined4 param_5, undefined4 param_6, float param_7, float param_8, float param_9, float param_10, float param_11, float param_12, float param_13, float param_14, float param_15)
{
  float fVar1;
  char cVar2;
  short sVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  float10 fVar8;
  alignas(16) uint8_t bea_frame_[0x90] = {};   // the original stack frame (emulate_frame)
  float * &local_8c = *reinterpret_cast<float * *>(bea_frame_ + 0x90 - 0x8c);
  float &local_88 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x88);
  float &local_84 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x84);
  float &local_80 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x80);
  float &local_7c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x7c);
  float &local_78 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x78);
  float &local_74 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x74);
  float (&local_70)[7] = *reinterpret_cast<float (*)[7]>(bea_frame_ + 0x90 - 0x70);
  float (&afStack_54)[7] = *reinterpret_cast<float (*)[7]>(bea_frame_ + 0x90 - 0x54);
  float (&afStack_38)[7] = *reinterpret_cast<float (*)[7]>(bea_frame_ + 0x90 - 0x38);
  float (&afStack_1c)[7] = *reinterpret_cast<float (*)[7]>(bea_frame_ + 0x90 - 0x1c);
  if (0.996f < param_3) {
    param_3 = (param_3 - 0.996f) * 0.5f + 0.996f;
  }
  if (DAT_008557f4 == 5) {
    param_9 = bea_fcast<float>((bea_piece32(param_9) >> 1 & 0x7f7f7f) + (bea_piece32(param_9) & 0xff000000));
  }
  local_84 = (float)(param_4[0x2b] << (*(byte *)((int)param_4 + 0xb2) & 0x1f)) * param_10;
  local_88 = (float)((int)(short)param_4[0x2c] << (*(byte *)((int)param_4 + 0xb2) & 0x1f)) *
             param_11;
  switch(param_5) {
  case 1:
    param_1 = param_1 - local_84;
    break;
  case 3:
    param_1 = param_1 - local_84;
    param_2 = param_2 - local_88;
    break;
  case 4:
    fVar1 = local_84 * 0.5f;
    goto LAB_00555d30;
  case 5:
    param_1 = param_1 - local_84 * 0.5f;
  case 2:
    param_2 = param_2 - local_88;
    break;
  case 6:
    param_1 = param_1 - local_84 * 0.5f;
    break;
  case 7:
    fVar1 = local_84;
LAB_00555d30:
    param_1 = param_1 - fVar1;
switchD_00555c96_caseD_8:
    param_2 = param_2 - local_88 * 0.5f;
    break;
  case 8:
    goto switchD_00555c96_caseD_8;
  }
  local_8c = (float *)(uintptr_t)bea_piece32((1.0f / param_3));
  if (4.0f < __builtin_bit_cast(float, (uint32_t)(uintptr_t)(local_8c))) {
    local_8c = (float *)0x40800000;
  }
  switch(param_6) {
  case 0:
    local_80 = param_1;
    uVar6 = 0;
    pfVar4 = local_70;
    do {
      *pfVar4 = param_1;
      pfVar4[1] = param_2;
      pfVar4[2] = param_3;
      pfVar4[3] = local_74;
      fVar1 = local_84;
      if ((uVar6 & 1) == 0) {
        fVar1 = 0.0f;
      }
      *pfVar4 = fVar1 + *pfVar4;
      fVar1 = local_88;
      if ((uVar6 & 2) == 0) {
        fVar1 = 0.0f;
      }
      pfVar4[1] = fVar1 + pfVar4[1];
      pfVar4[3] = __builtin_bit_cast(float, (uint32_t)(uintptr_t)(local_8c));
      pfVar4[4] = param_9;
      fVar1 = param_12;
      if ((uVar6 & 1) != 0) {
        fVar1 = param_13;
      }
      pfVar4[5] = fVar1;
      fVar1 = param_14;
      if ((uVar6 & 2) != 0) {
        fVar1 = param_15;
      }
      pfVar4[6] = fVar1;
      uVar6 = uVar6 + 1;
      pfVar4 = pfVar4 + 7;
    } while (BEA_LOOP_GUARD(((int)uVar6 < 4)));
    break;
  case 1:
    local_80 = param_1;
    uVar6 = 0;
    pfVar4 = local_70;
    do {
      *pfVar4 = param_1;
      pfVar4[1] = param_2;
      pfVar4[2] = param_3;
      pfVar4[3] = local_74;
      if ((uVar6 & 1) == 0) {
        fVar1 = 0.0f;
      }
      else {
        fVar1 = local_84 * param_7;
      }
      *pfVar4 = fVar1 + *pfVar4;
      fVar1 = local_88;
      if ((uVar6 & 2) == 0) {
        fVar1 = 0.0f;
      }
      pfVar4[1] = fVar1 + pfVar4[1];
      pfVar4[3] = __builtin_bit_cast(float, (uint32_t)(uintptr_t)(local_8c));
      pfVar4[4] = param_9;
      fVar1 = param_7;
      if ((uVar6 & 1) == 0) {
        fVar1 = 0.0f;
      }
      pfVar4[5] = fVar1;
      fVar1 = param_14;
      if ((uVar6 & 2) != 0) {
        fVar1 = param_15;
      }
      pfVar4[6] = fVar1;
      uVar6 = uVar6 + 1;
      pfVar4 = pfVar4 + 7;
    } while (BEA_LOOP_GUARD(((int)uVar6 < 4)));
    break;
  case 2:
    local_80 = local_84 + param_1;
    uVar6 = 0;
    pfVar4 = local_70;
    do {
      *pfVar4 = local_80;
      pfVar4[1] = param_2;
      pfVar4[2] = param_3;
      pfVar4[3] = local_74;
      if ((uVar6 & 1) == 0) {
        fVar1 = local_84 * param_7;
      }
      else {
        fVar1 = 0.0f;
      }
      *pfVar4 = *pfVar4 - fVar1;
      fVar1 = local_88;
      if ((uVar6 & 2) == 0) {
        fVar1 = 0.0f;
      }
      pfVar4[1] = fVar1 + pfVar4[1];
      pfVar4[3] = __builtin_bit_cast(float, (uint32_t)(uintptr_t)(local_8c));
      pfVar4[4] = param_9;
      fVar1 = param_7;
      if ((uVar6 & 1) != 0) {
        fVar1 = 0.0f;
      }
      pfVar4[5] = fVar1;
      fVar1 = param_14;
      if ((uVar6 & 2) != 0) {
        fVar1 = param_15;
      }
      pfVar4[6] = fVar1;
      uVar6 = uVar6 + 1;
      pfVar4 = pfVar4 + 7;
    } while (BEA_LOOP_GUARD(((int)uVar6 < 4)));
    break;
  case 3:
    fVar8 = _CIfmod((float10)1.0f,(float10)param_7);
    uVar6 = 0;
    pfVar4 = local_70;
    do {
      *pfVar4 = param_1;
      pfVar4[1] = param_2;
      pfVar4[2] = param_3;
      pfVar4[3] = local_74;
      fVar1 = local_84;
      if ((uVar6 & 1) == 0) {
        fVar1 = 0.0f;
      }
      *pfVar4 = fVar1 + *pfVar4;
      fVar1 = local_88;
      if ((uVar6 & 2) == 0) {
        fVar1 = 0.0f;
      }
      pfVar4[1] = fVar1 + pfVar4[1];
      pfVar4[3] = __builtin_bit_cast(float, (uint32_t)(uintptr_t)(local_8c));
      pfVar4[4] = param_9;
      fVar1 = param_12;
      if ((uVar6 & 1) != 0) {
        fVar1 = param_13;
      }
      pfVar4[5] = fVar1;
      fVar1 = param_14;
      if ((uVar6 & 2) != 0) {
        fVar1 = param_15;
      }
      uVar6 = uVar6 + 1;
      pfVar4[6] = (float)((float10)fVar1 + fVar8);
      pfVar4 = pfVar4 + 7;
    } while (BEA_LOOP_GUARD(((int)uVar6 < 4)));
    goto LAB_005561a0;
  case 4:
    fVar8 = _CIfmod((float10)1.0f,(float10)param_7);
    uVar6 = 0;
    pfVar4 = local_70;
    do {
      *pfVar4 = param_1;
      pfVar4[1] = param_2;
      pfVar4[2] = param_3;
      pfVar4[3] = local_74;
      fVar1 = local_84;
      if ((uVar6 & 1) == 0) {
        fVar1 = 0.0f;
      }
      *pfVar4 = fVar1 + *pfVar4;
      fVar1 = local_88;
      if ((uVar6 & 2) == 0) {
        fVar1 = 0.0f;
      }
      pfVar4[1] = fVar1 + pfVar4[1];
      pfVar4[3] = __builtin_bit_cast(float, (uint32_t)(uintptr_t)(local_8c));
      pfVar4[4] = param_9;
      fVar1 = param_12;
      if ((uVar6 & 1) != 0) {
        fVar1 = param_13;
      }
      pfVar4[5] = fVar1;
      fVar1 = param_14;
      if ((uVar6 & 2) != 0) {
        fVar1 = param_15;
      }
      pfVar4[6] = fVar1;
      uVar6 = uVar6 + 1;
      pfVar4[5] = (float)(fVar8 + (float10)pfVar4[5]);
      pfVar4 = pfVar4 + 7;
    } while (BEA_LOOP_GUARD(((int)uVar6 < 4)));
LAB_005561a0:
    local_80 = param_1;
    break;
  default:
    goto switchD_00555d87_default;
  }
  local_78 = param_3;
  local_7c = param_2;
switchD_00555d87_default:
  if (param_8 != 0.0f) {
    iVar5 = 4;
    fVar8 = (float10)fcos((float10)param_8);
    local_8c = (float *)(uintptr_t)bea_piece32((float)fVar8);
    fVar8 = (float10)fsin((float10)param_8);
    pfVar4 = local_70;
    do {
      iVar5 = iVar5 + -1;
      *pfVar4 = (float)((float10)*pfVar4 - ((float10)local_84 * (float10)0.5f + (float10)param_1));
      pfVar4[1] = (float)((float10)pfVar4[1] - ((float10)local_88 * (float10)0.5f + (float10)param_2)
                         );
      local_80 = *pfVar4;
      local_7c = pfVar4[1];
      local_78 = pfVar4[2];
      local_74 = pfVar4[3];
      *pfVar4 = (float)(((float10)__builtin_bit_cast(float, (uint32_t)(uintptr_t)(local_8c)) * (float10)local_80 - fVar8 * (float10)local_7c) +
                        (float10)local_84 * (float10)0.5f + (float10)param_1);
      pfVar4[1] = (float)((float10)__builtin_bit_cast(float, (uint32_t)(uintptr_t)(local_8c)) * (float10)local_7c + fVar8 * (float10)local_80 +
                          (float10)local_88 * (float10)0.5f + (float10)param_2);
      pfVar4 = pfVar4 + 7;
    } while (BEA_LOOP_GUARD((iVar5 != 0)));
  }
  bea_vcall<uint32_t>(param_4, 0x20);
  FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
  FUN_005588f0(bea_arg(param_4));
  FUN_0051a270(bea_arg(&DAT_00897a98));
  sVar3 = FUN_0051a430(bea_arg(&DAT_00897a98), bea_arg(&local_8c), bea_arg(4));
  if (sVar3 != -1) {
    cVar2 = FUN_00465f00();
    if (cVar2 != '\0') {
      local_88 = bea_fcast<float>(FUN_00515940());
      local_84 = (float)(int)bea_piece32(local_88) * 0.0015625f;
      local_88 = bea_fcast<float>(FUN_00515b00());
      iVar5 = 4;
      pfVar4 = local_70 + 1;
      do {
        iVar5 = iVar5 + -1;
        pfVar4[-1] = local_84 * pfVar4[-1];
        *pfVar4 = (float)(int)bea_piece32(local_88) * 0.0020833334f * *pfVar4;
        pfVar4 = pfVar4 + 7;
      } while (BEA_LOOP_GUARD((iVar5 != 0)));
    }
    if (DAT_009c7fc8 == '\0') {
      pfVar4 = local_70;
      pfVar7 = local_8c;
      for (iVar5 = 0x1c; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
        *pfVar7 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar7 = pfVar7 + 1;
      }
      FUN_0051a6a0(bea_arg(&DAT_00897a98));
    }
    else {
      pfVar4 = local_70;
      pfVar7 = local_8c;
      for (iVar5 = 7; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
        *pfVar7 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar7 = pfVar7 + 1;
      }
      pfVar4 = afStack_54;
      pfVar7 = local_8c + 7;
      for (iVar5 = 7; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
        *pfVar7 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar7 = pfVar7 + 1;
      }
      pfVar4 = afStack_38;
      pfVar7 = local_8c + 0x15;
      for (iVar5 = 7; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
        *pfVar7 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar7 = pfVar7 + 1;
      }
      pfVar4 = afStack_1c;
      pfVar7 = local_8c + 0xe;
      for (iVar5 = 7; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
        *pfVar7 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar7 = pfVar7 + 1;
      }
    }
  }
  return FUN_00513af0(bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00555be0, ap_00555be0));
