// auto-ported from 00426480_FUN_00426480.c (FUN_00426480, 19 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_00426480(void * this_, undefined4 param_1)
{
  *(undefined4 *)((int)this_ + 0x10) = param_1;
  *(uint *)((int)this_ + 0xc) = *(uint *)((int)this_ + 0xc) | 0x100;
  return *(uint32_t*)((char*)this_ + 0xc);
  return *(uint32_t*)((char*)this_ + 0xc);
}

// @autoport-registration (verified: 993 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00426480, ap_00426480));
