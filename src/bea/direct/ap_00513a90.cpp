// auto-ported from 00513a90_FUN_00513a90.c (FUN_00513a90, 89 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00855424 GLOBAL_AT(int, 0x00855424)
#define DAT_008554a4 GLOBAL_AT(int, 0x008554a4)
#define PTR_DAT_0063dc1c GLOBAL_AT(void*, 0x0063dc1c)

static uint BEA_THISCALL ap_00513a90(void * this_, int param_1)
{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)(param_1 + 0x331e4 + (int)this_);
  *(undefined1 *)(param_1 + 0x331e4 + (int)this_) = 0;
  if (cVar1 == '\0') {
    piVar2 = &DAT_00855424;
    while(BEA_LOOP_GUARD(( true ))) {
      if (PTR_DAT_0063dc1c <= piVar2) {
        return (uint)piVar2 & 0xffffff00;
      }
      if (*piVar2 == param_1) break;
      piVar2 = piVar2 + 1;
    }
  }
  else {
    piVar2 = (int *)PTR_DAT_0063dc1c;
    if (PTR_DAT_0063dc1c < &DAT_008554a4) {
      *(int *)PTR_DAT_0063dc1c = param_1;
      piVar2 = (int *)(PTR_DAT_0063dc1c + 4);
      PTR_DAT_0063dc1c = (undefined *)piVar2;
    }
  }
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00513a90, ap_00513a90));
