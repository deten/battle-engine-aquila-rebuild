// auto-ported from 00450390_vslot4.c (CFEPBEConfig::vslot4, 104 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef uint32_t (BEA_STDCALL* FUN_004530b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004530b0_t> FUN_004530b0 = {(FUN_004530b0_t)0x004530b0};

static void BEA_STDCALL ap_00450390(float param_1, int param_2)
{
  float10 fVar1;
  
  if (param_2 == 4) {
    fVar1 = (float10)fcos((float10)param_1 * (float10)3.1415927f);
    FUN_004530b0(bea_arg((float)((fVar1 + (float10)1.0f) * (float10)100.0f)), bea_arg(0), bea_arg(0x3fa00000), bea_arg(0xff));
    return;
  }
  if (param_1 == 1.0f) {
    FUN_004530b0(bea_arg(0), bea_arg(0), bea_arg(0x3fa00000), bea_arg(0xff));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00450390, ap_00450390));
