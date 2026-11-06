// auto-ported from 004f4530_FUN_004f4530.c (FUN_004f4530, 39 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

static undefined4 BEA_THISCALL ap_004f4530(void * this_, undefined4 param_1)
{
  void *this_00;
  undefined4 uVar1;
  
  if (*(int **)((int)this_ + 0x30) == (int *)0x0) {
    return 0;
  }
  this_00 = (void *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x30), 0x24);
  if (this_00 == (void *)0x0) {
    return 0;
  }
  uVar1 = FUN_004aa630(bea_arg(this_00), bea_arg(param_1));
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f4530, ap_004f4530));
