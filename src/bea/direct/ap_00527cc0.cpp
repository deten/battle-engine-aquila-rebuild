// auto-ported from 00527cc0_FUN_00527cc0.c (FUN_00527cc0, 51 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0066eb90 GLOBAL_AT(int, 0x0066eb90)
#define s_RM__First_time_attempt_at___s__d_0064bc4c ((char*)0x0064bc4c)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static undefined4 BEA_THISCALL ap_00527cc0(void * this_, int param_1)
{
  if (*(int *)((int)this_ + 0xc) != param_1) {
    return 0;
  }
  if (*(int *)((int)this_ + 0x10) == 0) {
    FUN_00441740(&DAT_0066eb90,s_RM__First_time_attempt_at___s__d_0064bc4c,*(char **)((int)this_ + 8)
                 ,param_1);
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00527cc0, ap_00527cc0));
