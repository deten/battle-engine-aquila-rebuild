// auto-ported from 00421cb0_vslot64.c (CCarrier::vslot64, 15 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CCarrier;
typedef char CUnit;
typedef uint32_t (BEA_THISCALL* CUnit__vslot64_t)(uint32_t);
static const bea_guard<CUnit__vslot64_t> CUnit__vslot64 = {(CUnit__vslot64_t)0x004fcf00};

static void BEA_THISCALL ap_00421cb0(CCarrier * this_)
{
  if (*(int *)(this_ + 0x168) != 1) {
    CUnit__vslot64(bea_arg((CUnit *)this_));
    return;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00421cb0, ap_00421cb0));
