// auto-ported from 00441320_FUN_00441320.c (FUN_00441320, 63 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0066eb78 GLOBAL_AT(int, 0x0066eb78)
typedef uint32_t (BEA_THISCALL* FUN_004f3f00_t)(uint32_t);
static const bea_guard<FUN_004f3f00_t> FUN_004f3f00 = {(FUN_004f3f00_t)0x004f3f00};

static void BEA_THISCALL ap_00441320(void * this_)
{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  *(undefined ***)this_ = ((void*)0x005daf10);
  *(undefined ***)((int)this_ + 8) = ((void*)0x005dae98);
  pvVar1 = DAT_0066eb78;
  pvVar3 = (void *)0x0;
  if (DAT_0066eb78 != this_) {
    do {
      pvVar2 = pvVar1;
      if (pvVar2 == (void *)0x0) break;
      pvVar1 = *(void **)((int)pvVar2 + 0x7c);
      pvVar3 = pvVar2;
    } while (BEA_LOOP_GUARD((*(void **)((int)pvVar2 + 0x7c) != this_)));
    if (pvVar3 != (void *)0x0) {
      *(undefined4 *)((int)pvVar3 + 0x7c) = *(undefined4 *)((int)this_ + 0x7c);
      goto LAB_0044135a;
    }
  }
  DAT_0066eb78 = *(void **)((int)this_ + 0x7c);
LAB_0044135a:
  FUN_004f3f00(bea_arg(this_));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00441320, ap_00441320));
