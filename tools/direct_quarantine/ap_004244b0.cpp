// auto-ported from 004244b0_FUN_004244b0.c (FUN_004244b0, 605 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x480: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_006630d8 GLOBAL_AT(undefined4, 0x006630d8)
#define DAT_006235a0 GLOBAL_AT(int, 0x006235a0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define PTR_DAT_0062462c GLOBAL_AT(void*, 0x0062462c)
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef float10 (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};
typedef undefined4 * (BEA_CDECL* FUN_00516580_t)(undefined4, ...);
static const bea_guard<FUN_00516580_t> FUN_00516580 = {(FUN_00516580_t)0x00516580};
typedef uint32_t (BEA_STDCALL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055db0a_t> FUN_0055db0a = {(FUN_0055db0a_t)0x0055db0a};
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055dc20_t> FUN_0055dc20 = {(FUN_0055dc20_t)0x0055dc20};

static void * BEA_THISCALL ap_004244b0(void * this_, int param_1)
{
  char cVar1;
  int *piVar2;
  void *this_00;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  float10 extraout_ST0;
  float10 fVar12;
  undefined **ppuVar13;

  alignas(16) uint8_t bea_frame_[0x480] = {};   // the original stack frame (emulate_frame)
  undefined4 &uStack_47c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x480 - 0x47c);
  undefined4 &local_478 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x480 - 0x478);
  undefined4 &local_474 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x480 - 0x474);
  undefined4 &local_470 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x480 - 0x470);
  undefined4 &local_46c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x480 - 0x46c);
  void * &local_468 = *reinterpret_cast<void * *>(bea_frame_ + 0x480 - 0x468);
  undefined4 (&auStack_464)[13] = *reinterpret_cast<undefined4 (*)[13]>(bea_frame_ + 0x480 - 0x464);
  undefined4 &local_430 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x480 - 0x430);
  char (&local_42c)[1024] = *reinterpret_cast<char (*)[1024]>(bea_frame_ + 0x480 - 0x42c);
  uint &local_2c = *reinterpret_cast<uint *>(bea_frame_ + 0x480 - 0x2c);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x480 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x480 - 0x8);
  uint &local_4 = *reinterpret_cast<uint *>(bea_frame_ + 0x480 - 0x4);
  *(undefined4 *)((int)this_ + 4) = 0;
  puVar9 = (undefined4 *)((int)this_ + 8);
  *puVar9 = ((void*)0x005d9540);
  *(undefined4 *)((int)this_ + 0xc) = 0;
  *(undefined4 *)((int)this_ + 0x10) = 0;
  *(undefined4 *)((int)this_ + 0x14) = 0;
  local_4 = 0;
  *(undefined ***)this_ = ((void*)0x005d9524);
  *(undefined4 *)((int)this_ + 0x18) = local_46c;
  *puVar9 = ((void*)0x005d94ac);
  local_468 = this_;
  FUN_0055dc20(bea_arg(local_42c), bea_arg(0x41c), bea_arg(1), bea_arg(((void*)0x00403f40)), bea_arg(((void*)0x00403f80)));
  local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),1);
  local_2c = -(uint)(this_ != (void *)0x0) & (uint)puVar9;
  pcVar8 = *(char **)(*(int *)(param_1 + 0x4b0) + 0x6c);
  if (pcVar8 != (char *)0x0) {
    uVar4 = 0xffffffff;
    do {
      pcVar10 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar4 = ~uVar4;
    pcVar8 = pcVar10 + -uVar4;
    pcVar10 = local_42c;
    for (uVar5 = uVar4 >> 2; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  piVar2 = (int *)FUN_00516580(1);
  *(int **)((int)this_ + 0x8c) = piVar2;
  if (piVar2 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar2, 0x4, local_42c);
  }
  *(undefined4 *)((int)this_ + 300) = 1;
  *(undefined4 *)((int)this_ + 0x90) = 0;
  *(undefined4 *)((int)this_ + 0x94) = 0;
  *(undefined4 *)((int)this_ + 0x98) = 0;
  *(undefined4 *)((int)this_ + 0x9c) = 0;
  *(undefined4 *)((int)this_ + 0xa0) = 0;
  *(undefined4 *)((int)this_ + 0xac) = 0;
  iVar7 = *(int *)(param_1 + 0x260);
  puVar9 = &DAT_006630d8;
  puVar11 = (undefined4 *)((int)this_ + 0x2c);
  for (iVar6 = 0xc; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = &DAT_006630d8;
  puVar11 = (undefined4 *)((int)this_ + 0xb0);
  for (iVar6 = 0xc; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  if (iVar7 == 3) {
    ppuVar13 = &PTR_DAT_0062462c;
    this_00 = (void *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x8c), 0x24, &PTR_DAT_0062462c);
  }
  else {
    ppuVar13 = (undefined **)&DAT_006235a0;
    this_00 = (void *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x8c), 0x24);
  }
  uVar3 = FUN_004aa630(bea_arg(this_00), bea_arg(ppuVar13));
  *(undefined4 *)((int)this_ + 0x11c) = uVar3;
  FUN_004062d0(bea_arg(auStack_464), bea_arg(0), bea_arg(0), bea_arg(0));
  puVar9 = auStack_464;
  puVar11 = (undefined4 *)((int)this_ + 0xe0);
  for (iVar7 = 0xc; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  *(int *)((int)this_ + 0x110) = param_1;
  uStack_47c = 0xbf800000;
  extraout_ST0 = bea_fcast<float10>(FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0x7d1), bea_arg(this_), bea_arg(&uStack_47c), bea_arg(2), bea_arg(0), bea_arg(0)));
  if (*(int **)((int)this_ + 0x8c) == (int *)0x0) {
    fVar12 = bea_fcast<float10>(0.0f);
  }
  else {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x8c), 0x38, *(undefined4 *)((int)this_ + 0x11c),(int)this_ + 0x118);
    fVar12 = extraout_ST0;
  }
  *(float *)((int)this_ + 0x120) = bea_fcast<float>(fVar12);
  *(undefined4 *)((int)this_ + 0x124) = 0;
  *(undefined4 *)((int)this_ + 0x128) = 0;
  *(undefined4 *)((int)this_ + 0x114) = 0;
  *(undefined4 *)((int)this_ + 0xa4) = 0;
  *(undefined4 *)((int)this_ + 0xa8) = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_0055db0a(bea_arg(local_42c), bea_arg(0x41c), bea_arg(1), bea_arg(((void*)0x00403f80)));
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004244b0, ap_004244b0));
