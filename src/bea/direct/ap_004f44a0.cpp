// auto-ported from 004f44a0_vslot60.c (CComplexThing::vslot60, 136 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComplexThing;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_thing_cpp_006331c0 ((char*)0x006331c0)
typedef void * (BEA_THISCALL* FUN_004046d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004046d0_t> FUN_004046d0 = {(FUN_004046d0_t)0x004046d0};
typedef undefined4 (BEA_THISCALL* FUN_00404860_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00404860_t> FUN_00404860 = {(FUN_00404860_t)0x00404860};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_THISCALL ap_004f44a0(CComplexThing * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  void *this_00;
  undefined4 uVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  if (*(int *)(this_ + 0x6c) == 0) {
    this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x24), bea_arg(5), bea_arg(s_C__dev_ONSLAUGHT2_thing_cpp_006331c0), bea_arg(0x2ff));
    if (this_00 == (void *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_004046d0(bea_arg(this_00), bea_arg(this_));
    }
    *(undefined4 *)(this_ + 0x6c) = uVar1;
  }
  return FUN_00404860(bea_arg(*(void **)(this_ + 0x6c)), bea_arg(param_1), bea_arg(param_2), bea_arg(param_3));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f44a0, ap_004f44a0));
