// auto-ported from 005002b0_vslot4.c (CVBuffer::vslot4, 42 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char CVBuffer;
typedef undefined4 (BEA_STDCALL* FUN_00513800_t)(uint32_t);
static const bea_guard<FUN_00513800_t> FUN_00513800 = {(FUN_00513800_t)0x00513800};

static undefined4 BEA_THISCALL ap_005002b0(CVBuffer * this_)
{
  if ((*(int *)(this_ + 0x20) == 1) && (*(int *)(this_ + 8) != 0)) {
    FUN_00513800(bea_arg(*(int *)(this_ + 8)));
    *(undefined4 *)(this_ + 8) = 0;
    this_[0x28] = (CVBuffer)0x0;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005002b0, ap_005002b0));
