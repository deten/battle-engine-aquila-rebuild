// auto-ported from 004cd630_vslot5.c (CPDPMesh::vslot5, 360 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CPDPMesh;

static int BEA_THISCALL ap_004cd630(CPDPMesh * this_, int param_1, undefined4 param_2)
{
  bool bVar1;
  uint local_194;
  int local_190 [100];
  
  bVar1 = *(int *)(this_ + 0x6c) != 0;
  if (bVar1) {
    local_190[0] = *(int *)(this_ + 0x6c);
  }
  local_194 = (uint)bVar1;
  if (*(int *)(this_ + 0x70) != 0) {
    local_190[bVar1] = *(int *)(this_ + 0x70);
    local_194 = local_194 + 1;
  }
  if (*(int *)(this_ + 0x78) != 0) {
    local_190[local_194] = *(int *)(this_ + 0x78);
    local_194 = local_194 + 1;
  }
  if (*(int *)(this_ + 0x80) != 0) {
    local_190[local_194] = *(int *)(this_ + 0x80);
    local_194 = local_194 + 1;
  }
  if (*(int *)(this_ + 0x88) != 0) {
    local_190[local_194] = *(int *)(this_ + 0x88);
    local_194 = local_194 + 1;
  }
  if (*(int *)(this_ + 0x90) != 0) {
    local_190[local_194] = *(int *)(this_ + 0x90);
    local_194 = local_194 + 1;
  }
  if (*(int *)(this_ + 0xa0) != 0) {
    local_190[local_194] = *(int *)(this_ + 0xa0);
    local_194 = local_194 + 1;
  }
  if (*(int *)(this_ + 0xa8) != 0) {
    local_190[local_194] = *(int *)(this_ + 0xa8);
    local_194 = local_194 + 1;
  }
  if (*(int *)(this_ + 0xb0) != 0) {
    local_190[local_194] = *(int *)(this_ + 0xb0);
    local_194 = local_194 + 1;
  }
  if (*(int *)(this_ + 0xc0) != 0) {
    local_190[local_194] = *(int *)(this_ + 0xc0);
    local_194 = local_194 + 1;
  }
  if (*(int *)(this_ + 200) != 0) {
    local_190[local_194] = *(int *)(this_ + 200);
    local_194 = local_194 + 1;
  }
  if (*(int *)(this_ + 0xd0) != 0) {
    local_190[local_194] = *(int *)(this_ + 0xd0);
    local_194 = local_194 + 1;
  }
  if (*(int *)(this_ + 0xd8) != 0) {
    local_190[local_194] = *(int *)(this_ + 0xd8);
    local_194 = local_194 + 1;
  }
  if (*(int *)(this_ + 0xe0) != 0) {
    local_190[local_194] = *(int *)(this_ + 0xe0);
    local_194 = local_194 + 1;
  }
  if ((int)local_194 <= param_1) {
    return 0;
  }
  return local_190[param_1];
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cd630, ap_004cd630));
