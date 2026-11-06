// auto-ported from 0052a830_FUN_0052a830.c (FUN_0052a830, 702 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_0052a830(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 *param_4)
{
  int iVar1;
  
  if ((*(uint *)((int)this_ + 0x330b4) < 0x19) && (*(int *)((int)this_ + 0x330b8) == 0)) {
    iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32e9c), 0x28, *(int **)((int)this_ + 0x32e9c),param_1,param_2,param_3,2,1,0x4d);
    if (-1 < iVar1) {
      iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32e9c), 0x30, *(int **)((int)this_ + 0x32e9c),param_1,param_2,param_3,param_3,0x4d);
      if (-1 < iVar1) {
        *param_4 = 0x4d;
        return 1;
      }
    }
    iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32e9c), 0x28, *(int **)((int)this_ + 0x32e9c),param_1,param_2,param_3,2,1,0x4b);
    if (-1 < iVar1) {
      iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32e9c), 0x30, *(int **)((int)this_ + 0x32e9c),param_1,param_2,param_3,param_3,0x4b);
      if (-1 < iVar1) {
        *param_4 = 0x4b;
        return 1;
      }
    }
    iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32e9c), 0x28, *(int **)((int)this_ + 0x32e9c),param_1,param_2,param_3,2,1,0x47);
    if (-1 < iVar1) {
      iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32e9c), 0x30, *(int **)((int)this_ + 0x32e9c),param_1,param_2,param_3,param_3,0x47);
      if (-1 < iVar1) {
        *param_4 = 0x47;
        return 1;
      }
    }
  }
  if ((*(uint *)((int)this_ + 0x330b4) < 0x11) && (*(int *)((int)this_ + 0x330b8) == 0)) {
    iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32e9c), 0x28, *(int **)((int)this_ + 0x32e9c),param_1,param_2,param_3,2,1,0x50);
    if (-1 < iVar1) {
      iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32e9c), 0x30, *(int **)((int)this_ + 0x32e9c),param_1,param_2,param_3,param_3,0x50);
      if (-1 < iVar1) {
        *param_4 = 0x50;
        return 1;
      }
    }
  }
  if ((*(uint *)((int)this_ + 0x330b4) < 0x10) && (*(uint *)((int)this_ + 0x330b8) < 2)) {
    iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32e9c), 0x28, *(int **)((int)this_ + 0x32e9c),param_1,param_2,param_3,2,1,0x49);
    if (-1 < iVar1) {
      iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32e9c), 0x30, *(int **)((int)this_ + 0x32e9c),param_1,param_2,param_3,param_3,0x49);
      if (-1 < iVar1) {
        *param_4 = 0x49;
        return 1;
      }
    }
  }
  if (*(uint *)((int)this_ + 0x330b4) < 0x19) {
    if (*(uint *)((int)this_ + 0x330b8) < 9) {
      iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32e9c), 0x28, *(int **)((int)this_ + 0x32e9c),param_1,param_2,param_3,2,1,0x4b);
      if (-1 < iVar1) {
        iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32e9c), 0x30, *(int **)((int)this_ + 0x32e9c),param_1,param_2,param_3,param_3,0x4b);
        if (-1 < iVar1) {
          *param_4 = 0x4b;
          return 1;
        }
      }
    }
    if ((*(uint *)((int)this_ + 0x330b4) < 0x19) && (*(uint *)((int)this_ + 0x330b8) < 5)) {
      iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32e9c), 0x28, *(int **)((int)this_ + 0x32e9c),param_1,param_2,param_3,2,1,0x4f);
      if (-1 < iVar1) {
        iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32e9c), 0x30, *(int **)((int)this_ + 0x32e9c),param_1,param_2,param_3,param_3,0x4f);
        if (-1 < iVar1) {
          *param_4 = 0x4f;
          return 1;
        }
      }
    }
  }
  if ((*(uint *)((int)this_ + 0x330b4) < 0x21) && (*(int *)((int)this_ + 0x330b8) == 0)) {
    iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32e9c), 0x28, *(int **)((int)this_ + 0x32e9c),param_1,param_2,param_3,2,1,0x47);
    if (-1 < iVar1) {
      iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x32e9c), 0x30, *(int **)((int)this_ + 0x32e9c),param_1,param_2,param_3,param_3,0x47);
      if (-1 < iVar1) {
        *param_4 = 0x47;
        return 1;
      }
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0052a830, ap_0052a830));
