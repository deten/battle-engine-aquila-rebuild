// auto-ported from 004d3080_FUN_004d3080.c (FUN_004d3080, 69 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};

static undefined4 BEA_THISCALL ap_004d3080(void * this_, undefined4 param_1)
{
  int *this_00;
  undefined4 uVar1;
  
  this_00 = (int *)((int)this_ + 0x1c);
  FUN_00401000(bea_arg(this_00), bea_arg(param_1));
  FUN_00401000(bea_arg((void *)(*this_00 + 0x574)), bea_arg(this_));
  uVar1 = 0;
  if (*(int *)((int)this_ + 0x20) != 0) {
    bea_vcall<uint32_t>(*this_00, 0xe0, 0);
    uVar1 = bea_vcall<uint32_t>(*this_00, 0x154, 1);
  }
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d3080, ap_004d3080));
