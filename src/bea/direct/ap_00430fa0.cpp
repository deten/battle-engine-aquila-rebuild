// auto-ported from 00430fa0_FUN_00430fa0.c (FUN_00430fa0, 37 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (9 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_00430fa0(void * this_, undefined4 param_1)
{
  do {
    if (*(int **)((int)this_ + 4) != (int *)0x0) {
      bea_vcall<uint32_t>(*(int **)((int)this_ + 4), 0x4, param_1);
    }
    this_ = *(void **)((int)this_ + 8);
  } while (BEA_LOOP_GUARD((this_ != (void *)0x0)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00430fa0, ap_00430fa0));
