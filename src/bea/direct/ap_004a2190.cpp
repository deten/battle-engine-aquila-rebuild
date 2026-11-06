// auto-ported from 004a2190_FUN_004a2190.c (FUN_004a2190, 720 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x280: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_009c2dd0 GLOBAL_AT(char, 0x009c2dd0)
#define s_Total___d_bytes_0062f6bc ((char*)0x0062f6bc)
#define s___32s____15d_bytes____15d_blocks_0062f610 ((char*)0x0062f610)
#define s_Free___d_bytes_0062f648 ((char*)0x0062f648)
#define s___2d__num_blocks___5d__bytes__8d_0062f668 ((char*)0x0062f668)
#define s_Used___d_bytes_0062f658 ((char*)0x0062f658)
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef undefined4 (BEA_THISCALL* FUN_00540640_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540640_t> FUN_00540640 = {(FUN_00540640_t)0x00540640};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_THISCALL ap_004a2190(void * this_)
{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  uint uVar6;
  int v5;
  uint *puVar7;
  int v2;
  int v4;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;

  alignas(16) uint8_t bea_frame_[0x280] = {};   // the original stack frame (emulate_frame)
  int &local_27c = *reinterpret_cast<int *>(bea_frame_ + 0x280 - 0x27c);
  int &local_278 = *reinterpret_cast<int *>(bea_frame_ + 0x280 - 0x278);
  int * &local_274 = *reinterpret_cast<int * *>(bea_frame_ + 0x280 - 0x274);
  int &local_270 = *reinterpret_cast<int *>(bea_frame_ + 0x280 - 0x270);
  undefined1 (&local_268)[100] = *reinterpret_cast<undefined1 (*)[100]>(bea_frame_ + 0x280 - 0x268);
  uint (&local_204)[129] = *reinterpret_cast<uint (*)[129]>(bea_frame_ + 0x280 - 0x204);
  iVar3 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(2));
  iVar3 = *(int *)(iVar3 + 0x54);
  FUN_0055de9b(local_268,s_Used___d_bytes_0062f658,*(int *)((int)this_ + 0x50));
  uVar15 = 0x3f800000;
  uVar14 = 0;
  uVar13 = 0;
  uVar4 = FUN_004f7bf0(bea_arg(local_268));
  uVar12 = 0xffffffff;
  uVar10 = 0x42000000;
  uVar9 = 0x42000000;
  pvVar5 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(2));
  FUN_00540640(bea_arg(pvVar5), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar12), bea_arg(uVar4), bea_arg(uVar13), bea_arg(uVar14), bea_arg(uVar15));
  FUN_0055de9b(local_268,s_Free___d_bytes_0062f648,*(int *)((int)this_ + 0x54));
  uVar14 = 0x3f800000;
  uVar13 = 0;
  uVar12 = 0;
  uVar4 = FUN_004f7bf0(bea_arg(local_268));
  fVar11 = (float)(iVar3 + 0x20);
  uVar10 = 0xffffffff;
  uVar9 = 0x42000000;
  pvVar5 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(2));
  FUN_00540640(bea_arg(pvVar5), bea_arg(uVar9), bea_arg(fVar11), bea_arg(uVar10), bea_arg(uVar4), bea_arg(uVar12), bea_arg(uVar13), bea_arg(uVar14));
  local_27c = iVar3 + 0x20 + iVar3;
  FUN_0055de9b(local_268,s_Total___d_bytes_0062f6bc,*(int *)((int)this_ + 8));
  uVar14 = 0x3f800000;
  uVar13 = 0;
  uVar12 = 0;
  uVar4 = FUN_004f7bf0(bea_arg(local_268));
  fVar11 = (float)local_27c;
  uVar10 = 0xffffffff;
  uVar9 = 0x42000000;
  pvVar5 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(2));
  FUN_00540640(bea_arg(pvVar5), bea_arg(uVar9), bea_arg(fVar11), bea_arg(uVar10), bea_arg(uVar4), bea_arg(uVar12), bea_arg(uVar13), bea_arg(uVar14));
  local_27c = local_27c + iVar3;
  local_274 = (int *)((int)this_ + 0x10);
  iVar8 = 0;
  do {
    v4 = 0;
    v2 = 0;
    v5 = 0;
    iVar1 = local_274[-1];
    local_270 = 0;
    for (; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = *(int *)(iVar1 + 0xc)) {
      local_270 = local_270 + 1;
      v2 = v2 + 0x10 + (*(uint *)(iVar1 + 4) & 0xfffffff0);
    }
    for (iVar1 = *local_274; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = *(int *)(iVar1 + 0xc)) {
      v4 = v4 + 1;
      v5 = v5 + 0x10 + (*(uint *)(iVar1 + 4) & 0xfffffff0);
    }
    FUN_0055de9b(local_268,s___2d__num_blocks___5d__bytes__8d_0062f668,iVar8,local_270,v2,iVar8 + 1,
                 v4,v5);
    uVar14 = 0x3f800000;
    uVar13 = 0;
    uVar12 = 0;
    uVar4 = FUN_004f7bf0(bea_arg(local_268));
    fVar11 = (float)local_27c;
    uVar10 = 0xffffffff;
    uVar9 = 0x42000000;
    pvVar5 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(2));
    FUN_00540640(bea_arg(pvVar5), bea_arg(uVar9), bea_arg(fVar11), bea_arg(uVar10), bea_arg(uVar4), bea_arg(uVar12), bea_arg(uVar13), bea_arg(uVar14));
    iVar8 = iVar8 + 2;
    local_27c = local_27c + iVar3;
    local_274 = local_274 + 2;
  } while (BEA_LOOP_GUARD((iVar8 < 0x10)));
  uVar6 = 0;
  puVar7 = local_204;
  do {
    *puVar7 = uVar6;
    uVar6 = uVar6 + 1;
    puVar7 = puVar7 + 1;
  } while (BEA_LOOP_GUARD((uVar6 < 0x81)));
  do {
    bVar2 = false;
    puVar7 = local_204;
    local_278 = 0x80;
    do {
      puVar7 = puVar7 + 1;
      uVar6 = puVar7[-1];
      if (*(int *)((int)this_ + uVar6 * 4 + 0x58) < *(int *)((int)this_ + *puVar7 * 4 + 0x58)) {
        puVar7[-1] = *puVar7;
        bVar2 = true;
        *puVar7 = uVar6;
      }
      local_278 = local_278 + -1;
    } while (BEA_LOOP_GUARD((local_278 != 0)));
  } while (BEA_LOOP_GUARD((bVar2)));
  puVar7 = local_204;
  iVar8 = 0x81;
  do {
    uVar6 = *puVar7;
    local_27c = local_27c + iVar3;
    FUN_0055de9b(local_268,s___32s____15d_bytes____15d_blocks_0062f610,
                 (char *)(((char *)&DAT_009c2dd0) + uVar6 * 8),*(int *)((int)this_ + uVar6 * 4 + 0x58),
                 *(int *)((int)this_ + uVar6 * 4 + 0x670));
    uVar14 = 0x3f800000;
    uVar13 = 0;
    uVar12 = 0;
    uVar4 = FUN_004f7bf0(bea_arg(local_268));
    fVar11 = (float)local_27c;
    uVar10 = 0xffffff00;
    uVar9 = 0x42000000;
    pvVar5 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(2));
    FUN_00540640(bea_arg(pvVar5), bea_arg(uVar9), bea_arg(fVar11), bea_arg(uVar10), bea_arg(uVar4), bea_arg(uVar12), bea_arg(uVar13), bea_arg(uVar14));
    puVar7 = puVar7 + 1;
    iVar8 = iVar8 + -1;
  } while (BEA_LOOP_GUARD((iVar8 != 0)));
  return;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004a2190.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
