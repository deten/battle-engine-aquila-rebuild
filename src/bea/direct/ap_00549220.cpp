// auto-ported from 00549220_FUN_00549220.c (FUN_00549220, 65 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_004a1570_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004a1570_t> FUN_004a1570 = {(FUN_004a1570_t)0x004a1570};
typedef uint32_t (BEA_THISCALL* FUN_004a1ca0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004a1ca0_t> FUN_004a1ca0 = {(FUN_004a1ca0_t)0x004a1ca0};

static undefined4 BEA_THISCALL ap_00549220(void * this_, int param_1)
{
  uint32_t eax_in = 0;
  if (param_1 != 0) {
    eax_in = FUN_004a1570(bea_arg((void *)((int)this_ + 0x214)), bea_arg(param_1));
    if ((char)eax_in == '\0') {
      eax_in = FUN_004a1570(bea_arg((void *)((int)this_ + 0x13ac)), bea_arg(param_1));
      if ((char)eax_in == '\0') {
        eax_in = FUN_004a1ca0(bea_arg(*(void **)((int)this_ + *(int *)(param_1 + -8) * 4 + 0x10)), bea_arg(param_1 + -0x10));
      }
    }
  }
  return eax_in;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00549220, ap_00549220));
