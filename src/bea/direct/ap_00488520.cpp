// auto-ported from 00488520_vslot3.c (CIBuffer::vslot3, 34 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CIBuffer;

static undefined4 BEA_THISCALL ap_00488520(CIBuffer * this_)
{
  int *piVar1;
  
  if ((*(int *)(this_ + 0x18) == 0) && (piVar1 = *(int **)(this_ + 8), piVar1 != (int *)0x0)) {
    bea_vcall<uint32_t>(piVar1, 0x8, piVar1);
    *(undefined4 *)(this_ + 8) = 0;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00488520, ap_00488520));
