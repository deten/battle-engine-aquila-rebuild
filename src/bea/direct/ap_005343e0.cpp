// auto-ported from 005343e0_FUN_005343e0.c (FUN_005343e0, 44 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008a9ae0 GLOBAL_AT(int, 0x008a9ae0)
#define DAT_008a9adc GLOBAL_AT(int, 0x008a9adc)

static undefined4 * BEA_STDCALL ap_005343e0(undefined4 *param_1, undefined4 param_2, undefined4 param_3)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = bea_vcall<uint32_t>(param_1[1], 0x30);
  iVar2 = bea_vcall<uint32_t>(*param_1, 0x30);
  *(undefined4 *)(((char *)&DAT_008a9ae0) + iVar2 * 8) = uVar1;
  *(undefined4 *)(((char *)&DAT_008a9adc) + iVar2 * 8) = 1;
  return (undefined4 *)((undefined4 *)(((char *)&DAT_008a9adc) + iVar2 * 8));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005343e0, ap_005343e0));
