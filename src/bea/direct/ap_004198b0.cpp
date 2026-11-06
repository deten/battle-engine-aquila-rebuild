// auto-ported from 004198b0_vslot7.c (CThing3rdPersonCamera::vslot7, 19 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CThing3rdPersonCamera;

static int BEA_THISCALL ap_004198b0(CThing3rdPersonCamera * this_)
{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(this_ + 4);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x34) & 8) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004198b0, ap_004198b0));
