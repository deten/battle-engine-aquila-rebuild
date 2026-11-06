// auto-ported from 005490c0_FUN_005490c0.c (FUN_005490c0, 21 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c6334 GLOBAL_AT(int, 0x009c6334)
typedef uint32_t (BEA_THISCALL* FUN_004a17b0_t)(uint32_t);
static const bea_guard<FUN_004a17b0_t> FUN_004a17b0 = {(FUN_004a17b0_t)0x004a17b0};

static void BEA_THISCALL ap_005490c0(void * this_)
{
  DAT_009c6334 = 0;
  FUN_004a17b0(bea_arg((void *)((int)this_ + 0x214)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005490c0, ap_005490c0));
