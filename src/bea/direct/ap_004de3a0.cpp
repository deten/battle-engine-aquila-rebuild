// auto-ported from 004de3a0_FUN_004de3a0.c (FUN_004de3a0, 763 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x440: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_006321e8 GLOBAL_AT(char, 0x006321e8)
#define DAT_00662b2c GLOBAL_AT(char, 0x00662b2c)
#define DAT_00672fcc GLOBAL_AT(int, 0x00672fcc)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_Effect_006321e0 ((char*)0x006321e0)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};
typedef undefined4 * (BEA_CDECL* FUN_00516580_t)(undefined4, ...);
static const bea_guard<FUN_00516580_t> FUN_00516580 = {(FUN_00516580_t)0x00516580};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void * BEA_THISCALL ap_004de3a0(void * this_, char *param_1)
{
  char cVar1;
  int iVar2;
  int *piVar3;
  void *this_00;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  float10 fVar11;
  char *pcVar12;

  alignas(16) uint8_t bea_frame_[0x440] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_434 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x440 - 0x434);
  undefined4 &uStack_430 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x440 - 0x430);
  void * &local_42c = *reinterpret_cast<void * *>(bea_frame_ + 0x440 - 0x42c);
  char (&local_428)[256] = *reinterpret_cast<char (*)[256]>(bea_frame_ + 0x440 - 0x428);
  char (&local_328)[256] = *reinterpret_cast<char (*)[256]>(bea_frame_ + 0x440 - 0x328);
  undefined1 &local_228 = *reinterpret_cast<undefined1 *>(bea_frame_ + 0x440 - 0x228);
  undefined1 &local_128 = *reinterpret_cast<undefined1 *>(bea_frame_ + 0x440 - 0x128);
  void * &local_28 = *reinterpret_cast<void * *>(bea_frame_ + 0x440 - 0x28);
  undefined4 &local_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x440 - 0x24);
  undefined4 &local_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x440 - 0x20);
  undefined4 &local_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x440 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x440 - 0x18);
  int &local_14 = *reinterpret_cast<int *>(bea_frame_ + 0x440 - 0x14);
  int &local_10 = *reinterpret_cast<int *>(bea_frame_ + 0x440 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x440 - 0x8);
  uint &local_4 = *reinterpret_cast<uint *>(bea_frame_ + 0x440 - 0x4);
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined ***)((int)this_ + 4) = ((void*)0x005d92d4);
  local_4 = 0;
  *(undefined ***)this_ = ((void*)0x005dec20);
  *(undefined ***)((int)this_ + 4) = ((void*)0x005dec10);
  local_428[0] = '\0';
  local_328[0] = '\0';
  local_228 = 0;
  local_128 = 0;
  local_14 = 0;
  local_10 = 0;
  uVar5 = 0xffffffff;
  do {
    pcVar12 = param_1;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar12 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar12;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  local_28 = this_;
  pcVar12 = pcVar12 + -uVar5;
  pcVar10 = local_428;
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar10 = pcVar10 + 4;
  }
  local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),1);
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar12 = &DAT_006321e8;
  do {
    pcVar10 = pcVar12;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar10;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  iVar7 = -1;
  pcVar12 = local_428;
  do {
    pcVar9 = pcVar12;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar9 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar9;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  pcVar12 = pcVar10 + -uVar5;
  pcVar10 = pcVar9 + -1;
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar12 = &DAT_00662b2c;
  do {
    pcVar10 = pcVar12;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar10;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  pcVar12 = pcVar10 + -uVar5;
  pcVar10 = local_328;
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar10 = pcVar10 + 1;
  }
  local_42c = this_;
  piVar3 = (int *)FUN_00516580(1);
  *(int **)((int)this_ + 0x4c) = piVar3;
  if (piVar3 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar3, 0x4, local_428);
  }
  *(undefined4 *)((int)this_ + 0xc) = 0;
  *(undefined4 *)((int)this_ + 0x10) = 0x40000000;
  pcVar12 = s_Effect_006321e0;
  *(undefined4 *)((int)this_ + 0x14) = 0;
  *(undefined4 *)((int)this_ + 0x18) = local_434;
  *(undefined4 *)((int)this_ + 0x1c) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x20) = 0;
  *(undefined4 *)((int)this_ + 0x24) = 0;
  *(undefined4 *)((int)this_ + 0x28) = local_434;
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  *(undefined4 *)((int)this_ + 0x30) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x34) = 0;
  *(undefined4 *)((int)this_ + 0x38) = local_434;
  *(undefined4 *)((int)this_ + 0x3c) = 0;
  *(undefined4 *)((int)this_ + 0x40) = 0;
  *(undefined4 *)((int)this_ + 0x44) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x48) = local_434;
  this_00 = (void *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x4c), 0x24);
  uVar4 = FUN_004aa630(bea_arg(this_00), bea_arg(pcVar12));
  *(undefined4 *)((int)this_ + 0x58) = uVar4;
  if (*(int **)((int)this_ + 0x4c) == (int *)0x0) {
    *(undefined4 *)((int)this_ + 0x5c) = 0;
  }
  else {
    fVar11 = (float10)bea_vcall<float10>(*(int **)((int)this_ + 0x4c), 0x38, uVar4,(int)this_ + 0x54);
    *(float *)((int)this_ + 0x5c) = (float)fVar11;
  }
  *(undefined4 *)((int)this_ + 0x60) = 0;
  *(undefined1 *)((int)this_ + 100) = 0;
  *(undefined1 *)((int)this_ + 0x65) = 0;
  if ((DAT_00672fcc != 0) && (*(int *)((int)this_ + 0x58) != 0)) {
    uStack_430 = 0xbf800000;
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(4000), bea_arg(-(uint)(this_ != (void *)0x0) & (int)this_ + 4U), bea_arg(&uStack_430), bea_arg(2), bea_arg(0), bea_arg(0))
    ;
  }
  iVar8 = 0;
  local_4 = local_4 & 0xffffff00;
  iVar7 = local_14;
  if (0 < local_10) {
    do {
      iVar2 = *(int *)(iVar7 + iVar8 * 4);
      if (iVar2 != 0) {
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar2));
        *(undefined4 *)(local_14 + iVar8 * 4) = 0;
        iVar7 = local_14;
      }
      iVar8 = iVar8 + 1;
    } while (BEA_LOOP_GUARD((iVar8 < local_10)));
  }
  if (iVar7 != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar7));
  }
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004de3a0, ap_004de3a0));
