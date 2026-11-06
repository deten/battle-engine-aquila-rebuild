// auto-ported from 0047cea0_FUN_0047cea0.c (FUN_0047cea0, 63 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004cb0b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb0b0_t> FUN_004cb0b0 = {(FUN_004cb0b0_t)0x004cb0b0};

static void BEA_THISCALL ap_0047cea0(void * this_)
{
  undefined4 *puVar1;
  void *this_00;
  
  puVar1 = *(undefined4 **)((int)this_ + 0x1d4);
  if (puVar1 == (undefined4 *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)*puVar1;
  }
  while (BEA_LOOP_GUARD((this_00 != (void *)0x0))) {
    FUN_004cb0b0(bea_arg(this_00), bea_arg(0));
    puVar1 = (undefined4 *)puVar1[1];
    if (puVar1 == (undefined4 *)0x0) {
      this_00 = (void *)0x0;
    }
    else {
      this_00 = (void *)*puVar1;
    }
  }
  *(undefined4 *)((int)this_ + 0x1e4) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047cea0, ap_0047cea0));
