// auto-ported from 00527da0_FUN_00527da0.c (FUN_00527da0, 45 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (6 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0066eb90 GLOBAL_AT(int, 0x0066eb90)
#define s_RM__Accepting___s__d__0064bce4 ((char*)0x0064bce4)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static void BEA_THISCALL ap_00527da0(void * this_)
{
  if (*(int *)((int)this_ + 0x10) == 0) {
    FUN_00441740(&DAT_0066eb90,s_RM__Accepting___s__d__0064bce4,*(char **)((int)this_ + 8),
                 *(int *)((int)this_ + 0xc));
  }
  *(undefined4 *)((int)this_ + 0x10) = 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00527da0, ap_00527da0));
