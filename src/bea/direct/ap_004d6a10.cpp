// auto-ported from 004d6a10_vslot0.c (CRadarWarningReceiver::vslot0, 20 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004d66b0_t)(uint32_t);
static const bea_guard<FUN_004d66b0_t> FUN_004d66b0 = {(FUN_004d66b0_t)0x004d66b0};

static void BEA_THISCALL ap_004d6a10(void * this_, int param_1)
{
  if (*(short *)(param_1 + 4) == 4000) {
    FUN_004d66b0(bea_arg(this_));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d6a10, ap_004d6a10));
