// auto-ported from 0044c420_vslot0.c (CFearGrid::vslot0, 20 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_0044c440_t)(uint32_t);
static const bea_guard<FUN_0044c440_t> FUN_0044c440 = {(FUN_0044c440_t)0x0044c440};

static void BEA_THISCALL ap_0044c420(void * this_, int param_1)
{
  if (*(short *)(param_1 + 4) == 1000) {
    FUN_0044c440(bea_arg(this_));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044c420, ap_0044c420));
