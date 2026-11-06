// auto-ported from 004ccb20_vslot8.c (CPDEmitter::vslot8, 20 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CPDEmitter;

static void BEA_THISCALL ap_004ccb20(CPDEmitter * this_, undefined4 param_1)
{
  if (*(int **)(this_ + 0x68) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)(this_ + 0x68), 0x20, param_1);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ccb20, ap_004ccb20));
