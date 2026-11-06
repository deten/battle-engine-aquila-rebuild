// auto-ported from 00472a50_vslot2.c (CGameInterface::vslot2, 63 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGameInterface;
typedef char CMonitor;
typedef uint32_t (BEA_THISCALL* CMonitor__vslot2_t)(uint32_t);
static const bea_guard<CMonitor__vslot2_t> CMonitor__vslot2 = {(CMonitor__vslot2_t)0x004bacb0};
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};

static uint32_t BEA_THISCALL ap_00472a50(CGameInterface * this_)
{
  if (*(int *)(this_ + 0xc) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)(this_ + 0xc) + 8)));
    *(undefined4 *)(this_ + 0xc) = 0;
  }
  if (*(int *)(this_ + 8) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)(this_ + 8) + 8)));
    *(undefined4 *)(this_ + 8) = 0;
  }
  *(undefined4 *)(this_ + 0xc) = 0;
  return CMonitor__vslot2(bea_arg((CMonitor *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00472a50, ap_00472a50));
