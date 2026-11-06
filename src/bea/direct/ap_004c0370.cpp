// auto-ported from 004c0370_FUN_004c0370.c (FUN_004c0370, 223 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)

static void BEA_THISCALL ap_004c0370(void * this_, undefined4 *param_1)
{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this_ + 4);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[0x12] == 0x461c4000) {
      puVar1[0x20] = *param_1;
      puVar1[0x21] = param_1[1];
      puVar1[0x22] = param_1[2];
      puVar1[0x23] = param_1[3];
      puVar1[0x10] = *param_1;
      puVar1[0x11] = param_1[1];
      puVar1[0x12] = param_1[2];
      puVar1[0x13] = param_1[3];
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
      puVar1[2] = param_1[2];
      puVar1[3] = param_1[3];
      if (puVar1[0x2b] != -0x40800000) {
        puVar1[0x2b] = DAT_00672fd0;
        return;
      }
    }
    else {
      puVar1[0x10] = *puVar1;
      puVar1[0x11] = puVar1[1];
      puVar1[0x12] = puVar1[2];
      puVar1[0x13] = puVar1[3];
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
      puVar1[2] = param_1[2];
      puVar1[3] = param_1[3];
      if (puVar1[0x2b] != -0x40800000) {
        puVar1[0x2b] = DAT_00672fd0;
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c0370, ap_004c0370));
