// auto-ported from 004fde70_FUN_004fde70.c (FUN_004fde70, 61 bytes) by tools/autoport.py
// @hand-fixed 2026-10-29 VC6 pushed slot 0xf0's trailing arguments (1, 0) before the name: slot 0x24 takes no argument, FUN_004aa630 the name, slot 0xf0 (index, 1, 0) (pattern found by a hand-port helper on 0x446d70)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define s_undeploying_006239d8 ((char*)0x006239d8)
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

static void BEA_THISCALL ap_004fde70(void * this_)
{
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  char *pcVar3;
  
  if (*(int *)((int)this_ + 0x244) == 4) {
    iVar1 = *(int *)this_;
    *(undefined4 *)((int)this_ + 0x244) = 5;
    pcVar3 = s_undeploying_006239d8;
    this_00 = (void *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x30), 0x24);
    uVar2 = FUN_004aa630(bea_arg(this_00), bea_arg(pcVar3));
    bea_vcall<uint32_t>(this_, 0xf0, uVar2, 1, 0);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fde70, ap_004fde70));
