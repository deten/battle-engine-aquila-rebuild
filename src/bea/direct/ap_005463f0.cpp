// auto-ported from 005463f0_FUN_005463f0.c (FUN_005463f0, 98 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)

static void BEA_THISCALL ap_005463f0(void * this_)
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = DAT_00888a50;
  uVar1 = *(undefined4 *)this_;
  iVar3 = bea_vcall<uint32_t>(DAT_00888a50, 0x9c, DAT_00888a50,*(undefined4 *)((int)this_ + 4));
  if (iVar3 < 0) {
    bea_vcall<uint32_t>(piVar2, 0x94, piVar2,0,uVar1);
  }
  else {
    bea_vcall<uint32_t>(piVar2, 0x94, piVar2,0,uVar1);
  }
  piVar2 = *(int **)this_;
  if (piVar2 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar2, 0x8, piVar2);
    *(undefined4 *)this_ = 0;
  }
  piVar2 = *(int **)((int)this_ + 4);
  if (piVar2 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar2, 0x8, piVar2);
    *(undefined4 *)((int)this_ + 4) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005463f0, ap_005463f0));
