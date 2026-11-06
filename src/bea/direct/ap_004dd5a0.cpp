// auto-ported from 004dd5a0_vslot25.c (CRTMesh::vslot25, 17 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CRTMesh;

static uint32_t BEA_THISCALL ap_004dd5a0(CRTMesh * this_, int param_1, undefined4 param_2)
{
  *(undefined4 *)(*(int *)(this_ + 0x30) + param_1 * 4) = param_2;
  return *(uint32_t*)((char*)this_ + 0x30);
  return *(uint32_t*)((char*)this_ + 0x30);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dd5a0, ap_004dd5a0));
