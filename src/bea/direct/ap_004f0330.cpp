// auto-ported from 004f0330_FUN_004f0330.c (FUN_004f0330, 518 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#define BEA_PARITY   // stack parity: see the registration
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00663058 GLOBAL_AT(int, 0x00663058)
#define DAT_00662dc8 GLOBAL_AT(int, 0x00662dc8)
#define DAT_0083d44c GLOBAL_AT(char, 0x0083d44c)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
#define DAT_00662f3c GLOBAL_AT(char, 0x00662f3c)
#define DAT_0066e94e GLOBAL_AT(char, 0x0066e94e)
#define DAT_0083d3ec GLOBAL_AT(int, 0x0083d3ec)
#define _DAT_0083d450 GLOBAL_AT(int, 0x0083d450)
#define DAT_0089d690 GLOBAL_AT(int, 0x0089d690)
#define DAT_0083d404 GLOBAL_AT(int, 0x0083d404)
#define DAT_00650610 GLOBAL_AT(int, 0x00650610)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define s_vectorlosttoyssplash_tga_00632bd8 ((char*)0x00632bd8)
#define s_ltlogo_00632b90 ((char*)0x00632b90)
#define s_openingfmv_00632b68 ((char*)0x00632b68)
#define s_TWIMTBP_GefFX_640x480_Audio_00632b74 ((char*)0x00632b74)
#define s_Considering_doing_fmvs____00632bb0 ((char*)0x00632bb0)
#define s_we_re_in_attract_mode_00632b98 ((char*)0x00632b98)
#define s_splash_tga_00632bcc ((char*)0x00632bcc)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef undefined4 (BEA_THISCALL* FUN_00465640_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00465640_t> FUN_00465640 = {(FUN_00465640_t)0x00465640};
typedef undefined4 (BEA_THISCALL* FUN_004684d0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004684d0_t> FUN_004684d0 = {(FUN_004684d0_t)0x004684d0};
typedef undefined4 (BEA_THISCALL* FUN_0046e240_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0046e240_t> FUN_0046e240 = {(FUN_0046e240_t)0x0046e240};
typedef uint32_t (BEA_CDECL* FUN_004f0200_t)(uint32_t);
static const bea_guard<FUN_004f0200_t> FUN_004f0200 = {(FUN_004f0200_t)0x004f0200};
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef int * (BEA_CDECL* FUN_004f27f0_t)(void *, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};
typedef uint32_t (BEA_THISCALL* FUN_005492d0_t)(uint32_t);
static const bea_guard<FUN_005492d0_t> FUN_005492d0 = {(FUN_005492d0_t)0x005492d0};
typedef uint32_t (BEA_THISCALL* FUN_00549310_t)(uint32_t);
static const bea_guard<FUN_00549310_t> FUN_00549310 = {(FUN_00549310_t)0x00549310};
typedef undefined4 (BEA_THISCALL* FUN_00556f50_t)(uint32_t);
static const bea_guard<FUN_00556f50_t> FUN_00556f50 = {(FUN_00556f50_t)0x00556f50};

static int BEA_THISCALL ap_004f0330(void * this_)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (0 < DAT_00663058) {
    FUN_004f0200(bea_arg(DAT_00663058));
  }
  iVar3 = DAT_00662dc8;
  iVar4 = 0;
  if (DAT_00662dc8 == -1) {
    while(BEA_LOOP_GUARD(( true ))) {
      if (iVar4 == -0x45) {
        uVar5 = 2;
      }
      else {
        uVar5 = (uint)(iVar4 == -3);
      }
      if (DAT_0083d44c != '\0') {
        DAT_0083d44c = '\0';
        uVar5 = 0;
      }
      FUN_00549310(bea_arg(&DAT_009c3df0));
      iVar4 = FUN_004684d0(bea_arg(&DAT_0089d758), bea_arg(uVar5), bea_arg(1));
      FUN_00549310(bea_arg(&DAT_009c3df0));
      FUN_005492d0(bea_arg(&DAT_009c3df0));
      if (0 < DAT_00663058) {
        FUN_004f0200(bea_arg(DAT_00663058));
      }
      if (iVar4 == -1) break;
      if (iVar4 == -3) {
        DAT_00662f3c = 1;
        if (DAT_0066e94e == '\0') {
          DAT_0083d3ec = (void *)FUN_004f27f0(s_splash_tga_00632bcc,0,0,1,1,1);
          DAT_00662f3c = 0;
        }
        else {
          DAT_0083d3ec = (void *)FUN_004f27f0(s_vectorlosttoyssplash_tga_00632bd8,0,0,1,1,1);
        }
        _DAT_0083d450 = 0;
        CRenderThing__vslot3(s_Considering_doing_fmvs____00632bb0);
        CRenderThing__vslot3(s_we_re_in_attract_mode_00632b98);
        iVar3 = FUN_00465640(bea_arg(&DAT_0089d690), bea_arg(s_ltlogo_00632b90), bea_arg(1), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(1));
        if ((iVar3 == 0) &&
           ((DAT_0083d404 == 0 ||
            (iVar3 = FUN_00465640(bea_arg(&DAT_0089d690), bea_arg(s_TWIMTBP_GefFX_640x480_Audio_00632b74), bea_arg(1), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(1)),
            iVar3 == 0)))) {
          DAT_00650610 = 0x78e;
          FUN_00465640(bea_arg(&DAT_0089d690), bea_arg(s_openingfmv_00632b68), bea_arg(1), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(1));
          DAT_00650610 = 0x7fffffff;
        }
        if (DAT_0083d3ec != (void *)0x0) {
          FUN_004f27e0(bea_arg((void *)((int)DAT_0083d3ec + 8)));
          FUN_00556f50(bea_arg(DAT_0083d3ec));
        }
      }
      else {
        FUN_00549310(bea_arg(&DAT_009c3df0));
        iVar3 = FUN_0046e240(bea_arg(&DAT_008a9a98), bea_arg(iVar4));
        FUN_00549310(bea_arg(&DAT_009c3df0));
        FUN_005492d0(bea_arg(&DAT_009c3df0));
        if (iVar3 == 5) {
          iVar4 = -3;
        }
        else if (iVar3 == 7) {
          iVar4 = -0x45;
        }
      }
    }
  }
  else {
    *(int *)this_ = DAT_00662dc8;
    do {
      iVar1 = *(int *)this_;
      if (iVar1 == -1) {
        *(int *)this_ = iVar3;
        return 0;
      }
      *(undefined4 *)this_ = 0xffffffff;
      iVar2 = FUN_0046e240(bea_arg(&DAT_008a9a98), bea_arg(iVar1));
      iVar3 = iVar1;
    } while (BEA_LOOP_GUARD((iVar2 != 2)));
  }
  return iVar4;
}

// @autoport-registration
// stack parity (bea/parity.h): the game code this calls runs at the original's depths
// tools/callsites.py 4f0330 --table: the original's calls (kind, target or vtable offset,
// ESP below the entry ESP, return address); between calls its ESP is entry - 0x10
static const BeaParSite par_004f0330[] = {
    {BEA_PAR_DIRECT, 0x004f0200, 0x14, 0x004f0347}, /* pops guessed */   // 004f0342
    {BEA_PAR_DIRECT, 0x0046e240, 0x14, 0x004f0373},   // 004f036e
    {BEA_PAR_DIRECT, 0x00549310, 0x10, 0x004f03b8},   // 004f03b3
    {BEA_PAR_DIRECT, 0x004684d0, 0x18, 0x004f03c5},   // 004f03c0
    {BEA_PAR_DIRECT, 0x00549310, 0x10, 0x004f03d1},   // 004f03cc
    {BEA_PAR_DIRECT, 0x005492d0, 0x10, 0x004f03db},   // 004f03d6
    {BEA_PAR_DIRECT, 0x004f0200, 0x14, 0x004f03ea}, /* pops guessed */   // 004f03e5
    {BEA_PAR_DIRECT, 0x004f27f0, 0x28, 0x004f041d},   // 004f0418
    {BEA_PAR_DIRECT, 0x004f27f0, 0x28, 0x004f0431},   // 004f042c
    {BEA_PAR_DIRECT, 0x0040c640, 0x14, 0x004f044f},   // 004f044a
    {BEA_PAR_DIRECT, 0x0040c640, 0x14, 0x004f045c},   // 004f0457
    {BEA_PAR_DIRECT, 0x00465640, 0x2c, 0x004f0476},   // 004f0471
    {BEA_PAR_DIRECT, 0x00465640, 0x2c, 0x004f0499},   // 004f0494
    {BEA_PAR_DIRECT, 0x00465640, 0x2c, 0x004f04be},   // 004f04b9
    {BEA_PAR_DIRECT, 0x004f27e0, 0x10, 0x004f04d9},   // 004f04d4
    {BEA_PAR_DIRECT, 0x00556f50, 0x10, 0x004f04e4},   // 004f04df
    {BEA_PAR_DIRECT, 0x00549310, 0x10, 0x004f04f3},   // 004f04ee
    {BEA_PAR_DIRECT, 0x0046e240, 0x14, 0x004f04fe},   // 004f04f9
    {BEA_PAR_DIRECT, 0x00549310, 0x10, 0x004f050a},   // 004f0505
    {BEA_PAR_DIRECT, 0x005492d0, 0x10, 0x004f0514},   // 004f050f
    {0, 0, 0, 0}};
BEA_PARITY_HOOK(0x004f0330, 004f0330, ap_004f0330, 0x10, par_004f0330)
