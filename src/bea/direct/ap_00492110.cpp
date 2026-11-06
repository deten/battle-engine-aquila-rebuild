// auto-ported from 00492110_FUN_00492110.c (FUN_00492110, 473 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef undefined4 (BEA_CDECL* FUN_00478160_t)(void *, void *, void *, void *, void *, void *, void *, ...);
static const bea_guard<FUN_00478160_t> FUN_00478160 = {(FUN_00478160_t)0x00478160};
typedef undefined4 (BEA_THISCALL* FUN_004922f0_t)(uint32_t);
static const bea_guard<FUN_004922f0_t> FUN_004922f0 = {(FUN_004922f0_t)0x004922f0};
typedef undefined4 (BEA_THISCALL* FUN_004924b0_t)(uint32_t);
static const bea_guard<FUN_004924b0_t> FUN_004924b0 = {(FUN_004924b0_t)0x004924b0};

static int BEA_THISCALL ap_00492110(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
{
  int iVar1;
  int iVar2;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x4);
  local_18 = 0;
  local_10 = 0x44000000;
  local_14 = 0;
  local_c = 0x44000000;
  local_8 = 0xc61c4000;
  local_4 = 0x461c4000;
  FUN_00478160(&param_1,&param_2,&param_3,&param_5,&param_6,&param_7,&local_18);
  *(undefined4 *)((int)this_ + 0x24) = 5;
  *(undefined4 *)((int)this_ + 0x38) = param_1;
  *(undefined4 *)((int)this_ + 0x3c) = param_2;
  *(undefined4 *)((int)this_ + 0x40) = param_3;
  *(undefined4 *)((int)this_ + 0x44) = param_4;
  *(undefined4 *)((int)this_ + 0x48) = param_5;
  *(undefined4 *)((int)this_ + 0x4c) = param_6;
  *(undefined4 *)((int)this_ + 0x50) = param_7;
  *(undefined4 *)((int)this_ + 0x54) = param_8;
  FUN_004922f0(bea_arg(this_));
  *(undefined4 *)((int)this_ + 100) = 1;
  iVar1 = *(int *)((int)this_ + 0x60);
  if ((((-1 < iVar1) && (iVar1 < 5)) && (-1 < *(short *)((int)this_ + 0x5c))) &&
     (((iVar1 = 0x40 >> (4U - (char)iVar1 & 0x1f), *(short *)((int)this_ + 0x5c) < iVar1 &&
       (-1 < *(short *)((int)this_ + 0x5e))) && (*(short *)((int)this_ + 0x5e) < iVar1)))) {
    iVar1 = *(int *)(*(int *)(*(int *)((int)this_ + 0x90) + *(int *)((int)this_ + 0x60) * 4) + 4 +
                    ((0x40 >> (4U - (char)*(int *)((int)this_ + 0x60) & 0x1f)) *
                     (int)*(short *)((int)this_ + 0x5e) + (int)*(short *)((int)this_ + 0x5c)) * 8);
    *(int *)this_ = iVar1;
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  if (*(undefined4 **)this_ != (undefined4 *)0x0) {
    *(undefined4 *)this_ = **(undefined4 **)this_;
  }
  iVar1 = *(int *)this_;
  while(BEA_LOOP_GUARD(( true ))) {
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar2 = FUN_004924b0(bea_arg(this_));
    if ((iVar2 == 0) && (iVar2 = FUN_004922f0(bea_arg(this_)), iVar2 == 0)) break;
    iVar2 = *(int *)((int)this_ + 0x60);
    if (((((-1 < iVar2) && (iVar2 < 5)) && (-1 < *(short *)((int)this_ + 0x5c))) &&
        ((iVar2 = 0x40 >> (4U - (char)iVar2 & 0x1f), *(short *)((int)this_ + 0x5c) < iVar2 &&
         (-1 < *(short *)((int)this_ + 0x5e))))) && (*(short *)((int)this_ + 0x5e) < iVar2)) {
      iVar1 = *(int *)(*(int *)(*(int *)((int)this_ + 0x90) + *(int *)((int)this_ + 0x60) * 4) + 4 +
                      ((0x40 >> (4U - (char)*(int *)((int)this_ + 0x60) & 0x1f)) *
                       (int)*(short *)((int)this_ + 0x5e) + (int)*(short *)((int)this_ + 0x5c)) * 8);
      *(int *)this_ = iVar1;
    }
  }
  *(undefined4 *)((int)this_ + 100) = 0;
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00492110, ap_00492110));
