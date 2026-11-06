// auto-ported from 004d6a50_vslot17.c (CRenderThing::vslot17, 198 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 * BEA_STDCALL ap_004d6a50(undefined4 *param_1, undefined4 *param_2, undefined4 *param_3, undefined4 param_4)
{
  undefined4 local_4 = 0;
  
  *param_1 = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = local_4;
  param_1[4] = 0;
  param_1[5] = 0x3f800000;
  param_1[6] = 0;
  param_1[7] = local_4;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x3f800000;
  param_1[0xb] = local_4;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_3 = 0x42b40000;
  return (undefined4 *)(param_3);
  return (undefined4 *)(param_3);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d6a50, ap_004d6a50));
