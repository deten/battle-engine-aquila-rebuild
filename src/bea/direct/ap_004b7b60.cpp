// auto-ported from 004b7b60_FUN_004b7b60.c (FUN_004b7b60, 15 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004b7b80_t)(uint32_t);
static const bea_guard<FUN_004b7b80_t> FUN_004b7b80 = {(FUN_004b7b80_t)0x004b7b80};

static void BEA_THISCALL ap_004b7b60(void * this_)
{
  *(undefined4 *)((int)this_ + 0x2c0) = 1;
  FUN_004b7b80(bea_arg(this_));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b7b60, ap_004b7b60));
