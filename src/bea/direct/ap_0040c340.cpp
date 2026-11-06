// auto-ported from 0040c340_FUN_0040c340.c (FUN_0040c340, 54 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00407940_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00407940_t> FUN_00407940 = {(FUN_00407940_t)0x00407940};

static void BEA_THISCALL ap_0040c340(void * this_, int param_1)
{
  float fVar1;
  
  FUN_00407940(bea_arg(this_), bea_arg(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x40)));
  fVar1 = *(float *)(*(int *)(param_1 + 0xa0) + 0x40);
  *(float *)((int)this_ + 0x604) = fVar1 + fVar1 + *(float *)((int)this_ + 0x604);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040c340, ap_0040c340));
