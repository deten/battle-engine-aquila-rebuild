// auto-ported from 00533810_vslot2.c (IScript::vslot2, 43 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define DAT_0089c5e0 GLOBAL_AT(int, 0x0089c5e0)
#define DAT_0089c528 GLOBAL_AT(int, 0x0089c528)
typedef uint32_t (BEA_THISCALL* FUN_00539980_t)(uint32_t);
static const bea_guard<FUN_00539980_t> FUN_00539980 = {(FUN_00539980_t)0x00539980};
typedef uint32_t (BEA_THISCALL* FUN_00539990_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00539990_t> FUN_00539990 = {(FUN_00539990_t)0x00539990};

static uint32_t BEA_THISCALL ap_00533810(int this_)
{
  if (DAT_008a9ac0 == 4) {
    return FUN_00539980(bea_arg(&DAT_0089c5e0));
  }
  return FUN_00539990(bea_arg(&DAT_0089c5e0), bea_arg(*(undefined4 *)(this_ + 0xc)), bea_arg(7), bea_arg(&DAT_0089c528), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00533810, ap_00533810));
