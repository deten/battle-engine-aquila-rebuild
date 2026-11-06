// auto-ported from 00428e80_vslot4.c (CComponentBomberAI::vslot4, 35 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComponentBomberAI;
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};

static uint32_t BEA_THISCALL ap_00428e80(CComponentBomberAI * this_)
{
  if ((*(int *)(this_ + 0xc) != 0) && ((*(byte *)(*(int *)(this_ + 0xc) + 0x2c) & 4) != 0)) {
    FUN_00401000(bea_arg(this_ + 0xc), bea_arg(0));
  }
  return bea_vcall<uint32_t>(this_, 0x2c);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00428e80, ap_00428e80));
