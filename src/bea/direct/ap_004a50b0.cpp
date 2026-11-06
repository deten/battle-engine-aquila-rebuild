// auto-ported from 004a50b0_FUN_004a50b0.c (FUN_004a50b0, 305 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_00704ad8 GLOBAL_AT(int, 0x00704ad8)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004ae640_t)(uint32_t);
static const bea_guard<FUN_004ae640_t> FUN_004ae640 = {(FUN_004ae640_t)0x004ae640};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef uint32_t (BEA_STDCALL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055db0a_t> FUN_0055db0a = {(FUN_0055db0a_t)0x0055db0a};

static void BEA_THISCALL ap_004a50b0(void * this_)
{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  
  pvVar1 = (void *)0x0;
  pvVar2 = DAT_00704ad8;
  do {
    if (pvVar2 == (void *)0x0) {
LAB_004a50f5:
      iVar3 = *(int *)this_;
      if (iVar3 != 0) {
        FUN_0055db0a(bea_arg(iVar3), bea_arg(0x24), bea_arg(*(undefined4 *)(iVar3 + -4)), bea_arg(((void*)0x004adf90)));
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar3 + -4));
        *(undefined4 *)this_ = 0;
      }
      if (*(int *)((int)this_ + 0x160) != 0) {
        iVar3 = 0;
        if (0 < *(int *)((int)this_ + 0x15c)) {
          do {
            pvVar1 = *(void **)(*(int *)((int)this_ + 0x160) + iVar3 * 4);
            if (pvVar1 != (void *)0x0) {
              FUN_004ae640(bea_arg(pvVar1));
              FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
              *(undefined4 *)(*(int *)((int)this_ + 0x160) + iVar3 * 4) = 0;
            }
            iVar3 = iVar3 + 1;
          } while (BEA_LOOP_GUARD((iVar3 < *(int *)((int)this_ + 0x15c))));
        }
        if (*(int *)((int)this_ + 0x160) != 0) {
          FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x160)));
          *(undefined4 *)((int)this_ + 0x160) = 0;
        }
      }
      if (*(int *)((int)this_ + 0x20) != 0) {
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x20)));
        *(undefined4 *)((int)this_ + 0x20) = 0;
      }
      if (*(int *)((int)this_ + 0x18) != 0) {
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x18)));
        *(undefined4 *)((int)this_ + 0x18) = 0;
      }
      iVar3 = *(int *)((int)this_ + 8);
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x170) = *(int *)(iVar3 + 0x170) + -1;
        *(undefined4 *)((int)this_ + 8) = 0;
      }
      if (*(int *)((int)this_ + 0x150) != 0) {
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x150)));
        *(undefined4 *)((int)this_ + 0x150) = 0;
      }
      return;
    }
    if (pvVar2 == this_) {
      if (pvVar2 != (void *)0x0) {
        if (pvVar1 == (void *)0x0) {
          DAT_00704ad8 = *(void **)((int)this_ + 0x158);
        }
        else {
          *(undefined4 *)((int)pvVar1 + 0x158) = *(undefined4 *)((int)this_ + 0x158);
        }
      }
      goto LAB_004a50f5;
    }
    pvVar1 = pvVar2;
    pvVar2 = *(void **)((int)pvVar2 + 0x158);
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a50b0, ap_004a50b0));
