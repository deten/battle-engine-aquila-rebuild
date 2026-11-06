// auto-ported from 00556f80_FUN_00556f80.c (FUN_00556f80, 60 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00500460_t)(uint32_t);
static const bea_guard<FUN_00500460_t> FUN_00500460 = {(FUN_00500460_t)0x00500460};
typedef uint32_t (BEA_THISCALL* FUN_00501310_t)(uint32_t);
static const bea_guard<FUN_00501310_t> FUN_00501310 = {(FUN_00501310_t)0x00501310};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_00556f80(void * this_)
{
  void *this_00;
  
  if (*(void **)((int)this_ + 0x140) != (void *)0x0) {
    FUN_00501310(bea_arg(*(void **)((int)this_ + 0x140)));
    this_00 = *(void **)((int)this_ + 0x140);
    if (this_00 != (void *)0x0) {
      FUN_00500460(bea_arg(this_00));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
    }
    *(undefined4 *)((int)this_ + 0x140) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00556f80, ap_00556f80));
