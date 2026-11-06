// auto-ported from 00500280_vslot3.c (CVBuffer::vslot3, 43 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char CVBuffer;
typedef undefined4 (BEA_STDCALL* FUN_00513800_t)(uint32_t);
static const bea_guard<FUN_00513800_t> FUN_00513800 = {(FUN_00513800_t)0x00513800};

static undefined4 BEA_THISCALL ap_00500280(CVBuffer * this_)
{
  if ((*(int *)(this_ + 0x20) == 0) && (*(int *)(this_ + 8) != 0)) {
    FUN_00513800(bea_arg(*(int *)(this_ + 8)));
    *(undefined4 *)(this_ + 8) = 0;
    this_[0x28] = (CVBuffer)0x0;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00500280, ap_00500280));
