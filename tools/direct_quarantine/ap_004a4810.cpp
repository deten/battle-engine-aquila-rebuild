// auto-ported from 004a4810_FUN_004a4810.c (FUN_004a4810, 1207 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_0082b4e8 GLOBAL_AT(char, 0x0082b4e8)
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_008a9d88 GLOBAL_AT(int, 0x008a9d88)
#define DAT_00704a88 GLOBAL_AT(char, 0x00704a88)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define s_FrontEnd_v2_FE_Blank_tga_00629f68 ((char*)0x00629f68)
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef void* (BEA_THISCALL* FUN_00406d30_t)(uint32_t);
static const bea_guard<FUN_00406d30_t> FUN_00406d30 = {(FUN_00406d30_t)0x00406d30};
typedef uint32_t (BEA_CDECL* FUN_004a3100_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004a3100_t> FUN_004a3100 = {(FUN_004a3100_t)0x004a3100};
typedef uint32_t (BEA_CDECL* FUN_004a3120_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004a3120_t> FUN_004a3120 = {(FUN_004a3120_t)0x004a3120};
typedef uint32_t (BEA_CDECL* FUN_004a3ba0_t)(void);
static const bea_guard<FUN_004a3ba0_t> FUN_004a3ba0 = {(FUN_004a3ba0_t)0x004a3ba0};
typedef uint32_t (BEA_CDECL* FUN_004a3bb0_t)(void);
static const bea_guard<FUN_004a3bb0_t> FUN_004a3bb0 = {(FUN_004a3bb0_t)0x004a3bb0};
typedef uint32_t (BEA_THISCALL* FUN_004b9010_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b9010_t> FUN_004b9010 = {(FUN_004b9010_t)0x004b9010};
typedef undefined4 (BEA_THISCALL* FUN_004d05c0_t)(uint32_t);
static const bea_guard<FUN_004d05c0_t> FUN_004d05c0 = {(FUN_004d05c0_t)0x004d05c0};
typedef void* (BEA_THISCALL* FUN_004e5c90_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5c90_t> FUN_004e5c90 = {(FUN_004e5c90_t)0x004e5c90};
typedef int * (BEA_CDECL* FUN_004f27f0_t)(void *, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};
typedef uint32_t (BEA_STDCALL* FUN_00513af0_t)(uint32_t);
static const bea_guard<FUN_00513af0_t> FUN_00513af0 = {(FUN_00513af0_t)0x00513af0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef undefined4 (BEA_THISCALL* FUN_00540640_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540640_t> FUN_00540640 = {(FUN_00540640_t)0x00540640};
typedef undefined4 (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};

static undefined4 BEA_THISCALL ap_004a4810(void * this_, int *param_1)
{
  int *this_00;
  undefined4 *puVar1;
  float a1;
  bool bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  undefined4 uVar17;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x2c);
  undefined4 &uStack_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x28);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x18);
  undefined8 &local_10 = *reinterpret_cast<undefined8 *>(bea_frame_ + 0x30 - 0x10);
  int (&aiStack_8)[2] = *reinterpret_cast<int (*)[2]>(bea_frame_ + 0x30 - 0x8);
  FUN_004a3ba0();
  cVar3 = DAT_0082b4e8;
  this_00 = (int *)((int)this_ + 8);
  DAT_009c68ac = 0;
  DAT_009c690d = 1;
  puVar1 = (undefined4 *)*this_00;
  a1 = *(float *)((int)this_ + 0x1c);
  fVar11 = *(float *)((int)this_ + 0x20);
  iVar10 = 0x20;
  *(undefined4 **)((int)this_ + 0x10) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)*puVar1;
  }
  while (BEA_LOOP_GUARD((piVar6 != (int *)0x0))) {
    iVar4 = bea_vcall<uint32_t>(piVar6, 0x18);
    iVar10 = iVar10 + iVar4;
    puVar1 = *(undefined4 **)(*(int *)((int)this_ + 0x10) + 4);
    *(undefined4 **)((int)this_ + 0x10) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)*puVar1;
    }
  }
  local_10 = CONCAT44((*(uint32_t*)((char*)&local_10 + 4)),iVar10 + -0x20);
  local_2c = (fVar11 - (float)(iVar10 + -0x20) * 0.5f) - 15.0f;
  if (*(int *)((int)this_ + 0x28) != 0) {
    uVar8 = *(undefined4 *)((int)this_ + 4);
    puVar16 = &local_10;
    pvVar5 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
    FUN_00540680(bea_arg(pvVar5), bea_arg(uVar8), bea_arg(puVar16));
    iVar4 = (int)(float)local_10;
    iVar10 = 0;
    piVar6 = (int *)FUN_00406d20(bea_arg(this_00));
    while (BEA_LOOP_GUARD((piVar6 != (int *)0x0))) {
      iVar7 = bea_vcall<uint32_t>(piVar6, 0x14);
      if (iVar10 < iVar7) {
        iVar10 = iVar7;
      }
      piVar6 = (int *)FUN_00406d30(bea_arg(this_00));
    }
    if (iVar4 < iVar10) {
      iVar4 = iVar10;
    }
    puVar1 = (undefined4 *)*this_00;
    (*(uint32_t*)((char*)&local_10 + 4)) = (undefined4)((ulonglong)local_10 >> 0x20);
    iVar10 = 0x20;
    *(undefined4 **)((int)this_ + 0x10) = puVar1;
    local_10 = CONCAT44((*(uint32_t*)((char*)&local_10 + 4)),(float)(iVar4 + 0x10) * 1.1f);
    if (puVar1 == (undefined4 *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)*puVar1;
    }
    while (BEA_LOOP_GUARD((piVar6 != (int *)0x0))) {
      iVar4 = bea_vcall<uint32_t>(piVar6, 0x18);
      iVar10 = iVar10 + iVar4;
      puVar1 = *(undefined4 **)(*(int *)((int)this_ + 0x10) + 4);
      *(undefined4 **)((int)this_ + 0x10) = puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)*puVar1;
      }
    }
    uStack_28 = (undefined4)(longlong)ROUND((float)iVar10 * 1.1f);
    uVar8 = uStack_28;
    uStack_28 = (undefined4)(longlong)ROUND((float)local_10);
    local_18 = (undefined4)(longlong)ROUND(fVar11 - (float)iVar10 * 1.1f * 0.5f);
    local_10 = (longlong)ROUND(a1 - (float)local_10 * 0.5f);
    FUN_004b9010(bea_arg(DAT_008a9d88), bea_arg((float)local_10), bea_arg(local_18), bea_arg(uStack_28), bea_arg(uVar8), bea_arg(0x3f99999a));
  }
  if ((cVar3 == '\0') && (iVar10 = *(int *)((int)this_ + 4), iVar10 != 0)) {
    piVar6 = aiStack_8;
    pvVar5 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
    FUN_00540680(bea_arg(pvVar5), bea_arg(iVar10), bea_arg(piVar6));
    uVar17 = 0x3f800000;
    uVar8 = *(undefined4 *)((int)this_ + 4);
    uVar15 = 0;
    uVar14 = 0;
    uVar13 = 0xff505050;
    fVar11 = a1 - (float)(aiStack_8[0] / 2);
    local_10 = CONCAT44((*(uint32_t*)((char*)&local_10 + 4)),fVar11);
    fVar12 = local_2c;
    pvVar5 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
    FUN_00540640(bea_arg(pvVar5), bea_arg(fVar11), bea_arg(fVar12), bea_arg(uVar13), bea_arg(uVar8), bea_arg(uVar14), bea_arg(uVar15), bea_arg(uVar17));
    local_2c = local_2c + 30.0f;
  }
  puVar1 = (undefined4 *)*this_00;
  iVar10 = 0;
  iVar4 = 0;
  *(undefined4 **)((int)this_ + 0x10) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)*puVar1;
  }
  while (BEA_LOOP_GUARD((piVar6 != (int *)0x0))) {
    iVar7 = bea_vcall<uint32_t>(piVar6, 0x14);
    if (iVar10 < iVar7) {
      iVar10 = iVar7;
    }
    puVar1 = *(undefined4 **)(*(int *)((int)this_ + 0x10) + 4);
    *(undefined4 **)((int)this_ + 0x10) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)*puVar1;
    }
  }
  DAT_00704a88 = 0;
  if (*(int *)((int)this_ + 0x24) == 0) {
    uVar8 = FUN_004f27f0(s_FrontEnd_v2_FE_Blank_tga_00629f68,4,0,1,0,1);
    *(undefined4 *)((int)this_ + 0x24) = uVar8;
    puVar1 = (undefined4 *)*this_00;
    *(undefined4 **)((int)this_ + 0x10) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)*puVar1;
    }
    while (BEA_LOOP_GUARD((piVar6 != (int *)0x0))) {
      bea_vcall<uint32_t>(piVar6, 0x34);
      puVar1 = *(undefined4 **)(*(int *)((int)this_ + 0x10) + 4);
      *(undefined4 **)((int)this_ + 0x10) = puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)*puVar1;
      }
    }
  }
  puVar1 = (undefined4 *)*this_00;
  bVar2 = false;
  *(undefined4 **)((int)this_ + 0x10) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)*puVar1;
  }
  while (BEA_LOOP_GUARD((piVar6 != (int *)0x0))) {
    cVar3 = FUN_004d05c0(bea_arg(param_1));
    if ((cVar3 == '\0') || (uVar8 = bea_vcall<uint32_t>(this_, 0xc), (char)uVar8 != '\0')) {
      piVar9 = (int *)FUN_004e5c90(bea_arg(this_00), bea_arg(*(undefined4 *)((int)this_ + 0x18)));
      uVar8 = bea_vcall<uint32_t>(piVar9, 0x24);
      if ((char)uVar8 == '\0') {
        iVar10 = bea_vcall<uint32_t>(piVar6, 0x18);
        local_10 = CONCAT44((*(uint32_t*)((char*)&local_10 + 4)),iVar10);
        cVar3 = FUN_004a3100(bea_arg(0), bea_arg(local_2c), bea_arg(0x44200000), bea_arg((float)iVar10 + local_2c));
        if (cVar3 != '\0') {
          *(int *)((int)this_ + 0x18) = iVar4;
        }
      }
    }
    iVar10 = *(int *)((int)this_ + 0x18);
    FUN_00513af0(bea_arg(0));
    DAT_009c68ac = 0;
    DAT_009c690d = 1;
    FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
    bea_vcall<uint32_t>(piVar6, 0x10, a1,local_2c,(uint)(iVar4 == iVar10));
    cVar3 = FUN_004d05c0(bea_arg(param_1));
    if ((cVar3 == '\0') || (uVar8 = bea_vcall<uint32_t>(this_, 0xc), (char)uVar8 != '\0')) {
      piVar9 = (int *)FUN_004e5c90(bea_arg(this_00), bea_arg(*(undefined4 *)((int)this_ + 0x18)));
      uVar8 = bea_vcall<uint32_t>(piVar9, 0x24);
      if ((char)uVar8 == '\0') {
        iVar10 = bea_vcall<uint32_t>(piVar6, 0x18);
        local_10 = CONCAT44((*(uint32_t*)((char*)&local_10 + 4)),iVar10);
        cVar3 = FUN_004a3120(bea_arg(0), bea_arg(local_2c), bea_arg(0x44200000), bea_arg((float)iVar10 + local_2c));
        if (cVar3 != '\0') {
          bVar2 = true;
          *(int *)((int)this_ + 0x18) = iVar4;
        }
      }
    }
    uVar8 = bea_vcall<uint32_t>(piVar6, 0x28);
    if ((char)uVar8 != '\0') {
      DAT_00704a88 = 1;
    }
    iVar10 = bea_vcall<uint32_t>(piVar6, 0x18);
    local_10 = CONCAT44((*(uint32_t*)((char*)&local_10 + 4)),iVar10);
    iVar4 = iVar4 + 1;
    puVar1 = *(undefined4 **)(*(int *)((int)this_ + 0x10) + 4);
    local_2c = (float)iVar10 + local_2c;
    *(undefined4 **)((int)this_ + 0x10) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)*puVar1;
    }
  }
  FUN_004a3bb0();
  uVar8 = *(undefined4 *)((int)this_ + 4);
  if (bVar2) {
    uVar13 = bea_vcall<uint32_t>(this_, 0xc);
    if ((char)uVar13 != '\0') {
      bea_vcall<uint32_t>(param_1[2], 0xc, 0,0x2c,0x3f800000);
      bea_vcall<uint32_t>(param_1[2], 0xc, 0,0x33,0x3f800000);
      return uVar8;
    }
    bea_vcall<uint32_t>(param_1, 0xc, 0,0x2c,0x3f800000);
    bea_vcall<uint32_t>(param_1, 0xc, 0,0x33,0x3f800000);
  }
  return uVar8;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a4810, ap_004a4810));
