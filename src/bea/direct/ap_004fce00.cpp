// auto-ported from 004fce00_vslot61.c (CUnit::vslot61, 57 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CUnit;

static void BEA_THISCALL ap_004fce00(CUnit * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (*(int **)(this_ + 0x208) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)(this_ + 0x208), 0x10, param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fce00, ap_004fce00));
