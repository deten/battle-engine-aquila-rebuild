// auto-ported from 00486940_FUN_00486940.c (FUN_00486940, 1212 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define _DAT_008aa4fc GLOBAL_AT(float, 0x008aa4fc)
#define _DAT_0067a62c GLOBAL_AT(float, 0x0067a62c)
#define _DAT_008aa4f4 GLOBAL_AT(float, 0x008aa4f4)
#define DAT_008aa530 GLOBAL_AT(int, 0x008aa530)
#define DAT_008aa534 GLOBAL_AT(int, 0x008aa534)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define _DAT_008aa4f8 GLOBAL_AT(float, 0x008aa4f8)
#define _DAT_0067a628 GLOBAL_AT(float, 0x0067a628)
#define DAT_008a9e20 GLOBAL_AT(float, 0x008a9e20)
#define DAT_006245cc GLOBAL_AT(int, 0x006245cc)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
typedef uint32_t (BEA_THISCALL* FUN_0040c3a0_t)(uint32_t);
static const bea_guard<FUN_0040c3a0_t> FUN_0040c3a0 = {(FUN_0040c3a0_t)0x0040c3a0};
typedef float10 (BEA_THISCALL* FUN_0040c3c0_t)(uint32_t);
static const bea_guard<FUN_0040c3c0_t> FUN_0040c3c0 = {(FUN_0040c3c0_t)0x0040c3c0};
typedef uint32_t (BEA_THISCALL* FUN_0040c460_t)(uint32_t);
static const bea_guard<FUN_0040c460_t> FUN_0040c460 = {(FUN_0040c460_t)0x0040c460};
typedef uint32_t (BEA_THISCALL* FUN_0040c480_t)(uint32_t);
static const bea_guard<FUN_0040c480_t> FUN_0040c480 = {(FUN_0040c480_t)0x0040c480};
typedef uint32_t (BEA_STDCALL* FUN_00465710_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00465710_t> FUN_00465710 = {(FUN_00465710_t)0x00465710};
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};
typedef uint32_t (BEA_CDECL* FUN_00482090_t)(void);
static const bea_guard<FUN_00482090_t> FUN_00482090 = {(FUN_00482090_t)0x00482090};
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef undefined4 (BEA_CDECL* FUN_00515940_t)(void);
static const bea_guard<FUN_00515940_t> FUN_00515940 = {(FUN_00515940_t)0x00515940};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef undefined4 (BEA_CDECL* FUN_00515b00_t)(void);
static const bea_guard<FUN_00515b00_t> FUN_00515b00 = {(FUN_00515b00_t)0x00515b00};
typedef undefined4 (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef uint32_t (BEA_CDECL* FUN_00555be0_t)(float, float, float, void *, undefined4, undefined4, float, float, float, float, float, float, float, float, ...);
static const bea_guard<FUN_00555be0_t> FUN_00555be0 = {(FUN_00555be0_t)0x00555be0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static uint32_t BEA_THISCALL ap_00486940(void * this_)
{
  int iVar1;
  undefined4 uVar2;
  void *this_00;
  int iVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uVar14;
  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  float (&local_1c)[2] = *reinterpret_cast<float (*)[2]>(bea_frame_ + 0x20 - 0x1c);
  float &fStack_14 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x14);
  undefined8 &local_10 = *reinterpret_cast<undefined8 *>(bea_frame_ + 0x20 - 0x10);
  int (&aiStack_8)[2] = *reinterpret_cast<int (*)[2]>(bea_frame_ + 0x20 - 0x8);
  FUN_00482090();
  local_10 = (ulonglong)(*(uint32_t*)((char*)&local_10 + 4)) << 0x20;
  local_1c[0] = 1.0f;
  iVar1 = FUN_0040c480(bea_arg(*(void **)((int)this_ + 0x50)));
  if (iVar1 != 0) {
    iVar1 = FUN_004725d0(bea_arg(&DAT_008a9a98));
    if (iVar1 == 0) {
      fStack_14 = (_DAT_008aa4fc - 13.0f) - _DAT_0067a62c;
    }
    else if (*(int *)(*(int *)(*(int *)((int)this_ + 0x50) + 0x574) + 0x2c) == 1) {
      fStack_14 = _DAT_008aa4fc + 45.0f;
    }
    else {
      fStack_14 = _DAT_008aa4f4 + 82.0f;
      local_10 = CONCAT44((*(uint32_t*)((char*)&local_10 + 4)),0x3f800000);
      local_1c[0] = 0.0f;
    }
    if ((DAT_008aa530 != 0) && ((DAT_008aa530 == 1 || ((DAT_008aa530 == 2 && (DAT_008aa534 != 0)))))
       ) {
      FUN_00513bc0(bea_arg(0x13), bea_arg(5));
      FUN_00513bc0(bea_arg(0x14), bea_arg(6));
      FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
      uVar7 = (int)local_10;
      FUN_00555be0((((_DAT_008aa4f8 - 122.0f) + 9.0f) - 28.0f) - _DAT_0067a628,fStack_14,0x3a83126f,
                   *(undefined4 *)((int)this_ + 0x128),2,2,0x3f800000,0,0x3f000000,0x3f800000,
                   0x3f800000,0,0x3f800000,(int)local_10);
      fVar4 = (float10)FUN_0040c3c0(bea_arg(*(void **)((int)this_ + 0x50)));
      local_1c[0] = (float)fVar4;
      fVar5 = 1.0f - local_1c[0];
      (*(uint32_t*)((char*)&local_10 + 0)) = (int)(longlong)ROUND(local_1c[0] * 255.0f + fVar5 * 127.0f);
      iVar1 = (int)local_10 * 0x100;
      (*(uint32_t*)((char*)&local_10 + 0)) = (int)(longlong)ROUND(fVar5 * 255.0f + local_1c[0] * 63.0f);
      iVar1 = iVar1 + (int)local_10;
      local_10 = (longlong)ROUND(fVar5 * 63.0f + local_1c[0] * 63.0f);
      iVar3 = iVar1 * 0x100 + (int)local_10;
      iVar1 = FUN_0040c3a0(bea_arg(*(void **)((int)this_ + 0x50)));
      fVar5 = fStack_14;
      if (iVar1 == 0) {
        *(undefined4 *)((int)this_ + *(int *)((int)this_ + 0x58) * 4 + 0x1ec) = 0x3f4ccccd;
      }
      else {
        iVar1 = *(int *)((int)this_ + 0x58);
        if (*(float *)((int)this_ + iVar1 * 4 + 0x1dc) == *(float *)((int)this_ + iVar1 * 4 + 0x1ec))
        {
          if (*(int *)((int)this_ + iVar1 * 4 + 0x1ec) == 0x3f4ccccd) {
            *(undefined4 *)((int)this_ + iVar1 * 4 + 0x1ec) = 0x3dcccccd;
          }
          else {
            *(undefined4 *)((int)this_ + iVar1 * 4 + 0x1ec) = 0x3f4ccccd;
          }
        }
      }
      iVar1 = *(int *)((int)this_ + 0x58);
      fVar6 = DAT_008a9e20 * 0.1f + *(float *)((int)this_ + iVar1 * 4 + 0x1dc);
      if (*(float *)((int)this_ + iVar1 * 4 + 0x1ec) <= fVar6) {
        fVar6 = *(float *)((int)this_ + iVar1 * 4 + 0x1dc) - DAT_008a9e20 * 0.1f;
        if (fVar6 <= *(float *)((int)this_ + iVar1 * 4 + 0x1ec)) {
          *(undefined4 *)((int)this_ + iVar1 * 4 + 0x1dc) =
               *(undefined4 *)((int)this_ + iVar1 * 4 + 0x1ec);
        }
        else {
          *(float *)((int)this_ + iVar1 * 4 + 0x1dc) = fVar6;
        }
      }
      else {
        *(float *)((int)this_ + iVar1 * 4 + 0x1dc) = fVar6;
      }
      local_10 = (longlong)
                 ROUND(*(float *)((int)this_ + *(int *)((int)this_ + 0x58) * 4 + 0x1dc) * -255.0f);
      FUN_00555be0((((_DAT_008aa4f8 - 122.0f) + 9.0f) - 28.0f) - _DAT_0067a628,fStack_14,0x3a83126f,
                   *(undefined4 *)((int)this_ + 0x128),2,2,local_1c[0],0,
                   iVar3 + (int)local_10 * -0x1000000,0x3f800000,0x3f800000,0,0x3f800000,uVar7);
      FUN_00513bc0(bea_arg(0x13), bea_arg(2));
      FUN_00513bc0(bea_arg(0x14), bea_arg(2));
      FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
      FUN_00555be0((((_DAT_008aa4f8 - 122.0f) + 9.0f) - 28.0f) - _DAT_0067a628,fVar5,0x3a83126f,
                   *(undefined4 *)((int)this_ + 0x124),2,2,0x3f800000,0,0xffaf8f6f,0x3f800000,
                   0x3f800000,0,0x3f800000,uVar7);
    }
    FUN_00513bc0(bea_arg(0x13), bea_arg(5));
    FUN_00513bc0(bea_arg(0x14), bea_arg(6));
    return FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
  }
  iVar1 = FUN_004725d0(bea_arg(&DAT_008a9a98));
  if (iVar1 == 0) {
    iVar1 = FUN_00515b00();
    fStack_14 = ((float)iVar1 - _DAT_0067a62c) - 140.0f;
    (*(uint32_t*)((char*)&local_10 + 0)) = iVar1;
  }
  else if (*(int *)(*(int *)(*(int *)((int)this_ + 0x50) + 0x574) + 0x2c) == 1) {
    iVar1 = FUN_00515b00();
    fStack_14 = (float)iVar1 * 0.5f - 80.0f;
    (*(uint32_t*)((char*)&local_10 + 0)) = iVar1;
  }
  else {
    iVar1 = FUN_00515b00();
    fStack_14 = (float)iVar1 * 0.5f + 45.0f;
    (*(uint32_t*)((char*)&local_10 + 0)) = iVar1;
  }
  iVar1 = FUN_0040c460(bea_arg(*(void **)((int)this_ + 0x50)));
  FUN_0055de9b(local_1c,&DAT_006245cc,iVar1);
  uVar2 = FUN_004f7bf0(bea_arg(local_1c));
  piVar13 = aiStack_8;
  uVar7 = uVar2;
  this_00 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
  FUN_00540680(bea_arg(this_00), bea_arg(uVar7), bea_arg(piVar13));
  uVar14 = 0;
  uVar12 = 1;
  uVar11 = 0x40a00000;
  uVar10 = 0xff30ff30;
  uVar9 = 0x3f800000;
  uVar8 = 0x3f800000;
  uVar7 = 0x3c03126f;
  fVar6 = fStack_14;
  iVar1 = FUN_00515940();
  local_10 = CONCAT44((*(uint32_t*)((char*)&local_10 + 4)),iVar1);
  fVar5 = (((float)iVar1 - _DAT_0067a628) - 73.0f) - (float)aiStack_8[0] * 0.5f;
  FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
  return FUN_00465710(bea_arg(fVar5), bea_arg(fVar6), bea_arg(uVar7), bea_arg(uVar8), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar2), bea_arg(uVar11), bea_arg(uVar12), bea_arg(uVar14));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00486940, ap_00486940));
