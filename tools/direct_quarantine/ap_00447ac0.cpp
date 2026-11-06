// auto-ported from 00447ac0_vslot119.c (CDropship::vslot119, 73 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CDropship;
#define s_wingfolded_00628aa4 ((char*)0x00628aa4)
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};
typedef uint32_t (BEA_STDCALL* FUN_0050b010_t)(uint32_t);
static const bea_guard<FUN_0050b010_t> FUN_0050b010 = {(FUN_0050b010_t)0x0050b010};

static uint32_t BEA_THISCALL ap_00447ac0(CDropship * this_)
{
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  *(undefined4 *)(this_ + 0x27c) = 3;
  *(undefined4 *)(this_ + 0x290) = 0;
  FUN_0050b010(bea_arg(this_));
  iVar1 = *(int *)this_;
  uVar2 = 0;
  this_00 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, s_wingfolded_00628aa4,1);
  uVar2 = FUN_004aa630(bea_arg(this_00), bea_arg(uVar2));
  return bea_vcall<uint32_t>(this_, 0xf0, uVar2);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00447ac0, ap_00447ac0));
