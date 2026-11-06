// auto-ported from 004f3d30_vslot52.c (CThing::vslot52, 175 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x90: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CThing;
#define DAT_0083d9f0 GLOBAL_AT(undefined4, 0x0083d9f0)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_0089ce88 GLOBAL_AT(int, 0x0089ce88)
typedef uint32_t (BEA_STDCALL* FUN_0053d760_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0053d760_t> FUN_0053d760 = {(FUN_0053d760_t)0x0053d760};
typedef uint32_t (BEA_THISCALL* FUN_00550ca0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550ca0_t> FUN_00550ca0 = {(FUN_00550ca0_t)0x00550ca0};

static uint32_t BEA_THISCALL ap_004f3d30(CThing * this_)
{
  alignas(16) uint8_t bea_frame_[0x90] = {};   // the original stack frame (emulate_frame)

  undefined4 &local_90 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x90);
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 &local_8c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x8c);
  undefined4 &local_88 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x88);
  undefined4 &local_84 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x84);
  undefined4 &local_80 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x80);
  undefined4 &local_7c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x7c);
  undefined4 &local_78 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x78);
  undefined4 &local_74 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x74);
  undefined4 &local_70 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x70);
  undefined4 &local_6c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x6c);
  undefined4 &local_68 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x68);
  undefined4 &local_64 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x64);
  undefined4 &local_60 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x60);
  undefined4 uVar6;
  undefined4 &uStack_50 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x50);
  undefined4 &uStack_4c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x4c);
  undefined4 &uStack_48 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x48);
  float &fStack_40 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x40);
  float &fStack_3c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x3c);
  float &fStack_38 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x38);
  undefined4 (&local_30)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x90 - 0x30);
  puVar2 = &DAT_0083d9f0;
  puVar3 = local_30;
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_0083d9f0;
  puVar3 = (undefined4 *)&local_8c;
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  uVar5 = *(undefined4 *)(this_ + 0x28);
  FUN_00550ca0(bea_arg(&DAT_009c65c0), bea_arg(*(undefined4 *)(this_ + 0x1c)), bea_arg(*(undefined4 *)(this_ + 0x20)), bea_arg(*(undefined4 *)(this_ + 0x24)), bea_arg(uVar5), bea_arg(local_8c), bea_arg(local_88), bea_arg(local_84), bea_arg(local_80), bea_arg(local_7c), bea_arg(local_78), bea_arg(local_74), bea_arg(local_70), bea_arg(local_6c), bea_arg(local_68), bea_arg(local_64), bea_arg(local_60));
  fVar4 = (float10)bea_vcall<float10>(this_, 0x40);
  fStack_40 = (float)fVar4;
  fStack_3c = (float)fVar4;
  uStack_50 = 0;
  fStack_38 = (float)fVar4;
  puVar2 = local_30;
  puVar3 = (undefined4 *)&local_90;
  uVar6 = DAT_0089ce88;
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  uStack_4c = 0;
  uStack_48 = 0;
  return FUN_0053d760(bea_arg(0xffffffff), bea_arg(&fStack_40), bea_arg(&uStack_50), bea_arg(uVar5), bea_arg(local_8c), bea_arg(local_88), bea_arg(local_84), bea_arg(local_80), bea_arg(local_7c), bea_arg(local_78), bea_arg(local_74), bea_arg(local_70), bea_arg(local_6c), bea_arg(local_68), bea_arg(local_64), bea_arg(uVar6));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f3d30, ap_004f3d30));
