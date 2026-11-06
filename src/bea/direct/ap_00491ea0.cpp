// auto-ported from 00491ea0_FUN_00491ea0.c (FUN_00491ea0, 378 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_00491df0_t)(uint32_t);
static const bea_guard<FUN_00491df0_t> FUN_00491df0 = {(FUN_00491df0_t)0x00491df0};

static int BEA_THISCALL ap_00491ea0(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)((int)this_ + 0x24) = 5;
  *(undefined4 *)((int)this_ + 0x14) = param_1;
  *(undefined4 *)((int)this_ + 0x18) = param_2;
  *(undefined4 *)((int)this_ + 0x1c) = param_3;
  *(undefined4 *)((int)this_ + 0x20) = param_4;
  *(undefined4 *)((int)this_ + 0x28) = param_5;
  FUN_00491df0(bea_arg(this_));
  *(undefined4 *)((int)this_ + 100) = 1;
  iVar1 = *(int *)((int)this_ + 0x30);
  if ((((-1 < iVar1) && (iVar1 < 5)) && (-1 < *(short *)((int)this_ + 0x2c))) &&
     (((iVar1 = 0x40 >> (4U - (char)iVar1 & 0x1f), *(short *)((int)this_ + 0x2c) < iVar1 &&
       (-1 < *(short *)((int)this_ + 0x2e))) && (*(short *)((int)this_ + 0x2e) < iVar1)))) {
    iVar1 = *(int *)(*(int *)(*(int *)((int)this_ + 0x90) + *(int *)((int)this_ + 0x30) * 4) + 4 +
                    ((0x40 >> (4U - (char)*(int *)((int)this_ + 0x30) & 0x1f)) *
                     (int)*(short *)((int)this_ + 0x2e) + (int)*(short *)((int)this_ + 0x2c)) * 8);
    *(int *)this_ = iVar1;
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  if (*(undefined4 **)this_ != (undefined4 *)0x0) {
    *(undefined4 *)this_ = **(undefined4 **)this_;
  }
  iVar1 = *(int *)this_;
  do {
    if (iVar1 != 0) {
      return iVar1;
    }
    *(short *)((int)this_ + 0x2c) = *(short *)((int)this_ + 0x2c) + 1;
    if (*(int *)((int)this_ + 0xc) < (int)*(short *)((int)this_ + 0x2c)) {
      *(short *)((int)this_ + 0x2e) = *(short *)((int)this_ + 0x2e) + 1;
      if (*(int *)((int)this_ + 0x10) < (int)*(short *)((int)this_ + 0x2e)) {
        iVar2 = FUN_00491df0(bea_arg(this_));
        if (iVar2 == 0) {
          *(undefined4 *)((int)this_ + 100) = 0;
          return 0;
        }
      }
      else {
        *(undefined2 *)((int)this_ + 0x2c) = *(undefined2 *)((int)this_ + 4);
      }
    }
    iVar2 = *(int *)((int)this_ + 0x30);
    if (((-1 < iVar2) && (iVar2 < 5)) &&
       ((-1 < *(short *)((int)this_ + 0x2c) &&
        (((iVar2 = 0x40 >> (4U - (char)iVar2 & 0x1f), *(short *)((int)this_ + 0x2c) < iVar2 &&
          (-1 < *(short *)((int)this_ + 0x2e))) && (*(short *)((int)this_ + 0x2e) < iVar2)))))) {
      iVar1 = *(int *)(*(int *)(*(int *)((int)this_ + 0x90) + *(int *)((int)this_ + 0x30) * 4) + 4 +
                      ((0x40 >> (4U - (char)*(int *)((int)this_ + 0x30) & 0x1f)) *
                       (int)*(short *)((int)this_ + 0x2e) + (int)*(short *)((int)this_ + 0x2c)) * 8);
      *(int *)this_ = iVar1;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00491ea0, ap_00491ea0));
