// auto-ported from 00545590_FUN_00545590.c (FUN_00545590, 3209 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CTweakFLOAT;
#define DAT_008aa94c GLOBAL_AT(int, 0x008aa94c)
#define DAT_009c68ad GLOBAL_AT(char, 0x009c68ad)
#define DAT_009c6910 GLOBAL_AT(char, 0x009c6910)
#define DAT_008c0294 GLOBAL_AT(float, 0x008c0294)
#define DAT_008a9e20 GLOBAL_AT(float, 0x008a9e20)
#define DAT_008c0298 GLOBAL_AT(float, 0x008c0298)
#define DAT_00628258 GLOBAL_AT(undefined4, 0x00628258)
#define DAT_008554fc GLOBAL_AT(int, 0x008554fc)
#define DAT_008aa920 GLOBAL_AT(int, 0x008aa920)
#define _DAT_00628268 GLOBAL_AT(float, 0x00628268)
#define DAT_0062825c GLOBAL_AT(float, 0x0062825c)
#define _DAT_0062826c GLOBAL_AT(float, 0x0062826c)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_0067a7d0 GLOBAL_AT(int, 0x0067a7d0)
#define _DAT_00628278 GLOBAL_AT(int, 0x00628278)
#define _DAT_0062827c GLOBAL_AT(int, 0x0062827c)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_009c64dc GLOBAL_AT(int, 0x009c64dc)
#define DAT_0089d680 GLOBAL_AT(char, 0x0089d680)
typedef uint32_t (BEA_THISCALL* CTweakFLOAT__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CTweakFLOAT__vslot0_t> CTweakFLOAT__vslot0 = {(CTweakFLOAT__vslot0_t)0x00528b50};
typedef uint32_t (BEA_THISCALL* FUN_00500320_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00500320_t> FUN_00500320 = {(FUN_00500320_t)0x00500320};
typedef uint32_t (BEA_THISCALL* FUN_00500360_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00500360_t> FUN_00500360 = {(FUN_00500360_t)0x00500360};
typedef uint32_t (BEA_STDCALL* FUN_00513820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513820_t> FUN_00513820 = {(FUN_00513820_t)0x00513820};
typedef uint32_t (BEA_STDCALL* FUN_00513870_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513870_t> FUN_00513870 = {(FUN_00513870_t)0x00513870};
typedef uint32_t (BEA_STDCALL* FUN_00513930_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513930_t> FUN_00513930 = {(FUN_00513930_t)0x00513930};
typedef uint32_t (BEA_THISCALL* FUN_00513a50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513a50_t> FUN_00513a50 = {(FUN_00513a50_t)0x00513a50};
typedef uint32_t (BEA_STDCALL* FUN_00513af0_t)(uint32_t);
static const bea_guard<FUN_00513af0_t> FUN_00513af0 = {(FUN_00513af0_t)0x00513af0};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_THISCALL* FUN_00513c70_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513c70_t> FUN_00513c70 = {(FUN_00513c70_t)0x00513c70};
typedef undefined4 (BEA_THISCALL* FUN_00527cc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00527cc0_t> FUN_00527cc0 = {(FUN_00527cc0_t)0x00527cc0};
typedef undefined4 (BEA_THISCALL* FUN_00527d20_t)(uint32_t);
static const bea_guard<FUN_00527d20_t> FUN_00527d20 = {(FUN_00527d20_t)0x00527d20};
typedef uint32_t (BEA_THISCALL* FUN_00527da0_t)(uint32_t);
static const bea_guard<FUN_00527da0_t> FUN_00527da0 = {(FUN_00527da0_t)0x00527da0};
typedef undefined4 (BEA_THISCALL* FUN_00527dd0_t)(uint32_t);
static const bea_guard<FUN_00527dd0_t> FUN_00527dd0 = {(FUN_00527dd0_t)0x00527dd0};
typedef undefined4 (BEA_THISCALL* FUN_00546490_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00546490_t> FUN_00546490 = {(FUN_00546490_t)0x00546490};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef uint32_t (BEA_CDECL* FUN_00551420_t)(uint32_t);
static const bea_guard<FUN_00551420_t> FUN_00551420 = {(FUN_00551420_t)0x00551420};
typedef undefined4 (BEA_THISCALL* FUN_00558690_t)(uint32_t);
static const bea_guard<FUN_00558690_t> FUN_00558690 = {(FUN_00558690_t)0x00558690};

static void BEA_THISCALL ap_00545590(void * this_, uint32_t param_1_bits)
{float param_1_f = __builtin_bit_cast(float, param_1_bits);   // @autoport-float-param: the slot holds a pointer first, a float later

  int *piVar1;
  int iVar2;
  void *this_00;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float10 fVar9;
  int iStack_14;
  int iStack_8;
  int iStack_4;
  
  if (DAT_008aa94c == 0) {
    DAT_009c68ad = 0;
    DAT_009c6910 = 1;
  }
  piVar1 = (int *)(*(int *)((int)this_ + 0x24) + (int)param_1_bits * 0x34);
  if (param_1_f == 0.0f) {
    DAT_008c0294 = DAT_008a9e20 * 0.001f + DAT_008c0294;
    if (1.0f < DAT_008c0294) {
      DAT_008c0294 = DAT_008c0294 - 1.0f;
    }
    DAT_008c0298 = DAT_008a9e20 * 0.0005f + DAT_008c0298;
    if (1.0f < DAT_008c0298) {
      DAT_008c0298 = DAT_008c0298 - 1.0f;
    }
  }
  puVar7 = &DAT_00628258;
  for (iVar5 = 0x10; ((iVar5 != 0)); iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  if (DAT_008554fc == 0) {
    CTweakFLOAT__vslot0(bea_arg((CTweakFLOAT *)&DAT_008aa920), bea_arg(0));
  }
  cVar3 = FUN_00527cc0(bea_arg(&DAT_008aa920), bea_arg(2));
  if (cVar3 != '\0') {
    if (DAT_008aa94c == 0) {
      FUN_00513870(bea_arg(0), bea_arg(1), bea_arg(4));
    }
    else {
      FUN_00513af0(bea_arg(0));
    }
    FUN_00513870(bea_arg(0), bea_arg(2), bea_arg(2));
    FUN_00513870(bea_arg(0), bea_arg(3), bea_arg(0));
    FUN_00513870(bea_arg(0), bea_arg(4), bea_arg(1));
    FUN_00513870(bea_arg(0), bea_arg(5), bea_arg(2));
    FUN_00513870(bea_arg(0), bea_arg(6), bea_arg(0));
    FUN_00513870(bea_arg(1), bea_arg(2), bea_arg(2));
    FUN_00513870(bea_arg(1), bea_arg(5), bea_arg(2));
    FUN_00513870(bea_arg(1), bea_arg(3), bea_arg(1));
    FUN_00513870(bea_arg(1), bea_arg(6), bea_arg(1));
    FUN_00513870(bea_arg(2), bea_arg(2), bea_arg(2));
    FUN_00513870(bea_arg(2), bea_arg(5), bea_arg(2));
    FUN_00513870(bea_arg(2), bea_arg(3), bea_arg(1));
    FUN_00513870(bea_arg(2), bea_arg(6), bea_arg(1));
    FUN_00513870(bea_arg(3), bea_arg(2), bea_arg(2));
    FUN_00513870(bea_arg(3), bea_arg(5), bea_arg(2));
    FUN_00513870(bea_arg(3), bea_arg(3), bea_arg(1));
    FUN_00513870(bea_arg(3), bea_arg(6), bea_arg(1));
    FUN_00513870(bea_arg(1), bea_arg(1), bea_arg(4));
    FUN_00513af0(bea_arg(2));
    FUN_00513af0(bea_arg(3));
    FUN_00513820(bea_arg(0), bea_arg(0x18), bea_arg(2));
    FUN_00513930(bea_arg(0), bea_arg(6), bea_arg(3));
    FUN_00513930(bea_arg(0), bea_arg(10), bea_arg(4));
    _DAT_00628268 = 0.0f;
    DAT_0062825c = 0.0f;
    DAT_00628258 = bea_piece32(0.001953125);
    _DAT_0062826c = 0.001953125;
    bea_vcall<uint32_t>(DAT_00888a50, 0xb0, DAT_00888a50,0x10,&DAT_00628258);
    FUN_00513870(bea_arg(0), bea_arg(0xb), bea_arg(0));
    FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0x30) + 8)));
    uVar4 = FUN_00558690(bea_arg(DAT_0067a7d0));
    FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(1), bea_arg(uVar4));
    FUN_00551420(bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(0x18), bea_arg(2));
    FUN_00513820(bea_arg(1), bea_arg(0xb), bea_arg(0));
    _DAT_00628268 = 0.0f;
    DAT_0062825c = 0.0f;
    DAT_00628258 = 1.0f;
    _DAT_0062826c = 1.0f;
    _DAT_00628278 = 0.0f;
    _DAT_0062827c = 0.0f;
    bea_vcall<uint32_t>(DAT_00888a50, 0xb0, DAT_00888a50,0x11,&DAT_00628258);
    FUN_00513820(bea_arg(2), bea_arg(0x18), bea_arg(2));
    FUN_00513820(bea_arg(2), bea_arg(0xb), bea_arg(0));
    uVar4 = FUN_00558690(bea_arg(*(void **)((int)this_ + 0x38)));
    FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(2), bea_arg(uVar4));
    _DAT_00628278 = bea_piece32(DAT_008c0294);
    _DAT_00628268 = 0.0f;
    DAT_0062825c = 0.0f;
    DAT_00628258 = bea_piece32(0.00390625);
    _DAT_0062826c = 0.00390625;
    _DAT_0062827c = bea_piece32(DAT_008c0298);
    bea_vcall<uint32_t>(DAT_00888a50, 0xb0, DAT_00888a50,0x12,&DAT_00628258);
    uVar4 = FUN_00558690(bea_arg(DAT_0067a7d0));
    FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(3), bea_arg(uVar4));
    FUN_00513820(bea_arg(3), bea_arg(0xb), bea_arg(0));
    FUN_00513820(bea_arg(3), bea_arg(0x18), bea_arg(2));
    fVar8 = bea_fcast<float10>(fcos(bea_fcast<float10>(1.0f)));
    _DAT_00628278 = bea_piece32(0.3);
    _DAT_0062827c = bea_piece32(0.3);
    fVar9 = bea_fcast<float10>(fsin(bea_fcast<float10>(1.0f)));
    DAT_00628258 = bea_piece32(bea_fcast<float>((fVar8 * bea_fcast<float10>(0.25f))));
    DAT_0062825c = bea_fcast<float>(fVar9) * 0.25f;
    _DAT_00628268 = -DAT_0062825c;
    _DAT_0062826c = bea_fcast<float>((fVar8 * bea_fcast<float10>(0.25f)));
    bea_vcall<uint32_t>(DAT_00888a50, 0xb0, DAT_00888a50,0x13,&DAT_00628258);
    FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(1));
    bea_vcall<uint32_t>(DAT_00888a50, 0x1a0, DAT_00888a50,*(undefined4 *)(*(int *)((int)this_ + 0x2c) + 8));
    FUN_00500320(bea_arg(*(void **)((int)this_ + 0x28)), bea_arg(0));
    cVar3 = FUN_00527d20(bea_arg(&DAT_008aa920));
    if (cVar3 == '\0') {
      FUN_00513820(bea_arg(1), bea_arg(1), bea_arg(1));
      FUN_00513820(bea_arg(1), bea_arg(4), bea_arg(1));
      FUN_00513820(bea_arg(2), bea_arg(1), bea_arg(1));
      FUN_00513820(bea_arg(2), bea_arg(4), bea_arg(1));
      FUN_00513820(bea_arg(3), bea_arg(1), bea_arg(1));
      FUN_00513820(bea_arg(3), bea_arg(4), bea_arg(1));
      FUN_00513820(bea_arg(0), bea_arg(0xb), bea_arg(0));
      FUN_00513820(bea_arg(1), bea_arg(0xb), bea_arg(1));
      FUN_00513820(bea_arg(2), bea_arg(0xb), bea_arg(2));
      FUN_00513820(bea_arg(3), bea_arg(0xb), bea_arg(3));
    }
    else {
      FUN_00527da0(bea_arg(&DAT_008aa920));
    }
  }
  cVar3 = FUN_00527cc0(bea_arg(&DAT_008aa920), bea_arg(1));
  if (cVar3 != '\0') {
    FUN_00513820(bea_arg(0), bea_arg(0x18), bea_arg(2));
    FUN_00513930(bea_arg(0), bea_arg(6), bea_arg(3));
    FUN_00513930(bea_arg(0), bea_arg(10), bea_arg(4));
    _DAT_00628268 = 0.0f;
    DAT_0062825c = 0.0f;
    DAT_00628258 = bea_piece32(0.001953125);
    _DAT_0062826c = 0.001953125;
    bea_vcall<uint32_t>(DAT_00888a50, 0xb0, DAT_00888a50,0x10,&DAT_00628258);
    FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0x30) + 8)));
    uVar4 = FUN_00558690(bea_arg(DAT_0067a7d0));
    FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(1), bea_arg(uVar4));
    FUN_00513af0(bea_arg(0));
    FUN_00513870(bea_arg(0), bea_arg(2), bea_arg(2));
    FUN_00513870(bea_arg(0), bea_arg(3), bea_arg(0));
    FUN_00513870(bea_arg(0), bea_arg(4), bea_arg(1));
    FUN_00513870(bea_arg(0), bea_arg(5), bea_arg(2));
    FUN_00513870(bea_arg(0), bea_arg(6), bea_arg(0));
    FUN_00513870(bea_arg(1), bea_arg(2), bea_arg(2));
    FUN_00513870(bea_arg(1), bea_arg(5), bea_arg(2));
    FUN_00513870(bea_arg(1), bea_arg(3), bea_arg(1));
    FUN_00513870(bea_arg(1), bea_arg(6), bea_arg(1));
    FUN_00551420(bea_arg(1));
    FUN_00513af0(bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(0x18), bea_arg(2));
    FUN_00513820(bea_arg(1), bea_arg(0xb), bea_arg(0));
    fVar8 = bea_fcast<float10>(fcos(bea_fcast<float10>(1.0f)));
    _DAT_00628278 = bea_piece32(0.3);
    _DAT_0062827c = bea_piece32(0.3);
    fVar9 = bea_fcast<float10>(fsin(bea_fcast<float10>(1.0f)));
    DAT_00628258 = bea_piece32(bea_fcast<float>((fVar8 * bea_fcast<float10>(0.7f))));
    DAT_0062825c = bea_fcast<float>(fVar9) * 0.7f;
    _DAT_00628268 = -DAT_0062825c;
    _DAT_0062826c = bea_fcast<float>((fVar8 * bea_fcast<float10>(0.7f)));
    bea_vcall<uint32_t>(DAT_00888a50, 0xb0, DAT_00888a50,0x11,&DAT_00628258);
    FUN_00500320(bea_arg(*(void **)((int)this_ + 0x28)), bea_arg(0));
    FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(1));
    bea_vcall<uint32_t>(DAT_00888a50, 0x1a0, DAT_00888a50,*(undefined4 *)(*(int *)((int)this_ + 0x2c) + 8));
    cVar3 = FUN_00527d20(bea_arg(&DAT_008aa920));
    if (cVar3 == '\0') {
      FUN_00513820(bea_arg(0), bea_arg(0xb), bea_arg(0));
      FUN_00513820(bea_arg(1), bea_arg(0xb), bea_arg(1));
      FUN_00513820(bea_arg(1), bea_arg(1), bea_arg(1));
      FUN_00513820(bea_arg(1), bea_arg(4), bea_arg(1));
    }
    else {
      FUN_00527da0(bea_arg(&DAT_008aa920));
    }
  }
  cVar3 = FUN_00527cc0(bea_arg(&DAT_008aa920), bea_arg(0));
  if (cVar3 != '\0') {
    FUN_00513af0(bea_arg(0));
    FUN_00513820(bea_arg(0), bea_arg(2), bea_arg(2));
    FUN_00513820(bea_arg(0), bea_arg(3), bea_arg(0));
    FUN_00513820(bea_arg(0), bea_arg(4), bea_arg(1));
    FUN_00513820(bea_arg(0), bea_arg(5), bea_arg(2));
    FUN_00513820(bea_arg(0), bea_arg(6), bea_arg(0));
    FUN_00513820(bea_arg(0), bea_arg(0x18), bea_arg(2));
    FUN_00513930(bea_arg(0), bea_arg(6), bea_arg(3));
    FUN_00513930(bea_arg(0), bea_arg(10), bea_arg(4));
    FUN_00513820(bea_arg(1), bea_arg(1), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(4), bea_arg(1));
    _DAT_00628268 = 0.0f;
    DAT_0062825c = 0.0f;
    DAT_00628258 = bea_piece32(0.001953125);
    _DAT_0062826c = 0.001953125;
    bea_vcall<uint32_t>(DAT_00888a50, 0xb0, DAT_00888a50,0x10,&DAT_00628258);
    FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0x30) + 8)));
    FUN_00500320(bea_arg(*(void **)((int)this_ + 0x28)), bea_arg(0));
    FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(1));
    bea_vcall<uint32_t>(DAT_00888a50, 0x1a0, DAT_00888a50,*(undefined4 *)(*(int *)((int)this_ + 0x2c) + 8));
    cVar3 = FUN_00527d20(bea_arg(&DAT_008aa920));
    if (cVar3 != '\0') {
      FUN_00527da0(bea_arg(&DAT_008aa920));
    }
  }
  _DAT_00628278 = 0.0f;
  _DAT_0062827c = 0.0f;
  if (2 < *(int *)((int)this_ + 0x34)) {
    _DAT_00628268 = 0.0f;
    DAT_0062825c = 0.0f;
    DAT_00628258 = bea_piece32(0.001953125);
    _DAT_0062826c = 0.001953125;
    bea_vcall<uint32_t>(DAT_00888a50, 0xb0, DAT_00888a50,0x10,&DAT_00628258);
    FUN_00513c70(bea_arg(&DAT_00855bb0), bea_arg(5), bea_arg(0), bea_arg(0x1081), bea_arg(0), bea_arg(*(int *)((int)this_ + 0x34) + -2));
  }
  param_1_f = 0.001953125;
  iStack_8 = 0;
  if (0 < piVar1[3]) {
    iStack_14 = 0;
    iStack_4 = 0;
    do {
      if (iStack_4 != 0) {
        FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(*(undefined4 *)(*piVar1 + -0x48 + iStack_4)));
      }
      _DAT_00628268 = 0.0f;
      DAT_0062825c = 0.0f;
      _DAT_0062826c = param_1_f;
      DAT_00628258 = bea_piece32(param_1_f);
      bea_vcall<uint32_t>(DAT_00888a50, 0xb0, DAT_00888a50,0x10,&DAT_00628258);
      puVar6 = *(ushort **)(iStack_14 + piVar1[2]);
      for (iVar5 = ((undefined4 *)(iStack_14 + piVar1[2]))[2]; ((iVar5 != 0)); iVar5 = iVar5 + -1) {
        iVar2 = piVar1[1] + (uint)*puVar6 * 0x14;
        this_00 = *(void **)(iVar2 + 0xc);
        iVar2 = DAT_009c64dc +
                (*(char *)(piVar1[1] + 0x10 + (uint)*puVar6 * 0x14) * 0x10 +
                (uint)*(byte *)(iVar2 + 0x11)) * 0x34;
        bea_vcall<uint32_t>(DAT_00888a50, 0x1a0, DAT_00888a50,*(undefined4 *)(iVar2 + 8));
        FUN_00500360(bea_arg(this_00), bea_arg(0));
        FUN_00513c70(bea_arg(&DAT_00855bb0), bea_arg(5), bea_arg(0), bea_arg(*(undefined4 *)((int)this_00 + 0x38)), bea_arg(0), bea_arg(*(undefined4 *)(iVar2 + 0x30)));
        puVar6 = puVar6 + 1;
      }
      iStack_8 = iStack_8 + 1;
      param_1_f = param_1_f + param_1_f;
      iStack_4 = iStack_4 + 0x50;
      iStack_14 = iStack_14 + 0xc;
    } while (((iStack_8 < piVar1[3])));
  }
  iVar5 = FUN_00527dd0(bea_arg(&DAT_008aa920));
  if (1 < iVar5) {
    FUN_00513820(bea_arg(2), bea_arg(0x18), bea_arg(0));
    FUN_00513820(bea_arg(3), bea_arg(0x18), bea_arg(0));
    FUN_00513820(bea_arg(2), bea_arg(0xb), bea_arg(2));
    FUN_00513820(bea_arg(3), bea_arg(0xb), bea_arg(3));
    FUN_00513930(bea_arg(2), bea_arg(2), bea_arg(1));
    FUN_00513820(bea_arg(2), bea_arg(2), bea_arg(2));
    FUN_00513820(bea_arg(2), bea_arg(3), bea_arg(1));
    FUN_00513820(bea_arg(2), bea_arg(5), bea_arg(2));
    FUN_00513820(bea_arg(2), bea_arg(6), bea_arg(1));
    FUN_00513820(bea_arg(2), bea_arg(4), bea_arg(1));
    FUN_00513820(bea_arg(2), bea_arg(1), bea_arg(1));
    FUN_00513820(bea_arg(3), bea_arg(4), bea_arg(1));
    FUN_00513820(bea_arg(3), bea_arg(1), bea_arg(1));
  }
  iVar5 = FUN_00527dd0(bea_arg(&DAT_008aa920));
  if (0 < iVar5) {
    FUN_00513820(bea_arg(1), bea_arg(0x18), bea_arg(0));
    FUN_00513820(bea_arg(1), bea_arg(0xb), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(1), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(4), bea_arg(1));
  }
  FUN_00513820(bea_arg(0), bea_arg(3), bea_arg(0));
  FUN_00513930(bea_arg(0), bea_arg(10), bea_arg(1));
  FUN_00513930(bea_arg(0), bea_arg(6), bea_arg(2));
  FUN_00513820(bea_arg(0), bea_arg(0x18), bea_arg(0));
  FUN_00513820(bea_arg(0), bea_arg(1), bea_arg(4));
  FUN_00513820(bea_arg(0), bea_arg(4), bea_arg(4));
  FUN_00513bc0(bea_arg(0x91), bea_arg(1));
  FUN_00513bc0(bea_arg(0x1b), bea_arg(1));
  if (DAT_0089d680 == '\0') {
    FUN_00546490(bea_arg(this_), bea_arg(0));
  }
  if (DAT_008aa94c == 0) {
    DAT_009c68ad = 1;
    DAT_009c6910 = 1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00545590, ap_00545590));
