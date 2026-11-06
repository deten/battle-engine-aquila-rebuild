// auto-ported from 004c0560_FUN_004c0560.c (FUN_004c0560, 92 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0082b400 GLOBAL_AT(int, 0x0082b400)
typedef uint32_t (BEA_THISCALL* FUN_004cdbe0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cdbe0_t> FUN_004cdbe0 = {(FUN_004cdbe0_t)0x004cdbe0};

static void BEA_THISCALL ap_004c0560(void * this_, int *param_1)
{
  if (*(int **)((int)this_ + 0x58) == param_1) {
    *(undefined4 *)((int)this_ + 0x58) = 0;
  }
  if (*param_1 == 0) {
    *(int *)((int)this_ + 0x54) = param_1[1];
  }
  else {
    *(int *)(*param_1 + 4) = param_1[1];
  }
  if ((int *)param_1[1] == (int *)0x0) {
    *(int *)((int)this_ + 0x50) = *param_1;
  }
  else {
    *(int *)param_1[1] = *param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (*(int *)((int)this_ + 0x54) == 0) {
    FUN_004cdbe0(bea_arg(&DAT_0082b400), bea_arg(this_));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c0560, ap_004c0560));
