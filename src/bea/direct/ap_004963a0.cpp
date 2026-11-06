// auto-ported from 004963a0_vslot11.c (CMCGillM::vslot11, 19 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMCGillM;
typedef float10 (BEA_THISCALL* FUN_00479f30_t)(uint32_t);
static const bea_guard<FUN_00479f30_t> FUN_00479f30 = {(FUN_00479f30_t)0x00479f30};

// Hand-fixed 2026-10-27: the original tail-jumps to 0x479f30, so it returns
// that function's x87 result (Ghidra printed it void and the port popped the
// value; the Gill-M in a level-523 replay behaved differently, bisected here).
static float10 BEA_THISCALL ap_004963a0(CMCGillM * this_)
{
  void *this_00;
  
  if (*(int *)(this_ + 8) == 0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)(*(int *)(this_ + 8) + -8);
  }
  return FUN_00479f30(bea_arg(this_00));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004963a0, ap_004963a0));
