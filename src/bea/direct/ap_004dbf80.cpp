// auto-ported from 004dbf80_vslot9.c (CRTCutscene::vslot9, 38 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CRTCutscene;

static undefined4 BEA_THISCALL ap_004dbf80(CRTCutscene * this_)
{
  if (*(int *)(this_ + 8) == 0) {
    return 0;
  }
  if (this_[0x20] == (CRTCutscene)0x0) {
    return 0;
  }
  if (*(int *)(this_ + 0x24) == -1) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(this_ + 0x14) + *(int *)(this_ + 0x24) * 4);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dbf80, ap_004dbf80));
