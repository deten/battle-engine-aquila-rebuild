// auto-ported from 004858d0_FUN_004858d0.c (FUN_004858d0, 1140 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
// @hand-fixed 2026-10-28: sprite-draw calls in 15-dword form, float constants as floats (tools/menu_test.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define _DAT_008aa4fc GLOBAL_AT(float, 0x008aa4fc)
#define _DAT_0067a62c GLOBAL_AT(float, 0x0067a62c)
#define _DAT_0067a628 GLOBAL_AT(float, 0x0067a628)
#define _DAT_008aa4f0 GLOBAL_AT(float, 0x008aa4f0)
#define DAT_008aa52c GLOBAL_AT(int, 0x008aa52c)
#define DAT_008aa534 GLOBAL_AT(int, 0x008aa534)
#define DAT_008aa530 GLOBAL_AT(int, 0x008aa530)
typedef float10 (BEA_THISCALL* FUN_0040c4a0_t)(uint32_t);
static const bea_guard<FUN_0040c4a0_t> FUN_0040c4a0 = {(FUN_0040c4a0_t)0x0040c4a0};
typedef uint32_t (BEA_THISCALL* FUN_0040d660_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0040d660_t> FUN_0040d660 = {(FUN_0040d660_t)0x0040d660};
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};
typedef uint32_t (BEA_CDECL* FUN_00482090_t)(void);
static const bea_guard<FUN_00482090_t> FUN_00482090 = {(FUN_00482090_t)0x00482090};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
// 15 dwords (conv_overrides.csv); the old 14 + varargs prototype dropped the trailing 1.0f and
// turned float bit patterns (0x43a00000) into their integer values (menu tours, 2026-10-28)
typedef uint32_t (BEA_CDECL* FUN_00555be0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00555be0_t> FUN_00555be0 = {(FUN_00555be0_t)0x00555be0};

static uint32_t BEA_THISCALL ap_004858d0(void * this_)
{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x10 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x10 - 0x8);
  FUN_00482090();
  FUN_00513bc0(bea_arg(0x17), bea_arg(8));
  FUN_00513bc0(bea_arg(0x13), bea_arg(5));
  FUN_00513bc0(bea_arg(0x14), bea_arg(6));
  FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
  iVar3 = FUN_004725d0(bea_arg(&DAT_008a9a98));
  if ((iVar3 == 0) ||
     (fVar1 = _DAT_008aa4fc + 16.0f,
     *(int *)(*(int *)(*(int *)((int)this_ + 0x50) + 0x574) + 0x2c) != 1)) {
    fVar1 = (_DAT_008aa4fc + 16.0f) - _DAT_0067a62c;
  }
  FUN_00555be0(bea_arg(_DAT_0067a628 + _DAT_008aa4f0 + 17.0f), bea_arg(fVar1), bea_arg(0x3a83126f), bea_arg(*(undefined4 *)((int)this_ + 0x14c)), bea_arg(2), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x6fffffff), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
  if ((DAT_008aa52c != 0) && ((DAT_008aa52c == 1 || ((DAT_008aa52c == 2 && (DAT_008aa534 != 0))))))
  {
    FUN_00513bc0(bea_arg(0x13), bea_arg(2));
    FUN_00513bc0(bea_arg(0x14), bea_arg(2));
    FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
    FUN_00555be0(bea_arg(_DAT_0067a628 + _DAT_008aa4f0 + 17.0f), bea_arg(fVar1), bea_arg(0x3a83126f), bea_arg(*(undefined4 *)((int)this_ + 0x118)), bea_arg(2), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0xff6f8faf), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
  }
  if ((DAT_008aa530 != 0) && ((DAT_008aa530 == 1 || ((DAT_008aa530 == 2 && (DAT_008aa534 != 0))))))
  {
    iVar3 = FUN_004725d0(bea_arg(&DAT_008a9a98));
    if ((iVar3 == 0) ||
       (fVar1 = _DAT_008aa4fc - 13.0f,
       *(int *)(*(int *)(*(int *)((int)this_ + 0x50) + 0x574) + 0x2c) != 1)) {
      fVar1 = (_DAT_008aa4fc - 13.0f) - _DAT_0067a62c;
    }
    FUN_00513bc0(bea_arg(0x13), bea_arg(5));
    FUN_00513bc0(bea_arg(0x14), bea_arg(6));
    FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
    FUN_00555be0(bea_arg(_DAT_0067a628 + _DAT_008aa4f0 + 9.0f), bea_arg(fVar1), bea_arg(0x3a83126f), bea_arg(*(undefined4 *)((int)this_ + 0x128)), bea_arg(2), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f000000), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
    fVar5 = bea_fcast<float10>(FUN_0040c4a0(bea_arg(*(void **)((int)this_ + 0x50))));
    FUN_00555be0(bea_arg(_DAT_0067a628 + _DAT_008aa4f0 + 9.0f), bea_arg(fVar1), bea_arg(0x3a83126f), bea_arg(*(undefined4 *)((int)this_ + 0x128)), bea_arg(2), bea_arg(1), bea_arg(bea_fcast<float>(fVar5)), bea_arg(0), bea_arg(0x7f7fff3f), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
    FUN_00513bc0(bea_arg(0x13), bea_arg(2));
    FUN_00513bc0(bea_arg(0x14), bea_arg(2));
    FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
    FUN_00555be0(bea_arg(_DAT_0067a628 + _DAT_008aa4f0 + 9.0f), bea_arg(fVar1), bea_arg(0x3a83126f), bea_arg(*(undefined4 *)((int)this_ + 0x124)), bea_arg(2), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0xffaf8f6f), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
  }
  FUN_00513bc0(bea_arg(0x13), bea_arg(5));
  FUN_00513bc0(bea_arg(0x14), bea_arg(6));
  FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
  pfVar4 = (float *)FUN_0040d660(bea_arg(*(void **)((int)this_ + 0x50)), bea_arg(&local_c));
  fVar1 = *pfVar4;
  fVar5 = bea_fcast<float10>(fsin(bea_fcast<float10>(fVar1)));
  fVar6 = bea_fcast<float10>(fcos(bea_fcast<float10>(fVar1)));
  local_c = bea_fcast<float>((fVar5 * bea_fcast<float10>(45.0f)));
  local_8 = bea_fcast<float>(fVar6) * -45.0f;
  FUN_00513bc0(bea_arg(0x17), bea_arg(8));
  FUN_00513bc0(bea_arg(7), bea_arg(0));
  iVar3 = FUN_004725d0(bea_arg(&DAT_008a9a98));
  if ((iVar3 == 0) ||
     (fVar2 = _DAT_008aa4fc + 16.0f,
     *(int *)(*(int *)(*(int *)((int)this_ + 0x50) + 0x574) + 0x2c) != 1)) {
    fVar2 = (_DAT_008aa4fc + 16.0f) - _DAT_0067a62c;
  }
  return FUN_00555be0(bea_arg(_DAT_0067a628 + _DAT_008aa4f0 + 17.0f + 48.0f + local_c), bea_arg((fVar2 - 128.0f) + 48.0f + local_8), bea_arg(0x3a83126f), bea_arg(*(undefined4 *)((int)this_ + 0x148)), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(fVar1), bea_arg(0xff5f7fff), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004858d0, ap_004858d0));
