// auto-ported from 004968a0_vslot8.c (CMCGroundAttack::vslot8, 74 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CMCGroundAttack;

static undefined4 BEA_THISCALL ap_004968a0(CMCGroundAttack * this_)
{
  int iVar1;
  
  if (*(int *)(this_ + 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(this_ + 8) + -8;
  }
  if (((*(float *)(iVar1 + 0xe0) == *(float *)(iVar1 + 0xe4)) &&
      (*(float *)(iVar1 + 0xe0) == *(float *)(this_ + 0xc))) &&
     (*(float *)(iVar1 + 0x284) == *(float *)(this_ + 0x10))) {
    return 0;
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004968a0, ap_004968a0));
