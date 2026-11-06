// auto-ported from 004e3aa0_vslot2.c (CSpawner::vslot2, 23 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CSpawner;
typedef uint32_t (BEA_THISCALL* FUN_004e3ac0_t)(uint32_t);
static const bea_guard<FUN_004e3ac0_t> FUN_004e3ac0 = {(FUN_004e3ac0_t)0x004e3ac0};

static void BEA_THISCALL ap_004e3aa0(CSpawner * this_)
{
  FUN_004e3ac0(bea_arg(this_));
  if (this_ != (CSpawner *)0x0) {
    bea_vcall<uint32_t>(this_, 0x4, 1);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e3aa0, ap_004e3aa0));
