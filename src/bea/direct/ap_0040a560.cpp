// auto-ported from 0040a560_vslot101.c (CBattleEngine::vslot101, 32 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBattleEngine;
typedef uint32_t (BEA_THISCALL* FUN_004d30d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d30d0_t> FUN_004d30d0 = {(FUN_004d30d0_t)0x004d30d0};

static void BEA_THISCALL ap_0040a560(CBattleEngine * this_, int param_1)
{
  if ((*(int *)(param_1 + 0x138) == 1) && (*(void **)(this_ + 0x574) != (void *)0x0)) {
    FUN_004d30d0(bea_arg(*(void **)(this_ + 0x574)), bea_arg(param_1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040a560, ap_0040a560));
