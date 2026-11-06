// auto-ported from 00485d50_FUN_00485d50.c (FUN_00485d50, 3042 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @hand-fixed 2026-10-28 check_fild: longlong local_10 read as its low dword (mov after fistp qword at 0x485f3e; float bits via fld/mov [esp+0x18] at 0x486852/0x486863/0x486772) -> (int)(uint32_t)/bea_fcast<float>((uint32_t)x); its 999.0 store is float bits (mov [esp+0x18],0x4479c000 at 0x4866ca) -> bea_piece32(999.0f)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char _DAT_008aa4e8;
#define DAT_008aa530 GLOBAL_AT(int, 0x008aa530)
#define DAT_008aa534 GLOBAL_AT(int, 0x008aa534)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define _DAT_008aa4fc GLOBAL_AT(float, 0x008aa4fc)
#define _DAT_0067a62c GLOBAL_AT(float, 0x0067a62c)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define _DAT_0067a628 GLOBAL_AT(float, 0x0067a628)
#define _DAT_008aa4f0 GLOBAL_AT(float, 0x008aa4f0)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define _DAT_008aa4ec GLOBAL_AT(float, 0x008aa4ec)
#define _DAT_008aa4f4 GLOBAL_AT(float, 0x008aa4f4)
#define _DAT_008aa4e8 GLOBAL_AT(float, 0x008aa4e8)
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
#define PTR_PTR_0062d34c GLOBAL_AT(void*, 0x0062d34c)
typedef uint32_t (BEA_THISCALL* FUN_0040c550_t)(uint32_t);
static const bea_guard<FUN_0040c550_t> FUN_0040c550 = {(FUN_0040c550_t)0x0040c550};
typedef uint32_t (BEA_THISCALL* FUN_0040c590_t)(uint32_t);
static const bea_guard<FUN_0040c590_t> FUN_0040c590 = {(FUN_0040c590_t)0x0040c590};
typedef uint32_t (BEA_THISCALL* FUN_0040dc90_t)(uint32_t);
static const bea_guard<FUN_0040dc90_t> FUN_0040dc90 = {(FUN_0040dc90_t)0x0040dc90};
typedef uint32_t (BEA_THISCALL* FUN_0040dda0_t)(uint32_t);
static const bea_guard<FUN_0040dda0_t> FUN_0040dda0 = {(FUN_0040dda0_t)0x0040dda0};
typedef uint32_t (BEA_STDCALL* FUN_00465710_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00465710_t> FUN_00465710 = {(FUN_00465710_t)0x00465710};
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};
typedef undefined4 (BEA_THISCALL* FUN_004725f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004725f0_t> FUN_004725f0 = {(FUN_004725f0_t)0x004725f0};
typedef uint32_t (BEA_CDECL* FUN_00482090_t)(void);
static const bea_guard<FUN_00482090_t> FUN_00482090 = {(FUN_00482090_t)0x00482090};
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef undefined4 (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef uint32_t (BEA_CDECL* FUN_00555be0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00555be0_t> FUN_00555be0 = {(FUN_00555be0_t)0x00555be0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_THISCALL ap_00485d50(void * this_)
{
  int iVar1;
  void *pvVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int *piVar18;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x18);
  float &local_14 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x14);
  longlong &local_10 = *reinterpret_cast<longlong *>(bea_frame_ + 0x20 - 0x10);
  int (&local_8)[2] = *reinterpret_cast<int (*)[2]>(bea_frame_ + 0x20 - 0x8);
  FUN_00482090();
  iVar1 = FUN_0040dc90(bea_arg(*(void **)((int)this_ + 0x50)));
  if (0 < iVar1) {
    if ((DAT_008aa530 != 0) && ((DAT_008aa530 == 1 || ((DAT_008aa530 == 2 && (DAT_008aa534 != 0)))))
       ) {
      iVar1 = FUN_004725d0(bea_arg(&DAT_008a9a98));
      if ((iVar1 == 0) ||
         (fVar6 = _DAT_008aa4fc - 74.0f,
         *(int *)(*(int *)(*(int *)((int)this_ + 0x50) + 0x574) + 0x2c) != 1)) {
        fVar6 = (_DAT_008aa4fc - 74.0f) - _DAT_0067a62c;
      }
      local_10 = CONCAT44((*(uint32_t*)((char*)&local_10 + 4)),fVar6);
      FUN_00513bc0(bea_arg(0x13), bea_arg(5));
      FUN_00513bc0(bea_arg(0x14), bea_arg(6));
      FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
      uVar8 = bea_piece32(bea_fcast<float>((uint32_t)local_10));
      FUN_00555be0(bea_arg(_DAT_0067a628 + _DAT_008aa4f0 + 112.0f), bea_arg(bea_fcast<float>((uint32_t)local_10)), bea_arg(0x3a83126f), bea_arg(*(undefined4 *)((int)this_ + 0x130)), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x5f000000), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
      FUN_00513bc0(bea_arg(0x13), bea_arg(2));
      FUN_00513bc0(bea_arg(0x14), bea_arg(2));
      FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
      FUN_00555be0(bea_arg(_DAT_0067a628 + _DAT_008aa4f0 + 112.0f), bea_arg(uVar8), bea_arg(0x3a83126f), bea_arg(*(undefined4 *)((int)this_ + 0x134)), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0xff7f7f7f), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
      iVar1 = FUN_0040c590(bea_arg(*(void **)((int)this_ + 0x50)));
      if (iVar1 == 0) {
        iVar1 = *(int *)((int)this_ + 0x140);
      }
      else if (iVar1 == 1) {
        iVar1 = *(int *)((int)this_ + 0x13c);
      }
      else if (iVar1 == 2) {
        iVar1 = *(int *)((int)this_ + 0x138);
      }
      else {
        iVar1 = 0;
      }
      fVar4 = (float10)fsin((float10)DAT_00672fd0 * (float10)4.0f);
      local_10 = (longlong)ROUND((fVar4 + (float10)1.0f) * (float10)-64.0f);
      iVar3 = (int)(uint32_t)local_10 * -0x10000 + -0x80c0d1;
      if (iVar1 == 0) {
        FUN_00555be0(bea_arg(_DAT_0067a628 + _DAT_008aa4f0 + 112.0f), bea_arg(uVar8), bea_arg(0x3a83126f), bea_arg(*(undefined4 *)((int)this_ + 0x140)), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(iVar3), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
        FUN_00555be0(bea_arg(_DAT_0067a628 + _DAT_008aa4f0 + 112.0f), bea_arg(uVar8), bea_arg(0x3a83126f), bea_arg(*(undefined4 *)((int)this_ + 0x13c)), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(iVar3), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
        iVar1 = *(int *)((int)this_ + 0x138);
      }
      FUN_00555be0(bea_arg(_DAT_0067a628 + _DAT_008aa4f0 + 112.0f), bea_arg(uVar8), bea_arg(0x3a83126f), bea_arg(iVar1), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(iVar3), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
    }
    FUN_00513bc0(bea_arg(0x13), bea_arg(5));
    FUN_00513bc0(bea_arg(0x14), bea_arg(6));
    FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
    local_14 = (DAT_00672fd0 - *(float *)((int)*(void **)((int)this_ + 0x50) + 0x584)) * 5.0f;
    iVar1 = FUN_0040c550(bea_arg(*(void **)((int)this_ + 0x50)));
    if (iVar1 != 0) {
      iVar3 = FUN_004725d0(bea_arg(&DAT_008a9a98));
      if ((iVar3 == 0) ||
         (fVar6 = _DAT_008aa4fc - 35.0f,
         *(int *)(*(int *)(*(int *)((int)this_ + 0x50) + 0x574) + 0x2c) != 1)) {
        fVar6 = (_DAT_008aa4fc - 35.0f) - _DAT_0067a62c;
      }
      uVar16 = 0;
      local_10 = CONCAT44((*(uint32_t*)((char*)&local_10 + 4)),fVar6);
      uVar14 = 1;
      fVar5 = _DAT_0067a628 + _DAT_008aa4f0 + 165.0f;
      uVar11 = 0xffff6040;
      uVar10 = 0x3f19999a;
      uVar9 = 0x3f19999a;
      uVar8 = 0x3c03126f;
      fVar7 = local_14;
      FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_00465710(bea_arg(fVar5), bea_arg(fVar6), bea_arg(uVar8), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar11), bea_arg(iVar1), bea_arg(fVar7), bea_arg(uVar14), bea_arg(uVar16));
    }
    iVar1 = FUN_004725d0(bea_arg(&DAT_008a9a98));
    if ((iVar1 != 0) &&
       (iVar1 = FUN_004725f0(bea_arg(&DAT_008a9a98), bea_arg(*(undefined4 *)(*(int *)(*(int *)((int)this_ + 0x50) + 0x574) + 0x2c))),
       -1 < iVar1)) {
      fVar6 = *(float *)((int)this_ + 0x14) - 77.0f;
      if (*(int *)(*(int *)(*(int *)((int)this_ + 0x50) + 0x574) + 0x2c) != 1) {
        fVar6 = fVar6 - _DAT_0067a62c;
      }
      local_10 = CONCAT44((*(uint32_t*)((char*)&local_10 + 4)),fVar6);
      FUN_0055de9b(&local_14,(char *)&PTR_PTR_0062d34c,iVar1);
      uVar9 = FUN_004f7bf0(bea_arg(&local_14));
      fVar6 = *(float *)((int)this_ + 8) + 177.0f;
      uVar17 = 0;
      uVar15 = 1;
      uVar12 = 0x40800000;
      uVar16 = 0xff00ff00;
      uVar14 = 0x3f4ccccd;
      uVar11 = 0x3f4ccccd;
      uVar10 = 0x3c03126f;
      uVar8 = bea_piece32(bea_fcast<float>((uint32_t)local_10));
      FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_00465710(bea_arg(fVar6), bea_arg(uVar8), bea_arg(uVar10), bea_arg(uVar11), bea_arg(uVar14), bea_arg(uVar16), bea_arg(uVar9), bea_arg(uVar12), bea_arg(uVar15), bea_arg(uVar17));
    }
  }
  if (DAT_008a9ac0 < 4) {
    local_18 = 999.0;
    iVar1 = *(int *)(*(int *)((int)this_ + 0x50) + 0x2b8);
    if (*(int *)(iVar1 + 0x28) != 0) {
      uVar8 = *(undefined4 *)((int)this_ + 0xb4);
      piVar18 = local_8;
      pvVar2 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_00540680(bea_arg(pvVar2), bea_arg(uVar8), bea_arg(piVar18));
      uVar8 = *(undefined4 *)((int)this_ + 0xb4);
      uVar12 = 0;
      uVar16 = 1;
      local_18 = (DAT_00672fd0 - *(float *)(iVar1 + 0x30)) * 3.0f;
      uVar14 = 0xffff3020;
      uVar11 = 0x3f800000;
      fVar6 = (_DAT_008aa4ec + _DAT_008aa4f4) - 142.0f;
      uVar10 = 0x3f800000;
      uVar9 = 0x3c03126f;
      fVar5 = (_DAT_008aa4e8 * 0.5f + _DAT_008aa4f0) - (float)local_8[0] * 0.5f;
      fVar7 = local_18;
      FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_00465710(bea_arg(fVar5), bea_arg(fVar6), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar11), bea_arg(uVar14), bea_arg(uVar8), bea_arg(fVar7), bea_arg(uVar16), bea_arg(uVar12));
    }
    local_14 = 999.0;
    if ((15.0f < local_18) || (local_18 < 0.0f)) {
      FUN_0040dda0(bea_arg(*(void **)((int)this_ + 0x50)));
      uVar8 = *(undefined4 *)((int)this_ + 0xb8);
      piVar18 = local_8;
      local_14 = (DAT_00672fd0 - *(float *)(*(int *)((int)this_ + 0x50) + 0x2e8)) * 3.0f;
      pvVar2 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_00540680(bea_arg(pvVar2), bea_arg(uVar8), bea_arg(piVar18));
      uVar8 = *(undefined4 *)((int)this_ + 0xb8);
      uVar12 = 0;
      uVar16 = 1;
      fVar6 = (_DAT_008aa4ec + _DAT_008aa4f4) - 142.0f;
      uVar14 = 0xffff3020;
      uVar11 = 0x3f800000;
      uVar10 = 0x3f800000;
      uVar9 = 0x3c03126f;
      fVar5 = (_DAT_008aa4e8 * 0.5f + _DAT_008aa4f0) - (float)local_8[0] * 0.5f;
      fVar7 = local_14;
      FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_00465710(bea_arg(fVar5), bea_arg(fVar6), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar11), bea_arg(uVar14), bea_arg(uVar8), bea_arg(fVar7), bea_arg(uVar16), bea_arg(uVar12));
    }
    if (((15.0f < local_18) || (local_18 < 0.0f)) && ((15.0f < local_14 || (local_14 < 0.0f)))) {
      uVar8 = *(undefined4 *)((int)this_ + 0xbc);
      piVar18 = local_8;
      local_10 = CONCAT44((*(uint32_t*)((char*)&local_10 + 4)),
                          (DAT_00672fd0 - *(float *)(*(int *)((int)this_ + 0x50) + 0x30c)) * 3.0f);
      pvVar2 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_00540680(bea_arg(pvVar2), bea_arg(uVar8), bea_arg(piVar18));
      uVar8 = *(undefined4 *)((int)this_ + 0xbc);
      uVar15 = 0;
      uVar12 = 1;
      fVar6 = (_DAT_008aa4ec + _DAT_008aa4f4) - 142.0f;
      uVar16 = 0xff30ff20;
      uVar14 = 0x3f800000;
      uVar11 = 0x3f800000;
      uVar10 = 0x3c03126f;
      fVar5 = (_DAT_008aa4e8 * 0.5f + _DAT_008aa4f0) - (float)local_8[0] * 0.5f;
      uVar9 = bea_piece32(bea_fcast<float>((uint32_t)local_10));
      FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_00465710(bea_arg(fVar5), bea_arg(fVar6), bea_arg(uVar10), bea_arg(uVar11), bea_arg(uVar14), bea_arg(uVar16), bea_arg(uVar8), bea_arg(uVar9), bea_arg(uVar12), bea_arg(uVar15));
    }
    uVar8 = *(undefined4 *)((int)this_ + 0xc4);
    piVar18 = local_8;
    fVar6 = (DAT_00672fd0 - *(float *)(*(int *)((int)this_ + 0x50) + 0x2e0)) * 3.0f;
    pvVar2 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
    FUN_00540680(bea_arg(pvVar2), bea_arg(uVar8), bea_arg(piVar18));
    uVar8 = *(undefined4 *)((int)this_ + 0xc4);
    uVar12 = 0;
    uVar16 = 1;
    fVar5 = (_DAT_008aa4ec + _DAT_008aa4f4) - 120.0f;
    uVar14 = 0xffff3020;
    uVar11 = 0x3f800000;
    uVar10 = 0x3f800000;
    uVar9 = 0x3c03126f;
    fVar7 = (_DAT_008aa4e8 * 0.5f + _DAT_008aa4f0) - (float)local_8[0] * 0.5f;
    fVar13 = fVar6;
    FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
    FUN_00465710(bea_arg(fVar7), bea_arg(fVar5), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar11), bea_arg(uVar14), bea_arg(uVar8), bea_arg(fVar13), bea_arg(uVar16), bea_arg(uVar12));
    local_18 = 999.0;
    if ((15.0f < fVar6) || (fVar6 < 0.0f)) {
      uVar8 = *(undefined4 *)((int)this_ + 200);
      piVar18 = local_8;
      local_18 = (DAT_00672fd0 - *(float *)(*(int *)((int)this_ + 0x50) + 0x2e4)) * 3.0f;
      pvVar2 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_00540680(bea_arg(pvVar2), bea_arg(uVar8), bea_arg(piVar18));
      uVar8 = *(undefined4 *)((int)this_ + 200);
      uVar12 = 0;
      uVar16 = 1;
      fVar5 = (_DAT_008aa4ec + _DAT_008aa4f4) - 120.0f;
      uVar14 = 0xff30ff20;
      uVar11 = 0x3f800000;
      uVar10 = 0x3f800000;
      uVar9 = 0x3c03126f;
      fVar7 = (_DAT_008aa4e8 * 0.5f + _DAT_008aa4f0) - (float)local_8[0] * 0.5f;
      fVar13 = local_18;
      FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_00465710(bea_arg(fVar7), bea_arg(fVar5), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar11), bea_arg(uVar14), bea_arg(uVar8), bea_arg(fVar13), bea_arg(uVar16), bea_arg(uVar12));
    }
    local_14 = 999.0;
    if (((15.0f < fVar6) || (fVar6 < 0.0f)) && ((15.0f < local_18 || (local_18 < 0.0f)))) {
      uVar8 = *(undefined4 *)((int)this_ + 0xc0);
      piVar18 = local_8;
      local_14 = (DAT_00672fd0 - *(float *)(*(int *)((int)this_ + 0x50) + 0x308)) * 3.0f;
      pvVar2 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_00540680(bea_arg(pvVar2), bea_arg(uVar8), bea_arg(piVar18));
      uVar8 = *(undefined4 *)((int)this_ + 0xc0);
      uVar12 = 0;
      uVar16 = 1;
      fVar5 = (_DAT_008aa4ec + _DAT_008aa4f4) - 120.0f;
      uVar14 = 0xffff3020;
      uVar11 = 0x3f800000;
      uVar10 = 0x3f800000;
      uVar9 = 0x3c03126f;
      fVar7 = (_DAT_008aa4e8 * 0.5f + _DAT_008aa4f0) - (float)local_8[0] * 0.5f;
      fVar13 = local_14;
      FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_00465710(bea_arg(fVar7), bea_arg(fVar5), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar11), bea_arg(uVar14), bea_arg(uVar8), bea_arg(fVar13), bea_arg(uVar16), bea_arg(uVar12));
    }
    (*(uint32_t*)((char*)&local_10 + 0)) = bea_piece32(999.0f);
    if (((15.0f < fVar6) || (fVar6 < 0.0f)) &&
       (((15.0f < local_18 || (local_18 < 0.0f)) && ((15.0f < local_14 || (local_14 < 0.0f)))))) {
      uVar8 = *(undefined4 *)((int)this_ + 0xcc);
      piVar18 = local_8;
      (*(uint32_t*)((char*)&local_10 + 0)) = bea_piece32((DAT_00672fd0 - *(float *)(*(int *)((int)this_ + 0x50) + 0x608)) * 3.0f);
      pvVar2 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_00540680(bea_arg(pvVar2), bea_arg(uVar8), bea_arg(piVar18));
      uVar8 = *(undefined4 *)((int)this_ + 0xcc);
      uVar12 = 0;
      uVar16 = 1;
      fVar5 = (_DAT_008aa4ec + _DAT_008aa4f4) - 120.0f;
      uVar14 = 0xffff3020;
      uVar11 = 0x3f800000;
      uVar10 = 0x3f800000;
      uVar9 = 0x3c03126f;
      fVar7 = (_DAT_008aa4e8 * 0.5f + _DAT_008aa4f0) - (float)local_8[0] * 0.5f;
      fVar13 = bea_fcast<float>((uint32_t)local_10);
      FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_00465710(bea_arg(fVar7), bea_arg(fVar5), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar11), bea_arg(uVar14), bea_arg(uVar8), bea_arg(fVar13), bea_arg(uVar16), bea_arg(uVar12));
    }
    if (((((15.0f < fVar6) || (fVar6 < 0.0f)) && ((15.0f < local_18 || (local_18 < 0.0f)))) &&
        ((15.0f < local_14 || (local_14 < 0.0f)))) &&
       ((15.0f < bea_fcast<float>((uint32_t)local_10) || (bea_fcast<float>((uint32_t)local_10) < 0.0f)))) {
      uVar8 = *(undefined4 *)((int)this_ + 0xd0);
      piVar18 = local_8;
      local_10 = CONCAT44((*(uint32_t*)((char*)&local_10 + 4)),
                          (DAT_00672fd0 - *(float *)(*(int *)((int)this_ + 0x50) + 0x60c)) * 3.0f);
      pvVar2 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_00540680(bea_arg(pvVar2), bea_arg(uVar8), bea_arg(piVar18));
      uVar8 = *(undefined4 *)((int)this_ + 0xd0);
      uVar15 = 0;
      uVar12 = 1;
      fVar6 = (_DAT_008aa4ec + _DAT_008aa4f4) - 120.0f;
      uVar16 = 0xffff3020;
      uVar14 = 0x3f800000;
      uVar11 = 0x3f800000;
      uVar10 = 0x3c03126f;
      fVar5 = (_DAT_008aa4e8 * 0.5f + _DAT_008aa4f0) - (float)local_8[0] * 0.5f;
      uVar9 = bea_piece32(bea_fcast<float>((uint32_t)local_10));
      FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_00465710(bea_arg(fVar5), bea_arg(fVar6), bea_arg(uVar10), bea_arg(uVar11), bea_arg(uVar14), bea_arg(uVar16), bea_arg(uVar8), bea_arg(uVar9), bea_arg(uVar12), bea_arg(uVar15));
    }
    DAT_009c68ac = 0;
    DAT_009c690d = 1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00485d50, ap_00485d50));
