// auto-ported from 004b9010_FUN_004b9010.c (FUN_004b9010, 985 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
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

static uint32_t BEA_THISCALL ap_004b9010(void * this_, int param_1, int param_2, int param_3, int param_4, float param_5)
{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int local_8;
  local_8 = (int)(longlong)ROUND(param_5 * 160.0f);
  if (param_3 < 0x40) {
    param_3 = 0x40;
  }
  if (param_4 < 0x40) {
    param_4 = 0x40;
  }
  FUN_00513bc0(bea_arg(0x17), bea_arg(8));
  FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
  fVar2 = (float)param_2;
  fVar3 = (float)param_1;
  local_8 = local_8 << 0x18;
  FUN_00555be0(bea_arg(fVar3), bea_arg(fVar2), bea_arg(0x3b83126f), bea_arg(*(undefined4 *)((int)this_ + 8)), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(local_8), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0), bea_arg(0x3f800000));
  fVar4 = ((float)param_3 + fVar3) - 32.0f;
  FUN_00555be0(bea_arg(fVar4), bea_arg(fVar2), bea_arg(0x3b83126f), bea_arg(*(undefined4 *)((int)this_ + 8)), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(local_8), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
  fVar5 = ((float)param_4 + fVar2) - 32.0f;
  FUN_00555be0(bea_arg(fVar4), bea_arg(fVar5), bea_arg(0x3b83126f), bea_arg(*(undefined4 *)((int)this_ + 8)), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0x40490fdb), bea_arg(local_8), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0), bea_arg(0x3f800000));
  FUN_00555be0(bea_arg(fVar3), bea_arg(fVar5), bea_arg(0x3b83126f), bea_arg(*(undefined4 *)((int)this_ + 8)), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0x40490fdb), bea_arg(local_8), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
  iVar1 = param_3 + -0x40;
  if (iVar1 != 0) {
    FUN_00555be0(bea_arg((float)(param_1 + 0x20)), bea_arg(fVar2), bea_arg(0x3b83126f), bea_arg(*(undefined4 *)((int)this_ + 0xc)), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(local_8), bea_arg((float)iVar1 * 0.0625f), bea_arg(0x40000000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
    FUN_00555be0(bea_arg((float)(param_1 + 0x20)), bea_arg((float)(param_2 + -0x20 + param_4)), bea_arg(0x3b83126f), bea_arg(*(undefined4 *)((int)this_ + 0xc)), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(local_8), bea_arg((float)iVar1 * 0.0625f), bea_arg(0x40000000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
  }
  iVar6 = param_4 + -0x40;
  if (iVar6 != 0) {
    FUN_00555be0(bea_arg(fVar3), bea_arg((float)(param_2 + 0x20)), bea_arg(0x3b83126f), bea_arg(*(undefined4 *)((int)this_ + 0xc)), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(local_8), bea_arg(0x40000000), bea_arg((float)iVar6 * 0.0625f), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
    FUN_00555be0(bea_arg((float)(param_1 + -0x20 + param_3)), bea_arg((float)(param_2 + 0x20)), bea_arg(0x3b83126f), bea_arg(*(undefined4 *)((int)this_ + 0xc)), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(local_8), bea_arg(0x40000000), bea_arg((float)iVar6 * 0.0625f), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
  }
  if ((iVar1 != 0) && (iVar6 != 0)) {
    FUN_00555be0(bea_arg((float)(param_1 + 0x20)), bea_arg((float)(param_2 + 0x20)), bea_arg(0x3b83126f), bea_arg(*(undefined4 *)((int)this_ + 0xc)), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(local_8), bea_arg((float)iVar1 * 0.0625f), bea_arg((float)iVar6 * 0.0625f), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
  }
  FUN_00513bc0(bea_arg(0x17), bea_arg(4));
  return FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b9010, ap_004b9010));
