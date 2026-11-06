// auto-ported from 0044b2a0_FUN_0044b2a0.c (FUN_0044b2a0, 40 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_FATAL_ERROR__Run_out_of_free_sch_00628d60 ((char*)0x00628d60)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static int BEA_THISCALL ap_0044b2a0(void * this_)
{
  int iVar1;
  
  iVar1 = *(int *)((int)this_ + 0x28);
  if (iVar1 != 0) {
    *(undefined4 *)((int)this_ + 0x28) = *(undefined4 *)(iVar1 + 0x10);
    return iVar1;
  }
  FUN_00441740(&DAT_0066f580,s_FATAL_ERROR__Run_out_of_free_sch_00628d60);
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044b2a0, ap_0044b2a0));
