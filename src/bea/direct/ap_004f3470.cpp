// auto-ported from 004f3470_vslot38.c (CThing::vslot38, 12 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CThing;

static uint32_t BEA_THISCALL ap_004f3470(CThing * this_, uint param_1)
{
  *(uint *)(this_ + 0x34) = param_1 | 1;
  return *(uint32_t*)((char*)this_ + 0x34);
  return *(uint32_t*)((char*)this_ + 0x34);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f3470, ap_004f3470));
