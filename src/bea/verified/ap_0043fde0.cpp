// auto-ported from 0043fde0_FUN_0043fde0.c (FUN_0043fde0, 60 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_0043fde0(void * this_, int param_1)
{
  float fVar1;
  
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined4 *)((int)this_ + 0xc) = 0;
  *(undefined ***)this_ = ((void*)0x005d88cc);
  *(undefined4 *)((int)this_ + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  fVar1 = *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x14) +
          *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10);
  *(float *)((int)this_ + 0x18) = fVar1;
  *(float *)((int)this_ + 0x14) = SQRT(fVar1);
  return this_;
  return this_;
}

// @autoport-registration (verified: 76 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0043fde0, ap_0043fde0));
