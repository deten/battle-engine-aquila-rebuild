// auto-ported from 0048e450_FUN_0048e450.c (FUN_0048e450, 126 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_006fabf8 GLOBAL_AT(int, 0x006fabf8)
#define DAT_006fabf4 GLOBAL_AT(undefined4*, 0x006fabf4)
typedef uint32_t (BEA_THISCALL* FUN_004f7a40_t)(uint32_t);
static const bea_guard<FUN_004f7a40_t> FUN_004f7a40 = {(FUN_004f7a40_t)0x004f7a40};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_0048e450(void * this_)
{
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined ***)this_ = ((void*)0x005dc1f0);
  if (*(int *)((int)this_ + 0x40) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x40)));
  }
  DAT_006fabf8 = DAT_006fabf8 + -1;
  if (DAT_006fabf8 == 0) {
    bea_vcall<uint32_t>(DAT_006fabf4, 0x8, DAT_006fabf4);
    DAT_006fabf4 = (int *)0x0;
  }
  return FUN_004f7a40(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048e450, ap_0048e450));
