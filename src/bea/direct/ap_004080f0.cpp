// auto-ported from 004080f0_FUN_004080f0.c (FUN_004080f0, 46 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_00401fd0_t)(uint32_t);
static const bea_guard<FUN_00401fd0_t> FUN_00401fd0 = {(FUN_00401fd0_t)0x00401fd0};

static undefined4 BEA_THISCALL ap_004080f0(void * this_)
{
  int iVar1;
  
  if (*(int *)((int)this_ + 0x260) != 2) {
    return 0;
  }
  iVar1 = bea_vcall<uint32_t>(this_, 0x10c);
  if ((iVar1 == 0) && (iVar1 = FUN_00401fd0(bea_arg(this_)), iVar1 == 0)) {
    return 0;
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004080f0, ap_004080f0));
