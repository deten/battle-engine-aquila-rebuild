// auto-ported from 005506e0_FUN_005506e0.c (FUN_005506e0, 70 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef uint32_t (BEA_STDCALL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055db0a_t> FUN_0055db0a = {(FUN_0055db0a_t)0x0055db0a};

static void BEA_THISCALL ap_005506e0(void * this_)
{
  int iVar1;
  
  iVar1 = *(int *)this_;
  if (iVar1 != 0) {
    FUN_0055db0a(bea_arg(iVar1), bea_arg(8), bea_arg(*(undefined4 *)(iVar1 + -4)), bea_arg(((void*)0x005503b0)));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar1 + -4));
    *(undefined4 *)this_ = 0;
  }
  if (*(undefined4 **)((int)this_ + 4) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 4), 0x0, 3);
    *(undefined4 *)((int)this_ + 4) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005506e0, ap_005506e0));
