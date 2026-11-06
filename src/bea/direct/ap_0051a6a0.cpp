// auto-ported from 0051a6a0_FUN_0051a6a0.c (FUN_0051a6a0, 96 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
typedef int (BEA_THISCALL* FUN_005001e0_t)(uint32_t);
static const bea_guard<FUN_005001e0_t> FUN_005001e0 = {(FUN_005001e0_t)0x005001e0};
typedef uint32_t (BEA_THISCALL* FUN_00513ec0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513ec0_t> FUN_00513ec0 = {(FUN_00513ec0_t)0x00513ec0};

static void BEA_THISCALL ap_0051a6a0(void * this_)
{
  FUN_005001e0(bea_arg(*(void **)this_));
  bea_vcall<uint32_t>(DAT_00888a50, 0x190, DAT_00888a50,0,*(undefined4 *)(*(int *)this_ + 8),0,0x1c);
  FUN_00513ec0(bea_arg(&DAT_00855bb0), bea_arg(0x144));
  bea_vcall<uint32_t>(DAT_00888a50, 0x144, DAT_00888a50,5,*(undefined2 *)((int)this_ + 6),*(int *)((int)this_ + 8) + -2);
  *(undefined2 *)((int)this_ + 6) = 0xffff;
  *(undefined4 *)((int)this_ + 8) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051a6a0, ap_0051a6a0));
