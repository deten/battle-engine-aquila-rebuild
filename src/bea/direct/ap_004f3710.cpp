// auto-ported from 004f3710_vslot37.c (CThing::vslot37, 21 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CThing;

static void BEA_THISCALL ap_004f3710(CThing * this_)
{
  if ((*(int **)(this_ + 0x30) != (int *)0x0) && (((byte)this_[0x2c] & 8) == 0)) {
                    
                    
    bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0xc);
    return;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f3710, ap_004f3710));
