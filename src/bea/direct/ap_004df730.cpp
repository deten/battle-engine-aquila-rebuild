// auto-ported from 004df730_vslot66.c (CShell::vslot66, 543 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
// @hand-fixed 2026-10-28: float sums in the asm's order (bug class 19, tools/check_fp_order.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef char CShell;
typedef char pCVar4;
typedef uint32_t (BEA_THISCALL* CActor__vslot66_t)(uint32_t);
static const bea_guard<CActor__vslot66_t> CActor__vslot66 = {(CActor__vslot66_t)0x004015e0};

static void BEA_THISCALL ap_004df730(CShell * this_)
{
  float fVar1;
  int iVar2;
  float *pfVar3;
  CShell *pCVar4;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  float (&afStack_30)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x30 - 0x30);
  float &fStack_20 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x20);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x1c);
  float &fStack_18 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x18);
  float &fStack_10 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x10);
  float &fStack_c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0xc);
  float &fStack_8 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x8);
  CActor__vslot66(bea_arg((CActor *)this_));
  iVar2 = bea_vcall<uint32_t>(this_, 0x10c);
  if (iVar2 == 0) {
    *(float *)(this_ + 0x7c) = *(float *)(this_ + 0x7c) * 0.9f;
    *(float *)(this_ + 0x80) = *(float *)(this_ + 0x80) * 0.9f;
    fVar1 = *(float *)(this_ + 0x84) * 0.9f;
  }
  else {
    *(float *)(this_ + 0x7c) = *(float *)(this_ + 0x7c) * 0.7f;
    *(float *)(this_ + 0x80) = *(float *)(this_ + 0x80) * 0.7f;
    fVar1 = *(float *)(this_ + 0x84) * 0.7f;
  }
  *(float *)(this_ + 0x84) = fVar1;
  pCVar4 = this_ + 0x3c;
  afStack_30[0] =
       *(float *)(this_ + 0x100) * *(float *)(this_ + 0x44) +
       *(float *)(this_ + 0x40) * *(float *)(this_ + 0xf0) +
       *(float *)(this_ + 0xe0) * *(float *)pCVar4;
  afStack_30[1] =
       *(float *)(this_ + 0x44) * *(float *)(this_ + 0x104) +
       *(float *)(this_ + 0x40) * *(float *)(this_ + 0xf4) +
       *(float *)(this_ + 0xe4) * *(float *)pCVar4;
  fStack_20 = *(float *)(this_ + 0x100) * *(float *)(this_ + 0x54) +
              *(float *)(this_ + 0xf0) * *(float *)(this_ + 0x50) +
              *(float *)(this_ + 0xe0) * *(float *)(this_ + 0x4c);
  fStack_18 = *(float *)(this_ + 0x108) * *(float *)(this_ + 0x54) +
              *(float *)(this_ + 0xf8) * *(float *)(this_ + 0x50) +
              *(float *)(this_ + 0xe8) * *(float *)(this_ + 0x4c);
  afStack_30[2] =
       *(float *)(this_ + 0x44) * *(float *)(this_ + 0x108) +
       *(float *)pCVar4 * *(float *)(this_ + 0xe8) +
       *(float *)(this_ + 0x40) * *(float *)(this_ + 0xf8);
  fStack_c = *(float *)(this_ + 0x104) * *(float *)(this_ + 100) +
             *(float *)(this_ + 0xe4) * *(float *)(this_ + 0x5c) +
             *(float *)(this_ + 0x60) * *(float *)(this_ + 0xf4);
  fStack_1c = *(float *)(this_ + 0x104) * *(float *)(this_ + 0x54) +
              *(float *)(this_ + 0xf4) * *(float *)(this_ + 0x50) +
              *(float *)(this_ + 0xe4) * *(float *)(this_ + 0x4c);
  fStack_10 = *(float *)(this_ + 0x100) * *(float *)(this_ + 100) +
              *(float *)(this_ + 0xe0) * *(float *)(this_ + 0x5c) +
              *(float *)(this_ + 0x60) * *(float *)(this_ + 0xf0);
  fStack_8 = *(float *)(this_ + 100) * *(float *)(this_ + 0x108) +
             *(float *)(this_ + 0x5c) * *(float *)(this_ + 0xe8) +
             *(float *)(this_ + 0x60) * *(float *)(this_ + 0xf8);
  pfVar3 = afStack_30;
  for (iVar2 = 0xc; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
    *(float *)pCVar4 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pCVar4 = pCVar4 + 4;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004df730, ap_004df730));
