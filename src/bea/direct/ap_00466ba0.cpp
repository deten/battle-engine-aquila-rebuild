// auto-ported from 00466ba0_FUN_00466ba0.c (FUN_00466ba0, 574 bytes) by hand
// @hand-fixed 2026-10-29 from the asm: 0x523db0 takes no arguments (Ghidra's unaff_EDI/ESI; it only clears globals and returns, called with ECX=this untouched at 0x466ba5); 0x515880 called with ecx=0x88a0a8 as set at 0x466bc0; frame-time filter: the -12345 test is C3 (equal or unordered, 0x466cdc), the blend is taken when !(d >= 2) (test ah,1 at 0x466cf4) and grouped (d*0.1f) + (dt*0.9f) (0x466cf6-0x466d08); +0x204 accumulates dt*50 + x stored with fst and the unrounded sum compared: switch when !(v < lim) and ordered (0x466d3f-0x466d50); early returns skip 0x44d560 (0x466cb6, 0x466cbe)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define _DAT_00679af8 GLOBAL_AT(float, 0x00679af8)
#define _DAT_00629b0c GLOBAL_AT(float, 0x00629b0c)
#define DAT_0089be58 GLOBAL_AT(int, 0x0089be58)
#define DAT_0089be64 GLOBAL_AT(int, 0x0089be64)
typedef void (BEA_CDECL* FUN_00523db0_t)(void);
static const bea_guard<FUN_00523db0_t> FUN_00523db0 = {(FUN_00523db0_t)0x00523db0};
typedef void (BEA_THISCALL* FUN_00512470_t)(uint32_t);
static const bea_guard<FUN_00512470_t> FUN_00512470 = {(FUN_00512470_t)0x00512470};
typedef int (BEA_THISCALL* FUN_00515880_t)(uint32_t);         // reserves a slot with push ecx; ecx set by the caller
static const bea_guard<FUN_00515880_t> FUN_00515880 = {(FUN_00515880_t)0x00515880};
typedef char (BEA_CDECL* FUN_0042d810_t)(void);
static const bea_guard<FUN_0042d810_t> FUN_0042d810 = {(FUN_0042d810_t)0x0042d810};
typedef void (BEA_THISCALL* FUN_0044b5c0_t)(uint32_t);
static const bea_guard<FUN_0044b5c0_t> FUN_0044b5c0 = {(FUN_0044b5c0_t)0x0044b5c0};
typedef void (BEA_THISCALL* FUN_004cb210_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb210_t> FUN_004cb210 = {(FUN_004cb210_t)0x004cb210};
typedef void (BEA_THISCALL* FUN_004e1b20_t)(uint32_t);
static const bea_guard<FUN_004e1b20_t> FUN_004e1b20 = {(FUN_004e1b20_t)0x004e1b20};
typedef void (BEA_THISCALL* FUN_004bb530_t)(uint32_t);
static const bea_guard<FUN_004bb530_t> FUN_004bb530 = {(FUN_004bb530_t)0x004bb530};
typedef void (BEA_THISCALL* FUN_00541d30_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00541d30_t> FUN_00541d30 = {(FUN_00541d30_t)0x00541d30};
typedef char (BEA_THISCALL* FUN_00527c50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00527c50_t> FUN_00527c50 = {(FUN_00527c50_t)0x00527c50};
typedef int (BEA_THISCALL* FUN_0051f370_t)(uint32_t);
static const bea_guard<FUN_0051f370_t> FUN_0051f370 = {(FUN_0051f370_t)0x0051f370};
typedef float10 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef void (BEA_THISCALL* FUN_0044d560_t)(uint32_t);
static const bea_guard<FUN_0044d560_t> FUN_0044d560 = {(FUN_0044d560_t)0x0044d560};

static void BEA_THISCALL ap_00466ba0(void * this_)
{
  const int self = (int)(uintptr_t)this_;
  FUN_00523db0();
  FUN_00512470(0x00855bb0);
  *(float *)(self + 0xbe18) = (float)((float10)_DAT_00679af8 * (float10)50.0f + (float10)*(float *)(self + 0xbe18));
  int iVar4 = FUN_00515880(0x0088a0a8);
  char cVar3 = FUN_0042d810();
  if (cVar3 != '\0') {
    *(uint32_t *)(self + 0xbe14) = 0xfffffffd;
  }
  if (iVar4 != 0) {
    *(uint32_t *)(self + 0xbe14) = 0xffffffff;
  }
  FUN_0044b5c0(0x00672fc8);
  FUN_004cb210(0x009c63e8, 0x3f800000, 1);
  FUN_004e1b20(0x00896988);
  FUN_004bb530(0x00889a48);
  {
    int *p = (int *)(self + 0xbe0c);
    for (int n = 2; n != 0; n--) {
      bea_vcall<uint32_t>(*p, 0x8);
      p = p + 1;
    }
  }
  FUN_00541d30(0x0089d91c, 0);
  int sel = *(int *)(self + 0x274);
  if (sel != -1) {
    bool bVar1 = false;
    cVar3 = FUN_00527c50(0x0089be50, *(uint32_t *)(self + sel * 4 + 0xbe0c), 0);
    if ((cVar3 == '\0') && (DAT_0089be58 != 0)) {
      bVar1 = true;
    }
    if (*(int *)(self + 0x1f8) == 0xf) {
      int k = FUN_0051f370((uint32_t)(self + 0x40b8));
      if (k != -1) {
        cVar3 = FUN_00527c50(0x0089be5c, *(uint32_t *)(self + k * 4 + 0xbe0c), 0);
        if ((cVar3 == '\0') && (DAT_0089be64 != 0)) {
          return;
        }
      }
    }
    if (bVar1) {
      return;
    }
  }
  float10 t = FUN_005159e0(0x0088a0a8);
  float prev = _DAT_00629b0c;
  if ((prev == -12345.0f) || bea_isnan(prev)) {                   // C3
    *(uint32_t *)&_DAT_00679af8 = 0x3c888889;
  }
  else {
    float10 d = t - (float10)_DAT_00629b0c;
    if (!(d >= (float10)2.0f)) {                                   // C0: below or unordered
      float10 a = d * (float10)0.1f;
      _DAT_00679af8 = (float)(a + (float10)_DAT_00679af8 * (float10)0.9f);
    }
    else {
      *(uint32_t *)&_DAT_00679af8 = 0x3c888889;
    }
  }
  _DAT_00629b0c = (float)t;
  if (*(int *)(self + 0x1f8) == -1) {
    float10 v = (float10)_DAT_00679af8 * (float10)50.0f + (float10)*(float *)(self + 0x204);
    *(float *)(self + 0x204) = (float)v;
    if (v >= (float10)*(float *)(self + 0x208)) {                  // C0 clear: not below and ordered
      bea_vcall<uint32_t>(*(int *)(self + *(int *)(self + 0x1fc) * 4 + 0x214), 0x20);
      int nxt = *(int *)(self + 0x200);
      uint32_t from = *(uint32_t *)(self + 0x1fc);
      *(int *)(self + 0x1f8) = nxt;
      bea_vcall<uint32_t>(*(int *)(self + nxt * 4 + 0x214), 0x1c, from);
    }
  }
  {
    int *p = (int *)(self + 0x214);
    for (int i = 0; i < 0x18; i++) {
      int st = *(int *)(self + 0x1f8);
      uint32_t a1 = 3;
      if (st == i) {
        a1 = 0;
      }
      else if (st == -1) {
        if (i == *(int *)(self + 0x1fc)) {
          a1 = 2;
        }
        if (i == *(int *)(self + 0x200)) {
          a1 = 1;
        }
      }
      bea_vcall<uint32_t>(*p, 0x8, a1);
      p = p + 1;
    }
  }
  FUN_0044d560(0x00675688);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00466ba0, ap_00466ba0));
