// auto-ported from 004f1220_FUN_004f1220.c (FUN_004f1220, 24 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static float10 BEA_THISCALL ap_004f1220(void * this_)
{
  if (*(int *)((int)this_ + 0x30c) != 0) {
    return bea_fcast<float10>(28.0f);
  }
  return bea_fcast<float10>(21.5f);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f1220, ap_004f1220));
