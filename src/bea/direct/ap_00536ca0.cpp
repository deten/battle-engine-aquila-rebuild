// auto-ported from 00536ca0_FUN_00536ca0.c (FUN_00536ca0, 47 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static int BEA_THISCALL ap_00536ca0(void * this_, undefined4 *param_1, undefined4 param_2, undefined4 param_3)
{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)((int)this_ + 0x10);
  if ((*(byte *)(iVar1 + 0x34) & 0x10) != 0) {
    fVar2 = (float10)bea_vcall<float10>(*param_1, 0x34);
    iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x10), 0x1ac, (float)fVar2);
  }
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00536ca0, ap_00536ca0));
