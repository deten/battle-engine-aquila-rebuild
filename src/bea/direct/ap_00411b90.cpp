// auto-ported from 00411b90_FUN_00411b90.c (FUN_00411b90, 91 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_00506010_t)(uint32_t);
static const bea_guard<FUN_00506010_t> FUN_00506010 = {(FUN_00506010_t)0x00506010};

static void BEA_THISCALL ap_00411b90(void * this_)
{
  int *piVar1;
  undefined4 *puVar2;
  void *this_00;
  int iVar3;
  
  iVar3 = 0;
  *(undefined4 *)(*(int *)((int)this_ + 0x18) + 0x588) = 0;
  piVar1 = *(int **)this_;
  *(int **)((int)this_ + 8) = piVar1;
  if (piVar1 == (int *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)*piVar1;
  }
  if (this_00 != (void *)0x0) {
    while (BEA_LOOP_GUARD((iVar3 != *(int *)((int)this_ + 0x10)))) {
      iVar3 = iVar3 + 1;
      puVar2 = *(undefined4 **)(*(int *)((int)this_ + 8) + 4);
      *(undefined4 **)((int)this_ + 8) = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        this_00 = (void *)0x0;
      }
      else {
        this_00 = (void *)*puVar2;
      }
      if (this_00 == (void *)0x0) {
        return;
      }
    }
    if ((this_00 != (void *)0x0) && (*(int *)((int)this_00 + 0x9c) != 0)) {
      FUN_00506010(bea_arg(this_00));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00411b90, ap_00411b90));
