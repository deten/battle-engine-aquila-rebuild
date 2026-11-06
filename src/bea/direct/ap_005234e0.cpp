// auto-ported from 005234e0_FUN_005234e0.c (FUN_005234e0, 1374 bytes) by tools/autoport.py
// @hand-fixed 2026-10-28 compile: the hook at 0x889008 typed as a cdecl char(int,int) pointer (push 2 args, call eax, add esp,8 at 0x523633); the coordinate scales divide the float slot by the fild-ed int as the asm does (fdivr at 0x523577)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00662df4 GLOBAL_AT(int, 0x00662df4)
#define DAT_0089bdf5 GLOBAL_AT(char, 0x0089bdf5)
#define DAT_0089bdf7 GLOBAL_AT(char, 0x0089bdf7)
#define DAT_0089bdf6 GLOBAL_AT(char, 0x0089bdf6)
#define DAT_0089bdf0 GLOBAL_AT(int, 0x0089bdf0)
#define DAT_0089bda8 GLOBAL_AT(int, 0x0089bda8)
#define DAT_0089bda4 GLOBAL_AT(int, 0x0089bda4)
#define _DAT_0089bda0 GLOBAL_AT(float, 0x0089bda0)
#define _DAT_0089bd9c GLOBAL_AT(float, 0x0089bd9c)
#define _DAT_0089be44 GLOBAL_AT(int, 0x0089be44)
#define DAT_0089bdf4 GLOBAL_AT(char, 0x0089bdf4)
#define _DAT_0089be40 GLOBAL_AT(int, 0x0089be40)
#define DAT_0083d3f0 GLOBAL_AT(char, 0x0083d3f0)
typedef char (BEA_CDECL* DAT_00889008_t)(int, int);   // input hook, cdecl (add esp,8 after the call)
#define DAT_00889008 GLOBAL_AT(DAT_00889008_t, 0x00889008)
#define DAT_0089bdf8 GLOBAL_AT(int, 0x0089bdf8)
#define DAT_0089be00 GLOBAL_AT(int, 0x0089be00)
#define DAT_0089be04 GLOBAL_AT(int, 0x0089be04)
#define _DAT_0089be08 GLOBAL_AT(float, 0x0089be08)
#define _DAT_0089be0c GLOBAL_AT(float, 0x0089be0c)
#define DAT_0089bdfc GLOBAL_AT(int, 0x0089bdfc)
#define DAT_0089be28 GLOBAL_AT(int, 0x0089be28)
#define DAT_0089be30 GLOBAL_AT(int, 0x0089be30)
#define DAT_0089be34 GLOBAL_AT(int, 0x0089be34)
#define _DAT_0089be38 GLOBAL_AT(float, 0x0089be38)
#define _DAT_0089be3c GLOBAL_AT(float, 0x0089be3c)
#define DAT_0089be2c GLOBAL_AT(int, 0x0089be2c)
#define DAT_0089be10 GLOBAL_AT(int, 0x0089be10)
#define DAT_0089be18 GLOBAL_AT(int, 0x0089be18)
#define DAT_0089be1c GLOBAL_AT(int, 0x0089be1c)
#define _DAT_0089be20 GLOBAL_AT(float, 0x0089be20)
#define _DAT_0089be24 GLOBAL_AT(float, 0x0089be24)
#define DAT_0089be14 GLOBAL_AT(int, 0x0089be14)
#define DAT_0089be48 GLOBAL_AT(int, 0x0089be48)
typedef undefined1 (BEA_CDECL* FUN_00465f00_t)(void);
static const bea_guard<FUN_00465f00_t> FUN_00465f00 = {(FUN_00465f00_t)0x00465f00};
typedef undefined4 (BEA_CDECL* FUN_00515940_t)(void);
static const bea_guard<FUN_00515940_t> FUN_00515940 = {(FUN_00515940_t)0x00515940};
typedef undefined4 (BEA_CDECL* FUN_00515b00_t)(void);
static const bea_guard<FUN_00515b00_t> FUN_00515b00 = {(FUN_00515b00_t)0x00515b00};

static undefined4 BEA_STDCALL ap_005234e0(undefined4 param_1, uint param_2, uint param_3)
{
  float fVar1;
  char cVar2;
  int iVar3;
  short sVar4;
  
  if (DAT_00662df4 != 0) {
    return 0;
  }
  switch(param_1) {
  case 0x200:
    if ((param_2 & 1) == 0) {
      DAT_0089bdf5 = 0;
    }
    if ((param_2 & 2) == 0) {
      DAT_0089bdf7 = 0;
    }
    if ((param_2 & 0x10) == 0) {
      DAT_0089bdf6 = 0;
    }
    if (DAT_0089bdf0 == 0) {
      DAT_0089bda8 = param_3 & 0xffff;
      fVar1 = (float)DAT_0089bda8;
      DAT_0089bda4 = param_3 >> 0x10;
      iVar3 = FUN_00515940();
      _DAT_0089bda0 = (float)((float10)fVar1 / (float10)iVar3);
      fVar1 = (float)(int)DAT_0089bda4;
      iVar3 = FUN_00515b00();
      _DAT_0089bd9c = (float)((float10)fVar1 / (float10)iVar3);
    }
    cVar2 = FUN_00465f00();
    if (cVar2 != '\0') {
      DAT_0089bda8 = DAT_0089bda8 * 0x280;
      iVar3 = FUN_00515940();
      DAT_0089bda8 = (int)DAT_0089bda8 / iVar3;
      DAT_0089bda4 = DAT_0089bda4 * 0x1e0;
      iVar3 = FUN_00515b00();
      DAT_0089bda4 = (int)DAT_0089bda4 / iVar3;
    }
    _DAT_0089be44 = DAT_0089bda4;
    DAT_0089bdf4 = 1;
    _DAT_0089be40 = DAT_0089bda8;
    return 0;
  case 0x201:
    DAT_0083d3f0 = 1;
    if (((DAT_00889008 == (DAT_00889008_t)0x0) || (cVar2 = (*DAT_00889008)(0,4), cVar2 == '\0')) &&
       (DAT_0089bdf5 = 1, DAT_0089bdf8 == 0)) {
      DAT_0089bdf8 = 1;
      DAT_0089be00 = param_3 & 0xffff;
      fVar1 = (float)DAT_0089be00;
      DAT_0089be04 = param_3 >> 0x10;
      iVar3 = FUN_00515940();
      _DAT_0089be08 = (float)((float10)fVar1 / (float10)iVar3);
      fVar1 = (float)(int)DAT_0089be04;
      iVar3 = FUN_00515b00();
      _DAT_0089be0c = (float)((float10)fVar1 / (float10)iVar3);
      cVar2 = FUN_00465f00();
      if (cVar2 != '\0') {
        DAT_0089be00 = DAT_0089be00 * 0x280;
        iVar3 = FUN_00515940();
        DAT_0089be00 = (int)DAT_0089be00 / iVar3;
        DAT_0089be04 = DAT_0089be04 * 0x1e0;
        iVar3 = FUN_00515b00();
        DAT_0089be04 = (int)DAT_0089be04 / iVar3;
        return 0;
      }
    }
    break;
  case 0x202:
    if ((DAT_00889008 == (DAT_00889008_t)0x0) || (cVar2 = (*DAT_00889008)(0,3), cVar2 == '\0')) {
      DAT_0089bdf5 = 0;
      DAT_0089bdfc = 1;
      return 0;
    }
    break;
  case 0x204:
    DAT_0083d3f0 = 1;
    if (((DAT_00889008 == (DAT_00889008_t)0x0) || (cVar2 = (*DAT_00889008)(2,4), cVar2 == '\0')) &&
       (DAT_0089bdf7 = 1, DAT_0089be28 == 0)) {
      DAT_0089be28 = 1;
      DAT_0089be30 = param_3 & 0xffff;
      fVar1 = (float)DAT_0089be30;
      DAT_0089be34 = param_3 >> 0x10;
      iVar3 = FUN_00515940();
      _DAT_0089be38 = (float)((float10)fVar1 / (float10)iVar3);
      fVar1 = (float)(int)DAT_0089be34;
      iVar3 = FUN_00515b00();
      _DAT_0089be3c = (float)((float10)fVar1 / (float10)iVar3);
      cVar2 = FUN_00465f00();
      if (cVar2 != '\0') {
        DAT_0089be30 = DAT_0089be30 * 0x280;
        iVar3 = FUN_00515940();
        DAT_0089be30 = (int)DAT_0089be30 / iVar3;
        DAT_0089be34 = DAT_0089be34 * 0x1e0;
        iVar3 = FUN_00515b00();
        DAT_0089be34 = (int)DAT_0089be34 / iVar3;
        return 0;
      }
    }
    break;
  case 0x205:
    if ((DAT_00889008 == (DAT_00889008_t)0x0) || (cVar2 = (*DAT_00889008)(2,3), cVar2 == '\0')) {
      DAT_0089bdf7 = 0;
      DAT_0089be2c = 1;
      return 0;
    }
    break;
  case 0x207:
    DAT_0083d3f0 = 1;
    if (((DAT_00889008 == (DAT_00889008_t)0x0) || (cVar2 = (*DAT_00889008)(1,4), cVar2 == '\0')) &&
       (DAT_0089bdf6 = 1, DAT_0089be10 == 0)) {
      DAT_0089be10 = 1;
      DAT_0089be18 = param_3 & 0xffff;
      fVar1 = (float)DAT_0089be18;
      DAT_0089be1c = param_3 >> 0x10;
      iVar3 = FUN_00515940();
      _DAT_0089be20 = (float)((float10)fVar1 / (float10)iVar3);
      fVar1 = (float)(int)DAT_0089be1c;
      iVar3 = FUN_00515b00();
      _DAT_0089be24 = (float)((float10)fVar1 / (float10)iVar3);
      cVar2 = FUN_00465f00();
      if (cVar2 != '\0') {
        DAT_0089be18 = DAT_0089be18 * 0x280;
        iVar3 = FUN_00515940();
        DAT_0089be18 = (int)DAT_0089be18 / iVar3;
        DAT_0089be1c = DAT_0089be1c * 0x1e0;
        iVar3 = FUN_00515b00();
        DAT_0089be1c = (int)DAT_0089be1c / iVar3;
        return 0;
      }
    }
    break;
  case 0x208:
    if ((DAT_00889008 == (DAT_00889008_t)0x0) || (cVar2 = (*DAT_00889008)(1,3), cVar2 == '\0')) {
      DAT_0089be14 = 1;
      DAT_0089bdf6 = 0;
      return 0;
    }
    break;
  case 0x20a:
    sVar4 = (short)(param_2 >> 0x10);
    if (DAT_00889008 != (DAT_00889008_t)0x0) {
      if (sVar4 == 0 || (int)param_2 < 0) {
        cVar2 = (*DAT_00889008)(4,3);
      }
      else {
        cVar2 = (*DAT_00889008)(3,3);
      }
      if (cVar2 != '\0') {
        return 0;
      }
    }
    DAT_0089be48 = DAT_0089be48 + sVar4;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005234e0, ap_005234e0));
