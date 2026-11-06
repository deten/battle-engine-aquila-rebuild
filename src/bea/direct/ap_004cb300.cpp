// auto-ported from 004cb300_FUN_004cb300.c (FUN_004cb300, 199 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_24: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0082b3e8 GLOBAL_AT(int, 0x0082b3e8)
#define DAT_008a9e44 GLOBAL_AT(float, 0x008a9e44)

static void BEA_CDECL ap_004cb300(void)
{
  float *pfVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float local_24 = 0;
  
  for (puVar2 = DAT_0082b3e8; BEA_LOOP_GUARD((puVar2 != (undefined4 *)0x0)); puVar2 = (undefined4 *)*puVar2) {
    pfVar1 = (float *)puVar2[1];
    if (pfVar1 != (float *)0x0) {
      if (pfVar1[0x12] == 10000.0) {
        pfVar1[0x20] = pfVar1[0x10];
        pfVar1[0x21] = pfVar1[0x11];
        pfVar1[0x22] = pfVar1[0x12];
        pfVar1[0x23] = pfVar1[0x13];
      }
      else {
        fVar3 = (pfVar1[1] - pfVar1[0x11]) * DAT_008a9e44;
        fVar4 = DAT_008a9e44 * (pfVar1[2] - pfVar1[0x12]);
        pfVar1[0x20] = (*pfVar1 - pfVar1[0x10]) * DAT_008a9e44 + pfVar1[0x10];
        pfVar1[0x21] = fVar3 + pfVar1[0x11];
        pfVar1[0x22] = fVar4 + pfVar1[0x12];
        pfVar1[0x23] = local_24;
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cb300, ap_004cb300));
