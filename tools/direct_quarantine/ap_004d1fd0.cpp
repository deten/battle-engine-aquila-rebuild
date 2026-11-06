// auto-ported from 004d1fd0_FUN_004d1fd0.c (FUN_004d1fd0, 61 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define s_wingclose_0062442c ((char*)0x0062442c)
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static FUN_004aa630_t const FUN_004aa630 = (FUN_004aa630_t)0x004aa630;

static void BEA_THISCALL ap_004d1fd0(void * this_)
{
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  char *pcVar3;
  
  if (*(int *)((int)this_ + 0x27c) == 4) {
    iVar1 = *(int *)this_;
    pcVar3 = s_wingclose_0062442c;
    this_00 = (void *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x30), 0x24, s_wingclose_0062442c,1,0);
    uVar2 = FUN_004aa630(bea_arg(this_00), bea_arg(pcVar3));
    bea_vcall<uint32_t>(this_, 0xf0, uVar2);
    *(undefined4 *)((int)this_ + 0x27c) = 3;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d1fd0, ap_004d1fd0));
