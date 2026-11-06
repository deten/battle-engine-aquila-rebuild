// auto-ported from 004cd030_vslot5.c (CPDTrail::vslot5, 136 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CPDTrail;

static int BEA_THISCALL ap_004cd030(CPDTrail * this_, int param_1, undefined4 param_2)
{
  bool bVar1;
  uint local_194;
  int local_190 [100];
  
  bVar1 = *(int *)(this_ + 0x74) != 0;
  if (bVar1) {
    local_190[0] = *(int *)(this_ + 0x74);
  }
  local_194 = (uint)bVar1;
  if (*(int *)(this_ + 0x94) != 0) {
    local_190[bVar1] = *(int *)(this_ + 0x94);
    local_194 = local_194 + 1;
  }
  if (*(int *)(this_ + 0xb0) != 0) {
    local_190[local_194] = *(int *)(this_ + 0xb0);
    local_194 = local_194 + 1;
  }
  if (*(int *)(this_ + 0xb8) != 0) {
    local_190[local_194] = *(int *)(this_ + 0xb8);
    local_194 = local_194 + 1;
  }
  if ((int)local_194 <= param_1) {
    return 0;
  }
  return local_190[param_1];
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cd030, ap_004cd030));
