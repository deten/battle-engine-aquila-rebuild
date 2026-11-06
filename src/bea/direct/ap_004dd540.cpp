// auto-ported from 004dd540_vslot20.c (CRTMesh::vslot20, 13 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CRTMesh;

static undefined4 BEA_THISCALL ap_004dd540(CRTMesh * this_, int param_1)
{
  return CONCAT31((int3)((uint)*(int *)(this_ + 0x2c) >> 8),
                  *(undefined1 *)(*(int *)(this_ + 0x2c) + param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dd540, ap_004dd540));
