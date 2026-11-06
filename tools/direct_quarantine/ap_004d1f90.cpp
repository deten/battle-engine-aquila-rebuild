// auto-ported from 004d1f90_FUN_004d1f90.c (FUN_004d1f90, 61 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define s_wingopen_00624420 ((char*)0x00624420)
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static FUN_004aa630_t const FUN_004aa630 = (FUN_004aa630_t)0x004aa630;

static void BEA_THISCALL ap_004d1f90(void * this_)
{
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  char *pcVar3;
  
  if (*(int *)((int)this_ + 0x27c) == 1) {
    iVar1 = *(int *)this_;
    pcVar3 = s_wingopen_00624420;
    this_00 = (void *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x30), 0x24, s_wingopen_00624420,1,0);
    uVar2 = FUN_004aa630(bea_arg(this_00), bea_arg(pcVar3));
    bea_vcall<uint32_t>(this_, 0xf0, uVar2);
    *(undefined4 *)((int)this_ + 0x27c) = 2;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d1f90, ap_004d1f90));
