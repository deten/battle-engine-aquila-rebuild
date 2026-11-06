// auto-ported from 00482210_FUN_00482210.c (FUN_00482210, 882 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef uint32_t (BEA_CDECL* FUN_00555be0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00555be0_t> FUN_00555be0 = {(FUN_00555be0_t)0x00555be0};

static void BEA_THISCALL ap_00482210(void * this_, float param_1, undefined4 param_2, float param_3, float param_4, float param_5)
{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int local_8;
  
  FUN_00513bc0(bea_arg(0x13), bea_arg(5));
  FUN_00513bc0(bea_arg(0x14), bea_arg(6));
  FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
  if (param_4 < 10.0f) {
    param_4 = 10.0f;
  }
  if (param_5 == 1.0f) {
    fVar1 = param_4 * 0.015625f;
    fVar2 = param_1 - param_3 * 0.5f;
    FUN_00555be0(bea_arg(fVar2), bea_arg(param_2), bea_arg(0x3c1374bc), bea_arg(*(undefined4 *)((int)this_ + 0x154)), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0xffffffff), bea_arg(fVar1), bea_arg(fVar1), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
    FUN_00555be0(bea_arg(fVar2), bea_arg(param_2), bea_arg(0x3c1374bc), bea_arg(*(undefined4 *)((int)this_ + 0x15c)), bea_arg(7), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x90000000), bea_arg(fVar1), bea_arg(fVar1), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
    fVar3 = param_3 * 0.5f + param_1;
    FUN_00555be0(bea_arg(fVar3), bea_arg(param_2), bea_arg(0x3c1374bc), bea_arg(*(undefined4 *)((int)this_ + 0x158)), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0xffffffff), bea_arg(fVar1), bea_arg(fVar1), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
    FUN_00555be0(bea_arg(fVar3), bea_arg(param_2), bea_arg(0x3c1374bc), bea_arg(*(undefined4 *)((int)this_ + 0x164)), bea_arg(8), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x90000000), bea_arg(fVar1), bea_arg(fVar1), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
    for (fVar3 = param_3 / (fVar1 * 64.0f); BEA_LOOP_GUARD((1.0f <= fVar3)); fVar3 = fVar3 - 1.0f) {
      FUN_00555be0(bea_arg(fVar2), bea_arg(param_2), bea_arg(0x3c1374bc), bea_arg(*(undefined4 *)((int)this_ + 0x160)), bea_arg(8), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x90000000), bea_arg(fVar1), bea_arg(fVar1), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
      fVar2 = fVar1 * 64.0f + fVar2;
    }
    if (0.0f < fVar3) {
      FUN_00555be0(bea_arg(fVar2), bea_arg(param_2), bea_arg(0x3c1374bc), bea_arg(*(undefined4 *)((int)this_ + 0x160)), bea_arg(8), bea_arg(1), bea_arg(fVar3), bea_arg(0), bea_arg(0x90000000), bea_arg(fVar1), bea_arg(fVar1), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
      return;
    }
  }
  else if ((0.5f < param_5) && (param_5 < 1.0f)) {
    fVar1 = param_4 * param_5 * 0.015625f;
    local_8 = (int)(longlong)ROUND(param_5 * 255.0f);
    if (local_8 < 0) {
      local_8 = 0;
    }
    else if (0xff < local_8) {
      local_8 = 0xff;
    }
    uVar4 = local_8 * 0xff0000 | 0xffffff;
    FUN_00555be0(bea_arg(param_1), bea_arg(param_2), bea_arg(0x3c1374bc), bea_arg(*(undefined4 *)((int)this_ + 0x154)), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(1.0f - param_5), bea_arg(uVar4), bea_arg(fVar1), bea_arg(fVar1), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
    FUN_00555be0(bea_arg(param_1), bea_arg(param_2), bea_arg(0x3c1374bc), bea_arg(*(undefined4 *)((int)this_ + 0x158)), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(1.0f - param_5), bea_arg(uVar4), bea_arg(fVar1), bea_arg(fVar1), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00482210, ap_00482210));
