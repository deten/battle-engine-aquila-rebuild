// auto-ported from 00528b00_FUN_00528b00.c (FUN_00528b00, 21 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_00528b00(void * this_, int param_1)
{
  if (*(int *)((int)this_ + 0xc) == -1) {
    bea_vcall<uint32_t>(this_, 0x0, (float)param_1);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00528b00, ap_00528b00));
