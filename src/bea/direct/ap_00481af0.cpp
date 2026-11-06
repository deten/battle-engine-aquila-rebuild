// auto-ported from 00481af0_FUN_00481af0.c (FUN_00481af0, 8 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_0053a280_t)(uint32_t);
static const bea_guard<FUN_0053a280_t> FUN_0053a280 = {(FUN_0053a280_t)0x0053a280};

static void BEA_THISCALL ap_00481af0(void * this_)
{
  FUN_0053a280(bea_arg(*(void **)((int)this_ + 0x30)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00481af0, ap_00481af0));
