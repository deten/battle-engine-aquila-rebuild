// auto-ported from 0040e940_FUN_0040e940.c (FUN_0040e940, 520 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_006601e8 GLOBAL_AT(int, 0x006601e8)
#define DAT_006601ec GLOBAL_AT(int, 0x006601ec)
#define DAT_006601f0 GLOBAL_AT(int, 0x006601f0)
#define DAT_006601f4 GLOBAL_AT(int, 0x006601f4)
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};
typedef uint32_t (BEA_THISCALL* FUN_004e1940_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1940_t> FUN_004e1940 = {(FUN_004e1940_t)0x004e1940};

static void BEA_THISCALL ap_0040e940(void * this_)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;

  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  int &local_44 = *reinterpret_cast<int *>(bea_frame_ + 0x50 - 0x44);
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x40);
  undefined4 &uStack_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x3c);
  undefined4 &uStack_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x38);
  undefined4 &uStack_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x34);
  undefined4 (&local_30)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x50 - 0x30);
  iVar2 = FUN_004725d0(bea_arg(&DAT_008a9a98));
  if (iVar2 != 0) {
    piVar1 = *(int **)((int)this_ + 0x1d4);
    local_44 = 1;
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    while (BEA_LOOP_GUARD((iVar2 != 0))) {
      if (*(int *)(iVar2 + 4) == 0) {
        FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(*(undefined4 *)((int)this_ + 0x614)), bea_arg(iVar2), bea_arg(DAT_006601e8), bea_arg(DAT_006601ec), bea_arg(DAT_006601f0), bea_arg(DAT_006601f4), bea_arg(0), bea_arg(0));
      }
      bea_vcall<uint32_t>(this_, 0x160, 0x1a,local_44,&local_40,local_30);
      puVar4 = *(undefined4 **)(iVar2 + 4);
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
          *puVar4 = local_40;
          puVar4[1] = uStack_3c;
          puVar4[2] = uStack_38;
          puVar4[3] = uStack_34;
          if (puVar4[0x2b] != -0x40800000) {
            puVar4[0x2b] = DAT_00672fd0;
          }
        }
        else {
          puVar4[0x10] = *puVar4;
          puVar4[0x11] = puVar4[1];
          puVar4[0x12] = puVar4[2];
          puVar4[0x13] = puVar4[3];
          *puVar4 = local_40;
          puVar4[1] = uStack_3c;
          puVar4[2] = uStack_38;
          puVar4[3] = uStack_34;
          if (puVar4[0x2b] != -0x40800000) {
            puVar4[0x2b] = DAT_00672fd0;
          }
        }
      }
      iVar2 = *(int *)(iVar2 + 4);
      if (iVar2 != 0) {
        puVar4 = local_30;
        puVar5 = (undefined4 *)(iVar2 + 0x10);
        for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        *(undefined4 *)(iVar2 + 0xa0) = 1;
      }
      piVar1 = (int *)piVar1[1];
      local_44 = local_44 + 1;
      if (piVar1 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar1;
      }
    }
  }
  if (*(int *)((int)this_ + 0x1e4) == 0) {
    FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(*(undefined4 *)((int)this_ + 0x59c)), bea_arg(this_), bea_arg(0x3f800000), bea_arg(3), bea_arg(1), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(1), bea_arg(0x3f800000), bea_arg(1), bea_arg(0));
  }
  *(undefined4 *)((int)this_ + 0x1e4) = 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040e940, ap_0040e940));
