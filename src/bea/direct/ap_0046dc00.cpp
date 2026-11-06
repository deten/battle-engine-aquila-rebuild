// auto-ported from 0046dc00_FUN_0046dc00.c (FUN_0046dc00, 45 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (5 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00662dcc GLOBAL_AT(int, 0x00662dcc)
#define DAT_00889a48 GLOBAL_AT(int, 0x00889a48)
typedef uint32_t (BEA_THISCALL* FUN_004bb8c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004bb8c0_t> FUN_004bb8c0 = {(FUN_004bb8c0_t)0x004bb8c0};

static void BEA_THISCALL ap_0046dc00(void * this_)
{
  if (DAT_00662dcc != 0) {
    if (*(int *)((int)this_ + 0x30) != 100) {
      FUN_004bb8c0(bea_arg(&DAT_00889a48), bea_arg(4), bea_arg(0));
      return;
    }
    FUN_004bb8c0(bea_arg(&DAT_00889a48), bea_arg(2), bea_arg(0));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046dc00, ap_0046dc00));
