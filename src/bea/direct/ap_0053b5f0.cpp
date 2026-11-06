// auto-ported from 0053b5f0_FUN_0053b5f0.c (FUN_0053b5f0, 534 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-28 check_fild: the double argument of FUN_0055dfe7 is the float copy of DAT_00672fd0 (fld [esp+0xc]; fstp qword at 0x53b640) -> (double)fVar1 instead of (double)DAT_00672fd0 (int-typed)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_008a9d84 GLOBAL_AT(int, 0x008a9d84)
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define _DAT_008aa4ec GLOBAL_AT(float, 0x008aa4ec)
#define _DAT_008aa4f4 GLOBAL_AT(float, 0x008aa4f4)
#define _DAT_0067a62c GLOBAL_AT(float, 0x0067a62c)
#define _DAT_008aa4e8 GLOBAL_AT(float, 0x008aa4e8)
#define _DAT_008aa4f0 GLOBAL_AT(float, 0x008aa4f0)
#define _DAT_0067a628 GLOBAL_AT(float, 0x0067a628)
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};
typedef undefined4 (BEA_THISCALL* FUN_00500390_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500390_t> FUN_00500390 = {(FUN_00500390_t)0x00500390};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef undefined4 (BEA_CDECL* FUN_00515b00_t)(void);
static const bea_guard<FUN_00515b00_t> FUN_00515b00 = {(FUN_00515b00_t)0x00515b00};
typedef float10 (BEA_CDECL* FUN_0055dfe7_t)(double);
static const bea_guard<FUN_0055dfe7_t> FUN_0055dfe7 = {(FUN_0055dfe7_t)0x0055dfe7};

static void BEA_THISCALL ap_0053b5f0(void * this_, float param_1, float param_2, uint param_3)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  undefined4 local_8;
  
  if (*(int *)(DAT_008a9d84 + 8) == 0) {
    if ((*(int *)((int)this_ + 0x5c) == 0) && (*(void **)((int)this_ + 0x78) != (void *)0x0)) {
      FUN_00500390(bea_arg(*(void **)((int)this_ + 0x78)), bea_arg(0), bea_arg(0), bea_arg((int)this_ + 0x7c), bea_arg(0x2800));
      *(undefined4 *)((int)this_ + 0x60) = 0;
      *(undefined4 *)((int)this_ + 0x5c) = 1;
      fVar1 = bea_fcast<float>(DAT_00672fd0);
      fVar9 = (float10)FUN_0055dfe7((double)fVar1);
      fVar9 = (float10)fcos(((float10)fVar1 - fVar9) * (float10)6.2831855f);
      local_8 = (undefined4)(longlong)ROUND((fVar9 + (float10)1.0f) * (float10)96.0f);
      *(undefined4 *)((int)this_ + 0x58) = local_8;
    }
    if (*(int *)((int)this_ + 0x60) != 500) {
      iVar5 = *(int *)((int)this_ + 0x58);
      iVar8 = iVar5 * 0x10000 + (param_3 & 0xff0000);
      if (0xff0000 < iVar8) {
        iVar8 = 0xff0000;
      }
      iVar7 = (param_3 & 0xff00) + iVar5 * 0x100;
      if (0xff00 < iVar7) {
        iVar7 = 0xff00;
      }
      iVar5 = (param_3 & 0xff) + iVar5;
      if (0xff < iVar5) {
        iVar5 = 0xff;
      }
      FUN_00513bc0(bea_arg(0x9d), bea_arg(0));
      iVar6 = FUN_004725d0(bea_arg(&DAT_008a9a98));
      if (iVar6 == 0) {
        fVar1 = (_DAT_008aa4ec + _DAT_008aa4f4) - _DAT_0067a62c;
      }
      else {
        iVar6 = FUN_00515b00();
        fVar1 = (float)iVar6 * 0.5f + 62.0f;
      }
      fVar2 = (param_1 * *(float *)((int)this_ + 0x48) + *(float *)((int)this_ + 0x50)) - 44.0f;
      fVar4 = (param_2 * *(float *)((int)this_ + 0x4c) + *(float *)((int)this_ + 0x54)) - 44.0f;
      fVar3 = 44.0f / SQRT(fVar2 * fVar2 + fVar4 * fVar4);
      if (fVar3 < 1.0f) {
        fVar2 = fVar3 * fVar2;
        fVar4 = fVar3 * fVar4;
      }
      **(float **)((int)this_ + 0x7c) =
           (((_DAT_008aa4e8 + _DAT_008aa4f0) - 128.0f) - _DAT_0067a628) + fVar2 + 44.0f + 12.0f;
      *(float *)(*(int *)((int)this_ + 0x7c) + 4) = (fVar1 - 18.0f) - (fVar4 + 44.0f);
      *(undefined4 *)(*(int *)((int)this_ + 0x7c) + 8) = 0x3bc49ba6;
      *(undefined4 *)(*(int *)((int)this_ + 0x7c) + 0xc) = 0x3f000000;
      *(int *)(*(int *)((int)this_ + 0x7c) + 0x10) = iVar5 + iVar7 + iVar8;
      *(int *)((int)this_ + 0x7c) = *(int *)((int)this_ + 0x7c) + 0x14;
      *(int *)((int)this_ + 0x60) = *(int *)((int)this_ + 0x60) + 1;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053b5f0, ap_0053b5f0));
