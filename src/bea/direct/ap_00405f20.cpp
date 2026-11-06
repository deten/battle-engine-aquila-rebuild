// auto-ported from 00405f20_vslot85.c (CBattleEngine::vslot85, 28 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CBattleEngine;

static uint32_t BEA_THISCALL ap_00405f20(CBattleEngine * this_, undefined4 param_1)
{
  *(undefined4 *)(this_ + 0x160) = param_1;
  *(undefined4 *)(this_ + 0xfc) = *(undefined4 *)(*(int *)(this_ + 0x4b0) + 0x20);
  return param_1;
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00405f20, ap_00405f20));
