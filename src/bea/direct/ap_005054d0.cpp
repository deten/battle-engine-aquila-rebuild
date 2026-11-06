// auto-ported from 005054d0_vslot6.c (CWaveSoundRead::vslot6, 12 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CWaveSoundRead;

static uint32_t BEA_THISCALL ap_005054d0(CWaveSoundRead * this_)
{
  return *(undefined2 *)(*(int *)(this_ + 4) + 2);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005054d0, ap_005054d0));
