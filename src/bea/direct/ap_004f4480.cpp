// auto-ported from 004f4480_vslot39.c (CComplexThing::vslot39, 29 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef uint32_t (BEA_THISCALL* FUN_00533690_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00533690_t> FUN_00533690 = {(FUN_00533690_t)0x00533690};

static int BEA_THISCALL ap_004f4480(CComplexThing * this_, int param_1, undefined4 param_2)
{
  uint32_t eax_in = 0;
  if ((*(void **)(this_ + 0x74) != (void *)0x0) &&
     (eax_in = param_1, (*(uint *)(param_1 + 0x34) & 0x80000000) != 0)) {
    eax_in = FUN_00533690(bea_arg(*(void **)(this_ + 0x74)), bea_arg(param_1));
  }
  return eax_in;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f4480, ap_004f4480));
