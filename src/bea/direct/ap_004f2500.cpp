// auto-ported from 004f2500_FUN_004f2500.c (FUN_004f2500, 128 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_ERROR__No_string_after_for_id____00632e48 ((char*)0x00632e48)
#define s_FATAL_ERROR__TextDB_unsupported_v_00632e70 ((char*)0x00632e70)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static int BEA_THISCALL ap_004f2500(void * this_, int param_1, int param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (3 < *(int *)this_) {
    FUN_00441740(&DAT_0066f580,s_FATAL_ERROR__TextDB_unsupported_v_00632e70);
    return 0;
  }
  iVar2 = 0;
  iVar1 = *(int *)((int)this_ + 4) + 0x10;
  if (0 < *(int *)((int)this_ + 0x10)) {
    iVar3 = (*(int *)((int)this_ + 4) + 0xc) - iVar1;
    do {
      if (param_1 == *(int *)(iVar3 + iVar1)) {
        return *(int *)((int)this_ + 8) + *(int *)(iVar1 + param_2 * 0xc) * 2;
      }
      iVar1 = iVar1 + 0xc;
      iVar2 = iVar2 + 1;
    } while (BEA_LOOP_GUARD((iVar2 < *(int *)((int)this_ + 0x10))));
  }
  FUN_00441740(&DAT_0066f580,s_ERROR__No_string_after_for_id____00632e48,param_1,param_2);
  return *(int *)((int)this_ + 8);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f2500, ap_004f2500));
