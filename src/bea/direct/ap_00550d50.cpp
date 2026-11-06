// auto-ported from 00550d50_FUN_00550d50.c (FUN_00550d50, 1186 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (60 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_0089d680 GLOBAL_AT(char, 0x0089d680)
#define DAT_0063c108 GLOBAL_AT(char, 0x0063c108)
#define DAT_00854e6d GLOBAL_AT(char, 0x00854e6d)
#define DAT_00854e6c GLOBAL_AT(char, 0x00854e6c)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define _DAT_009c742c GLOBAL_AT(float, 0x009c742c)
typedef uint32_t (BEA_THISCALL* FUN_00501cd0_t)(uint32_t);
static const bea_guard<FUN_00501cd0_t> FUN_00501cd0 = {(FUN_00501cd0_t)0x00501cd0};
typedef uint32_t (BEA_THISCALL* FUN_00502290_t)(uint32_t);
static const bea_guard<FUN_00502290_t> FUN_00502290 = {(FUN_00502290_t)0x00502290};
typedef uint32_t (BEA_CDECL* FUN_00503ac0_t)(void);
static const bea_guard<FUN_00503ac0_t> FUN_00503ac0 = {(FUN_00503ac0_t)0x00503ac0};
typedef uint32_t (BEA_STDCALL* FUN_00513820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513820_t> FUN_00513820 = {(FUN_00513820_t)0x00513820};
typedef uint32_t (BEA_STDCALL* FUN_00513870_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513870_t> FUN_00513870 = {(FUN_00513870_t)0x00513870};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef undefined4 (BEA_THISCALL* FUN_00513ca0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513ca0_t> FUN_00513ca0 = {(FUN_00513ca0_t)0x00513ca0};
typedef uint32_t (BEA_THISCALL* FUN_00513e20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513e20_t> FUN_00513e20 = {(FUN_00513e20_t)0x00513e20};
typedef uint32_t (BEA_THISCALL* FUN_00513ec0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513ec0_t> FUN_00513ec0 = {(FUN_00513ec0_t)0x00513ec0};
typedef uint32_t (BEA_STDCALL* FUN_00514030_t)(uint32_t);
static const bea_guard<FUN_00514030_t> FUN_00514030 = {(FUN_00514030_t)0x00514030};
typedef uint32_t (BEA_THISCALL* FUN_00551200_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00551200_t> FUN_00551200 = {(FUN_00551200_t)0x00551200};

static void BEA_THISCALL ap_00550d50(void * this_, undefined4 param_1, undefined4 param_2)
{
  uint uVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  undefined4 (&auStack_40)[14] = *reinterpret_cast<undefined4 (*)[14]>(bea_frame_ + 0x40 - 0x40);
  float &fStack_8 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x8);
  if (*(char *)((int)this_ + 0x34d) != '\0') {
    if (DAT_0089d680 != '\0') {
      *(undefined1 *)((int)this_ + 0x2ec) = 0;
    }
    FUN_00513bc0(bea_arg(0x1c), bea_arg((uint)*(byte *)((int)this_ + 0x2ec)));
    *(undefined1 *)((int)this_ + 0x34d) = 0;
  }
  if (*(char *)((int)this_ + 0x350) != '\0') {
    FUN_00513bc0(bea_arg(0x89), bea_arg((uint)*(byte *)((int)this_ + 0x2ed)));
    *(undefined1 *)((int)this_ + 0x350) = 0;
  }
  if (*(int *)((int)this_ + 0xe54) != 0) {
    FUN_00514030(bea_arg(1));
  }
  if (*(void **)((int)this_ + 0xe54) != (void *)0x0) {
    FUN_00502290(bea_arg(*(void **)((int)this_ + 0xe54)));
    *(undefined4 *)((int)this_ + 0xe54) = 0;
  }
  if (*(int *)((int)this_ + 0xe58) == 0) {
    if (((char)param_1 != '\0') && (DAT_0063c108 != '\0')) {
      *(undefined4 *)((int)this_ + 0xe54) = 0;
      bVar7 = *(int *)((int)this_ + 0xe30) != 0;
      bVar8 = *(char *)((int)this_ + 0x2f5) != '\0';
      bVar9 = *(char *)((int)this_ + 0x308) != '\0';
      bVar4 = bVar9 || (*(char *)((int)this_ + 0x2f6) != '\0' ||
                       (bVar8 || (bVar7 || (*(char *)((int)this_ + 0x2f4) != '\0' ||
                                           (*(int *)((int)this_ + 800) != 0 ||
                                           (*(char *)((int)this_ + 0x328) != '\0' ||
                                           DAT_00854e6d != '\0'))))));
      iVar2 = 0;
      piVar3 = this_;
      do {
        if ((*(char *)(iVar2 + 0x2e0 + (int)this_) != '\0') && (*piVar3 == 2)) {
          bVar4 = true;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 0x17;
      } while (BEA_LOOP_GUARD((iVar2 < 8)));
      if (bVar4) {
        iVar2 = FUN_00503ac0();
        *(int *)((int)this_ + 0xe54) = iVar2;
        if ((bVar9 || (bVar8 || bVar7)) && (iVar2 == 0)) {
        }
      }
      if (*(int *)((int)this_ + 0xe54) != 0) {
        if (DAT_00854e6c != '\0') {
          FUN_00513ca0(bea_arg(&DAT_00855bb0), bea_arg(1));
        }
        FUN_00514030(bea_arg(0));
        FUN_00513870(bea_arg(0), bea_arg(0xb), bea_arg(0));
        FUN_00513870(bea_arg(1), bea_arg(0xb), bea_arg(1));
        FUN_00513870(bea_arg(2), bea_arg(0xb), bea_arg(2));
        FUN_00513870(bea_arg(3), bea_arg(0xb), bea_arg(3));
        FUN_00513870(bea_arg(0), bea_arg(0x18), bea_arg(0));
        FUN_00513870(bea_arg(1), bea_arg(0x18), bea_arg(0));
        FUN_00513870(bea_arg(2), bea_arg(0x18), bea_arg(0));
        FUN_00513870(bea_arg(3), bea_arg(0x18), bea_arg(0));
        FUN_00501cd0(bea_arg(*(void **)((int)this_ + 0xe54)));
        FUN_00513e20(bea_arg(&DAT_00855bb0), bea_arg(*(undefined4 *)((int)this_ + 0xe54)));
        return;
      }
    }
    if (DAT_00854e6c != '\0') {
      FUN_00513ca0(bea_arg(&DAT_00855bb0), bea_arg(0));
    }
    if (*(char *)((int)this_ + 0xe28) != '\0') {
      bea_vcall<uint32_t>(DAT_00888a50, 0xb0, DAT_00888a50,0x100,(int)this_ + 0x354);
      *(undefined1 *)((int)this_ + 0xe28) = 0;
    }
    if (*(char *)((int)this_ + 0xe29) != '\0') {
      bea_vcall<uint32_t>(DAT_00888a50, 0xb0, DAT_00888a50,2,(int)this_ + 0x394);
      *(undefined1 *)((int)this_ + 0xe29) = 0;
    }
    if (*(char *)((int)this_ + 0xe2a) != '\0') {
      uVar1 = *(uint *)((int)this_ + 0xe24);
      puVar5 = (undefined4 *)((int)this_ + 0x3d4);
      puVar6 = auStack_40;
      for (iVar2 = 0x10; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      fStack_8 = fStack_8 - (float)uVar1 * _DAT_009c742c;
      bea_vcall<uint32_t>(DAT_00888a50, 0xb0, DAT_00888a50,3,auStack_40);
      *(undefined1 *)((int)this_ + 0xe2a) = 0;
    }
    iVar2 = 0;
    do {
      if (*(char *)(iVar2 + 0x33c + (int)this_) != '\0') {
        FUN_00551200(bea_arg(this_), bea_arg(iVar2), bea_arg(0));
        *(undefined1 *)(iVar2 + 0x33c + (int)this_) = 0;
      }
      if (*(char *)(iVar2 + 0x344 + (int)this_) != '\0') {
        bea_vcall<uint32_t>(DAT_00888a50, 0xd4, DAT_00888a50,iVar2,(uint)*(byte *)(iVar2 + 0x2e0 + (int)this_));
        *(undefined1 *)(iVar2 + 0x344 + (int)this_) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (BEA_LOOP_GUARD((iVar2 < 8)));
    if (*(char *)((int)this_ + 0x34c) != '\0') {
      FUN_00513bc0(bea_arg(0x8b), bea_arg(*(undefined4 *)((int)this_ + 0x2e8)));
      *(undefined1 *)((int)this_ + 0x34c) = 0;
    }
    if (*(char *)((int)this_ + 0xe2b) != '\0') {
      FUN_00513bc0(bea_arg(0x24), bea_arg(*(undefined4 *)((int)this_ + 0xe1c)));
      *(undefined1 *)((int)this_ + 0xe2b) = 0;
    }
    if (*(char *)((int)this_ + 0xe2c) != '\0') {
      FUN_00513bc0(bea_arg(0x25), bea_arg(*(undefined4 *)((int)this_ + 0xe20)));
      *(undefined1 *)((int)this_ + 0xe2c) = 0;
    }
    if (*(char *)((int)this_ + 0xe2d) != '\0') {
      FUN_00513bc0(bea_arg(0x26), bea_arg(*(undefined4 *)((int)this_ + 0x2f0)));
      *(undefined1 *)((int)this_ + 0xe2d) = 0;
    }
    if (*(char *)((int)this_ + 0xe5c) != '\0') {
      if (*(int *)((int)this_ + 0xe14) != 0) {
        FUN_00513ec0(bea_arg(&DAT_00855bb0), bea_arg(*(int *)((int)this_ + 0xe14)));
      }
      *(undefined1 *)((int)this_ + 0xe5c) = 0;
    }
    *(undefined1 *)((int)this_ + 0x34f) = 0;
    return;
  }
  if (DAT_00854e6c != '\0') {
    FUN_00513ca0(bea_arg(&DAT_00855bb0), bea_arg(1));
  }
  FUN_00513820(bea_arg(0), bea_arg(0xb), bea_arg(0));
  FUN_00513820(bea_arg(1), bea_arg(0xb), bea_arg(1));
  FUN_00513820(bea_arg(2), bea_arg(0xb), bea_arg(2));
  FUN_00513820(bea_arg(3), bea_arg(0xb), bea_arg(3));
  FUN_00513820(bea_arg(0), bea_arg(0x18), bea_arg(0));
  FUN_00513820(bea_arg(1), bea_arg(0x18), bea_arg(0));
  FUN_00513820(bea_arg(2), bea_arg(0x18), bea_arg(0));
  FUN_00513820(bea_arg(3), bea_arg(0x18), bea_arg(0));
  FUN_00513e20(bea_arg(&DAT_00855bb0), bea_arg(*(undefined4 *)((int)this_ + 0xe58)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00550d50, ap_00550d50));
