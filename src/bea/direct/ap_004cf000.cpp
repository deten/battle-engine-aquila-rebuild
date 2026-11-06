// auto-ported from 004cf000_vslot15.c (CMouseSensitivityMenuItem::vslot15, 40 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CMouseSensitivityMenuItem;
#define DAT_006254f4 GLOBAL_AT(float, 0x006254f4)

static void BEA_THISCALL ap_004cf000(CMouseSensitivityMenuItem * this_)
{
  int local_8;
  
  local_8 = (int)(longlong)ROUND(DAT_006254f4 * 0.33333334f + 0.5f);
  *(int *)(this_ + 0x24) = local_8 + -1;
  *(int *)(this_ + 0x28) = local_8 + -1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cf000, ap_004cf000));
