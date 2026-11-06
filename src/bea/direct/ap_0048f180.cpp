// auto-ported from 0048f180_FUN_0048f180.c (FUN_0048f180, 54 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_0048ef00_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0048ef00_t> FUN_0048ef00 = {(FUN_0048ef00_t)0x0048ef00};

static void BEA_THISCALL ap_0048f180(void * this_)
{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)((int)this_ + 0x2c) = 1;
  if (*(undefined4 **)((int)this_ + 0x40) != (undefined4 *)0x0) {
    uVar1 = *(uint *)((int)this_ + 0x44);
    puVar4 = *(undefined4 **)((int)this_ + 0x40);
    for (uVar2 = (uVar1 & 0x7fffffff) >> 1; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    for (iVar3 = (uVar1 & 1) << 1; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar4 = 0xff;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    return;
  }
  FUN_0048ef00(bea_arg(this_), bea_arg(0), bea_arg(0), bea_arg(0x3f), bea_arg(0x3f));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048f180, ap_0048f180));
