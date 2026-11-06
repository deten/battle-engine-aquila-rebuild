// auto-ported from 004dd550_vslot21.c (CRTMesh::vslot21, 13 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CRTMesh;

static undefined4 BEA_THISCALL ap_004dd550(CRTMesh * this_, int param_1)
{
  return *(undefined4 *)(*(int *)(this_ + 0x38) + param_1 * 4);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dd550, ap_004dd550));
