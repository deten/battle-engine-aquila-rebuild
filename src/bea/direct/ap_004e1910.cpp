// auto-ported from 004e1910_FUN_004e1910.c (FUN_004e1910, 33 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef int (BEA_CDECL* FUN_004e2a90_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e2a90_t> FUN_004e2a90 = {(FUN_004e2a90_t)0x004e2a90};

static undefined4 BEA_THISCALL ap_004e1910(void * this_, undefined4 param_1, undefined4 param_2)
{
  undefined4 uVar1;
  
  if (*(char *)((int)this_ + 4) == '\0') {
    return 0;
  }
  uVar1 = FUN_004e2a90(bea_arg(param_1), bea_arg(param_2));
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e1910, ap_004e1910));
