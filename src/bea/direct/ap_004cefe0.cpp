// auto-ported from 004cefe0_vslot14.c (CMouseSensitivityMenuItem::vslot14, 27 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CMouseSensitivityMenuItem;
#define DAT_006254f4 GLOBAL_AT(float, 0x006254f4)

static void BEA_THISCALL ap_004cefe0(CMouseSensitivityMenuItem * this_)
{
  DAT_006254f4 = (float)(*(int *)(this_ + 0x24) + 1) * 3.0f;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cefe0, ap_004cefe0));
