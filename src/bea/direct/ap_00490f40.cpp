// auto-ported from 00490f40_FUN_00490f40.c (FUN_00490f40, 15 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0089bd80 GLOBAL_AT(int, 0x0089bd80)
typedef undefined4 (BEA_THISCALL* FUN_0047e8a0_t)(uint32_t);
static const bea_guard<FUN_0047e8a0_t> FUN_0047e8a0 = {(FUN_0047e8a0_t)0x0047e8a0};
typedef uint32_t (BEA_THISCALL* FUN_00523230_t)(uint32_t);
static const bea_guard<FUN_00523230_t> FUN_00523230 = {(FUN_00523230_t)0x00523230};

static void BEA_THISCALL ap_00490f40(void * this_)
{
  FUN_0047e8a0(bea_arg(this_));
  FUN_00523230(bea_arg(&DAT_0089bd80));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00490f40, ap_00490f40));
