// auto-ported from 0051fb90_vslot5.c (CFEPScreenPos::vslot5, 447 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
// @hand-fixed 2026-10-28: 0x465710 is a thiscall on 0x515a70's result (the credits drew
// with no receiver: "File not found", tools/menu_test.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define s_Adjust_Screen_Position_until_dis_0063fcf0 ((char*)0x0063fcf0)
#define s_correctly_centered_on_your_telev_0063fcc8 ((char*)0x0063fcc8)
#define s_Adjust_Screen_Position_0063fcb0 ((char*)0x0063fcb0)
typedef uint32_t (BEA_STDCALL* FUN_00452df0_t)(uint32_t);
static const bea_guard<FUN_00452df0_t> FUN_00452df0 = {(FUN_00452df0_t)0x00452df0};
typedef uint32_t (BEA_STDCALL* FUN_00453140_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00453140_t> FUN_00453140 = {(FUN_00453140_t)0x00453140};
// thiscall: the receiver is 0x515a70's result (`mov ecx, eax`), read after the
// chkstk prologue where the convention scan stopped (Ghidra: stdcall, `this` lost)
typedef uint32_t (BEA_THISCALL* FUN_00465710_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00465710_t> FUN_00465710 = {(FUN_00465710_t)0x00465710};
typedef uint32_t (BEA_THISCALL* FUN_00467200_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00467200_t> FUN_00467200 = {(FUN_00467200_t)0x00467200};
typedef uint32_t (BEA_STDCALL* FUN_00467bd0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00467bd0_t> FUN_00467bd0 = {(FUN_00467bd0_t)0x00467bd0};
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef undefined4 (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};

static void BEA_STDCALL ap_0051fb90(float param_1, float param_2)
{
  undefined4 uVar1;
  void *pvVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  int (&local_8)[2] = *reinterpret_cast<int (*)[2]>(bea_frame_ + 0x10 - 0x8);
  uVar13 = bea_piece32(param_2);
  if (param_1 == 1.0f) {
    FUN_00467200(bea_arg(&DAT_0089d758), bea_arg(param_1), bea_arg(param_2));
  }
  param_2 = (param_1 - 0.8f) * 5.0000005f;
  if (0.0f <= param_2) {
    if (1.0f < param_2) {
      param_2 = 1.0f;
    }
  }
  else {
    param_2 = 0.0f;
  }
  if (param_1 == 1.0f) {
    uVar1 = FUN_004f7bf0(bea_arg(s_Adjust_Screen_Position_until_dis_0063fcf0));
    piVar11 = local_8;
    uVar4 = uVar1;
    pvVar2 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
    FUN_00540680(bea_arg(pvVar2), bea_arg(uVar4), bea_arg(piVar11));
    uVar12 = 8;
    uVar10 = 0;
    uVar9 = 0x447a0000;
    uVar8 = 0xffffffff;
    uVar7 = 0x3f800000;
    uVar6 = 0x3f800000;
    uVar5 = 0x3dcccccd;
    fVar3 = 320.0f - (float)local_8[0] * 0.5f;
    uVar4 = 0x43898000;
    FUN_00465710(bea_arg((void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0))), bea_arg(fVar3), bea_arg(uVar4), bea_arg(uVar5), bea_arg(uVar6), bea_arg(uVar7), bea_arg(uVar8), bea_arg(uVar1), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar12));
    uVar1 = FUN_004f7bf0(bea_arg(s_correctly_centered_on_your_telev_0063fcc8));
    piVar11 = local_8;
    uVar4 = uVar1;
    pvVar2 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
    FUN_00540680(bea_arg(pvVar2), bea_arg(uVar4), bea_arg(piVar11));
    uVar12 = 8;
    uVar10 = 0;
    uVar9 = 0x447a0000;
    uVar8 = 0xffffffff;
    uVar7 = 0x3f800000;
    uVar6 = 0x3f800000;
    uVar5 = 0x3dcccccd;
    fVar3 = 320.0f - (float)local_8[0] * 0.5f;
    uVar4 = 0x43988000;
    FUN_00465710(bea_arg((void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0))), bea_arg(fVar3), bea_arg(uVar4), bea_arg(uVar5), bea_arg(uVar6), bea_arg(uVar7), bea_arg(uVar8), bea_arg(uVar1), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar12));
  }
  FUN_00453140(bea_arg(5), bea_arg(param_1));
  FUN_00453140(bea_arg(6), bea_arg(param_1));
  fVar3 = param_1;
  uVar4 = FUN_004f7bf0(bea_arg(s_Adjust_Screen_Position_0063fcb0));
  FUN_00467bd0(bea_arg(uVar4), bea_arg(fVar3), bea_arg(uVar13));
  if (param_1 == 1.0f) {
    FUN_00452df0(bea_arg(param_2));
  }
  return;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_0051fb90.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
