// auto-ported from 00425900_vslot5.c (CCockpit::vslot5, 25 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CCockpit;

static void BEA_THISCALL ap_00425900(CCockpit * this_, undefined4 param_1)
{
  if (*(int **)(this_ + 0x8c) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)(this_ + 0x8c), 0x68, param_1,0);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00425900, ap_00425900));
