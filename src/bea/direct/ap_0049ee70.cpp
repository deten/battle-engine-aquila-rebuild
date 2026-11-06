// auto-ported from 0049ee70_vslot11.c (CMCThunderHead::vslot11, 23 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CMCThunderHead;
#define fRam0000026c GLOBAL_AT(float, 0x0000026c)

static float10 BEA_THISCALL ap_0049ee70(CMCThunderHead * this_)
{
  if (*(int *)(this_ + 8) != 0) {
    return bea_fcast<float10>(*(float *)(*(int *)(this_ + 8) + 0x264));
  }
  return bea_fcast<float10>(fRam0000026c);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0049ee70, ap_0049ee70));
