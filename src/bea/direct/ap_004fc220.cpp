// auto-ported from 004fc220_FUN_004fc220.c (FUN_004fc220, 384 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_00854d80 GLOBAL_AT(int, 0x00854d80)
#define DAT_00854d84 GLOBAL_AT(int, 0x00854d84)
#define DAT_00854d88 GLOBAL_AT(int, 0x00854d88)
#define DAT_00854d8c GLOBAL_AT(int, 0x00854d8c)
typedef uint32_t (BEA_THISCALL* FUN_00403650_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00403650_t> FUN_00403650 = {(FUN_00403650_t)0x00403650};
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};
typedef undefined4 (BEA_THISCALL* FUN_004fc220_t)(uint32_t);
static const bea_guard<FUN_004fc220_t> FUN_004fc220 = {(FUN_004fc220_t)0x004fc220};

static undefined4 BEA_THISCALL ap_004fc220(void * this_)
{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x40);
  undefined4 &uStack_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x3c);
  undefined4 &uStack_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x38);
  undefined4 &uStack_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x34);
  undefined4 (&local_30)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x40 - 0x30);
  if (*(int *)(*(int *)((int)this_ + 0x164) + 0x1c) != 0) {
    piVar1 = *(int **)((int)this_ + 0x1c4);
    if (piVar1 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar1;
    }
    while (BEA_LOOP_GUARD((iVar5 != 0))) {
      bea_vcall<uint32_t>(this_, 0x160, 0x15,1,&local_40,local_30);
      *(undefined4 *)(iVar5 + 4) = 0;
      FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0x164) + 0x1c)), bea_arg(iVar5), bea_arg(DAT_00854d80), bea_arg(DAT_00854d84), bea_arg(DAT_00854d88), bea_arg(DAT_00854d8c), bea_arg(0), bea_arg(0));
      puVar4 = *(undefined4 **)(iVar5 + 4);
      if (puVar4 != (undefined4 *)0x0) {
        if (puVar4[0x12] == 0x461c4000) {
          puVar4[0x20] = local_40;
          puVar4[0x21] = uStack_3c;
          puVar4[0x22] = uStack_38;
          puVar4[0x23] = uStack_34;
          puVar4[0x10] = local_40;
          puVar4[0x11] = uStack_3c;
          puVar4[0x12] = uStack_38;
          puVar4[0x13] = uStack_34;
        }
        else {
          puVar4[0x10] = *puVar4;
          puVar4[0x11] = puVar4[1];
          puVar4[0x12] = puVar4[2];
          puVar4[0x13] = puVar4[3];
        }
        FUN_00403650(bea_arg(puVar4), bea_arg(&local_40));
      }
      iVar5 = *(int *)(iVar5 + 4);
      if (iVar5 != 0) {
        puVar4 = local_30;
        puVar2 = (undefined4 *)(iVar5 + 0x10);
        for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
          *puVar2 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar2 = puVar2 + 1;
        }
        *(undefined4 *)(iVar5 + 0xa0) = 1;
      }
      piVar1 = (int *)piVar1[1];
      if (piVar1 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar1;
      }
    }
  }
  puVar4 = *(undefined4 **)((int)this_ + 0x19c);
  if (puVar4 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)*puVar4;
  }
  while (BEA_LOOP_GUARD((puVar2 != (undefined4 *)0x0))) {
    if ((void *)*puVar2 != (void *)0x0) {
      FUN_004fc220(bea_arg((void *)*puVar2));
    }
    puVar4 = (undefined4 *)puVar4[1];
    if (puVar4 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)*puVar4;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fc220, ap_004fc220));
