// auto-ported from 004dd580_vslot24.c (CRTMesh::vslot24, 17 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CRTMesh;

static uint32_t BEA_THISCALL ap_004dd580(CRTMesh * this_, int param_1, undefined4 param_2)
{
  *(undefined1 *)(*(int *)(this_ + 0x2c) + param_1) = (undefined1)param_2;
  return *(uint32_t*)((char*)this_ + 0x2c);
  return *(uint32_t*)((char*)this_ + 0x2c);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dd580, ap_004dd580));
