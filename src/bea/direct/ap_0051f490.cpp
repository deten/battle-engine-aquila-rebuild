// auto-ported from 0051f490_FUN_0051f490.c (FUN_0051f490, 32 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00660620 GLOBAL_AT(int, 0x00660620)
typedef uint32_t (BEA_THISCALL* FUN_00421910_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00421910_t> FUN_00421910 = {(FUN_00421910_t)0x00421910};
typedef uint32_t (BEA_THISCALL* FUN_00421940_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00421940_t> FUN_00421940 = {(FUN_00421940_t)0x00421940};

static uint32_t BEA_THISCALL ap_0051f490(void * this_)
{
  FUN_00421910(bea_arg(&DAT_00660620), bea_arg(*(undefined4 *)this_));
  return FUN_00421940(bea_arg(&DAT_00660620), bea_arg(*(undefined4 *)((int)this_ + 4)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051f490, ap_0051f490));
