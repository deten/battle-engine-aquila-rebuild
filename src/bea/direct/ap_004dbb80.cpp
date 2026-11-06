// auto-ported from 004dbb80_vslot7.c (CRenderThing::vslot7, 84 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0083ccd8 GLOBAL_AT(undefined4, 0x0083ccd8)

static undefined4 * BEA_STDCALL ap_004dbb80(undefined4 param_1, undefined4 param_2, undefined4 *param_3, undefined4 *param_4, undefined4 param_5, undefined4 param_6)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4 = 0;
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = local_4;
  puVar2 = &DAT_0083ccd8;
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *param_4 = *puVar2;
    puVar2 = puVar2 + 1;
    param_4 = param_4 + 1;
  }
  return param_3;
  return param_3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dbb80, ap_004dbb80));
