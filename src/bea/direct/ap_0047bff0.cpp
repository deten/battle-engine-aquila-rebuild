// auto-ported from 0047bff0_FUN_0047bff0.c (FUN_0047bff0, 67 bytes) by tools/autoport.py
// @hand-fixed 2026-10-29 VC6 pushed slot 0xf0's trailing arguments (1, 0) before evaluating Find(GetAnimSet(), name): slot 0x24 takes none, FUN_004aa630 the name, slot 0xf0 (index, 1, 0) (pattern found by a hand-port helper on 0x446d70)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define s_close_006289e4 ((char*)0x006289e4)
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

static void BEA_THISCALL ap_0047bff0(void * this_)
{
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  char *pcVar3;
  
  if ((*(int *)((int)this_ + 0x27c) == 0) || (*(int *)((int)this_ + 0x27c) == 2)) {
    iVar1 = *(int *)this_;
    *(undefined4 *)((int)this_ + 0x27c) = 3;
    pcVar3 = s_close_006289e4;
    this_00 = (void *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x30), 0x24);   // slot 0x24 takes no argument (0x4de070: mov eax,[ecx+0x14]; ret)
    uVar2 = FUN_004aa630(bea_arg(this_00), bea_arg(s_close_006289e4));
    bea_vcall<uint32_t>(this_, 0xf0, uVar2, 1, 0)   /* the two pushes before the name are slot 0xf0's */;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047bff0, ap_0047bff0));
