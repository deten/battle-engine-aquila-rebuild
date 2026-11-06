// auto-ported from 00488aa0_FUN_00488aa0.c (FUN_00488aa0, 30 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static float10 BEA_THISCALL ap_00488aa0(void * this_, int param_1)
{
  int iVar1;
  
  iVar1 = bea_vcall<uint32_t>(param_1 + 8, 0x6c);
  return (float10)*(float *)(*(int *)((int)this_ + 0x3c) + 0x10 + iVar1 * 0x18);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00488aa0, ap_00488aa0));
