// auto-ported from 004beea0_FUN_004beea0.c (FUN_004beea0, 241 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_004bc510_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004bc510_t> FUN_004bc510 = {(FUN_004bc510_t)0x004bc510};

static void BEA_THISCALL ap_004beea0(void * this_, void *param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)((int)this_ + 0xc);
  do {
    iVar3 = iVar2;
    iVar2 = iVar3 + -1;
    if (iVar2 < 0) break;
    iVar1 = FUN_004bc510(bea_arg(param_1), bea_arg((uint)*(byte *)(*(int *)((int)this_ + 0x10) + -1 +
                                                *(int *)((int)this_ + 0xc))), bea_arg((uint)*(byte *)(*(int *)((int)this_ + 0x18) + -1 + *(int *)((int)this_ + 0xc)
                                        )), bea_arg((uint)*(byte *)(*(int *)((int)this_ + 0x10) + iVar2)), bea_arg((uint)*(byte *)(*(int *)((int)this_ + 0x18) + iVar2)));
  } while (BEA_LOOP_GUARD((iVar1 == 0)));
  iVar3 = iVar3 + 1;
  iVar2 = *(int *)((int)this_ + 0xc) + -1;
  if (iVar3 < iVar2) {
    iVar3 = (iVar2 - iVar3) + -1;
    if (iVar2 < *(int *)((int)this_ + 0xc)) {
      do {
        *(undefined1 *)(iVar2 + (*(int *)((int)this_ + 0x10) - iVar3)) =
             *(undefined1 *)(*(int *)((int)this_ + 0x10) + iVar2);
        *(undefined1 *)(iVar2 + (*(int *)((int)this_ + 0x18) - iVar3)) =
             *(undefined1 *)(*(int *)((int)this_ + 0x18) + iVar2);
        iVar2 = iVar2 + 1;
      } while (BEA_LOOP_GUARD((iVar2 < *(int *)((int)this_ + 0xc))));
    }
    *(int *)((int)this_ + 0xc) = *(int *)((int)this_ + 0xc) - iVar3;
  }
  iVar2 = 0;
  if (0 < *(int *)((int)this_ + 0xc)) {
    do {
      iVar3 = FUN_004bc510(bea_arg(param_1), bea_arg((uint)**(byte **)((int)this_ + 0x10)), bea_arg((uint)**(byte **)((int)this_ + 0x18)), bea_arg((uint)(*(byte **)((int)this_ + 0x10))[iVar2]), bea_arg((uint)(*(byte **)((int)this_ + 0x18))[iVar2]));
      if (iVar3 != 0) break;
      iVar2 = iVar2 + 1;
    } while (BEA_LOOP_GUARD((iVar2 < *(int *)((int)this_ + 0xc))));
  }
  iVar3 = iVar2 + -2;
  if (0 < iVar3) {
    iVar2 = iVar2 + -3;
    if (iVar3 < *(int *)((int)this_ + 0xc)) {
      do {
        *(undefined1 *)((*(int *)((int)this_ + 0x10) - iVar2) + iVar3) =
             *(undefined1 *)(*(int *)((int)this_ + 0x10) + iVar3);
        *(undefined1 *)((*(int *)((int)this_ + 0x18) - iVar2) + iVar3) =
             *(undefined1 *)(*(int *)((int)this_ + 0x18) + iVar3);
        iVar3 = iVar3 + 1;
      } while (BEA_LOOP_GUARD((iVar3 < *(int *)((int)this_ + 0xc))));
    }
    *(int *)((int)this_ + 0xc) = *(int *)((int)this_ + 0xc) - iVar2;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004beea0, ap_004beea0));
