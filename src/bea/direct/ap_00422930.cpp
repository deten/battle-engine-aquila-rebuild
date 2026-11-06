// auto-ported from 00422930_FUN_00422930.c (FUN_00422930, 12 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)

static uint32_t BEA_THISCALL ap_00422930(void * this_)
{
  *(undefined4 *)((int)this_ + 0x288) = DAT_00672fd0;
  return *(uint32_t*)((char*)this_ + 0x288);
  return *(uint32_t*)((char*)this_ + 0x288);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00422930, ap_00422930));
