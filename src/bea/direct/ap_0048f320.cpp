// auto-ported from 0048f320_vslot1.c (CLandscapeVB::vslot1, 30 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CLandscapeVB;
typedef char CVBuffer;
typedef int (BEA_THISCALL* CVBuffer__vslot1_t)(uint32_t);
static const bea_guard<CVBuffer__vslot1_t> CVBuffer__vslot1 = {(CVBuffer__vslot1_t)0x00500120};
typedef uint32_t (BEA_THISCALL* FUN_0048f210_t)(uint32_t);
static const bea_guard<FUN_0048f210_t> FUN_0048f210 = {(FUN_0048f210_t)0x0048f210};

static undefined4 BEA_THISCALL ap_0048f320(CLandscapeVB * this_)
{
  undefined4 uVar1;
  
  uVar1 = CVBuffer__vslot1(bea_arg((CVBuffer *)this_));
  if (*(int *)(this_ + 0x40) != 0) {
    FUN_0048f210(bea_arg(this_));
  }
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048f320, ap_0048f320));
