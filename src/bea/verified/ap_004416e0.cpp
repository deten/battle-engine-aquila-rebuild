// auto-ported from 004416e0_FUN_004416e0.c (FUN_004416e0, 76 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00662dd0 GLOBAL_AT(int, 0x00662dd0)

static uint32_t BEA_THISCALL ap_004416e0(void * this_)
{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)((int)this_ + 0x96c);
  puVar2 = (undefined1 *)((int)this_ + 9);
  iVar3 = 0x1e;
  do {
    *puVar2 = 0;
    *puVar1 = 0xc2c80000;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 0x50;
    iVar3 = iVar3 + -1;
  } while (BEA_LOOP_GUARD(iVar3 != 0));
  *(undefined4 *)((int)this_ + 0x9e4) = 0;
  *(undefined4 *)((int)this_ + 0x9e8) = 0xc2c80000;
  if (DAT_00662dd0 == 1) {
    *(undefined4 *)((int)this_ + 0x9ec) = 1;
  }
  return (uint32_t)1;
  return (uint32_t)1;
}

// @autoport-registration (verified: 36 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004416e0, ap_004416e0));
