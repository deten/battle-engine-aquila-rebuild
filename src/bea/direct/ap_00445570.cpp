// auto-ported from 00445570_FUN_00445570.c (FUN_00445570, 68 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00623bb4 GLOBAL_AT(undefined, 0x00623bb4)
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

static void BEA_THISCALL ap_00445570(void * this_)
{
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  undefined *puVar3;
  
  if ((*(int *)((int)this_ + 0x280) == 1) || (*(int *)((int)this_ + 0x280) == 3)) {
    iVar1 = *(int *)this_;
    *(undefined4 *)((int)this_ + 0x280) = 2;
    puVar3 = &DAT_00623bb4;
    this_00 = (void *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x30), 0x24, &DAT_00623bb4,1,0);
    uVar2 = FUN_004aa630(bea_arg(this_00), bea_arg(puVar3));
    bea_vcall<uint32_t>(this_, 0xf0, uVar2);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00445570, ap_00445570));
