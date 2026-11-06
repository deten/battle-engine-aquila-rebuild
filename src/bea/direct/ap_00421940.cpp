// auto-ported from 00421940_FUN_00421940.c (FUN_00421940, 33 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_00421940(void * this_, int param_1)
{
  *(uint *)((int)this_ + 0x23f8) =
       (param_1 + -0x80) * 0x1000000 + (*(uint *)((int)this_ + 0x23f8) & 0xffffff);
  return *(uint32_t*)((char*)this_ + 0x23f8);
  return *(uint32_t*)((char*)this_ + 0x23f8);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00421940, ap_00421940));
