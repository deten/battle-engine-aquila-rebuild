// auto-ported from 00442900_FUN_00442900.c (FUN_00442900, 91 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef float10 (BEA_THISCALL* FUN_00442900_t)(uint32_t);
static const bea_guard<FUN_00442900_t> FUN_00442900 = {(FUN_00442900_t)0x00442900};

static float10 BEA_THISCALL ap_00442900(void * this_)
{
  undefined4 *puVar1;
  int iVar2;
  void *this_00;
  float10 fVar3;
  float local_4;
  
  local_4 = 0.0;
  if ((*(int *)((int)this_ + 0x1c) != 0) &&
     (iVar2 = bea_vcall<uint32_t>(this_, 0x18), iVar2 == 0)) {
    local_4 = *(float *)((int)this_ + 0xc);
  }
  puVar1 = *(undefined4 **)((int)this_ + 0x24);
  if (puVar1 == (undefined4 *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)*puVar1;
  }
  while (BEA_LOOP_GUARD((this_00 != (void *)0x0))) {
    fVar3 = (float10)FUN_00442900(bea_arg(this_00));
    puVar1 = (undefined4 *)puVar1[1];
    local_4 = (float)(fVar3 + (float10)local_4);
    if (puVar1 == (undefined4 *)0x0) {
      this_00 = (void *)0x0;
    }
    else {
      this_00 = (void *)*puVar1;
    }
  }
  return (float10)local_4;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00442900, ap_00442900));
