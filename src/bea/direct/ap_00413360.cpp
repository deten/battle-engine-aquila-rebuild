// auto-ported from 00413360_FUN_00413360.c (FUN_00413360, 610 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char _DAT_006236ac;
typedef char _DAT_006236c0;
typedef char fStack_20;
typedef char fStack_30;
#define _DAT_006236b0 GLOBAL_AT(float, 0x006236b0)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define _DAT_006236b4 GLOBAL_AT(float, 0x006236b4)
#define _DAT_006236ac GLOBAL_AT(float, 0x006236ac)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define _DAT_006236c0 GLOBAL_AT(float, 0x006236c0)
#define DAT_006236b8 GLOBAL_AT(int, 0x006236b8)
#define s_do_dash_RIGHT_00623944 ((char*)0x00623944)
typedef int (BEA_THISCALL* FUN_00414030_t)(uint32_t);
static const bea_guard<FUN_00414030_t> FUN_00414030 = {(FUN_00414030_t)0x00414030};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_004e1940_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1940_t> FUN_004e1940 = {(FUN_004e1940_t)0x004e1940};

static void BEA_THISCALL ap_00413360(void * this_, float param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  float &fStack_40 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x40);
  float &fStack_3c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x3c);
  float &fStack_38 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x38);
  float &fStack_30 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x30);
  float &fStack_2c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x2c);
  float &fStack_28 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x28);
  float &fStack_20 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x20);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x1c);
  float &fStack_18 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x18);
  float &fStack_8 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x8);
  iVar6 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x20), 0x10c);
  if ((iVar6 != 0) && (iVar6 = *(int *)((int)this_ + 0x44), iVar6 < 1)) {
    fVar5 = *(float *)(*(int *)(*(int *)((int)this_ + 0x20) + 0x4b0) + 0x10) * 0.02f * param_1;
    if ((*(float *)((int)this_ + 0x3c) < _DAT_006236b0) &&
       ((_DAT_006236b0 < param_1 && (iVar6 == 0)))) {
      *(float *)((int)this_ + 0x2c) = DAT_00672fd0;
    }
    if ((((*(float *)((int)this_ + 0x3c) < _DAT_006236b4) && (_DAT_006236b4 < param_1)) &&
        (iVar6 == 0)) &&
       ((DAT_00672fd0 - _DAT_006236ac < *(float *)((int)this_ + 0x30) &&
        (*(float *)((int)this_ + 0x30) < DAT_00672fd0 - _DAT_006236ac * 0.5f)))) {
      FUN_00441740(&DAT_0066f580,s_do_dash_RIGHT_00623944);
      FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0x20) + 0x5b4)), bea_arg(*(int *)((int)this_ + 0x20)), bea_arg(0x3f800000), bea_arg(2), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(1), bea_arg(0));
      iVar6 = FUN_00414030(bea_arg(this_));
      if (iVar6 != 0) {
        *(undefined4 *)(iVar6 + 0x60) = 0;
      }
      *(undefined4 *)(*(int *)((int)this_ + 0x20) + 0x2ec) = 0;
      fVar5 = _DAT_006236c0 * fVar5;
      *(float *)(*(int *)((int)this_ + 0x20) + 0x27c) =
           *(float *)(*(int *)((int)this_ + 0x20) + 0x27c) - 0.08f;
      *(undefined4 *)((int)this_ + 0x44) = DAT_006236b8;
    }
    *(float *)((int)this_ + 0x3c) = param_1;
    fVar7 = bea_fcast<float10>(bea_fcast<float>((*(int **)((int)this_ + 0x20))[0x45]));
    fVar8 = bea_fcast<float10>(fcos(fVar7));
    fVar1 = bea_fcast<float>(fVar8);
    fVar7 = bea_fcast<float10>(fsin(fVar7));
    fVar8 = bea_fcast<float10>(fcos(bea_fcast<float10>(0.0f)));
    fStack_8 = bea_fcast<float>(fVar8);
    fVar9 = bea_fcast<float10>(fsin(bea_fcast<float10>(0.0f)));
    fVar2 = bea_fcast<float>(fVar9);
    fVar3 = bea_fcast<float>(fVar8);
    fVar4 = bea_fcast<float>((bea_fcast<float10>(bea_fcast<float>(fVar9)) * bea_fcast<float10>(fVar2)));
    fStack_30 = bea_fcast<float>((bea_fcast<float10>(fStack_8) * bea_fcast<float10>(fVar1) - bea_fcast<float10>(fVar4) * fVar7));
    fStack_2c = bea_fcast<float>(-(bea_fcast<float10>(fVar3) * fVar7));
    fVar8 = bea_fcast<float10>(bea_fcast<float>(fVar9)) * bea_fcast<float10>(fStack_8);
    fStack_28 = bea_fcast<float>((bea_fcast<float10>(fVar2) * bea_fcast<float10>(fVar1) + fVar8 * fVar7));
    fStack_20 = bea_fcast<float>((bea_fcast<float10>(fStack_8) * fVar7 + bea_fcast<float10>(fVar4) * bea_fcast<float10>(fVar1)));
    fStack_1c = fVar3 * fVar1;
    fStack_18 = bea_fcast<float>((bea_fcast<float10>(fVar2) * fVar7 - fVar8 * bea_fcast<float10>(fVar1)));
    fStack_8 = fVar3 * fStack_8;
    fStack_40 = fStack_30 * fVar5;
    fStack_3c = fStack_20 * fVar5;
    fStack_38 = -(fVar3 * fVar2) * fVar5;
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x20), 0x74, &fStack_40);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00413360, ap_00413360));
