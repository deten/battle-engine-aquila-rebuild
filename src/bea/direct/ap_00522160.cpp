// auto-ported from 00522160_vslot4.c (CFEPWingmen::vslot4, 47 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef uint32_t (BEA_STDCALL* FUN_004530b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004530b0_t> FUN_004530b0 = {(FUN_004530b0_t)0x004530b0};

static void BEA_STDCALL ap_00522160(float param_1, undefined4 param_2)
{
  if (param_1 == 1.0f) {
    FUN_004530b0(bea_arg(0x43480000), bea_arg(0), bea_arg(0x3fa00000), bea_arg(0xff));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00522160, ap_00522160));
