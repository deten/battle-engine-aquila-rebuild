// auto-ported from 0043eca0_vslot2.c (CCutscene::vslot2, 114 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CCutscene;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot2_t)(uint32_t);
static const bea_guard<CComplexThing__vslot2_t> CComplexThing__vslot2 = {(CComplexThing__vslot2_t)0x004f41b0};
typedef void * (BEA_THISCALL* FUN_0043ed20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0043ed20_t> FUN_0043ed20 = {(FUN_0043ed20_t)0x0043ed20};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_0043eca0(CCutscene * this_)
{
  int iVar1;
  int iVar2;
  CCutscene *pCVar3;
  bea_vcall<uint32_t>(this_, 0x100);
  pCVar3 = this_ + 0x7c;
  iVar2 = 0x1e;
  do {
    iVar1 = *(int *)pCVar3;
    if (iVar1 != 0) {
      if (*(undefined4 **)(iVar1 + 0x244) != (undefined4 *)0x0) {
        bea_vcall<uint32_t>(*(undefined4 **)(iVar1 + 0x244), 0x0, 1);
      }
      *(undefined4 *)(iVar1 + 0x244) = 0;
      if (*(void **)(iVar1 + 0x248) != (void *)0x0) {
        FUN_0043ed20(bea_arg(*(void **)(iVar1 + 0x248)), bea_arg(1));
      }
      *(undefined4 *)(iVar1 + 0x248) = 0;
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar1));
    }
    *(int *)pCVar3 = 0;
    pCVar3 = pCVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (BEA_LOOP_GUARD((iVar2 != 0)));
  return CComplexThing__vslot2(bea_arg((CComplexThing *)this_));
}

// @autoport-registration
// superseded by src/bea/lifted/lift_0043eca0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
