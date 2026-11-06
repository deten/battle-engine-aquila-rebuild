// auto-ported from 0047beb0_vslot66.c (CGroundAttackAircraft::vslot66, 164 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CAirUnit;
typedef char CGroundAttackAircraft;
typedef uint32_t (BEA_THISCALL* CAirUnit__vslot66_t)(uint32_t);
static const bea_guard<CAirUnit__vslot66_t> CAirUnit__vslot66 = {(CAirUnit__vslot66_t)0x00402fa0};

// Hand-fixed 2026-10-27: the original tail-jumps to CAirUnit::vslot66
// (0x402fa0), which returns in EAX (tools/ret_overrides.txt), so this returns
// its value too; the callee was typed float10 here, and the discarded "x87
// result" was popped from an empty FPU stack.
static uint32_t BEA_THISCALL ap_0047beb0(CGroundAttackAircraft * this_)
{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (*(int *)(this_ + 0x168) == 1) {
    *(undefined4 *)(this_ + 0x168) = 0;
    *(undefined4 *)(this_ + 0x1e8) = 1;
  }
  if (((byte)this_[0x2c] & 4) == 0) {
    fVar2 = (float10)*(float *)(this_ + 0x280) + (float10)0.1f;
    *(float *)(this_ + 0x280) = (float)fVar2;
    fVar3 = (float10)fsin(fVar2);
    *(float *)(this_ + 0x284) = (float)(fVar3 * (float10)0.2f);
    if ((float10)6.2831855f < fVar2) {
      *(float *)(this_ + 0x280) = (float)(fVar2 - (float10)6.2831855f);
    }
  }
  else {
    fVar1 = *(float *)(this_ + 0x11c) + 0.8f;
    *(undefined4 *)(this_ + 0x134) = 0x3e4ccccd;
    if (3.1415927f < fVar1) {
      fVar1 = fVar1 - 6.2831855f;
    }
    *(float *)(this_ + 0x128) = fVar1;
    *(undefined4 *)(this_ + 0x124) = 0x40000000;
  }
  return CAirUnit__vslot66(bea_arg((CAirUnit *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047beb0, ap_0047beb0));
