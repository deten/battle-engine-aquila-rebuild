// auto-ported from 00432f50_vslot1.c (CUnitNavMap::vslot1, 25 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CUnitNavMap;

static void BEA_THISCALL ap_00432f50(CUnitNavMap * this_, int param_1)
{
  undefined4 uVar1;
  
  if (*(int **)(this_ + 8) != (int *)0x0) {
    uVar1 = bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x4);
    *(undefined4 *)(param_1 + 0xfc) = uVar1;
  }
  return;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_00432f50.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
