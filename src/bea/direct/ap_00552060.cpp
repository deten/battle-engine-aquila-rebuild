// auto-ported from 00552060_FUN_00552060.c (FUN_00552060, 130 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef uint32_t (BEA_THISCALL* FUN_00501310_t)(uint32_t);
static const bea_guard<FUN_00501310_t> FUN_00501310 = {(FUN_00501310_t)0x00501310};
typedef uint32_t (BEA_STDCALL* FUN_00512cc0_t)(uint32_t);
static const bea_guard<FUN_00512cc0_t> FUN_00512cc0 = {(FUN_00512cc0_t)0x00512cc0};

static uint32_t BEA_THISCALL ap_00552060(void * this_)
{
  int iVar1;
  int *piVar2;
  iVar1 = 0;
  if (0 < *(int *)((int)this_ + 0x5bc)) {
    piVar2 = (int *)((int)this_ + 0x640);
    do {
      if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
        bea_vcall<uint32_t>(*piVar2, 0x0, 1);
        *piVar2 = 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (BEA_LOOP_GUARD((iVar1 < *(int *)((int)this_ + 0x5bc))));
  }
  if (*(int *)((int)this_ + 0x5b4) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x5b4) + 8)));
    *(undefined4 *)((int)this_ + 0x5b4) = 0;
  }
  if (*(void **)((int)this_ + 0x5b8) != (void *)0x0) {
    FUN_00501310(bea_arg(*(void **)((int)this_ + 0x5b8)));
    *(undefined4 *)((int)this_ + 0x5b8) = 0;
  }
  bea_vcall<uint32_t>(this_, 0xc);
  return FUN_00512cc0(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00552060, ap_00552060));
