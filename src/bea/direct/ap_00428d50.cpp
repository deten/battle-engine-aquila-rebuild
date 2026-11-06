// auto-ported from 00428d50_vslot22.c (CComponent::vslot22, 64 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComponent;
typedef char CUnit;
#define s_Activate_00623e14 ((char*)0x00623e14)
typedef uint32_t (BEA_THISCALL* CUnit__vslot22_t)(uint32_t);
static const bea_guard<CUnit__vslot22_t> CUnit__vslot22 = {(CUnit__vslot22_t)0x004fd6a0};
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

static uint32_t BEA_THISCALL ap_00428d50(CComponent * this_)
{
  void *this_00;
  int iVar1;
  char *pcVar2;
  pcVar2 = s_Activate_00623e14;
  this_00 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
  iVar1 = FUN_004aa630(bea_arg(this_00), bea_arg(pcVar2));
  if (iVar1 == -1) {
    *(undefined4 *)(this_ + 0x264) = 0;
    return CUnit__vslot22(bea_arg((CUnit *)this_));
  }
  return bea_vcall<uint32_t>(this_, 0xf0, iVar1,1,0);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00428d50, ap_00428d50));
