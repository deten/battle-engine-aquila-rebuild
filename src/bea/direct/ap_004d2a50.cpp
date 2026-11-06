// auto-ported from 004d2a50_FUN_004d2a50.c (FUN_004d2a50, 29 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004d28c0_t)(uint32_t);
static const bea_guard<FUN_004d28c0_t> FUN_004d28c0 = {(FUN_004d28c0_t)0x004d28c0};
typedef uint32_t (BEA_THISCALL* FUN_004d29c0_t)(uint32_t);
static const bea_guard<FUN_004d29c0_t> FUN_004d29c0 = {(FUN_004d29c0_t)0x004d29c0};

static void BEA_THISCALL ap_004d2a50(void * this_)
{
  if (*(int *)((int)this_ + 0x28) == 1) {
    FUN_004d28c0(bea_arg(this_));
  }
  if (*(int *)((int)this_ + 0x28) == 2) {
    FUN_004d29c0(bea_arg(this_));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d2a50, ap_004d2a50));
