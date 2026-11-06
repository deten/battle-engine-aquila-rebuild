// auto-ported from 00528da0_FUN_00528da0.c (FUN_00528da0, 22 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_00528c70_t)(uint32_t);
static const bea_guard<FUN_00528c70_t> FUN_00528c70 = {(FUN_00528c70_t)0x00528c70};

static uint32_t BEA_THISCALL ap_00528da0(void * this_)
{
  FUN_00528c70(bea_arg(this_));
  return WaitForSingleObject(*(HANDLE *)((int)this_ + 8),0xffffffff);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00528da0, ap_00528da0));
