// auto-ported from 004661e0_FUN_004661e0.c (FUN_004661e0, 8 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};

static void BEA_THISCALL ap_004661e0(void * this_)
{
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x28)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004661e0, ap_004661e0));
