// auto-ported from 004157c0_vslot83.c (CBoat::vslot83, 52 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBoat;
#define s_undeploying_006239d8 ((char*)0x006239d8)
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

static uint32_t BEA_THISCALL ap_004157c0(CBoat * this_)
{
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  uVar2 = 0;
  iVar1 = *(int *)this_;
  *(undefined4 *)(this_ + 0x1f0) = 0;
  this_00 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, s_undeploying_006239d8,1);
  uVar2 = FUN_004aa630(bea_arg(this_00), bea_arg(uVar2));
  return bea_vcall<uint32_t>(this_, 0xf0, uVar2);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004157c0, ap_004157c0));
