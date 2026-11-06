// auto-ported from 00423990_FUN_00423990.c (FUN_00423990, 24 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_005482d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005482d0_t> FUN_005482d0 = {(FUN_005482d0_t)0x005482d0};

static uint32_t BEA_THISCALL ap_00423990(void * this_)
{
  int iVar1;
  iVar1 = *(int *)((int)this_ + 8);
  *(int *)((int)this_ + 8) = *(int *)this_;
  return FUN_005482d0(bea_arg(*(void **)((int)this_ + 4)), bea_arg(*(int *)this_ - iVar1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00423990, ap_00423990));
