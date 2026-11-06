// auto-ported from 0048f1e0_FUN_0048f1e0.c (FUN_0048f1e0, 47 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef bool (BEA_THISCALL* FUN_005000c0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005000c0_t> FUN_005000c0 = {(FUN_005000c0_t)0x005000c0};

static uint32_t BEA_THISCALL ap_0048f1e0(void * this_, int param_1)
{
  int iVar1;
  *(int *)((int)this_ + 0x44) = param_1;
  iVar1 = (param_1 + 1) * (param_1 + 1);
  *(undefined4 *)((int)this_ + 0x30) = 0;
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  *(undefined2 *)((int)this_ + 0x3c) = 0xffff;
  *(undefined4 *)((int)this_ + 0x40) = 0;
  *(int *)((int)this_ + 0x38) = iVar1;
  return FUN_005000c0(bea_arg(this_), bea_arg(iVar1), bea_arg(0x14), bea_arg(0x102));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048f1e0, ap_0048f1e0));
