// auto-ported from 004db8a0_vslot5.c (CRTMesh::vslot5, 25 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CRTMesh;

static undefined4 BEA_THISCALL ap_004db8a0(CRTMesh * this_, int param_1)
{
  return *(undefined4 *)(*(int *)(*(int *)(*(int *)(this_ + 0x14) + 0x160) + param_1 * 4) + 0xfc);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004db8a0, ap_004db8a0));
