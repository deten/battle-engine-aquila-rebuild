// auto-ported from 004e0b30_FUN_004e0b30.c (FUN_004e0b30, 159 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
typedef void * (BEA_THISCALL* FUN_004e0bd0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e0bd0_t> FUN_004e0bd0 = {(FUN_004e0bd0_t)0x004e0bd0};

static void BEA_THISCALL ap_004e0b30(void * this_, int param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13)
{
  int *piVar1;
  
  if (((*(char *)((int)this_ + 4) != '\0') && (*(float *)((int)this_ + 0x20) != 0.0f)) &&
     ((DAT_008a9ac0 != 1 || ((char)param_9 != '\0')))) {
    if ((char)param_5 != '\0') {
      for (piVar1 = *(int **)((int)this_ + 0xc); BEA_LOOP_GUARD((piVar1 != (int *)0x0)); piVar1 = (int *)piVar1[0x1d])
      {
        if (((char)piVar1[2] != '\0') && (piVar1[3] == param_1)) {
          if (*piVar1 == 0) {
            return;
          }
          if (*piVar1 == param_2) {
            return;
          }
        }
      }
    }
    FUN_004e0bd0(bea_arg(this_), bea_arg(param_2), bea_arg(param_1), bea_arg(param_4), bea_arg(param_3), bea_arg(param_6), bea_arg(param_7), bea_arg(param_8), bea_arg(param_9), bea_arg(param_10), bea_arg(param_11), bea_arg(param_12), bea_arg(param_13));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e0b30, ap_004e0b30));
