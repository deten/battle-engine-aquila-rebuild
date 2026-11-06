// auto-ported from 005514a0_FUN_005514a0.c (FUN_005514a0, 110 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char _DAT_009c742c;
#define _DAT_009c742c GLOBAL_AT(float, 0x009c742c)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)

static void BEA_THISCALL ap_005514a0(void * this_, int param_1)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_40 [14];
  float local_8;
  
  if (param_1 != *(int *)((int)this_ + 0xe24)) {
    *(int *)((int)this_ + 0xe24) = param_1;
    puVar2 = (undefined4 *)((int)this_ + 0x3d4);
    puVar3 = local_40;
    for (iVar1 = 0x10; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    local_8 = local_8 - _DAT_009c742c * (float)param_1;
    bea_vcall<uint32_t>(DAT_00888a50, 0xb0, DAT_00888a50,3,local_40);
    *(undefined1 *)((int)this_ + 0xe2a) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005514a0, ap_005514a0));
