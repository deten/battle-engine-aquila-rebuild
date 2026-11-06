// auto-ported from 0047bfa0_FUN_0047bfa0.c (FUN_0047bfa0, 68 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00623bb4 GLOBAL_AT(undefined, 0x00623bb4)
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

static void BEA_THISCALL ap_0047bfa0(void * this_)
{
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  undefined *puVar3;
  
  if ((*(int *)((int)this_ + 0x27c) == 1) || (*(int *)((int)this_ + 0x27c) == 3)) {
    iVar1 = *(int *)this_;
    *(undefined4 *)((int)this_ + 0x27c) = 2;
    puVar3 = &DAT_00623bb4;
    this_00 = (void *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x30), 0x24, &DAT_00623bb4,1,0);
    uVar2 = FUN_004aa630(bea_arg(this_00), bea_arg(puVar3));
    bea_vcall<uint32_t>(this_, 0xf0, uVar2);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047bfa0, ap_0047bfa0));
