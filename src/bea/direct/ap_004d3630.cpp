// auto-ported from 004d3630_vslot66.c (CPod::vslot66, 32 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CPod;
typedef char CUnit;
typedef uint32_t (BEA_THISCALL* CUnit__vslot66_t)(uint32_t);
static const bea_guard<CUnit__vslot66_t> CUnit__vslot66 = {(CUnit__vslot66_t)0x004fa8d0};

static void BEA_THISCALL ap_004d3630(CPod * this_)
{
  float10 fVar1;
  
  CUnit__vslot66(bea_arg((CUnit *)this_));
  fVar1 = (float10)bea_vcall<float10>(this_, 0xb4);
  *(float *)(this_ + 0x84) = (float)(fVar1 + (float10)*(float *)(this_ + 0x84));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d3630, ap_004d3630));
