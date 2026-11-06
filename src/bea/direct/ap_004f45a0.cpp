// auto-ported from 004f45a0_vslot59.c (CComplexThing::vslot59, 18 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef uint32_t (BEA_THISCALL* FUN_00533840_t)(uint32_t);
static const bea_guard<FUN_00533840_t> FUN_00533840 = {(FUN_00533840_t)0x00533840};

static undefined4 BEA_THISCALL ap_004f45a0(CComplexThing * this_)
{
  if (*(void **)(this_ + 0x74) != (void *)0x0) {
    FUN_00533840(bea_arg(*(void **)(this_ + 0x74)));
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f45a0, ap_004f45a0));
