// auto-ported from 004fff80_FUN_004fff80.c (FUN_004fff80, 151 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_STDCALL* FUN_00512cc0_t)(uint32_t);
static const bea_guard<FUN_00512cc0_t> FUN_00512cc0 = {(FUN_00512cc0_t)0x00512cc0};
typedef uint32_t (BEA_THISCALL* FUN_00512d50_t)(uint32_t);
static const bea_guard<FUN_00512d50_t> FUN_00512d50 = {(FUN_00512d50_t)0x00512d50};
typedef undefined4 (BEA_STDCALL* FUN_00513800_t)(uint32_t);
static const bea_guard<FUN_00513800_t> FUN_00513800 = {(FUN_00513800_t)0x00513800};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_004fff80(void * this_)
{
  int iVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined ***)this_ = ((void*)0x005dfb8c);
  FUN_00512cc0(bea_arg(this_));
  if (*(int *)((int)this_ + 0x20) == 1) {
    iVar1 = *(int *)((int)this_ + 8);
  }
  else {
    if (*(int *)((int)this_ + 0x20) != 0) goto LAB_004fffe2;
    iVar1 = *(int *)((int)this_ + 8);
  }
  if (iVar1 != 0) {
    FUN_00513800(bea_arg(iVar1));
    *(undefined4 *)((int)this_ + 8) = 0;
    *(undefined1 *)((int)this_ + 0x28) = 0;
  }
LAB_004fffe2:
  if (*(int *)((int)this_ + 0x24) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x24)));
    *(undefined4 *)((int)this_ + 0x24) = 0;
  }
  return FUN_00512d50(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fff80, ap_004fff80));
