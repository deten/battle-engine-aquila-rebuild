// auto-ported from 0040dcc0_FUN_0040dcc0.c (FUN_0040dcc0, 27 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_0040a580_t)(uint32_t);
static const bea_guard<FUN_0040a580_t> FUN_0040a580 = {(FUN_0040a580_t)0x0040a580};

static undefined4 BEA_THISCALL ap_0040dcc0(void * this_)
{
  undefined4 uVar1;
  
  *(undefined4 *)((int)this_ + 0x58c) = 0;
  if (*(int *)((int)this_ + 0x260) == 3) {
    uVar1 = FUN_0040a580(bea_arg(this_));
    return uVar1;
  }
  return *(int *)((int)this_ + 0x260);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040dcc0, ap_0040dcc0));
