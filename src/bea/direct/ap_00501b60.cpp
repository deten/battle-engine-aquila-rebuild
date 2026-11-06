// auto-ported from 00501b60_vslot3.c (CVertexShader::vslot3, 27 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CVertexShader;

static undefined4 BEA_THISCALL ap_00501b60(CVertexShader * this_)
{
  int *piVar1;
  
  piVar1 = *(int **)(this_ + 0x28);
  if (piVar1 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar1, 0x8, piVar1);
    *(undefined4 *)(this_ + 0x28) = 0;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00501b60, ap_00501b60));
