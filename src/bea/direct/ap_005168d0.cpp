// auto-ported from 005168d0_FUN_005168d0.c (FUN_005168d0, 136 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004dff30_t)(uint32_t);
static const bea_guard<FUN_004dff30_t> FUN_004dff30 = {(FUN_004dff30_t)0x004dff30};
typedef uint32_t (BEA_THISCALL* FUN_004e1200_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e1200_t> FUN_004e1200 = {(FUN_004e1200_t)0x004e1200};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_005168d0(void * this_)
{
  int *piVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined ***)this_ = ((void*)0x005e4988);
  FUN_004e1200(bea_arg(&DAT_00896988), bea_arg(this_));
  if (*(int *)((int)this_ + 0x78) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x78)));
    *(undefined4 *)((int)this_ + 0x78) = 0;
  }
  piVar1 = *(int **)((int)this_ + 0x80);
  if (piVar1 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar1, 0x8, piVar1);
    *(undefined4 *)((int)this_ + 0x80) = 0;
  }
  return FUN_004dff30(bea_arg(this_));
}

// @autoport-registration
// superseded by src/bea/lifted/lift_005168d0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
