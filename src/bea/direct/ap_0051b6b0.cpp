// auto-ported from 0051b6b0_vslot2.c (CFEPIntro::vslot2, 399 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CFEPIntro;
#define DAT_00662df4 GLOBAL_AT(int, 0x00662df4)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_0089bb68 GLOBAL_AT(int, 0x0089bb68)
#define _DAT_008a956c GLOBAL_AT(int, 0x008a956c)
#define _DAT_00679af8 GLOBAL_AT(float, 0x00679af8)
#define DAT_0067762c GLOBAL_AT(int, 0x0067762c)
#define DAT_00677614 GLOBAL_AT(int, 0x00677614)
#define DAT_00677624 GLOBAL_AT(int, 0x00677624)
#define DAT_00663058 GLOBAL_AT(int, 0x00663058)
typedef undefined1 (BEA_CDECL* CMovieCamera__vslot7_t)(void);
static const bea_guard<CMovieCamera__vslot7_t> CMovieCamera__vslot7 = {(CMovieCamera__vslot7_t)0x0041a200};
typedef uint (BEA_CDECL* FUN_00469390_t)(undefined4, undefined4, undefined4, undefined4, undefined4, ...);
static const bea_guard<FUN_00469390_t> FUN_00469390 = {(FUN_00469390_t)0x00469390};
typedef undefined4 (BEA_CDECL* FUN_00515940_t)(void);
static const bea_guard<FUN_00515940_t> FUN_00515940 = {(FUN_00515940_t)0x00515940};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef uint32_t (BEA_THISCALL* FUN_0051b610_t)(uint32_t);
static const bea_guard<FUN_0051b610_t> FUN_0051b610 = {(FUN_0051b610_t)0x0051b610};

static void BEA_THISCALL ap_0051b6b0(CFEPIntro * this_, int param_1)
{
  char cVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  undefined4 uVar5;
  
  if (param_1 != 0) {
    return;
  }
  cVar1 = CMovieCamera__vslot7();
  if (cVar1 != '\0') {
    FUN_0051b610(bea_arg(this_));
  }
  if ((DAT_00662df4 != 0) &&
     (fVar3 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8)),
     (float10)3.0f < fVar3 - (float10)*(float *)(this_ + 4))) {
    bea_vcall<uint32_t>(this_, 0xc, 0x2c,0x3f800000);
  }
  if ((*(int *)(this_ + 0xc) == 0) && (DAT_0089bb68 == 0)) {
    fVar3 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
    if ((float10)30.0f < fVar3 - (float10)*(float *)(this_ + 4)) {
      _DAT_008a956c = 0xfffffffd;
    }
  }
  else {
    fVar3 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
    *(float *)(this_ + 4) = (float)fVar3;
    *(undefined4 *)(this_ + 0x18) = 0;
  }
  if ((*(float *)(this_ + 0x18) == 0.0f) &&
     (fVar3 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8)),
     (float10)1.0f < fVar3 - (float10)*(float *)(this_ + 4))) {
    *(undefined4 *)(this_ + 0x18) = 0x3727c5ac;
  }
  if (*(float *)(this_ + 0x18) != 0.0f) {
    *(float *)(this_ + 0x18) = _DAT_00679af8 + _DAT_00679af8 + *(float *)(this_ + 0x18);
  }
  iVar2 = DAT_0067762c;
  if (DAT_00677614 != 0) {
    if (DAT_00677624 == 0) {
      DAT_0067762c = -1;
      if (iVar2 == 1) {
        DAT_00663058 = *(undefined4 *)(this_ + 0x14);
        _DAT_008a956c = 0xfffffffd;
      }
    }
    else if (DAT_00677624 != 10) goto LAB_0051b801;
    iVar2 = DAT_0067762c;
    DAT_0067762c = -1;
    if (iVar2 == 1) {
      *(undefined4 *)(this_ + 0xc) = 0;
      *(undefined4 *)(this_ + 0x10) = 1;
      DAT_00677614 = 0;
    }
  }
LAB_0051b801:
  uVar5 = 0x2c;
  iVar2 = FUN_00515940();
  fVar4 = (float)iVar2;
  iVar2 = FUN_00515940();
  FUN_00469390(0,0,(float)iVar2,fVar4,uVar5);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051b6b0, ap_0051b6b0));
