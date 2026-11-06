// auto-ported from 00487d10_FUN_00487d10.c (FUN_00487d10, 883 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define _DAT_008aa4fc GLOBAL_AT(float, 0x008aa4fc)
#define _DAT_0067a62c GLOBAL_AT(float, 0x0067a62c)
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
#define DAT_009c68ad GLOBAL_AT(char, 0x009c68ad)
#define DAT_009c6910 GLOBAL_AT(char, 0x009c6910)
#define DAT_008a9d84 GLOBAL_AT(int, 0x008a9d84)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define _DAT_008aa4f8 GLOBAL_AT(float, 0x008aa4f8)
#define _DAT_0067a628 GLOBAL_AT(float, 0x0067a628)
#define DAT_0067a748 GLOBAL_AT(int, 0x0067a748)
typedef uint32_t (BEA_THISCALL* FUN_00414cb0_t)(uint32_t);
static const bea_guard<FUN_00414cb0_t> FUN_00414cb0 = {(FUN_00414cb0_t)0x00414cb0};
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};
typedef uint32_t (BEA_CDECL* FUN_00482090_t)(void);
static const bea_guard<FUN_00482090_t> FUN_00482090 = {(FUN_00482090_t)0x00482090};
typedef bool (BEA_THISCALL* FUN_0048c2d0_t)(uint32_t);
static const bea_guard<FUN_0048c2d0_t> FUN_0048c2d0 = {(FUN_0048c2d0_t)0x0048c2d0};
typedef uint32_t (BEA_THISCALL* FUN_004b82b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b82b0_t> FUN_004b82b0 = {(FUN_004b82b0_t)0x004b82b0};
typedef uint32_t (BEA_THISCALL* FUN_004b8850_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004b8850_t> FUN_004b8850 = {(FUN_004b8850_t)0x004b8850};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef undefined4 (BEA_CDECL* FUN_00515b00_t)(void);
static const bea_guard<FUN_00515b00_t> FUN_00515b00 = {(FUN_00515b00_t)0x00515b00};
typedef uint32_t (BEA_THISCALL* FUN_0053abe0_t)(uint32_t);
static const bea_guard<FUN_0053abe0_t> FUN_0053abe0 = {(FUN_0053abe0_t)0x0053abe0};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef uint32_t (BEA_CDECL* FUN_00555be0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00555be0_t> FUN_00555be0 = {(FUN_00555be0_t)0x00555be0};

static void BEA_THISCALL ap_00487d10(void * this_, int *param_1)
{
  float fVar1;
  int iVar2;
  float local_4;
  
  FUN_00482090();
  *(float *)this_ = (float)*param_1;
  *(float *)((int)this_ + 4) = (float)param_1[1];
  *(float *)((int)this_ + 8) = (float)param_1[2];
  *(float *)((int)this_ + 0xc) = (float)param_1[3];
  iVar2 = FUN_004725d0(bea_arg(&DAT_008a9a98));
  if (iVar2 == 0) {
    local_4 = (_DAT_008aa4fc + 16.0f) - _DAT_0067a62c;
    fVar1 = local_4;
  }
  else {
    iVar2 = FUN_00515b00();
    local_4 = (float)iVar2 * 0.5f + 78.0f;
    iVar2 = FUN_00515b00();
    fVar1 = (float)iVar2 * 0.5f + 78.0f;
  }
  fVar1 = fVar1 - 16.0f;
  DAT_009c68ac = 0;
  DAT_009c690d = 1;
  DAT_009c68ad = 0;
  DAT_009c6910 = 1;
  FUN_004b8850(bea_arg(DAT_008a9d84), bea_arg(7));
  FUN_00482090();
  FUN_00513bc0(bea_arg(0x13), bea_arg(5));
  FUN_00513bc0(bea_arg(0x14), bea_arg(6));
  FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
  FUN_00555be0(bea_arg((_DAT_008aa4f8 - 121.0f) - _DAT_0067a628), bea_arg(local_4), bea_arg(0x3a83126f), bea_arg(*(undefined4 *)((int)this_ + 0x120)), bea_arg(2), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x7fffffff), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
  FUN_00513bc0(bea_arg(0x13), bea_arg(1));
  FUN_00513bc0(bea_arg(0x14), bea_arg(2));
  FUN_00513bc0(bea_arg(0x17), bea_arg(8));
  FUN_00513bc0(bea_arg(0xf), bea_arg(1));
  FUN_00513bc0(bea_arg(0xe), bea_arg(1));
  FUN_00513bc0(bea_arg(7), bea_arg(1));
  FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
  FUN_00555be0(bea_arg(((_DAT_008aa4f8 - 137.0f) - _DAT_0067a628) + 64.0f), bea_arg(fVar1 - 64.0f), bea_arg(0x3ba3d70a), bea_arg(*(undefined4 *)((int)this_ + 300)), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0xffffffff), bea_arg(0x3fc00000), bea_arg(0x3fc00000), bea_arg(0xbe800000), bea_arg(0x3fa00000), bea_arg(0xbe800000), bea_arg(0x3fa00000));
  FUN_00482090();
  FUN_00513bc0(bea_arg(7), bea_arg(1));
  FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
  FUN_004b82b0(bea_arg(DAT_008a9d84), bea_arg((_DAT_008aa4f8 - 137.0f) - _DAT_0067a628), bea_arg(fVar1), bea_arg(7));
  FUN_00482090();
  FUN_00513bc0(bea_arg(0x13), bea_arg(2));
  FUN_00513bc0(bea_arg(0x14), bea_arg(2));
  FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
  FUN_00555be0(bea_arg((_DAT_008aa4f8 - 121.0f) - _DAT_0067a628), bea_arg(local_4), bea_arg(0x3a83126f), bea_arg(*(undefined4 *)((int)this_ + 0x11c)), bea_arg(2), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0xff6f8faf), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
  iVar2 = FUN_0048c2d0(bea_arg(DAT_0067a748));
  if (iVar2 == 0) {
    FUN_00414cb0(bea_arg(*(void **)((int)this_ + 0x30)));
    FUN_0053abe0(bea_arg(*(void **)((int)this_ + 0x30)));
  }
  else if (*(int *)((int)DAT_008a9d84 + 8) == 0) {
    FUN_00555be0(bea_arg((_DAT_008aa4f8 - 104.0f) - _DAT_0067a628), bea_arg(fVar1 - 32.0f), bea_arg(0x3a83126f), bea_arg(*(undefined4 *)((int)this_ + 0x1d4)), bea_arg(2), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0xffffffff), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
    return;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00487d10, ap_00487d10));
