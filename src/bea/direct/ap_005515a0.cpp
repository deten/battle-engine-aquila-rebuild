// auto-ported from 005515a0_FUN_005515a0.c (FUN_005515a0, 42 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define s_Use_the_render_queue_006521a0 ((char*)0x006521a0)
#define s_cg_userenderqueue_0065218c ((char*)0x0065218c)
typedef uint32_t (BEA_THISCALL* FUN_0042b040_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b040_t> FUN_0042b040 = {(FUN_0042b040_t)0x0042b040};

static void BEA_THISCALL ap_005515a0(void * this_)
{
  *(undefined1 *)this_ = 0;
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_cg_userenderqueue_0065218c), bea_arg(s_Use_the_render_queue_006521a0), bea_arg(3), bea_arg(this_), bea_arg(0), bea_arg(0));
  *(undefined4 *)((int)this_ + 4) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005515a0, ap_005515a0));
