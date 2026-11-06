// auto-ported from 004de7d0_vslot0_t4.c (CScreenOverlay::vslot0_t4, 128 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CScreenOverlay;
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};

static void BEA_THISCALL ap_004de7d0(CScreenOverlay * this_, int param_1)
{
  float fVar1;
  CScreenOverlay *pCVar2;
  
  if (*(short *)(param_1 + 4) == 4000) {
    fVar1 = *(float *)(this_ + 0x5c);
    *(float *)(this_ + 0x5c) = *(float *)(this_ + 0x58) + fVar1;
    if (0.99f < *(float *)(this_ + 0x58) + fVar1) {
      *(undefined4 *)(this_ + 0x5c) = 0x3f7d70a4;
      this_[0x60] = (CScreenOverlay)0x1;
    }
    if (this_[0x60] == (CScreenOverlay)0x0) {
      param_1 = -0x40800000;
      pCVar2 = this_;
      if (this_ == (CScreenOverlay *)0x4) {
        pCVar2 = (CScreenOverlay *)0x0;
      }
      FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(4000), bea_arg(pCVar2), bea_arg(&param_1), bea_arg(2), bea_arg(0), bea_arg(0));
    }
    if ((this_[0x61] != (CScreenOverlay)0x0) && (this_ != (CScreenOverlay *)0x4)) {
      bea_vcall<uint32_t>(this_, 0x4, 1);
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004de7d0, ap_004de7d0));
