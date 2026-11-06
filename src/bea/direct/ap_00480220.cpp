// auto-ported from 00480220_vslot66.c (CHiveBoss::vslot66, 203 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CHiveBoss;
typedef char CUnit;
typedef uint32_t (BEA_THISCALL* CUnit__vslot66_t)(uint32_t);
static const bea_guard<CUnit__vslot66_t> CUnit__vslot66 = {(CUnit__vslot66_t)0x004fa8d0};

static void BEA_THISCALL ap_00480220(CHiveBoss * this_)
{
  *(undefined4 *)(this_ + 0x26c) = *(undefined4 *)(this_ + 0x250);
  *(float *)(this_ + 0x120) = *(float *)(this_ + 0x29c) + *(float *)(this_ + 0x114);
  *(undefined4 *)(this_ + 0x270) = *(undefined4 *)(this_ + 0x254);
  *(undefined4 *)(this_ + 0x274) = *(undefined4 *)(this_ + 600);
  *(undefined4 *)(this_ + 0x278) = *(undefined4 *)(this_ + 0x25c);
  *(float *)(this_ + 0x250) = *(float *)(this_ + 0x284) + *(float *)(this_ + 0x250);
  *(undefined4 *)(this_ + 0x27c) = *(undefined4 *)(this_ + 0x260);
  *(undefined4 *)(this_ + 0x280) = *(undefined4 *)(this_ + 0x264);
  *(float *)(this_ + 0x254) = *(float *)(this_ + 0x288) + *(float *)(this_ + 0x254);
  *(float *)(this_ + 600) = *(float *)(this_ + 0x28c) + *(float *)(this_ + 600);
  *(float *)(this_ + 0x25c) = *(float *)(this_ + 0x290) + *(float *)(this_ + 0x25c);
  *(float *)(this_ + 0x260) = *(float *)(this_ + 0x294) + *(float *)(this_ + 0x260);
  *(float *)(this_ + 0x264) = *(float *)(this_ + 0x298) + *(float *)(this_ + 0x264);
  CUnit__vslot66(bea_arg((CUnit *)this_));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00480220, ap_00480220));
