// auto-ported from 00422760_FUN_00422760.c (FUN_00422760, 62 bytes) by tools/autoport.py
// @hand-fixed 2026-10-29 VC6 pushed slot 0xf0's trailing arguments (1, 0) before evaluating Find(GetAnimSet(), name): slot 0x24 takes none, FUN_004aa630 the name, slot 0xf0 (index, 1, 0) (pattern found by a hand-port helper on 0x446d70)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define s_wingopen_00624420 ((char*)0x00624420)
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

static void BEA_THISCALL ap_00422760(void * this_)
{
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  char *pcVar3;
  
  if (*(int *)((int)this_ + 0x27c) == 0) {
    iVar1 = *(int *)this_;
    pcVar3 = s_wingopen_00624420;
    this_00 = (void *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x30), 0x24);   // slot 0x24 takes no argument (0x4de070: mov eax,[ecx+0x14]; ret)
    uVar2 = FUN_004aa630(bea_arg(this_00), bea_arg(s_wingopen_00624420));
    bea_vcall<uint32_t>(this_, 0xf0, uVar2, 1, 0)   /* the two pushes before the name are slot 0xf0's */;
    *(undefined4 *)((int)this_ + 0x27c) = 1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00422760, ap_00422760));
