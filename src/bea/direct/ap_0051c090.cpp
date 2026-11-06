// auto-ported from 0051c090_vslot3.c (CFEPLanguageTest::vslot3, 411 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CFEPLanguageTest;
#define DAT_0083d970 GLOBAL_AT(int, 0x0083d970)
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};
typedef uint32_t (BEA_THISCALL* FUN_0051bfe0_t)(uint32_t);
static const bea_guard<FUN_0051bfe0_t> FUN_0051bfe0 = {(FUN_0051bfe0_t)0x0051bfe0};
typedef float10 (BEA_CDECL* FUN_0055dfe7_t)(double);
static const bea_guard<FUN_0055dfe7_t> FUN_0055dfe7 = {(FUN_0055dfe7_t)0x0055dfe7};

static void BEA_THISCALL ap_0051c090(CFEPLanguageTest * this_, undefined4 param_1, float param_2)
{
  int iVar1;
  int iVar2;
  float fVar3;
  float10 fVar4;
  int local_8;
  
  iVar1 = *(int *)(this_ + 8);
  switch(param_1) {
  case 0x2a:
    *(int *)(this_ + 8) = iVar1 + -1;
    if (iVar1 + -1 < 0) {
      *(undefined4 *)(this_ + 8) = 0;
      *(undefined4 *)(this_ + 0xc) = 0;
      FUN_00468770(0);
      break;
    }
    goto LAB_0051c0ff;
  case 0x2b:
    *(int *)(this_ + 8) = iVar1 + 1;
    if (DAT_0083d970 + -1 < iVar1 + 1) {
      *(int *)(this_ + 8) = DAT_0083d970 + -1;
      *(undefined4 *)(this_ + 0xc) = 0;
      FUN_00468770(0);
      break;
    }
LAB_0051c0ff:
    *(undefined4 *)(this_ + 0x10) = 0;
    *(undefined4 *)(this_ + 0xc) = 0;
    FUN_00468770(0);
    break;
  case 0x2c:
    FUN_0051bfe0(bea_arg(this_));
    break;
  case 0x2e:
    FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0), bea_arg(0x46));
    break;
  case 0x3c:
    iVar2 = *(int *)(this_ + 0x10);
    *(int *)(this_ + 0x10) = iVar2 + -1;
    if (iVar2 + -1 < 0) {
      *(undefined4 *)(this_ + 0x10) = 0;
    }
    FUN_00468770(0);
    break;
  case 0x3f:
    iVar2 = *(int *)(this_ + 0x10);
    *(int *)(this_ + 0x10) = iVar2 + 1;
    if (0x28 < iVar2 + 1) {
      *(undefined4 *)(this_ + 0x10) = 0x28;
    }
    FUN_00468770(0);
  }
  switch(param_1) {
  case 0x26:
  case 0x27:
    if (param_2 != 0.0f) {
      if (0.0f <= param_2) {
        fVar3 = 1.0f;
      }
      else {
        fVar3 = -1.0f;
      }
      fVar3 = param_2 * param_2 * param_2 * param_2 * fVar3 * 50.0f + *(float *)(this_ + 0xc);
      *(float *)(this_ + 0xc) = fVar3;
      fVar4 = (float10)FUN_0055dfe7((double)fVar3);
      if (fVar4 < (float10)0.0f) {
        fVar4 = fVar4 + (float10)1.0f;
      }
      iVar2 = *(int *)(this_ + 8);
      local_8 = (int)(longlong)ROUND(fVar4);
      *(int *)(this_ + 8) = iVar2 + local_8;
      *(float *)(this_ + 0xc) = (float)((float10)*(float *)(this_ + 0xc) - fVar4);
      if (iVar2 + local_8 < 0) {
        *(undefined4 *)(this_ + 8) = 0;
      }
      if (DAT_0083d970 + -1 < *(int *)(this_ + 8)) {
        *(int *)(this_ + 8) = DAT_0083d970 + -1;
      }
    }
  }
  if (iVar1 != *(int *)(this_ + 8)) {
    FUN_0051bfe0(bea_arg(this_));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051c090, ap_0051c090));
