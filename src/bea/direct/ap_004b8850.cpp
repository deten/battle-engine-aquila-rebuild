// auto-ported from 004b8850_FUN_004b8850.c (FUN_004b8850, 1162 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x570: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-28: float sums in the asm's order (bug class 19, tools/check_fp_order.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char _DAT_008aa4e8;
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define DAT_008a9e20 GLOBAL_AT(float, 0x008a9e20)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define _DAT_008aa4fc GLOBAL_AT(float, 0x008aa4fc)
#define _DAT_0067a62c GLOBAL_AT(float, 0x0067a62c)
#define _DAT_0062ce60 GLOBAL_AT(float, 0x0062ce60)
#define _DAT_008aa4f0 GLOBAL_AT(float, 0x008aa4f0)
#define _DAT_0067a628 GLOBAL_AT(float, 0x0067a628)
#define _DAT_0062ce68 GLOBAL_AT(float, 0x0062ce68)
#define DAT_008aa4e8 GLOBAL_AT(float, 0x008aa4e8)
#define _DAT_008aa4e8 GLOBAL_AT(float, 0x008aa4e8)
#define _DAT_0062ce64 GLOBAL_AT(float, 0x0062ce64)
#define DAT_0062ce5c GLOBAL_AT(int, 0x0062ce5c)
#define _DAT_0062ce6c GLOBAL_AT(float, 0x0062ce6c)
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_00629118 GLOBAL_AT(undefined, 0x00629118)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_009c68ad GLOBAL_AT(char, 0x009c68ad)
#define DAT_009c6910 GLOBAL_AT(char, 0x009c6910)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
typedef uint32_t (BEA_THISCALL* FUN_004659a0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004659a0_t> FUN_004659a0 = {(FUN_004659a0_t)0x004659a0};
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};
typedef uint32_t (BEA_THISCALL* FUN_00482210_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00482210_t> FUN_00482210 = {(FUN_00482210_t)0x00482210};
typedef uint32_t (BEA_THISCALL* FUN_004b6f70_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b6f70_t> FUN_004b6f70 = {(FUN_004b6f70_t)0x004b6f70};
typedef uint32_t (BEA_THISCALL* FUN_004b8800_t)(uint32_t);
static const bea_guard<FUN_004b8800_t> FUN_004b8800 = {(FUN_004b8800_t)0x004b8800};
typedef uint32_t (BEA_THISCALL* FUN_00513e00_t)(uint32_t);
static const bea_guard<FUN_00513e00_t> FUN_00513e00 = {(FUN_00513e00_t)0x00513e00};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef undefined4 (BEA_CDECL* FUN_00515b00_t)(void);
static const bea_guard<FUN_00515b00_t> FUN_00515b00 = {(FUN_00515b00_t)0x00515b00};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};

static void BEA_THISCALL ap_004b8850(void * this_, undefined4 param_1)
{
  bool bVar1;
  float fVar2;
  int iVar3;
  void *pvVar4;
  undefined1 *puVar5;
  float fVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;

  alignas(16) uint8_t bea_frame_[0x570] = {};   // the original stack frame (emulate_frame)
  int &local_56c = *reinterpret_cast<int *>(bea_frame_ + 0x570 - 0x56c);
  undefined1 (&local_560)[1376] = *reinterpret_cast<undefined1 (*)[1376]>(bea_frame_ + 0x570 - 0x560);
  if (3 < DAT_008a9ac0) {
    FUN_004b8800(bea_arg(this_));
    return;
  }
  if (*(int *)((int)this_ + 8) == 0) {
    if (*(float *)((int)this_ + 0x2c4) <= 1.0f) {
      fVar2 = *(float *)((int)this_ + 0x2c4) - DAT_008a9e20 * 0.4f;
      *(float *)((int)this_ + 0x2c4) = fVar2;
      if (fVar2 < 0.0f) {
        *(undefined4 *)((int)this_ + 0x2c4) = 0;
      }
    }
    else if (*(int *)((int)this_ + 0x18) == 0) {
      bVar1 = 1.0f <= *(float *)((int)this_ + 0x2c4);
      if (bVar1) {
        fVar2 = -0.01f;
      }
      else {
        fVar2 = 0.01f;
      }
      fVar2 = DAT_008a9e20 * 0.5f * ((*(float *)((int)this_ + 0x2c4) - 2.0f) + fVar2) +
              *(float *)((int)this_ + 0x2c4);
      *(float *)((int)this_ + 0x2c4) = fVar2;
      if (bVar1) {
        if (fVar2 < 1.0f) {
          *(undefined4 *)((int)this_ + 0x2c4) = 0x3f800000;
        }
      }
      else if (1.0f < fVar2) {
        *(undefined4 *)((int)this_ + 0x2c4) = 0x3f800000;
      }
    }
    if (*(float *)((int)this_ + 0x2c4) == 0.0f) {
      return;
    }
  }
  else if (1.0f <= *(float *)((int)this_ + 0x2c4)) {
    fVar2 = DAT_008a9e20 * 0.5f * (2.0f - *(float *)((int)this_ + 0x2c4)) +
            *(float *)((int)this_ + 0x2c4);
    *(float *)((int)this_ + 0x2c4) = fVar2;
    if (ABS(2.0f - fVar2) < 0.01f) {
      *(undefined4 *)((int)this_ + 0x2c4) = 0x40000000;
    }
  }
  else {
    fVar2 = DAT_008a9e20 * 0.4f + *(float *)((int)this_ + 0x2c4);
    *(float *)((int)this_ + 0x2c4) = fVar2;
    if (1.0f < fVar2) {
      *(undefined4 *)((int)this_ + 0x2c4) = 0x3f800000;
    }
  }
  iVar3 = FUN_004725d0(bea_arg(&DAT_008a9a98));
  if (iVar3 == 0) {
    fVar2 = (((_DAT_008aa4fc + 16.0f) - _DAT_0067a62c) - 128.0f) + 48.0f + _DAT_0062ce60;
  }
  else {
    iVar3 = FUN_00515b00();
    fVar2 = (float)iVar3 * 0.5f + 5.0f;
  }
  fVar6 = ((230.0f - (_DAT_008aa4f0 + _DAT_008aa4f0)) - (_DAT_0067a628 + _DAT_0067a628)) +
          _DAT_0062ce68;
  fVar13 = *(float *)((int)this_ + 0x2c4);
  if (1.0f <= fVar13) {
    fVar13 = 1.0f;
    fVar6 = (*(float *)((int)this_ + 0x2c4) - 1.0f) * fVar6;
  }
  FUN_00482210(bea_arg(&DAT_008aa4e8), bea_arg(_DAT_008aa4e8 * 0.5f + _DAT_008aa4f0 + _DAT_0062ce64 + 12.0f), bea_arg(fVar2), bea_arg(fVar6), bea_arg(0x42700000), bea_arg(fVar13));
  if ((*(void **)((int)this_ + 8) != (void *)0x0) && (2.0f <= *(float *)((int)this_ + 0x2c4))) {
    FUN_004b6f70(bea_arg(*(void **)((int)this_ + 8)), bea_arg(local_560), bea_arg(DAT_0062ce5c), bea_arg(*(undefined4 *)((int)this_ + 0x1bc)));
    iVar3 = FUN_004725d0(bea_arg(&DAT_008a9a98));
    if (iVar3 == 0) {
      fVar2 = (((_DAT_008aa4fc + 16.0f) - _DAT_0067a62c) - 128.0f) + 48.0f + _DAT_0062ce60;
    }
    else {
      iVar3 = FUN_00515b00();
      fVar2 = (float)iVar3 * 0.5f + 5.0f;
    }
    fVar2 = fVar2 - _DAT_0062ce6c;
    DAT_009c68ac = 1;
    DAT_009c690d = 1;
    FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
    uVar14 = 0x3f800000;
    uVar12 = 0x3f800000;
    uVar11 = 0x3f800000;
    uVar10 = 0;
    puVar8 = &DAT_00629118;
    uVar7 = 0xffffffff;
    fVar13 = ((_DAT_008aa4e8 * 0.5f + _DAT_008aa4f0 + _DAT_0062ce64 + 12.0f) -
             (((230.0f - (_DAT_008aa4f0 + _DAT_008aa4f0)) - (_DAT_0067a628 + _DAT_0067a628)) +
             _DAT_0062ce68) * 0.5f) - 12.0f;
    fVar6 = fVar2;
    pvVar4 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
    FUN_004659a0(bea_arg(pvVar4), bea_arg(fVar13), bea_arg(fVar6), bea_arg(uVar7), bea_arg(puVar8), bea_arg(uVar10), bea_arg(uVar11), bea_arg(uVar12), bea_arg(uVar14));
    local_56c = 0;
    puVar5 = local_560;
    do {
      DAT_009c68ad = 0;
      DAT_009c6910 = 1;
      DAT_009c68ac = 0;
      DAT_009c690d = 1;
      FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
      FUN_00513e00(bea_arg(&DAT_00855bb0));
      uVar14 = 0x3f800000;
      uVar12 = 0x3f800000;
      uVar11 = 0x3f800000;
      uVar10 = 0;
      fVar13 = (float)local_56c + fVar2;
      uVar7 = 0xffffffff;
      fVar6 = ((_DAT_008aa4e8 * 0.5f + _DAT_008aa4f0 + _DAT_0062ce64 + 12.0f) -
              (((230.0f - (_DAT_008aa4f0 + _DAT_008aa4f0)) - (_DAT_0067a628 + _DAT_0067a628)) +
              _DAT_0062ce68) * 0.5f) - 12.0f;
      puVar9 = puVar5;
      pvVar4 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
      FUN_004659a0(bea_arg(pvVar4), bea_arg(fVar6), bea_arg(fVar13), bea_arg(uVar7), bea_arg(puVar9), bea_arg(uVar10), bea_arg(uVar11), bea_arg(uVar12), bea_arg(uVar14));
      local_56c = local_56c + 0xf;
      puVar5 = puVar5 + 0xac;
    } while (BEA_LOOP_GUARD((local_56c < 0x4b)));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b8850, ap_004b8850));
