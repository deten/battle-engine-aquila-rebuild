// auto-ported from 004bfb10_vslot38.c (CRadar::vslot38, 15 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CRadar;
typedef char CUnit;
typedef uint32_t (BEA_THISCALL* CUnit__vslot38_t)(uint32_t, uint32_t);
static const bea_guard<CUnit__vslot38_t> CUnit__vslot38 = {(CUnit__vslot38_t)0x004fcdc0};

static uint32_t BEA_THISCALL ap_004bfb10(CRadar * this_, uint param_1)
{
  return CUnit__vslot38(bea_arg((CUnit *)this_), bea_arg(param_1 | 0x20));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bfb10, ap_004bfb10));
