// auto-ported from 004bc2d0_FUN_004bc2d0.c (FUN_004bc2d0, 10 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00809588 GLOBAL_AT(int, 0x00809588)
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};

static void BEA_CDECL ap_004bc2d0(void)
{
  FUN_004e5c60(bea_arg(&DAT_00809588));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bc2d0, ap_004bc2d0));
