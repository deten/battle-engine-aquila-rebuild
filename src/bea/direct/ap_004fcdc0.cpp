// auto-ported from 004fcdc0_vslot38.c (CUnit::vslot38, 55 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CUnit;

static uint32_t BEA_THISCALL ap_004fcdc0(CUnit * this_, uint param_1)
{
  if ((*(int *)(this_ + 0x164) != 0) && (*(int *)(*(int *)(this_ + 0x164) + 0x104) != 0)) {
    *(uint *)(this_ + 0x34) = param_1 | 0x80200013;
    return *(uint32_t*)((char*)this_ + 0x34);
  }
  *(uint *)(this_ + 0x34) = param_1 | 0x80000013;
  return *(uint32_t*)((char*)this_ + 0x34);
  return *(uint32_t*)((char*)this_ + 0x34);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fcdc0, ap_004fcdc0));
