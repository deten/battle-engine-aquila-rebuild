// auto-ported from 0040ebf0_FUN_0040ebf0.c (FUN_0040ebf0, 703 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_006601e8 GLOBAL_AT(int, 0x006601e8)
#define DAT_006601ec GLOBAL_AT(int, 0x006601ec)
#define DAT_006601f0 GLOBAL_AT(int, 0x006601f0)
#define DAT_006601f4 GLOBAL_AT(int, 0x006601f4)
typedef uint32_t (BEA_THISCALL* FUN_00403650_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00403650_t> FUN_00403650 = {(FUN_00403650_t)0x00403650};
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};
typedef uint32_t (BEA_THISCALL* FUN_004cb0b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb0b0_t> FUN_004cb0b0 = {(FUN_004cb0b0_t)0x004cb0b0};
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};

static void BEA_THISCALL ap_0040ebf0(void * this_)
{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x40);
  undefined4 &uStack_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x3c);
  undefined4 &uStack_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x38);
  undefined4 &uStack_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x34);
  undefined4 (&local_30)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x40 - 0x30);
  iVar3 = FUN_004725d0(bea_arg(&DAT_008a9a98));
  if ((iVar3 == 0) && (DAT_008a9ac0 != 2)) {
    piVar6 = *(int **)((int)this_ + 0x620);
    if (piVar6 == (int *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = (void *)*piVar6;
    }
    if (pvVar4 != (void *)0x0) {
      do {
        FUN_004cb0b0(bea_arg(pvVar4), bea_arg(0));
        piVar6 = (int *)piVar6[1];
        if (piVar6 == (int *)0x0) {
          pvVar4 = (void *)0x0;
        }
        else {
          pvVar4 = (void *)*piVar6;
        }
      } while (BEA_LOOP_GUARD((pvVar4 != (void *)0x0)));
      return;
    }
  }
  else {
    puVar1 = *(undefined4 **)((int)this_ + 0x620);
    iVar3 = 1;
    if (puVar1 == (undefined4 *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = (void *)*puVar1;
    }
    while (BEA_LOOP_GUARD((pvVar4 != (void *)0x0))) {
      if (*(int *)((int)this_ + 0x634) != *(int *)((int)this_ + 0x630)) {
        FUN_004cb0b0(bea_arg(pvVar4), bea_arg(0));
      }
      if (*(int *)((int)this_ + 0x630) == 0) {
        if (*(int *)((int)pvVar4 + 4) == 0) {
          FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(*(undefined4 *)((int)this_ + 0x61c)), bea_arg(pvVar4), bea_arg(DAT_006601e8), bea_arg(DAT_006601ec), bea_arg(DAT_006601f0), bea_arg(DAT_006601f4), bea_arg(0), bea_arg(0));
        }
        bea_vcall<uint32_t>(this_, 0x160, 0x17,iVar3,&local_40,local_30);
        puVar7 = *(undefined4 **)((int)pvVar4 + 4);
        if (puVar7 != (undefined4 *)0x0) {
          if (puVar7[0x12] == 0x461c4000) {
            puVar7[0x20] = local_40;
            puVar7[0x21] = uStack_3c;
            puVar7[0x22] = uStack_38;
            puVar7[0x23] = uStack_34;
            puVar7[0x10] = local_40;
            puVar7[0x11] = uStack_3c;
            puVar7[0x12] = uStack_38;
            puVar7[0x13] = uStack_34;
          }
          else {
            puVar7[0x10] = *puVar7;
            puVar7[0x11] = puVar7[1];
            puVar7[0x12] = puVar7[2];
            puVar7[0x13] = puVar7[3];
          }
          FUN_00403650(bea_arg(puVar7), bea_arg(&local_40));
        }
        iVar2 = *(int *)((int)pvVar4 + 4);
joined_r0x0040ee63:
        if (iVar2 != 0) {
          puVar7 = local_30;
          puVar8 = (undefined4 *)(iVar2 + 0x10);
          for (iVar5 = 0xc; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          *(undefined4 *)(iVar2 + 0xa0) = 1;
        }
      }
      else if (*(int *)((int)this_ + 0x630) == 1) {
        if (*(int *)((int)pvVar4 + 4) == 0) {
          FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(*(undefined4 *)((int)this_ + 0x618)), bea_arg(pvVar4), bea_arg(DAT_006601e8), bea_arg(DAT_006601ec), bea_arg(DAT_006601f0), bea_arg(DAT_006601f4), bea_arg(0), bea_arg(0));
        }
        bea_vcall<uint32_t>(this_, 0x160, 0x17,iVar3,&local_40,local_30);
        puVar7 = *(undefined4 **)((int)pvVar4 + 4);
        if (puVar7 != (undefined4 *)0x0) {
          if (puVar7[0x12] == 0x461c4000) {
            puVar7[0x20] = local_40;
            puVar7[0x21] = uStack_3c;
            puVar7[0x22] = uStack_38;
            puVar7[0x23] = uStack_34;
            puVar7[0x10] = local_40;
            puVar7[0x11] = uStack_3c;
            puVar7[0x12] = uStack_38;
            puVar7[0x13] = uStack_34;
          }
          else {
            puVar7[0x10] = *puVar7;
            puVar7[0x11] = puVar7[1];
            puVar7[0x12] = puVar7[2];
            puVar7[0x13] = puVar7[3];
          }
          FUN_00403650(bea_arg(puVar7), bea_arg(&local_40));
        }
        iVar2 = *(int *)((int)pvVar4 + 4);
        goto joined_r0x0040ee63;
      }
      iVar3 = iVar3 + 1;
      puVar1 = (undefined4 *)puVar1[1];
      if (puVar1 == (undefined4 *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = (void *)*puVar1;
      }
    }
    *(undefined4 *)((int)this_ + 0x634) = *(undefined4 *)((int)this_ + 0x630);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040ebf0, ap_0040ebf0));
