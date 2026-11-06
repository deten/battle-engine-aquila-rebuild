// auto-ported from 004ded30_vslot22.c (CSentinel::vslot22, 42 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CSentinel;
#define s_activate_00632260 ((char*)0x00632260)
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

static uint32_t BEA_THISCALL ap_004ded30(CSentinel * this_)
{
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  uVar2 = 0;
  iVar1 = *(int *)this_;
  this_00 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, s_activate_00632260,1);
  uVar2 = FUN_004aa630(bea_arg(this_00), bea_arg(uVar2));
  return bea_vcall<uint32_t>(this_, 0xf0, uVar2);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ded30, ap_004ded30));
