// auto-ported from 004e9440_vslot61.c (CNormalSquad::vslot61, 36 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CNormalSquad;

static uint32_t BEA_THISCALL ap_004e9440(CNormalSquad * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  *(undefined4 *)(this_ + 0xf4) = param_1;
  *(undefined4 *)(this_ + 0xf8) = param_2;
  *(undefined4 *)(this_ + 0xfc) = param_3;
  *(undefined4 *)(this_ + 0x100) = param_4;
  return param_3;
  return param_3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e9440, ap_004e9440));
