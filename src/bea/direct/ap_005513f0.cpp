// auto-ported from 005513f0_FUN_005513f0.c (FUN_005513f0, 46 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
typedef uint32_t (BEA_THISCALL* FUN_00513ec0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513ec0_t> FUN_00513ec0 = {(FUN_00513ec0_t)0x00513ec0};
typedef uint32_t (BEA_STDCALL* FUN_00514030_t)(uint32_t);
static const bea_guard<FUN_00514030_t> FUN_00514030 = {(FUN_00514030_t)0x00514030};

static void BEA_THISCALL ap_005513f0(void * this_, int param_1)
{
  *(int *)((int)this_ + 0xe58) = param_1;
  if (param_1 == 0) {
    FUN_00513ec0(bea_arg(&DAT_00855bb0), bea_arg(*(undefined4 *)((int)this_ + 0xe14)));
    FUN_00514030(bea_arg(1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005513f0, ap_005513f0));
