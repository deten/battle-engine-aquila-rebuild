// auto-ported from 004bc3e0_FUN_004bc3e0.c (FUN_004bc3e0, 152 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00809588 GLOBAL_AT(int, 0x00809588)
#define DAT_00809598 GLOBAL_AT(int, 0x00809598)
#define DAT_00855290 GLOBAL_AT(int, 0x00855290)
typedef uint32_t (BEA_CDECL* FUN_004bd5c0_t)(int, int, int, int, int, ...);
static const bea_guard<FUN_004bd5c0_t> FUN_004bd5c0 = {(FUN_004bd5c0_t)0x004bd5c0};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};

static void BEA_CDECL ap_004bc3e0(int *param_1)
{
  float10 fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_8;
  
  FUN_004e5bd0(bea_arg(&DAT_00809588), bea_arg(param_1));
  if ((DAT_00809598 != 0) && (DAT_00855290 != 0)) {
    uVar5 = 1;
    fVar1 = bea_fcast<float10>(bea_vcall<float10>(param_1, 0x40));
    uStack_8 = (undefined4)(longlong)ROUND(fVar1 + bea_fcast<float10>(bea_fcast<float>(param_1[8])) + bea_fcast<float10>(1.0f));
    uVar4 = uStack_8;
    fVar1 = bea_fcast<float10>(bea_vcall<float10>(param_1, 0x40));
    uStack_8 = (undefined4)(longlong)ROUND(fVar1 + bea_fcast<float10>(bea_fcast<float>(param_1[7])) + bea_fcast<float10>(1.0f));
    uVar3 = uStack_8;
    fVar1 = bea_fcast<float10>(bea_vcall<float10>(param_1, 0x40));
    uStack_8 = (undefined4)(longlong)ROUND((bea_fcast<float10>(bea_fcast<float>(param_1[8])) - fVar1) - bea_fcast<float10>(1.0f));
    uVar2 = uStack_8;
    fVar1 = bea_fcast<float10>(bea_vcall<float10>(param_1, 0x40));
    uStack_8 = (undefined4)(longlong)ROUND((bea_fcast<float10>(bea_fcast<float>(param_1[7])) - fVar1) - bea_fcast<float10>(1.0f));
    FUN_004bd5c0(uStack_8,uVar2,uVar3,uVar4,uVar5);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bc3e0, ap_004bc3e0));
