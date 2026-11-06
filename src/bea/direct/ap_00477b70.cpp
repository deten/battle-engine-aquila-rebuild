// auto-ported from 00477b70_FUN_00477b70.c (FUN_00477b70, 48 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0089d680 GLOBAL_AT(char, 0x0089d680)
typedef uint32_t (BEA_THISCALL* FUN_005526c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005526c0_t> FUN_005526c0 = {(FUN_005526c0_t)0x005526c0};

static void BEA_THISCALL ap_00477b70(void * this_, undefined4 param_1, float param_2)
{
  if ((DAT_0089d680 == '\0') &&
     (param_2 < *(float *)((int)this_ + *(int *)((int)this_ + 0x5bc) * 8 + 8))) {
    FUN_005526c0(bea_arg(this_), bea_arg(param_1), bea_arg(param_2));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00477b70, ap_00477b70));
