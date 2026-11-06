// auto-ported from 00494ae0_vslot8.c (CMCBuggy::vslot8, 25 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CMCBuggy;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)

static undefined4 BEA_THISCALL ap_00494ae0(CMCBuggy * this_)
{
  if (DAT_00672fd0 != *(float *)(this_ + 0x3c)) {
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00494ae0, ap_00494ae0));
