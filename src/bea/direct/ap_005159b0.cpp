// auto-ported from 005159b0_FUN_005159b0.c (FUN_005159b0, 10 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
typedef uint32_t (BEA_THISCALL* FUN_00512fc0_t)(uint32_t);
static const bea_guard<FUN_00512fc0_t> FUN_00512fc0 = {(FUN_00512fc0_t)0x00512fc0};

static void BEA_CDECL ap_005159b0(void)
{
  FUN_00512fc0(bea_arg(&DAT_00855bb0));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005159b0, ap_005159b0));
