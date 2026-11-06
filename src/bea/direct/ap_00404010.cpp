// auto-ported from 00404010_FUN_00404010.c (FUN_00404010, 131 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00660130 GLOBAL_AT(int, 0x00660130)
#define DAT_00660134 GLOBAL_AT(int, 0x00660134)
typedef uint32_t (BEA_THISCALL* FUN_004f3f00_t)(uint32_t);
static const bea_guard<FUN_004f3f00_t> FUN_004f3f00 = {(FUN_004f3f00_t)0x004f3f00};

static void BEA_THISCALL ap_00404010(void * this_)
{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  *(undefined ***)this_ = ((void*)0x005d8698);
  *(undefined ***)((int)this_ + 8) = ((void*)0x005d8620);
  for (pvVar1 = DAT_00660130; BEA_LOOP_GUARD((pvVar1 != (void *)0x0)); pvVar1 = *(void **)((int)pvVar1 + 0xcc)) {
    *(void **)((int)pvVar1 + 0xd0) = this_;
    if (this_ != (void *)0x0) {
      *(undefined4 *)((int)pvVar1 + 0xd0) = 0;
    }
  }
  if (DAT_00660130 != (void *)0x0) {
    if (DAT_00660130 == this_) {
      DAT_00660130 = *(void **)((int)this_ + 0xcc);
    }
    else {
      pvVar3 = *(void **)((int)DAT_00660130 + 0xcc);
      pvVar1 = DAT_00660130;
      while (BEA_LOOP_GUARD((pvVar2 = pvVar3, pvVar2 != this_))) {
        if (pvVar1 == (void *)0x0) goto LAB_0040408e;
        pvVar1 = pvVar2;
        pvVar3 = *(void **)((int)pvVar2 + 0xcc);
      }
      if (pvVar1 == (void *)0x0) goto LAB_0040408e;
      *(undefined4 *)((int)pvVar1 + 0xcc) = *(undefined4 *)((int)this_ + 0xcc);
    }
    DAT_00660134 = DAT_00660134 + -1;
  }
LAB_0040408e:
  FUN_004f3f00(bea_arg(this_));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00404010, ap_00404010));
