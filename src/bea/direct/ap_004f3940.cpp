// auto-ported from 004f3940_vslot17.c (CThing::vslot17, 41 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CThing;

static float10 BEA_THISCALL ap_004f3940(CThing * this_)
{
  int iVar1;
  float10 fVar2;
  
  if (*(int **)(this_ + 0x30) != (int *)0x0) {
    iVar1 = bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x10);
    if (iVar1 != 0) {
      iVar1 = bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x10);
      return (float10)*(float *)(iVar1 + 0x24);
    }
  }
  fVar2 = (float10)bea_vcall<float10>(this_, 0x40);
  return fVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f3940, ap_004f3940));
