// auto-ported from 00550180_FUN_00550180.c (FUN_00550180, 42 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_00500b40_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00500b40_t> FUN_00500b40 = {(FUN_00500b40_t)0x00500b40};

static void BEA_THISCALL ap_00550180(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_00500b40(bea_arg(*(void **)((int)this_ + 0x198)), bea_arg(3));
  *puVar1 = (undefined2)param_1;
  puVar1[1] = (undefined2)param_2;
  puVar1[2] = (undefined2)param_3;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00550180, ap_00550180));
