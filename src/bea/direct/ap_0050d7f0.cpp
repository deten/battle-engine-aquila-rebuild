// auto-ported from 0050d7f0_FUN_0050d7f0.c (FUN_0050d7f0, 113 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_0050d7f0(void * this_)
{
  undefined4 *puVar1;
  int *piVar2;
  puVar1 = *(undefined4 **)this_;
  *(undefined4 **)((int)this_ + 8) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*puVar1;
  }
  while (BEA_LOOP_GUARD((piVar2 != (int *)0x0))) {
    if (piVar2 != (int *)0x0) {
      if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
        bea_vcall<uint32_t>(*piVar2, 0x0, 1);
      }
      *piVar2 = 0;
      if ((undefined4 *)piVar2[1] != (undefined4 *)0x0) {
        bea_vcall<uint32_t>(piVar2[1], 0x0, 1);
      }
      piVar2[1] = 0;
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(piVar2));
    }
    puVar1 = *(undefined4 **)(*(int *)((int)this_ + 8) + 4);
    *(undefined4 **)((int)this_ + 8) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*puVar1;
    }
  }
  return FUN_004e5c60(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050d7f0, ap_0050d7f0));
