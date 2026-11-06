// auto-ported from 004f3fd0_vslot9.c (CComplexThing::vslot9, 321 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CThing;
typedef uint32_t (BEA_THISCALL* CThing__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CThing__vslot9_t> CThing__vslot9 = {(CThing__vslot9_t)0x004f34a0};
typedef uint32_t (BEA_THISCALL* FUN_004f4230_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f4230_t> FUN_004f4230 = {(FUN_004f4230_t)0x004f4230};

static uint32_t BEA_THISCALL ap_004f3fd0(CComplexThing * this_, int param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  CComplexThing *pCVar8;
  float10 fVar9;
  float10 fVar10;
  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  float (&afStack_30)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x30 - 0x30);
  float &fStack_20 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x20);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x1c);
  float &fStack_18 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x18);
  float &fStack_10 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x10);
  float &fStack_c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0xc);
  float &fStack_8 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x8);
  bea_vcall<uint32_t>(this_, 0xa8, param_1 + 0x1ac);
  FUN_004f4230(bea_arg(this_), bea_arg(param_1 + 0xac));
  if (*(int *)(param_1 + 0x60) == 0) {
    fVar9 = bea_fcast<float10>(fcos(bea_fcast<float10>(*(float *)(param_1 + 0x44))));
    fVar1 = bea_fcast<float>(fVar9);
    fVar9 = bea_fcast<float10>(fsin(bea_fcast<float10>(*(float *)(param_1 + 0x44))));
    fVar2 = bea_fcast<float>(fVar9);
    fVar9 = bea_fcast<float10>(fcos(bea_fcast<float10>(*(float *)(param_1 + 0x4c))));
    fVar3 = bea_fcast<float>(fVar9);
    fVar9 = bea_fcast<float10>(fsin(bea_fcast<float10>(*(float *)(param_1 + 0x4c))));
    fVar10 = bea_fcast<float10>(fcos(bea_fcast<float10>(*(float *)(param_1 + 0x48))));
    fVar4 = bea_fcast<float>(fVar10);
    fVar10 = bea_fcast<float10>(fsin(bea_fcast<float10>(*(float *)(param_1 + 0x48))));
    afStack_30[0] = bea_fcast<float>((bea_fcast<float10>(fVar3) * bea_fcast<float10>(fVar1) - fVar10 * fVar9 * bea_fcast<float10>(fVar2)));
    afStack_30[1] = -(fVar4 * fVar2);
    afStack_30[2] = bea_fcast<float>((fVar9 * bea_fcast<float10>(fVar1) + fVar10 * bea_fcast<float10>(fVar3) * bea_fcast<float10>(fVar2)));
    fStack_20 = bea_fcast<float>((bea_fcast<float10>(fVar3) * bea_fcast<float10>(fVar2) + fVar10 * fVar9 * bea_fcast<float10>(fVar1)));
    fStack_1c = fVar4 * fVar1;
    fStack_18 = bea_fcast<float>((fVar9 * bea_fcast<float10>(fVar2) -
                       bea_fcast<float10>(bea_fcast<float>((fVar10 * bea_fcast<float10>(fVar3)))) * bea_fcast<float10>(fVar1)));
    fStack_10 = bea_fcast<float>(-(bea_fcast<float10>(fVar4) * fVar9));
    fStack_c = bea_fcast<float>(fVar10);
    fStack_8 = fVar4 * fVar3;
    pfVar6 = afStack_30;
    pCVar8 = this_ + 0x3c;
    for (iVar5 = 0xc; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
      *(float *)pCVar8 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pCVar8 = pCVar8 + 4;
    }
    return CThing__vslot9(bea_arg((CThing *)this_), bea_arg(param_1));
  }
  if (*(int *)(param_1 + 0x60) == 1) {
    puVar7 = (undefined4 *)(param_1 + 0x14);
    pCVar8 = this_ + 0x3c;
    for (iVar5 = 0xc; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
      *(undefined4 *)pCVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      pCVar8 = pCVar8 + 4;
    }
  }
  return CThing__vslot9(bea_arg((CThing *)this_), bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f3fd0, ap_004f3fd0));
