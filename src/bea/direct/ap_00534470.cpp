// auto-ported from 00534470_FUN_00534470.c (FUN_00534470, 44 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008a9b30 GLOBAL_AT(int, 0x008a9b30)
#define DAT_008a9b2c GLOBAL_AT(int, 0x008a9b2c)

static undefined4 * BEA_STDCALL ap_00534470(undefined4 *param_1, undefined4 param_2, undefined4 param_3)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = bea_vcall<uint32_t>(param_1[1], 0x30);
  iVar2 = bea_vcall<uint32_t>(*param_1, 0x30);
  *(undefined4 *)(((char *)&DAT_008a9b30) + iVar2 * 8) = uVar1;
  *(undefined4 *)(((char *)&DAT_008a9b2c) + iVar2 * 8) = 2;
  return (undefined4 *)((undefined4 *)(((char *)&DAT_008a9b2c) + iVar2 * 8));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00534470, ap_00534470));
