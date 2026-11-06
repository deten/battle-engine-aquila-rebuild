// auto-ported from 00488580_FUN_00488580.c (FUN_00488580, 84 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_00488580(void * this_, int *param_1)
{
  int *piVar1;
  undefined4 uVar2;
  
  if (*(int *)((int)this_ + 0x1c) != 0) {
    *param_1 = *(int *)((int)this_ + 0x1c);
    *(undefined1 *)((int)this_ + 0x20) = 1;
    return 0;
  }
  piVar1 = *(int **)((int)this_ + 8);
  if ((*(uint *)((int)this_ + 0x10) & 0x200) == 0x200) {
    uVar2 = bea_vcall<uint32_t>(piVar1, 0x2c, piVar1,0,0,param_1,0x2800);
    return uVar2;
  }
  uVar2 = bea_vcall<uint32_t>(piVar1, 0x2c, piVar1,0,0,param_1,0x800);
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00488580, ap_00488580));
