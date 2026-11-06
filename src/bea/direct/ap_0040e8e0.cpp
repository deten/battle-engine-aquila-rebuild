// auto-ported from 0040e8e0_vslot79.c (CBattleEngine::vslot79, 47 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char CBattleEngine;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};

static float10 BEA_THISCALL ap_0040e8e0(CBattleEngine * this_)
{
  float10 fVar1;
  
  fVar1 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(this_ + 0x1c));
  if (fVar1 - (float10)2.0f < (float10)*(float *)(this_ + 0x24)) {
    return (float10)5.0f;
  }
  return (float10)0.0f;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040e8e0, ap_0040e8e0));
