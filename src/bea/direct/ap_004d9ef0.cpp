// auto-ported from 004d9ef0_vslot69.c (CRound::vslot69, 60 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef char CRound;
typedef uint32_t (BEA_THISCALL* CActor__vslot69_t)(uint32_t);
static const bea_guard<CActor__vslot69_t> CActor__vslot69 = {(CActor__vslot69_t)0x00402010};
// @autoport-this-assumed: this_ passed to FUN_004d9f30 (ECX = this, checked in the disassembly)
typedef uint32_t (BEA_THISCALL* FUN_004d9f30_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004d9f30_t> FUN_004d9f30 = {(FUN_004d9f30_t)0x004d9f30};
typedef uint32_t (BEA_THISCALL* FUN_004db630_t)(uint32_t);
static const bea_guard<FUN_004db630_t> FUN_004db630 = {(FUN_004db630_t)0x004db630};

static void BEA_THISCALL ap_004d9ef0(CRound * this_)
{
  FUN_004db630(bea_arg(this_));
  CActor__vslot69(bea_arg((CActor *)this_));
  if ((*(int *)(*(int *)(this_ + 0xf0) + 0x5c) == 0) && (*(int *)(*(int *)(this_ + 0xf0) + 0x6c) == 0)
     ) {
    FUN_004d9f30(bea_arg(this_), bea_arg(2), bea_arg(0), bea_arg(0));
    bea_vcall<uint32_t>(this_, 0xc8);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d9ef0, ap_004d9ef0));
