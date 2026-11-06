// auto-ported from 004f6080_vslot9.c (CTree::vslot9, 817 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x580: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_FASTCALL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CThing;
typedef char CTree;
#define DAT_00840cf8 GLOBAL_AT(int, 0x00840cf8)
#define DAT_008406d8 GLOBAL_AT(undefined4, 0x008406d8)
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_00840cb8 GLOBAL_AT(undefined4, 0x00840cb8)
#define DAT_006245cc GLOBAL_AT(int, 0x006245cc)
#define DAT_00633a7c GLOBAL_AT(char, 0x00633a7c)
#define DAT_00633a74 GLOBAL_AT(int, 0x00633a74)
#define DAT_00633a6c GLOBAL_AT(int, 0x00633a6c)
typedef uint32_t (BEA_THISCALL* CThing__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CThing__vslot9_t> CThing__vslot9 = {(CThing__vslot9_t)0x004f34a0};
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef undefined4 * (BEA_CDECL* FUN_00516580_t)(undefined4, ...);
static const bea_guard<FUN_00516580_t> FUN_00516580 = {(FUN_00516580_t)0x00516580};
typedef uint32_t (BEA_STDCALL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055db0a_t> FUN_0055db0a = {(FUN_0055db0a_t)0x0055db0a};
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055dc20_t> FUN_0055dc20 = {(FUN_0055dc20_t)0x0055dc20};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};
typedef int (BEA_CDECL* FUN_0056e170_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0056e170_t> FUN_0056e170 = {(FUN_0056e170_t)0x0056e170};

static uint32_t BEA_THISCALL ap_004f6080(CTree * this_, int param_1)
{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  float10 fVar11;
  float10 fVar12;
  alignas(16) uint8_t bea_frame_[0x580] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_574 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x580 - 0x574);
  int &local_56c = *reinterpret_cast<int *>(bea_frame_ + 0x580 - 0x56c);
  undefined4 &local_558 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x580 - 0x558);
  undefined4 &local_548 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x580 - 0x548);
  undefined4 &local_538 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x580 - 0x538);
  char (&local_52c)[1024] = *reinterpret_cast<char (*)[1024]>(bea_frame_ + 0x580 - 0x52c);
  CTree * &local_12c = *reinterpret_cast<CTree * *>(bea_frame_ + 0x580 - 0x12c);
  undefined4 &local_110 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x580 - 0x110);
  char (&local_10c)[256] = *reinterpret_cast<char (*)[256]>(bea_frame_ + 0x580 - 0x10c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x580 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x580 - 0x4);
  if (DAT_00840cf8 == 0) {
    local_56c = 0;
    puVar2 = &DAT_008406d8;
    do {
      fVar11 = (float10)fcos((float10)local_56c * (float10)0.19634955f);
      fVar12 = (float10)fsin((float10)(float)((float10)local_56c * (float10)0.19634955f));
      puVar2[-8] = bea_piece32((float)fVar11);
      puVar2[-7] = bea_piece32((float)-fVar12);
      puVar2[-6] = 0;
      puVar2[-5] = local_558;
      puVar2[-4] = bea_piece32((float)fVar12);
      puVar2[-3] = bea_piece32((float)fVar11);
      puVar2[-2] = 0;
      puVar2[-1] = local_538;
      puVar8 = puVar2 + 0xc;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0x3f800000;
      puVar2[3] = local_548;
      local_56c = local_56c + 1;
      puVar2 = puVar8;
    } while ((((int)puVar8 < 0x840cd8)));
    DAT_00840cf8 = 1;
  }
  uVar3 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
  uVar3 = uVar3 & 0x8000ffff;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffff0000) + 1;
  }
  local_574 = (undefined4)(longlong)ROUND((float)(int)uVar3 * 0.00048828125f);
  *(undefined4 *)(this_ + 0x40) = local_574;
  fVar11 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(param_1 + 4));
  *(float *)(param_1 + 0xc) = (float)fVar11;
  puVar2 = &DAT_00840cb8;
  puVar8 = (undefined4 *)(param_1 + 0x14);
  for (iVar5 = 0xc; ((iVar5 != 0)); iVar5 = iVar5 + -1) {
    *puVar8 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(param_1 + 0x60) = 1;
  FUN_0055dc20(bea_arg(local_52c), bea_arg(0x41c), bea_arg(1), bea_arg(((void*)0x00403f40)), bea_arg(((void*)0x00403f80)));
  if (this_ == (CTree *)0x0) {
    local_12c = (CTree *)0x0;
  }
  else {
    local_12c = this_ + 8;
  }
  uVar3 = 0xffffffff;
  pcVar7 = (char *)(param_1 + 0x3c0);
  do {
    pcVar10 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pcVar7 = pcVar10 + -uVar3;
  pcVar10 = local_52c;
  for (uVar6 = uVar3 >> 2; ((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  iVar5 = *(int *)(param_1 + 0x3bc);
  for (uVar3 = uVar3 & 3; ((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  if (iVar5 == 0) {
    uVar3 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar3 = uVar3 & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    FUN_0055de9b(local_10c,&DAT_006245cc,uVar3);
    uVar3 = 0xffffffff;
    pcVar7 = local_10c;
    do {
      pcVar10 = pcVar7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar10 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar10;
    } while (((cVar1 != '\0')));
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar7 = local_52c;
    do {
      pcVar9 = pcVar7;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (((cVar1 != '\0')));
    pcVar7 = pcVar10 + -uVar3;
    pcVar10 = pcVar9 + -1;
    for (uVar6 = uVar3 >> 2; ((uVar6 != 0)); uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar3 = uVar3 & 3; ((uVar3 != 0)); uVar3 = uVar3 - 1) {
      *pcVar10 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  uVar3 = 0xffffffff;
  pcVar7 = &DAT_00633a7c;
  do {
    pcVar10 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (((cVar1 != '\0')));
  uVar3 = ~uVar3;
  iVar5 = -1;
  pcVar7 = local_52c;
  do {
    pcVar9 = pcVar7;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (((cVar1 != '\0')));
  pcVar7 = pcVar10 + -uVar3;
  pcVar10 = pcVar9 + -1;
  for (uVar6 = uVar3 >> 2; ((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar3 = uVar3 & 3; ((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  piVar4 = (int *)FUN_00516580(2);
  *(int **)(this_ + 0x30) = piVar4;
  if (piVar4 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar4, 0x4, local_52c);
  }
  iVar5 = FUN_0056e170(bea_arg(local_52c), bea_arg(&DAT_00633a74), bea_arg(4));
  if (iVar5 != 0) {
    iVar5 = FUN_0056e170(bea_arg(local_52c), bea_arg(&DAT_00633a6c), bea_arg(4));
    if (iVar5 != 0) goto LAB_004f6360;
  }
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
LAB_004f6360:
  CThing__vslot9(bea_arg((CThing *)this_), bea_arg(param_1));
  *(undefined4 *)(this_ + 0x48) = 0;
  *(undefined4 *)(this_ + 0x44) = 0x3fc00000;
  *(undefined4 *)(this_ + 0x3c) = 0;
  return FUN_0055db0a(bea_arg(local_52c), bea_arg(0x41c), bea_arg(1), bea_arg(((void*)0x00403f80)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f6080, ap_004f6080));
