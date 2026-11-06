// auto-ported from 0047a730_vslot9.c (CGillMHead::vslot9, 33 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComponent;
typedef char CGillMHead;
#define DAT_0062ca48 GLOBAL_AT(int, 0x0062ca48)
typedef uint32_t (BEA_THISCALL* CComponent__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CComponent__vslot9_t> CComponent__vslot9 = {(CComponent__vslot9_t)0x00427b80};
typedef uint32_t (BEA_THISCALL* FUN_004f4560_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f4560_t> FUN_004f4560 = {(FUN_004f4560_t)0x004f4560};

static uint32_t BEA_THISCALL ap_0047a730(CGillMHead * this_, undefined4 param_1)
{
  CComponent__vslot9(bea_arg((CComponent *)this_), bea_arg(param_1));
  return FUN_004f4560(bea_arg(this_), bea_arg(&DAT_0062ca48), bea_arg(1), bea_arg(1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047a730, ap_0047a730));
