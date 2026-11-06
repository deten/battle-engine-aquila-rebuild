// auto-ported from 00421910_FUN_00421910.c (FUN_00421910, 33 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_00421910(void * this_, int param_1)
{
  *(uint *)((int)this_ + 0x23f4) =
       (param_1 + -0x80) * 0x1000000 + (*(uint *)((int)this_ + 0x23f4) & 0xffffff);
  return *(uint32_t*)((char*)this_ + 0x23f4);
  return *(uint32_t*)((char*)this_ + 0x23f4);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00421910, ap_00421910));
