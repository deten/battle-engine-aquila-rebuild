// auto-ported from 005018b0_FUN_005018b0.c (FUN_005018b0, 266 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_00854e68 GLOBAL_AT(int, 0x00854e68)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_STDCALL* FUN_00512cc0_t)(uint32_t);
static const bea_guard<FUN_00512cc0_t> FUN_00512cc0 = {(FUN_00512cc0_t)0x00512cc0};
typedef uint32_t (BEA_THISCALL* FUN_00512d50_t)(uint32_t);
static const bea_guard<FUN_00512d50_t> FUN_00512d50 = {(FUN_00512d50_t)0x00512d50};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_005018b0(void * this_)
{
  void *pvVar1;
  int *piVar2;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined ***)this_ = ((void*)0x005dfbc4);
  for (pvVar1 = DAT_00854e68; BEA_LOOP_GUARD((pvVar1 != (void *)0x0)); pvVar1 = *(void **)((int)pvVar1 + 0x58)) {
    if (*(void **)((int)pvVar1 + 0x58) == this_) {
      *(undefined4 *)((int)pvVar1 + 0x58) = *(undefined4 *)((int)this_ + 0x58);
    }
  }
  if (DAT_00854e68 == this_) {
    DAT_00854e68 = *(void **)((int)this_ + 0x58);
  }
  FUN_00512cc0(bea_arg(this_));
  piVar2 = *(int **)((int)this_ + 0x28);
  if (piVar2 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar2, 0x8, piVar2);
    *(undefined4 *)((int)this_ + 0x28) = 0;
  }
  if (*(undefined4 **)((int)this_ + 0x40) != (undefined4 *)0x0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(**(undefined4 **)((int)this_ + 0x40)));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x40)));
  }
  if (*(int *)((int)this_ + 0x44) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x44)));
  }
  if (*(int *)((int)this_ + 0x38) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x38)));
    *(undefined4 *)((int)this_ + 0x38) = 0;
  }
  if (*(int *)((int)this_ + 0x48) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x48)));
    *(undefined4 *)((int)this_ + 0x48) = 0;
  }
  if ((*(int *)((int)this_ + 0x54) != -1) && (*(int *)((int)this_ + 0x50) != 0)) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x50)));
    *(undefined4 *)((int)this_ + 0x50) = 0;
  }
  return FUN_00512d50(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005018b0, ap_005018b0));
