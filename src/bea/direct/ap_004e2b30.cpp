// auto-ported from 004e2b30_FUN_004e2b30.c (FUN_004e2b30, 116 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00442380_t)(uint32_t);
static const bea_guard<FUN_00442380_t> FUN_00442380 = {(FUN_00442380_t)0x00442380};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_004e2b30(void * this_)
{
  void *pvVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  pvVar1 = *(void **)((int)this_ + 0x70);
  if (pvVar1 != (void *)0x0) {
    FUN_00442380(bea_arg(pvVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
    *(undefined4 *)((int)this_ + 0x70) = 0;
  }
  if ((*(int *)this_ != 0) && (pvVar1 = *(void **)(*(int *)this_ + 4), pvVar1 != (void *)0x0)) {
    FUN_004e5bd0(bea_arg(pvVar1), bea_arg(this_));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e2b30, ap_004e2b30));
