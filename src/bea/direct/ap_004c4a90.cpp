// auto-ported from 004c4a90_vslot5.c (CPDMesh::vslot5, 67 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CPDMesh;

static int BEA_THISCALL ap_004c4a90(CPDMesh * this_, int param_1, undefined4 param_2)
{
  int local_190 [100];
  
  local_190[0] = *(int *)(this_ + 0x78);
  if (local_190[0] != 0) {
  }
  if ((int)(uint)(local_190[0] != 0) <= param_1) {
    return 0;
  }
  return local_190[param_1];
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c4a90, ap_004c4a90));
