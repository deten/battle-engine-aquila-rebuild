// auto-ported from 004ea440_vslot9.c (CRelaxedSquad::vslot9, 29 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CRelaxedSquad;
typedef char CSquad;
typedef uint32_t (BEA_THISCALL* CSquad__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CSquad__vslot9_t> CSquad__vslot9 = {(CSquad__vslot9_t)0x004e5e70};

static uint32_t BEA_THISCALL ap_004ea440(CRelaxedSquad * this_, undefined4 param_1)
{
  CSquad__vslot9(bea_arg((CSquad *)this_), bea_arg(param_1));
  return bea_vcall<uint32_t>(this_, 0x108, 0);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ea440, ap_004ea440));
