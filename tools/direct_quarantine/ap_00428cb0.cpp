// auto-ported from 00428cb0_FUN_00428cb0.c (FUN_00428cb0, 52 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define PTR_DAT_006248e8 GLOBAL_AT(void*, 0x006248e8)
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

static undefined4 BEA_THISCALL ap_00428cb0(void * this_)
{
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)this_;
  this_00 = (void *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x30), 0x24, &PTR_DAT_006248e8,1);
  uVar2 = FUN_004aa630(bea_arg(this_00), bea_arg(uVar2));
  uVar2 = bea_vcall<uint32_t>(this_, 0xf0, uVar2);
  *(undefined4 *)((int)this_ + 700) = 1;
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00428cb0, ap_00428cb0));
