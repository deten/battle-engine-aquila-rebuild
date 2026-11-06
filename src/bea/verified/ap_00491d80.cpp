// auto-ported from 00491d80_FUN_00491d80.c (FUN_00491d80, 12 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_00491d80(void * this_, int param_1)
{
  *(undefined4 *)this_ = *(undefined4 *)(param_1 + 4);
  return *(uint32_t*)((char*)this_ + 0x0);
  return *(uint32_t*)((char*)this_ + 0x0);
}

// @autoport-registration (verified: 1988635 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00491d80, ap_00491d80));
