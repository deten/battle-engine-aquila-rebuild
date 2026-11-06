// auto-ported from 00550200_FUN_00550200.c (FUN_00550200, 30 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_00500bb0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500bb0_t> FUN_00500bb0 = {(FUN_00500bb0_t)0x00500bb0};

static void BEA_THISCALL ap_00550200(void * this_, undefined4 param_1, undefined4 param_2, undefined4 *param_3)
{
  undefined4 uVar1;
  
  uVar1 = FUN_00500bb0(bea_arg(*(void **)((int)this_ + 0x198)), bea_arg(param_2), bea_arg(param_1));
  *param_3 = uVar1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00550200, ap_00550200));
