// auto-ported from 0051a030_FUN_0051a030.c (FUN_0051a030, 438 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
// @hand-fixed 2026-10-28: 0x465710 is a thiscall on 0x515a70's result (the credits drew
// with no receiver: "File not found", tools/menu_test.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_00679b40 GLOBAL_AT(char, 0x00679b40)
#define DAT_00896cb4 GLOBAL_AT(int, 0x00896cb4)
#define DAT_00896cac GLOBAL_AT(int, 0x00896cac)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
// thiscall: the receiver is 0x515a70's result (`mov ecx, eax`), read after the
// chkstk prologue where the convention scan stopped (Ghidra: stdcall, `this` lost)
typedef uint32_t (BEA_THISCALL* FUN_00465710_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00465710_t> FUN_00465710 = {(FUN_00465710_t)0x00465710};
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef undefined4 (BEA_CDECL* FUN_005180b0_t)(uint32_t);
static const bea_guard<FUN_005180b0_t> FUN_005180b0 = {(FUN_005180b0_t)0x005180b0};
typedef undefined4 (BEA_CDECL* FUN_005185c0_t)(uint32_t);
static const bea_guard<FUN_005185c0_t> FUN_005185c0 = {(FUN_005185c0_t)0x005185c0};
typedef undefined4 (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};

static undefined4 BEA_STDCALL ap_0051a030(float param_1, int param_2)
{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  void *this_local;
  int *piVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uVar14;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  int (&local_8)[2] = *reinterpret_cast<int (*)[2]>(bea_frame_ + 0x10 - 0x8);
  uVar2 = DAT_00679b40;
  DAT_00679b40 = 1;
  param_1 = 430.0f - param_1 * 32.0f;
  if (DAT_00896cb4 != 3) {
    piVar4 = &DAT_00896cac;
    do {
      iVar1 = *piVar4;
      if ((iVar1 == -1) || (piVar4[1] != 0)) {
        uVar3 = FUN_004f7bf0(bea_arg(piVar4[1]));
      }
      else if (piVar4[-1] == 2) {
        uVar3 = FUN_005180b0(bea_arg(iVar1));
      }
      else {
        uVar3 = FUN_005185c0(bea_arg(iVar1));
      }
      iVar1 = piVar4[2];
      uVar5 = 0xff2f5f7f;
      if (iVar1 == 0) {
        uVar5 = 0xffffffff;
      }
      else if (iVar1 == 1) {
        uVar5 = 0xff7f5f2f;
      }
      if (iVar1 == 0) {
        param_1 = param_1 + 50.0f;
      }
      else if (iVar1 == 1) {
        param_1 = param_1 + 40.0f;
      }
      else {
        param_1 = param_1 + 16.0f;
      }
      if ((-20.0f < param_1) && (param_1 < 500.0f)) {
        piVar13 = local_8;
        uVar8 = uVar3;
        this_local = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
        FUN_00540680(bea_arg(this_local), bea_arg(uVar8), bea_arg(piVar13));
        fVar6 = 320.0f - (float)local_8[0] * 0.5f;
        uVar14 = 0x10;
        uVar12 = 0;
        uVar11 = 0x447a0000;
        uVar5 = ((uVar5 >> 8 & 0xffff0000) * param_2 ^ uVar5) & 0xffffff ^
                (uVar5 >> 8 & 0xff0000) * param_2;
        uVar10 = 0x3f800000;
        uVar9 = 0x3f800000;
        uVar8 = 0x3dcccccd;
        fVar7 = param_1;
        FUN_00465710(bea_arg((void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1))), bea_arg(fVar6), bea_arg(fVar7), bea_arg(uVar8), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar5), bea_arg(uVar3), bea_arg(uVar11), bea_arg(uVar12), bea_arg(uVar14));
      }
      piVar13 = piVar4 + 6;
      piVar4 = piVar4 + 4;
    } while (BEA_LOOP_GUARD((*piVar13 != 3)));
  }
  DAT_009c68ac = 0;
  DAT_00679b40 = uVar2;
  DAT_009c690d = 1;
  if (param_1 <= -30.0f) {
    return 0;
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051a030, ap_0051a030));
