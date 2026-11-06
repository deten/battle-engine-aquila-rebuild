// auto-ported from 00533a70_FUN_00533a70.c (FUN_00533a70, 35 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00662560 GLOBAL_AT(int, 0x00662560)

static int BEA_STDCALL ap_00533a70(undefined4 *param_1, undefined4 param_2, undefined4 param_3)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = bea_vcall<uint32_t>(param_1[1], 0x30);
  iVar2 = bea_vcall<uint32_t>(*param_1, 0x30);
  *(undefined4 *)(((char *)&DAT_00662560) + iVar2 * 4) = uVar1;
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00533a70, ap_00533a70));
