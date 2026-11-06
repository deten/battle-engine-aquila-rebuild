// auto-ported from 004aa6b0_FUN_004aa6b0.c (FUN_004aa6b0, 33 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00704ad8 GLOBAL_AT(int, 0x00704ad8)
#define s_unknown_mesh_name_0062f8d4 ((char*)0x0062f8d4)

static char * BEA_THISCALL ap_004aa6b0(void * this_)
{
  void *pvVar1;
  
  pvVar1 = DAT_00704ad8;
  while(BEA_LOOP_GUARD(( true ))) {
    if (pvVar1 == (void *)0x0) {
      return (char *)(s_unknown_mesh_name_0062f8d4);
    }
    if (pvVar1 == this_) break;
    pvVar1 = *(void **)((int)pvVar1 + 0x158);
  }
  return (char *)((char *)((int)pvVar1 + 0x24));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004aa6b0, ap_004aa6b0));
