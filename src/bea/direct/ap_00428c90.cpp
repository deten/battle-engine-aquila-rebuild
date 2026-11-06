// auto-ported from 00428c90_vslot84.c (CComponent::vslot84, 18 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComponent;
typedef char CUnit;
typedef undefined4 (BEA_THISCALL* CUnit__vslot84_t)(uint32_t);
static const bea_guard<CUnit__vslot84_t> CUnit__vslot84 = {(CUnit__vslot84_t)0x004fc000};

static undefined4 BEA_THISCALL ap_00428c90(CComponent * this_)
{
  undefined4 uVar1;
  
  if (*(int *)(this_ + 0x264) != 0) {
    return 0;
  }
  uVar1 = CUnit__vslot84(bea_arg((CUnit *)this_));
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00428c90, ap_00428c90));
