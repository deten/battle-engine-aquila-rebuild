// auto-ported from 004ccc50_vslot8.c (CPDSelector::vslot8, 39 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CPDSelector;

static void BEA_THISCALL ap_004ccc50(CPDSelector * this_, undefined4 param_1)
{
  CPDSelector *pCVar1;
  int iVar2;
  
  pCVar1 = this_ + 0x5c;
  iVar2 = 4;
  do {
    if (*(int **)pCVar1 != (int *)0x0) {
      bea_vcall<uint32_t>(*(int **)pCVar1, 0x20, param_1);
    }
    pCVar1 = pCVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (BEA_LOOP_GUARD((iVar2 != 0)));
  return;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004ccc50.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
