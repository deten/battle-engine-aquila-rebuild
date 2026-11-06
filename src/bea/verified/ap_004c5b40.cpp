// auto-ported from 004c5b40_vslot9.c (CPDPMesh::vslot9, 20 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef char CPDPMesh;

static uint32_t BEA_THISCALL ap_004c5b40(CPDPMesh * this_, int param_1)
{
  *(float *)(param_1 + 0x60) = (float)*(int *)(this_ + 0x60);
  *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  return param_1;
  return param_1;
}

// @autoport-registration (verified: 50 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004c5b40, ap_004c5b40));
