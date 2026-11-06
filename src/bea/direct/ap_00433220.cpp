// auto-ported from 00433220_vslot3.c (CComponentUseSpawner::vslot3, 72 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComponentUseSpawner;
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};

static uint32_t BEA_THISCALL ap_00433220(CComponentUseSpawner * this_, void *param_1)
{
  CComponentUseSpawner *pCVar1;
  pCVar1 = this_ + 0x107;
  do {
    pCVar1 = pCVar1 + 1;
    FUN_00548570(bea_arg(param_1), bea_arg(pCVar1), bea_arg(1));
  } while (BEA_LOOP_GUARD((*pCVar1 != (CComponentUseSpawner)0x0)));
  pCVar1 = this_ + 7;
  do {
    pCVar1 = pCVar1 + 1;
    FUN_00548570(bea_arg(param_1), bea_arg(pCVar1), bea_arg(1));
  } while (BEA_LOOP_GUARD((*pCVar1 != (CComponentUseSpawner)0x0)));
  return FUN_00548570(bea_arg(param_1), bea_arg(this_ + 0x208), bea_arg(4));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00433220, ap_00433220));
