// auto-ported from 004d80c0_vslot23.c (CRocket::vslot23, 41 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CRocket;
typedef uint32_t (BEA_THISCALL* FUN_004cb0b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb0b0_t> FUN_004cb0b0 = {(FUN_004cb0b0_t)0x004cb0b0};

static void BEA_THISCALL ap_004d80c0(CRocket * this_)
{
  CRocket *this_00;
  int iVar1;
  
  *(undefined4 *)(this_ + 0xe4) = 0;
  this_00 = this_ + 0xec;
  iVar1 = 4;
  do {
    FUN_004cb0b0(bea_arg(this_00), bea_arg(0));
    this_00 = this_00 + 8;
    iVar1 = iVar1 + -1;
  } while (BEA_LOOP_GUARD((iVar1 != 0)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d80c0, ap_004d80c0));
