// auto-ported from 0043ed20_FUN_0043ed20.c (FUN_0043ed20, 81 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef void * (BEA_THISCALL* FUN_0043ed20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0043ed20_t> FUN_0043ed20 = {(FUN_0043ed20_t)0x0043ed20};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void * BEA_THISCALL ap_0043ed20(void * this_, uint param_1)
{
  if (*(undefined4 **)((int)this_ + 0x244) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x244), 0x0, 1);
  }
  *(undefined4 *)((int)this_ + 0x244) = 0;
  if (*(void **)((int)this_ + 0x248) != (void *)0x0) {
    FUN_0043ed20(bea_arg(*(void **)((int)this_ + 0x248)), bea_arg(1));
  }
  *(undefined4 *)((int)this_ + 0x248) = 0;
  if ((param_1 & 1) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_));
  }
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0043ed20, ap_0043ed20));
