// auto-ported from 00498530_FUN_00498530.c (FUN_00498530, 824 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00704650 GLOBAL_AT(int, 0x00704650)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004bae50_t)(uint32_t);
static const bea_guard<FUN_004bae50_t> FUN_004bae50 = {(FUN_004bae50_t)0x004bae50};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_00498530(void * this_)
{
  int iVar1;
  bool bVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined ***)this_ = ((void*)0x005dc3b4);
  pvVar4 = DAT_00704650;
  do {
    pvVar3 = pvVar4;
    if (pvVar3 == (void *)0x0) goto LAB_00498577;
    pvVar4 = *(void **)((int)pvVar3 + 0xec);
  } while (BEA_LOOP_GUARD((*(void **)((int)pvVar3 + 0xec) != this_)));
  if (pvVar3 == (void *)0x0) {
LAB_00498577:
    DAT_00704650 = *(void **)((int)this_ + 0xec);
  }
  else {
    *(undefined4 *)((int)pvVar3 + 0xec) = *(undefined4 *)((int)this_ + 0xec);
  }
  bVar2 = true;
  if (DAT_00704650 != (void *)0x0) {
    pvVar4 = DAT_00704650;
    do {
      if (*(int *)((int)pvVar4 + 0xe4) == *(int *)((int)this_ + 0xe4)) {
        bVar2 = false;
      }
      pvVar4 = *(void **)((int)pvVar4 + 0xec);
    } while (BEA_LOOP_GUARD((pvVar4 != (void *)0x0)));
    if (!bVar2) goto LAB_00498753;
  }
  if (*(int *)((int)this_ + 0xac) != 0) {
    iVar5 = 0;
    if (0 < *(int *)((int)this_ + 0xac)) {
      do {
        iVar1 = *(int *)(**(int **)((int)this_ + 0xe4) + iVar5 * 4);
        if (iVar1 != 0) {
          FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar1));
          *(undefined4 *)(**(int **)((int)this_ + 0xe4) + iVar5 * 4) = 0;
        }
        iVar5 = iVar5 + 1;
      } while (BEA_LOOP_GUARD((iVar5 < *(int *)((int)this_ + 0xac))));
    }
    if (**(int **)((int)this_ + 0xe4) != 0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(**(int **)((int)this_ + 0xe4)));
      **(undefined4 **)((int)this_ + 0xe4) = 0;
    }
    iVar5 = 0;
    if (0 < *(int *)((int)this_ + 0xac)) {
      do {
        iVar1 = *(int *)(*(int *)(*(int *)((int)this_ + 0xe4) + 4) + iVar5 * 4);
        if (iVar1 != 0) {
          FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar1));
          *(undefined4 *)(*(int *)(*(int *)((int)this_ + 0xe4) + 4) + iVar5 * 4) = 0;
        }
        iVar5 = iVar5 + 1;
      } while (BEA_LOOP_GUARD((iVar5 < *(int *)((int)this_ + 0xac))));
    }
    iVar5 = *(int *)(*(int *)((int)this_ + 0xe4) + 4);
    if (iVar5 != 0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar5));
      *(undefined4 *)(*(int *)((int)this_ + 0xe4) + 4) = 0;
    }
  }
  if (*(int *)((int)this_ + 0xe4) != 0) {
    if (*(int *)(*(int *)((int)this_ + 0xe4) + 8) != 0) {
      iVar5 = 0;
      if (0 < *(int *)((int)this_ + 0xa8) * *(int *)((int)this_ + 0xc0)) {
        do {
          iVar1 = *(int *)(*(int *)(*(int *)((int)this_ + 0xe4) + 8) + iVar5 * 4);
          if (iVar1 != 0) {
            FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar1));
            *(undefined4 *)(*(int *)(*(int *)((int)this_ + 0xe4) + 8) + iVar5 * 4) = 0;
          }
          iVar5 = iVar5 + 1;
        } while (BEA_LOOP_GUARD((iVar5 < *(int *)((int)this_ + 0xa8) * *(int *)((int)this_ + 0xc0))));
      }
      iVar5 = *(int *)(*(int *)((int)this_ + 0xe4) + 8);
      if (iVar5 != 0) {
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar5));
        *(undefined4 *)(*(int *)((int)this_ + 0xe4) + 8) = 0;
      }
    }
    iVar5 = *(int *)(*(int *)((int)this_ + 0xe4) + 0xc);
    if (iVar5 != 0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar5));
      *(undefined4 *)(*(int *)((int)this_ + 0xe4) + 0xc) = 0;
    }
    iVar5 = *(int *)(*(int *)((int)this_ + 0xe4) + 0x10);
    if (iVar5 != 0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar5));
      *(undefined4 *)(*(int *)((int)this_ + 0xe4) + 0x10) = 0;
    }
  }
  if (*(int *)((int)this_ + 0xe4) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xe4)));
    *(undefined4 *)((int)this_ + 0xe4) = 0;
  }
LAB_00498753:
  if (*(int *)((int)this_ + 0x14) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x14)));
  }
  if (*(int *)((int)this_ + 0x18) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x18)));
  }
  if (*(int *)((int)this_ + 0x1c) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x1c)));
  }
  if (*(int *)((int)this_ + 0x20) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x20)));
  }
  if (*(int *)((int)this_ + 0x24) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x24)));
  }
  if (*(int *)((int)this_ + 0x34) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x34)));
  }
  if (*(int *)((int)this_ + 0x30) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x30)));
  }
  if (*(int *)((int)this_ + 0x38) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x38)));
  }
  if (*(int *)((int)this_ + 0x40) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x40)));
  }
  if (*(int *)((int)this_ + 0x3c) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x3c)));
  }
  if (*(int *)((int)this_ + 0x44) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x44)));
  }
  if (*(int *)((int)this_ + 0xbc) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xbc)));
  }
  return FUN_004bae50(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00498530, ap_00498530));
