// auto-ported from 00452430_vslot6.c (CFEPBriefing::vslot6, 33 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFEPBriefing;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};

static void BEA_THISCALL ap_00452430(CFEPBriefing * this_, undefined4 param_1)
{
  float10 fVar1;
  
  fVar1 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  *(undefined4 *)(this_ + 8) = 0;
  *(float *)(this_ + 4) = (float)(fVar1 + (float10)10000.0f);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00452430, ap_00452430));
