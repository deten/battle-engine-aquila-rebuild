// auto-ported from 004e8dd0_vslot82.c (CNormalSquad::vslot82, 56 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CNormalSquad;

static undefined4 BEA_THISCALL ap_004e8dd0(CNormalSquad * this_)
{
  int *piVar1;
  float10 fVar2;
  
  piVar1 = (int *)bea_vcall<uint32_t>(this_, 0x128);
  if (piVar1 != (int *)0x0) {
    fVar2 = (float10)bea_vcall<float10>(piVar1, 0x3c);
    if (((float10)0.0f < fVar2) && (*(int *)(this_ + 0x9c) == 0)) {
      return 1;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e8dd0, ap_004e8dd0));
