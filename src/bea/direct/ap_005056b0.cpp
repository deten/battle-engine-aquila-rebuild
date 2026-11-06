// auto-ported from 005056b0_vslot3.c (CWaveSoundRead::vslot3, 15 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CWaveSoundRead;

static undefined4 BEA_THISCALL ap_005056b0(CWaveSoundRead * this_)
{
  mmioClose(*(HMMIO *)(this_ + 8),0);
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005056b0, ap_005056b0));
