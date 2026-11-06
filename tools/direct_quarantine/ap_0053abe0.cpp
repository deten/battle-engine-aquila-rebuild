// auto-ported from 0053abe0_FUN_0053abe0.c (FUN_0053abe0, 2185 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @hand-fixed 2026-10-28 check_fild: piVar1[7]/piVar1[8] are float slots (fld [edi+0x1c]/[edi+0x20] at 0x53b36b/0x53b374) -> bea_fcast<float>
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-28 check_dat_arith: (&DAT_008a9a98) + iVar7 (0x2a4..0x2b0 step 4) is a byte offset (mov edi,[ebp+0x8a9a98] at 0x53b30a) -> ((uint8_t *)&DAT_008a9a98)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char fStack_4c;
#define DAT_0085555c GLOBAL_AT(int, 0x0085555c)
#define DAT_0067a748 GLOBAL_AT(int, 0x0067a748)
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define _DAT_008aa4ec GLOBAL_AT(float, 0x008aa4ec)
#define _DAT_008aa4f4 GLOBAL_AT(float, 0x008aa4f4)
#define _DAT_0067a62c GLOBAL_AT(float, 0x0067a62c)
#define DAT_0089c810 GLOBAL_AT(int, 0x0089c810)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_008a9d84 GLOBAL_AT(int, 0x008a9d84)
#define _DAT_008aa4e8 GLOBAL_AT(float, 0x008aa4e8)
#define _DAT_008aa4f0 GLOBAL_AT(float, 0x008aa4f0)
#define _DAT_0067a628 GLOBAL_AT(float, 0x0067a628)
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};
typedef uint32_t (BEA_THISCALL* FUN_00500320_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00500320_t> FUN_00500320 = {(FUN_00500320_t)0x00500320};
typedef uint32_t (BEA_STDCALL* FUN_00513820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513820_t> FUN_00513820 = {(FUN_00513820_t)0x00513820};
typedef uint32_t (BEA_STDCALL* FUN_00513930_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513930_t> FUN_00513930 = {(FUN_00513930_t)0x00513930};
typedef uint32_t (BEA_THISCALL* FUN_00513a50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513a50_t> FUN_00513a50 = {(FUN_00513a50_t)0x00513a50};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_THISCALL* FUN_00513c70_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513c70_t> FUN_00513c70 = {(FUN_00513c70_t)0x00513c70};
typedef undefined4 (BEA_CDECL* FUN_00515b00_t)(void);
static const bea_guard<FUN_00515b00_t> FUN_00515b00 = {(FUN_00515b00_t)0x00515b00};
typedef undefined4 (BEA_THISCALL* FUN_00527cc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00527cc0_t> FUN_00527cc0 = {(FUN_00527cc0_t)0x00527cc0};
typedef undefined4 (BEA_THISCALL* FUN_00527d20_t)(uint32_t);
static const bea_guard<FUN_00527d20_t> FUN_00527d20 = {(FUN_00527d20_t)0x00527d20};
typedef uint32_t (BEA_THISCALL* FUN_00527da0_t)(uint32_t);
static const bea_guard<FUN_00527da0_t> FUN_00527da0 = {(FUN_00527da0_t)0x00527da0};
typedef uint32_t (BEA_THISCALL* FUN_0053aa40_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0053aa40_t> FUN_0053aa40 = {(FUN_0053aa40_t)0x0053aa40};
typedef uint32_t (BEA_THISCALL* FUN_0053b470_t)(uint32_t);
static const bea_guard<FUN_0053b470_t> FUN_0053b470 = {(FUN_0053b470_t)0x0053b470};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef uint32_t (BEA_CDECL* FUN_00551420_t)(uint32_t);
static const bea_guard<FUN_00551420_t> FUN_00551420 = {(FUN_00551420_t)0x00551420};
typedef uint32_t (BEA_CDECL* FUN_00551460_t)(uint32_t);
static const bea_guard<FUN_00551460_t> FUN_00551460 = {(FUN_00551460_t)0x00551460};
typedef uint32_t (BEA_CDECL* FUN_00551480_t)(uint32_t);
static const bea_guard<FUN_00551480_t> FUN_00551480 = {(FUN_00551480_t)0x00551480};
typedef uint32_t (BEA_CDECL* FUN_00555be0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00555be0_t> FUN_00555be0 = {(FUN_00555be0_t)0x00555be0};
typedef undefined4 (BEA_THISCALL* FUN_00558690_t)(uint32_t);
static const bea_guard<FUN_00558690_t> FUN_00558690 = {(FUN_00558690_t)0x00558690};

static void BEA_THISCALL ap_0053abe0(void * this_)
{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  float10 fVar10;

  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x4c);
  undefined1 (&auStack_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x50 - 0x30);
  uVar5 = DAT_0085555c;
  if (DAT_0067a748 != 0) {
    DAT_009c68ac = 0;
    DAT_009c690d = 1;
    FUN_00513bc0(bea_arg(7), bea_arg(0));
    iVar7 = FUN_004725d0(bea_arg(&DAT_008a9a98));
    if (iVar7 == 0) {
      fVar2 = (_DAT_008aa4ec + _DAT_008aa4f4) - _DAT_0067a62c;
    }
    else {
      iVar7 = FUN_00515b00();
      fVar2 = (float)iVar7 * 0.5f + 62.0f;
    }
    FUN_0053aa40(bea_arg(this_), bea_arg(fVar2), bea_arg(0));
    cVar6 = FUN_00527cc0(bea_arg(&DAT_0089c810), bea_arg(2));
    if (cVar6 != '\0') {
      DAT_009c68ac = 0;
      DAT_009c690d = 1;
      FUN_00513bc0(bea_arg(0x13), bea_arg(2));
      FUN_00513bc0(bea_arg(0x14), bea_arg(2));
      FUN_00513820(bea_arg(0), bea_arg(1), bea_arg(2));
      FUN_00513820(bea_arg(0), bea_arg(4), bea_arg(2));
      FUN_00513930(bea_arg(1), bea_arg(8), bea_arg(0x3f000000));
      FUN_00513820(bea_arg(1), bea_arg(2), bea_arg(1));
      FUN_00513820(bea_arg(1), bea_arg(5), bea_arg(1));
      FUN_00513820(bea_arg(1), bea_arg(3), bea_arg(2));
      FUN_00513820(bea_arg(1), bea_arg(1), bea_arg(0x12));
      FUN_00513820(bea_arg(1), bea_arg(4), bea_arg(2));
      FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(3));
      FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(3));
      FUN_00513930(bea_arg(1), bea_arg(1), bea_arg(3));
      FUN_00513930(bea_arg(1), bea_arg(2), bea_arg(3));
      FUN_00551420(bea_arg(1));
      uVar8 = FUN_00558690(bea_arg(*(void **)((int)this_ + 8)));
      FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(uVar8));
      uVar8 = FUN_00558690(bea_arg(*(void **)((int)this_ + 4)));
      FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(1), bea_arg(uVar8));
      FUN_00500320(bea_arg(*(void **)((int)this_ + 0x70)), bea_arg(0));
      FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(1));
      bea_vcall<uint32_t>(DAT_00888a50, 0x1a0, DAT_00888a50,*(undefined4 *)(*(int *)((int)this_ + 0x74) + 8));
      cVar6 = FUN_00527d20(bea_arg(&DAT_0089c810));
      if (cVar6 == '\0') {
        FUN_00513820(bea_arg(1), bea_arg(1), bea_arg(1));
        FUN_00513820(bea_arg(1), bea_arg(4), bea_arg(1));
      }
      else {
        FUN_00527da0(bea_arg(&DAT_0089c810));
        if (*(int *)(DAT_008a9d84 + 8) == 0) {
          FUN_00513c70(bea_arg(&DAT_00855bb0), bea_arg(4), bea_arg(0), bea_arg(*(undefined4 *)((int)this_ + 0x20)), bea_arg(0), bea_arg(*(undefined4 *)((int)this_ + 0x1c)));
        }
      }
    }
    cVar6 = FUN_00527cc0(bea_arg(&DAT_0089c810), bea_arg(1));
    if (cVar6 != '\0') {
      FUN_00513bc0(bea_arg(0x13), bea_arg(2));
      FUN_00513bc0(bea_arg(0x14), bea_arg(2));
      FUN_00513820(bea_arg(0), bea_arg(1), bea_arg(2));
      FUN_00513820(bea_arg(0), bea_arg(4), bea_arg(2));
      FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(3));
      FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(3));
      uVar8 = FUN_00558690(bea_arg(*(void **)((int)this_ + 8)));
      FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(uVar8));
      FUN_00500320(bea_arg(*(void **)((int)this_ + 0x70)), bea_arg(0));
      FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
      bea_vcall<uint32_t>(DAT_00888a50, 0x1a0, DAT_00888a50,*(undefined4 *)(*(int *)((int)this_ + 0x74) + 8));
      FUN_00513bc0(bea_arg(7), bea_arg(1));
      FUN_00513bc0(bea_arg(0x17), bea_arg(8));
      FUN_00513bc0(bea_arg(0xe), bea_arg(1));
      if (*(int *)(DAT_008a9d84 + 8) == 0) {
        FUN_00513c70(bea_arg(&DAT_00855bb0), bea_arg(4), bea_arg(0), bea_arg(*(undefined4 *)((int)this_ + 0x20)), bea_arg(0), bea_arg(*(undefined4 *)((int)this_ + 0x1c)));
      }
      FUN_00513930(bea_arg(0), bea_arg(8), bea_arg(0x3f000000));
      FUN_00551420(bea_arg(0));
      FUN_00513820(bea_arg(0), bea_arg(0xb), bea_arg(1));
      uVar8 = FUN_00558690(bea_arg(*(void **)((int)this_ + 4)));
      FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(uVar8));
      FUN_00513bc0(bea_arg(7), bea_arg(1));
      FUN_00513bc0(bea_arg(0x17), bea_arg(4));
      if (*(int *)(DAT_008a9d84 + 8) == 0) {
        FUN_00513c70(bea_arg(&DAT_00855bb0), bea_arg(4), bea_arg(0), bea_arg(*(undefined4 *)((int)this_ + 0x20)), bea_arg(0), bea_arg(*(undefined4 *)((int)this_ + 0x1c)));
      }
      cVar6 = FUN_00527d20(bea_arg(&DAT_0089c810));
      if (cVar6 != '\0') {
        FUN_00527da0(bea_arg(&DAT_0089c810));
      }
      FUN_00513820(bea_arg(0), bea_arg(0xb), bea_arg(0));
    }
    cVar6 = FUN_00527cc0(bea_arg(&DAT_0089c810), bea_arg(0));
    if (cVar6 != '\0') {
      FUN_00513bc0(bea_arg(0x13), bea_arg(2));
      FUN_00513bc0(bea_arg(0x14), bea_arg(2));
      FUN_00513820(bea_arg(0), bea_arg(1), bea_arg(2));
      FUN_00513820(bea_arg(0), bea_arg(4), bea_arg(2));
      FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(3));
      FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(3));
      uVar8 = FUN_00558690(bea_arg(*(void **)((int)this_ + 8)));
      FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(uVar8));
      FUN_00500320(bea_arg(*(void **)((int)this_ + 0x70)), bea_arg(0));
      FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
      bea_vcall<uint32_t>(DAT_00888a50, 0x1a0, DAT_00888a50,*(undefined4 *)(*(int *)((int)this_ + 0x74) + 8));
      FUN_00513bc0(bea_arg(7), bea_arg(1));
      FUN_00513bc0(bea_arg(0x17), bea_arg(8));
      FUN_00513bc0(bea_arg(0xe), bea_arg(1));
      if (*(int *)(DAT_008a9d84 + 8) == 0) {
        FUN_00513c70(bea_arg(&DAT_00855bb0), bea_arg(4), bea_arg(0), bea_arg(*(undefined4 *)((int)this_ + 0x20)), bea_arg(0), bea_arg(*(undefined4 *)((int)this_ + 0x1c)));
      }
      FUN_00551480(bea_arg(0));
      FUN_0053aa40(bea_arg(this_), bea_arg(fVar2), bea_arg(1));
      uVar8 = FUN_00558690(bea_arg(*(void **)((int)this_ + 4)));
      FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(uVar8));
      FUN_00513bc0(bea_arg(7), bea_arg(1));
      FUN_00513bc0(bea_arg(0x17), bea_arg(4));
      if (*(int *)(DAT_008a9d84 + 8) == 0) {
        FUN_00513c70(bea_arg(&DAT_00855bb0), bea_arg(4), bea_arg(0), bea_arg(*(undefined4 *)((int)this_ + 0x20)), bea_arg(0), bea_arg(*(undefined4 *)((int)this_ + 0x1c)));
      }
      cVar6 = FUN_00527d20(bea_arg(&DAT_0089c810));
      if (cVar6 != '\0') {
        FUN_00527da0(bea_arg(&DAT_0089c810));
      }
      FUN_00551420(bea_arg(0));
    }
    FUN_00513bc0(bea_arg(7), bea_arg(uVar5));
    FUN_00513820(bea_arg(1), bea_arg(5), bea_arg(2));
    FUN_00513820(bea_arg(1), bea_arg(3), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(1), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(4), bea_arg(1));
    FUN_00513820(bea_arg(1), bea_arg(2), bea_arg(2));
    FUN_00513930(bea_arg(1), bea_arg(8), bea_arg(0));
    FUN_00513930(bea_arg(1), bea_arg(1), bea_arg(1));
    FUN_00513930(bea_arg(1), bea_arg(2), bea_arg(1));
    FUN_00551460(bea_arg(0));
    FUN_00513820(bea_arg(0), bea_arg(1), bea_arg(4));
    FUN_00513820(bea_arg(0), bea_arg(4), bea_arg(4));
    FUN_00513bc0(bea_arg(0x13), bea_arg(5));
    FUN_00513bc0(bea_arg(0x14), bea_arg(6));
    FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(1));
    FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(1));
    if (*(int *)(DAT_008a9d84 + 8) == 0) {
      FUN_0053b470(bea_arg(this_));
    }
    FUN_00513820(bea_arg(0), bea_arg(4), bea_arg(4));
    FUN_00513bc0(bea_arg(0x13), bea_arg(5));
    FUN_00513bc0(bea_arg(0x14), bea_arg(6));
    FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(1));
    FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(1));
    FUN_00513930(bea_arg(1), bea_arg(1), bea_arg(1));
    FUN_00513930(bea_arg(1), bea_arg(2), bea_arg(1));
    FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
    if (*(int *)(DAT_008a9d84 + 8) == 0) {
      iVar7 = 0x2a4;
      do {
        iVar9 = *(int *)(((uint8_t *)&DAT_008a9a98) + iVar7);
        if (iVar9 != 0) {
          FUN_00513bc0(bea_arg(0x17), bea_arg(4));
          piVar1 = *(int **)(iVar9 + 0x1c);
          if (piVar1 != (int *)0x0) {
            iVar9 = bea_vcall<uint32_t>(piVar1, 0x7c, auStack_30);
            fVar10 = (float10)fpatan((float10)*(float *)(iVar9 + 0x10),
                                     (float10)*(float *)(iVar9 + 0x14));
            fVar3 = (bea_fcast<float>(piVar1[7]) * *(float *)((int)this_ + 0x48) + *(float *)((int)this_ + 0x50))
                    - 44.0f;
            fStack_4c = (bea_fcast<float>(piVar1[8]) * *(float *)((int)this_ + 0x4c) +
                        *(float *)((int)this_ + 0x54)) - 44.0f;
            fVar4 = 44.0f / SQRT(fVar3 * fVar3 + fStack_4c * fStack_4c);
            if (fVar4 < 1.0f) {
              fVar3 = fVar4 * fVar3;
              fStack_4c = fVar4 * fStack_4c;
            }
            FUN_00555be0(bea_arg((((_DAT_008aa4e8 + _DAT_008aa4f0) - 128.0f) - _DAT_0067a628) + fVar3 + 44.0f
                         + 12.0f), bea_arg((fVar2 - 18.0f) - (fStack_4c + 44.0f)), bea_arg(0x3be56042), bea_arg(*(undefined4 *)((int)this_ + 0x14)), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg((float)-fVar10), bea_arg(0xffffffff), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
          }
        }
        iVar7 = iVar7 + 4;
      } while (BEA_LOOP_GUARD((iVar7 < 0x2b4)));
    }
    DAT_009c68ac = 1;
    DAT_009c690d = 1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053abe0, ap_0053abe0));
