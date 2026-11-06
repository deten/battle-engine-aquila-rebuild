// auto-ported from 004cb040_FUN_004cb040.c (FUN_004cb040, 14 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0082b3e8 GLOBAL_AT(int, 0x0082b3e8)

static uint32_t BEA_THISCALL ap_004cb040(void * this_)
{
  *(void **)this_ = DAT_0082b3e8;
  DAT_0082b3e8 = this_;
  return GLOBAL_AT(uint32_t, 0x82b3e8);
  return GLOBAL_AT(uint32_t, 0x82b3e8);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cb040, ap_004cb040));
