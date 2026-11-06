// auto-ported from 004cca10_vslot5.c (CPDEmitter::vslot5, 265 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CPDEmitter;

static int BEA_THISCALL ap_004cca10(CPDEmitter * this_, int param_1, undefined4 param_2)
{
  bool bVar1;
  uint local_194;
  int local_190 [100];
  
  bVar1 = *(int *)(this_ + 0x68) != 0;
  if (bVar1) {
    local_190[0] = *(int *)(this_ + 0x68);
  }
  local_194 = (uint)bVar1;
  if (*(int *)(this_ + 0xa0) != 0) {
    local_190[bVar1] = *(int *)(this_ + 0xa0);
    local_194 = local_194 + 1;
  }
  if (*(int *)(this_ + 0xb0) != 0) {
    local_190[local_194] = *(int *)(this_ + 0xb0);
    local_194 = local_194 + 1;
  }
  if (*(int *)(this_ + 0x60) != 0) {
    local_190[local_194] = *(int *)(this_ + 0x60);
    local_194 = local_194 + 1;
  }
  if (*(int *)(this_ + 0x70) != 0) {
    local_190[local_194] = *(int *)(this_ + 0x70);
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
  if (*(int *)(this_ + 0x98) != 0) {
    local_190[local_194] = *(int *)(this_ + 0x98);
    local_194 = local_194 + 1;
  }
  if (*(int *)(this_ + 0xac) != 0) {
    local_190[local_194] = *(int *)(this_ + 0xac);
    local_194 = local_194 + 1;
  }
  if ((int)local_194 <= param_1) {
    return 0;
  }
  return local_190[param_1];
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cca10, ap_004cca10));
