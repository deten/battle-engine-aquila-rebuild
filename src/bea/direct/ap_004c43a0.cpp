// auto-ported from 004c43a0_vslot20.c (CPDTrail::vslot20, 50 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static int BEA_STDCALL ap_004c43a0(int param_1)
{
  int iVar1;
  
  *(short *)(param_1 + 0x7e) = *(short *)(param_1 + 0x7e) + 1;
  if (*(int *)(param_1 + 0x80) <= (int)*(short *)(param_1 + 0x7e)) {
    *(undefined2 *)(param_1 + 0x7e) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x88);
  *(undefined4 *)(iVar1 + 0x24 + *(short *)(param_1 + 0x7e) * 0x28) = 0;
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c43a0, ap_004c43a0));
