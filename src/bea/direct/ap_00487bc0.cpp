// auto-ported from 00487bc0_FUN_00487bc0.c (FUN_00487bc0, 332 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_0089c9ac GLOBAL_AT(int, 0x0089c9ac)
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
#define DAT_0089ce54 GLOBAL_AT(char, 0x0089ce54)
#define DAT_008a9d84 GLOBAL_AT(int, 0x008a9d84)
#define DAT_0089ce08 GLOBAL_AT(int, 0x0089ce08)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_009c68ad GLOBAL_AT(char, 0x009c68ad)
#define DAT_009c6910 GLOBAL_AT(char, 0x009c6910)
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
typedef undefined4 (BEA_THISCALL* FUN_0046f2c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0046f2c0_t> FUN_0046f2c0 = {(FUN_0046f2c0_t)0x0046f2c0};
typedef uint32_t (BEA_THISCALL* FUN_004879e0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004879e0_t> FUN_004879e0 = {(FUN_004879e0_t)0x004879e0};
typedef uint32_t (BEA_STDCALL* FUN_00513930_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513930_t> FUN_00513930 = {(FUN_00513930_t)0x00513930};
typedef uint32_t (BEA_STDCALL* FUN_00513af0_t)(uint32_t);
static const bea_guard<FUN_00513af0_t> FUN_00513af0 = {(FUN_00513af0_t)0x00513af0};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_CDECL* FUN_00551460_t)(uint32_t);
static const bea_guard<FUN_00551460_t> FUN_00551460 = {(FUN_00551460_t)0x00551460};
typedef float10 (BEA_CDECL* FUN_0055dfe7_t)(double);
static const bea_guard<FUN_0055dfe7_t> FUN_0055dfe7 = {(FUN_0055dfe7_t)0x0055dfe7};

static void BEA_THISCALL ap_00487bc0(void * this_)
{
  int iVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  float10 fVar8;
  uint local_c;
  
  iVar3 = DAT_0089c9ac;
  fVar2 = bea_fcast<float>(DAT_00672fd0);
  fVar8 = bea_fcast<float10>(FUN_0055dfe7(bea_fcast<double>(DAT_00672fd0)));
  local_c = (uint)(longlong)ROUND((bea_fcast<float10>(fVar2) - fVar8) * bea_fcast<float10>(4.0f));
  *(uint *)((int)this_ + 0x4c) = local_c & 1;
  if ((DAT_0089ce54 & 8) != 0) {
    if (*(int *)((int)this_ + 0x40) != 2) {
      *(uint *)((int)this_ + 0x40) = (uint)(*(int *)(DAT_008a9d84 + 8) == 0);
    }
    iVar7 = 0;
    if (0 < iVar3) {
      piVar6 = &DAT_0089ce08;
      do {
        iVar1 = *piVar6;
        if (iVar1 != 0) {
          piVar4 = (int *)FUN_0046f2c0(bea_arg(&DAT_008a9a98), bea_arg(iVar7));
          uVar5 = bea_vcall<uint32_t>(piVar4, 0x1c);
          if ((char)uVar5 != '\0') {
            FUN_004879e0(bea_arg(this_), bea_arg(iVar1), bea_arg(iVar7));
          }
        }
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 1;
      } while (((iVar7 < iVar3)));
    }
    DAT_009c68ad = 1;
    DAT_009c6910 = 1;
    FUN_00513bc0(bea_arg(0xe), bea_arg(1));
    FUN_00513bc0(bea_arg(0x17), bea_arg(4));
    FUN_00513bc0(bea_arg(7), bea_arg(1));
    DAT_009c68ac = 1;
    DAT_009c690d = 1;
    FUN_00513af0(bea_arg(0));
    FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(1));
    FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(1));
    FUN_00513930(bea_arg(0), bea_arg(6), bea_arg(2));
    FUN_00513930(bea_arg(0), bea_arg(5), bea_arg(2));
    FUN_00551460(bea_arg(0));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00487bc0, ap_00487bc0));
