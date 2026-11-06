// auto-ported from 00443ea0_vslot8.c (CDestroyableSegmentComponent::vslot8, 38 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CDestroyableSegmentComponent;

static void BEA_THISCALL ap_00443ea0(CDestroyableSegmentComponent * this_)
{
  if (*(int *)(this_ + 0x38) != 1) {
    *(undefined4 *)(this_ + 0x38) = 1;
    *(undefined4 *)(this_ + 0xc) = 0;
    if (*(int **)(this_ + 0x40) != (int *)0x0) {
                    
                    
      bea_vcall<uint32_t>(*(int **)(this_ + 0x40), 0xc8);
      return;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00443ea0, ap_00443ea0));
