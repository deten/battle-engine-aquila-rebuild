// auto-ported from 004e4460_vslot0.c (CSpawner::vslot0, 20 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004e3f90_t)(uint32_t);
static const bea_guard<FUN_004e3f90_t> FUN_004e3f90 = {(FUN_004e3f90_t)0x004e3f90};

static void BEA_THISCALL ap_004e4460(void * this_, int param_1)
{
  if (*(short *)(param_1 + 4) == 3000) {
    FUN_004e3f90(bea_arg(this_));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e4460, ap_004e4460));
