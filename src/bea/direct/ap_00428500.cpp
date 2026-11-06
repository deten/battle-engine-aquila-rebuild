// auto-ported from 00428500_FUN_00428500.c (FUN_00428500, 520 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xd0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char Mat34;
typedef char Vec3;
typedef char fStack_90;
typedef char fStack_94;
typedef char fStack_b0;
typedef char fStack_b4;
typedef char fStack_b8;
typedef char fStack_c0;
typedef char fStack_c4;
#define DAT_008a9aac GLOBAL_AT(int, 0x008a9aac)
#define s_Component_006248d4 ((char*)0x006248d4)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Mat34* (BEA_THISCALL* FUN_00401f10_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401f10_t> FUN_00401f10 = {(FUN_00401f10_t)0x00401f10};
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};

static void BEA_THISCALL ap_00428500(void * this_)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;

  alignas(16) uint8_t bea_frame_[0xd0] = {};   // the original stack frame (emulate_frame)
  float &local_c8 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xc8);
  float &fStack_c4 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xc4);
  float &fStack_c0 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xc0);
  float &fStack_b8 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xb8);
  float &fStack_b4 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xb4);
  float &fStack_b0 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xb0);
  float &local_a8 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xa8);
  float &local_a4 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xa4);
  float &local_a0 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xa0);
  float &local_98 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x98);
  float &fStack_94 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x94);
  float &fStack_90 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x90);
  float &local_88 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x88);
  float &fStack_84 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x84);
  float &fStack_80 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x80);
  float &local_78 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x78);
  float &fStack_74 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x74);
  float &fStack_70 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x70);
  undefined4 &local_68 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x68);
  undefined4 &local_64 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x64);
  float &local_60 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x60);
  float &fStack_5c = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x5c);
  float &fStack_58 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x58);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x50);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x4c);
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x48);
  undefined1 (&auStack_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xd0 - 0x40);
  undefined4 (&auStack_30)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0xd0 - 0x30);
  if (*(int *)((int)this_ + 0x278) != DAT_008a9aac) {
    if (((*(byte *)((int)this_ + 0x2c) & 4) == 0) ||
       (*(int *)(*(int *)((int)this_ + 0x164) + 0x198) == 0)) {
      local_64 = *(undefined4 *)((int)this_ + 0x254);
      local_68 = *(undefined4 *)((int)this_ + 0x250);
      FUN_004062d0(bea_arg(&local_c8), bea_arg(local_68), bea_arg(local_64), bea_arg(0));
      if (*(int *)((int)this_ + 0x26c) != 0) {
        bea_vcall<uint32_t>(*(int **)(*(int *)((int)this_ + 0x26c) + 0x30), 0x1c, s_Component_006248d4,*(undefined4 *)((int)this_ + 0x270),(int)this_ + 0x1c,
                   &local_98,0,0);
      }
      pfVar6 = &local_50;
      pfVar5 = &local_60;
      // class 19: the asm's order (all 9 sums)
      local_50 = local_a0 * local_78 + local_a4 * local_88 + local_a8 * local_98;
      fStack_4c = local_a0 * fStack_74 + local_a4 * fStack_84 + local_a8 * fStack_94;
      fStack_48 = local_a0 * fStack_70 + local_a4 * fStack_80 + local_a8 * fStack_90;
      local_60 = fStack_b0 * local_78 + fStack_b4 * local_88 + fStack_b8 * local_98;
      fStack_5c = fStack_b0 * fStack_74 + fStack_b4 * fStack_84 + fStack_b8 * fStack_94;
      fStack_58 = fStack_b0 * fStack_70 + fStack_b4 * fStack_80 + fStack_b8 * fStack_90;
      uVar1 = FUN_00401ec0(bea_arg(auStack_40), bea_arg(fStack_c0 * local_78 + fStack_c4 * local_88 + local_c8 * local_98), bea_arg(fStack_c0 * fStack_74 + fStack_c4 * fStack_84 + fStack_94 * local_c8), bea_arg(fStack_c0 * fStack_70 + fStack_c4 * fStack_80 + fStack_90 * local_c8));
      FUN_00401f10(bea_arg(auStack_30), bea_arg(uVar1), bea_arg(pfVar5), bea_arg(pfVar6));
      puVar3 = auStack_30;
      puVar4 = (undefined4 *)((int)this_ + 0x3c);
      for (iVar2 = 0xc; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    *(int *)((int)this_ + 0x278) = DAT_008a9aac;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00428500, ap_00428500));
