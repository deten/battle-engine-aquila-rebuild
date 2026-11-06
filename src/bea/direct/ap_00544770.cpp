// auto-ported from 00544770_FUN_00544770.c (FUN_00544770, 95 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
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

static undefined4 BEA_THISCALL ap_00544770(void * this_)
{
  int iVar1;
  undefined4 uVar2;
  
  if (*(undefined4 **)this_ != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)this_, 0x0, 3);
    *(undefined4 *)this_ = 0;
  }
  iVar1 = *(int *)((int)this_ + 8);
  if (iVar1 != 0) {
    FUN_0055db0a(bea_arg(iVar1), bea_arg(0xc), bea_arg(*(undefined4 *)(iVar1 + -4)), bea_arg(((void*)0x005447d0)));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar1 + -4));
    *(undefined4 *)((int)this_ + 8) = 0;
  }
  uVar2 = 0;
  if (*(int *)((int)this_ + 4) != 0) {
    uVar2 = FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 4)));
    *(undefined4 *)((int)this_ + 4) = 0;
  }
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00544770, ap_00544770));
