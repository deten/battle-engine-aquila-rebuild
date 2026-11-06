// auto-ported from 00549270_FUN_00549270.c (FUN_00549270, 31 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004a1640_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004a1640_t> FUN_004a1640 = {(FUN_004a1640_t)0x004a1640};

static uint32_t BEA_THISCALL ap_00549270(void * this_)
{
  FUN_004a1640(bea_arg((void *)((int)this_ + 0x214)), bea_arg(1));
  return FUN_004a1640(bea_arg((void *)((int)this_ + 0x1c78)), bea_arg(1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00549270, ap_00549270));
