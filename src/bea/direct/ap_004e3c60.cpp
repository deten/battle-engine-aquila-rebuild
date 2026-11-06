// auto-ported from 004e3c60_FUN_004e3c60.c (FUN_004e3c60, 811 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x4e0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char Vec3;
typedef char fStack_48c;
typedef char fStack_49c;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_008553fc GLOBAL_AT(int, 0x008553fc)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef void* (BEA_THISCALL* FUN_00406d30_t)(uint32_t);
static const bea_guard<FUN_00406d30_t> FUN_00406d30 = {(FUN_00406d30_t)0x00406d30};
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef uint32_t (BEA_THISCALL* FUN_004e3f90_t)(uint32_t);
static const bea_guard<FUN_004e3f90_t> FUN_004e3f90 = {(FUN_004e3f90_t)0x004e3f90};
typedef undefined4 (BEA_THISCALL* FUN_004e4430_t)(uint32_t);
static const bea_guard<FUN_004e4430_t> FUN_004e4430 = {(FUN_004e4430_t)0x004e4430};
typedef undefined4 * (BEA_CDECL* FUN_0050f4b0_t)(uint32_t);
static const bea_guard<FUN_0050f4b0_t> FUN_0050f4b0 = {(FUN_0050f4b0_t)0x0050f4b0};

static undefined4 BEA_THISCALL ap_004e3c60(void * this_)
{
  int *this_00;
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  float *pfVar10;
  char *pcVar11;
  byte *pbVar12;
  float *pfVar13;
  char *pcVar14;
  bool bVar15;

  alignas(16) uint8_t bea_frame_[0x4e0] = {};   // the original stack frame (emulate_frame)
  float &fStack_4d4 = *reinterpret_cast<float *>(bea_frame_ + 0x4e0 - 0x4d4);
  float &fStack_4d0 = *reinterpret_cast<float *>(bea_frame_ + 0x4e0 - 0x4d0);
  float &fStack_4cc = *reinterpret_cast<float *>(bea_frame_ + 0x4e0 - 0x4cc);
  undefined ** &local_4c4 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x4e0 - 0x4c4);
  float &local_4c0 = *reinterpret_cast<float *>(bea_frame_ + 0x4e0 - 0x4c0);
  float &fStack_4bc = *reinterpret_cast<float *>(bea_frame_ + 0x4e0 - 0x4bc);
  float &fStack_4b8 = *reinterpret_cast<float *>(bea_frame_ + 0x4e0 - 0x4b8);
  undefined4 &uStack_4b4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x4e0 - 0x4b4);
  float (&local_4b0)[5] = *reinterpret_cast<float (*)[5]>(bea_frame_ + 0x4e0 - 0x4b0);
  float &fStack_49c = *reinterpret_cast<float *>(bea_frame_ + 0x4e0 - 0x49c);
  float &fStack_48c = *reinterpret_cast<float *>(bea_frame_ + 0x4e0 - 0x48c);
  undefined4 &uStack_424 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x4e0 - 0x424);
  char (&acStack_418)[784] = *reinterpret_cast<char (*)[784]>(bea_frame_ + 0x4e0 - 0x418);
  undefined4 &local_108 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x4e0 - 0x108);
  char (&local_104)[256] = *reinterpret_cast<char (*)[256]>(bea_frame_ + 0x4e0 - 0x104);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x4e0 - 0x4);
  if ((((*(int *)((int)this_ + 0x3f4) == 0) || (*(int *)((int)this_ + 0x3ec) != 0)) ||
      (DAT_00672fd0 <= *(float *)((int)this_ + 0x3e0))) ||
     (((iVar4 = FUN_004e4430(bea_arg(this_)), iVar4 != 0 || (*(int *)((int)this_ + 0x3dc) == -1)) ||
      (*(int *)((int)this_ + 0x3d0) == 0)))) {
    return 0;
  }
  FUN_0048dcf0(bea_arg(&local_4c4));
  local_4c4 = ((void*)0x005dc1b0);
  local_108 = 0;
  local_104[0] = '\0';
  local_4 = 0;
  bea_vcall<uint32_t>(*(int **)((int)this_ + 0x3d4), 0x160, *(undefined4 *)((int)this_ + 1000),*(undefined4 *)((int)this_ + 0x3e4),&local_4c0,
             local_4b0);
  if (((local_4c0 == 0.0f) && (fStack_4bc == 0.0f)) && (fStack_4b8 == 0.0f)) {
    *(undefined4 *)((int)this_ + 0x3e4) = 1;
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x3d4), 0x160, *(undefined4 *)((int)this_ + 1000),1,&local_4c0,local_4b0);
    if (((local_4c0 == 0.0f) && (fStack_4bc == 0.0f)) && (fStack_4b8 == 0.0f)) {
      iVar4 = *(int *)((int)this_ + 0x3d4);
      local_4c0 = *(float *)(iVar4 + 0x1c);
      fStack_4bc = *(float *)(iVar4 + 0x20);
      fStack_4b8 = *(float *)(iVar4 + 0x24);
      uStack_4b4 = *(undefined4 *)(iVar4 + 0x28);
      pfVar10 = (float *)(iVar4 + 0x3c);
      pfVar13 = local_4b0;
      for (iVar6 = 0xc; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
        *pfVar13 = *pfVar10;
        pfVar10 = pfVar10 + 1;
        pfVar13 = pfVar13 + 1;
      }
    }
  }
  FUN_00401ec0(bea_arg(&fStack_4d4), bea_arg(local_4b0[1] * 15.0f), bea_arg(fStack_49c * 15.0f), bea_arg(fStack_48c * 15.0f));
  local_4c0 = local_4c0 + fStack_4d4;
  uStack_424 = *(undefined4 *)((int)this_ + 0xb0);
  uVar7 = 0xffffffff;
  iVar4 = *(int *)((int)this_ + 0x3d0);
  fStack_4bc = fStack_4bc + fStack_4d0;
  fStack_4b8 = fStack_4b8 + fStack_4cc;
  pcVar11 = *(char **)(iVar4 + 4);
  do {
    pcVar14 = pcVar11;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar14 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar14;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar7 = ~uVar7;
  pcVar11 = pcVar14 + -uVar7;
  pcVar14 = local_104;
  for (uVar8 = uVar7 >> 2; BEA_LOOP_GUARD((uVar8 != 0)); uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar14 = pcVar14 + 4;
  }
  iVar6 = *(int *)((int)this_ + 0x3c0);
  for (uVar7 = uVar7 & 3; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
    *pcVar14 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar14 = pcVar14 + 1;
  }
  if (iVar6 == 0) {
    uVar7 = 0xffffffff;
    pcVar11 = (char *)((int)this_ + 700);
    do {
      pcVar14 = pcVar11;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar14 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar14;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar7 = ~uVar7;
    pcVar11 = pcVar14 + -uVar7;
    pcVar14 = acStack_418;
    for (uVar8 = uVar7 >> 2; BEA_LOOP_GUARD((uVar8 != 0)); uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar7 = uVar7 & 3; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
      *pcVar14 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar14 = pcVar14 + 1;
    }
  }
  pbVar3 = *(byte **)(iVar4 + 4);
  if (pbVar3 != (byte *)0x0) {
    iVar4 = FUN_00406d20(bea_arg(DAT_008553fc));
    while (BEA_LOOP_GUARD((iVar4 != 0))) {
      pbVar12 = *(byte **)(iVar4 + 0xb0);
      pbVar9 = pbVar3;
      do {
        bVar2 = *pbVar9;
        bVar15 = bVar2 < *pbVar12;
        if (bVar2 != *pbVar12) {
LAB_004e3ef9:
          iVar6 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
          goto LAB_004e3efe;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar9[1];
        bVar15 = bVar2 < pbVar12[1];
        if (bVar2 != pbVar12[1]) goto LAB_004e3ef9;
        pbVar9 = pbVar9 + 2;
        pbVar12 = pbVar12 + 2;
      } while (BEA_LOOP_GUARD((bVar2 != 0)));
      iVar6 = 0;
LAB_004e3efe:
      if (iVar6 == 0) goto LAB_004e3f15;
      iVar4 = FUN_00406d30(bea_arg(DAT_008553fc));
    }
  }
  iVar4 = 0;
LAB_004e3f15:
  uVar5 = FUN_0050f4b0(bea_arg(*(undefined4 *)(iVar4 + 0xe0)));
  this_00 = (int *)((int)this_ + 8);
  FUN_00401000(bea_arg(this_00), bea_arg(uVar5));
  if (*this_00 != 0) {
    *(undefined4 *)(*this_00 + 0x80) = 1;
    bea_vcall<uint32_t>(*this_00, 0x24, &local_4c4);
  }
  *(undefined4 *)((int)this_ + 0xc) = 0;
  *(undefined4 *)((int)this_ + 0x3ec) = 1;
  *(int *)((int)this_ + 0x3d8) = *(int *)((int)this_ + 0x3d8) + 1;
  FUN_004e3f90(bea_arg(this_));
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e3c60, ap_004e3c60));
