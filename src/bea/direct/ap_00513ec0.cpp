// auto-ported from 00513ec0_FUN_00513ec0.c (FUN_00513ec0, 92 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
#define DAT_00889068 GLOBAL_AT(int, 0x00889068)
#define DAT_0088906c GLOBAL_AT(int, 0x0088906c)
typedef uint32_t (BEA_STDCALL* FUN_004eba30_t)(uint32_t);
static const bea_guard<FUN_004eba30_t> FUN_004eba30 = {(FUN_004eba30_t)0x004eba30};

static uint32_t BEA_THISCALL ap_00513ec0(void * this_, int param_1)
{
  if ((param_1 != DAT_00889068) || (DAT_0088906c != 0)) {
    DAT_00889068 = param_1;
    DAT_0088906c = 0;
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32ea0), 0x170, *(int **)((int)this_ + 0x32ea0),0);
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32ea0), 0x164, *(int **)((int)this_ + 0x32ea0),param_1);
  }
  return FUN_004eba30(bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00513ec0, ap_00513ec0));
