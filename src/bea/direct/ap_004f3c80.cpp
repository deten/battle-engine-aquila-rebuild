// auto-ported from 004f3c80_FUN_004f3c80.c (FUN_004f3c80, 34 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static float10 BEA_THISCALL ap_004f3c80(void * this_, undefined4 param_1, undefined4 param_2)
{
  float10 fVar1;
  
  if (*(int **)((int)this_ + 0x30) != (int *)0x0) {
    fVar1 = (float10)bea_vcall<float10>(*(int **)((int)this_ + 0x30), 0x38, param_1,param_2);
    return fVar1;
  }
  return (float10)0.0f;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f3c80, ap_004f3c80));
