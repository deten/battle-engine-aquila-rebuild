// auto-ported from 00433010_vslot1.c (CUnitBehaviour::vslot1, 107 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CUnitBehaviour;

static void BEA_THISCALL ap_00433010(CUnitBehaviour * this_, int param_1)
{
  undefined4 uVar1;
  
  if (*(int **)(this_ + 8) != (int *)0x0) {
    uVar1 = bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x4);
    *(undefined4 *)(param_1 + 0xe0) = uVar1;
    switch(uVar1) {
    case 0:
      *(undefined4 *)(param_1 + 0xfc) = 2;
      return;
    case 2:
      *(undefined4 *)(param_1 + 0xfc) = 1;
      return;
    case 3:
      *(undefined4 *)(param_1 + 0xfc) = 3;
      return;
    case 5:
    case 0xf:
      *(undefined4 *)(param_1 + 0xfc) = 0;
      return;
    case 0x13:
      *(undefined4 *)(param_1 + 0xfc) = 4;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00433010, ap_00433010));
