// auto-ported from 004e6640_FUN_004e6640.c (FUN_004e6640, 29 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00533690_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00533690_t> FUN_00533690 = {(FUN_00533690_t)0x00533690};

static void BEA_THISCALL ap_004e6640(void * this_, undefined4 param_1, int param_2)
{
  if ((*(void **)((int)this_ + 0x74) != (void *)0x0) &&
     ((*(uint *)(param_2 + 0x34) & 0x80000000) != 0)) {
    FUN_00533690(bea_arg(*(void **)((int)this_ + 0x74)), bea_arg(param_2));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e6640, ap_004e6640));
