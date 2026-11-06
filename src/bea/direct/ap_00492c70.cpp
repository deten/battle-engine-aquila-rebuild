// auto-ported from 00492c70_FUN_00492c70.c (FUN_00492c70, 18 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00704200 GLOBAL_AT(int, 0x00704200)
typedef uint32_t (BEA_THISCALL* FUN_00491d20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00491d20_t> FUN_00491d20 = {(FUN_00491d20_t)0x00491d20};

static void BEA_THISCALL ap_00492c70(void * this_)
{
  if (*(int *)((int)this_ + 0xc) != -1) {
    FUN_00491d20(bea_arg(&DAT_00704200), bea_arg(this_));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00492c70, ap_00492c70));
