// auto-ported from 004efb10_FUN_004efb10.c (FUN_004efb10, 1468 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x300: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CTweakSLONG;
#define DAT_0082b4a4 GLOBAL_AT(int, 0x0082b4a4)
#define DAT_009c6480 GLOBAL_AT(int, 0x009c6480)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_0066eb90 GLOBAL_AT(int, 0x0066eb90)
#define DAT_0089be50 GLOBAL_AT(int, 0x0089be50)
#define DAT_0089be5c GLOBAL_AT(int, 0x0089be5c)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_008554a4 GLOBAL_AT(char, 0x008554a4)
#define DAT_00662f40 GLOBAL_AT(int, 0x00662f40)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define DAT_00662dcc GLOBAL_AT(int, 0x00662dcc)
#define DAT_00889a48 GLOBAL_AT(int, 0x00889a48)
#define DAT_0062b13c GLOBAL_AT(int, 0x0062b13c)
#define DAT_00662dc8 GLOBAL_AT(int, 0x00662dc8)
#define DAT_0066304c GLOBAL_AT(int, 0x0066304c)
#define DAT_00663050 GLOBAL_AT(int, 0x00663050)
#define DAT_006630cc GLOBAL_AT(int, 0x006630cc)
#define DAT_00662f3c GLOBAL_AT(char, 0x00662f3c)
#define DAT_0066e94e GLOBAL_AT(char, 0x0066e94e)
#define DAT_0083d3ec GLOBAL_AT(int, 0x0083d3ec)
#define _DAT_0083d450 GLOBAL_AT(int, 0x0083d450)
#define DAT_00662f28 GLOBAL_AT(int, 0x00662f28)
#define DAT_0089d690 GLOBAL_AT(int, 0x0089d690)
#define DAT_00662df4 GLOBAL_AT(int, 0x00662df4)
#define DAT_0083d404 GLOBAL_AT(int, 0x0083d404)
#define DAT_00650610 GLOBAL_AT(int, 0x00650610)
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define DAT_0066305c GLOBAL_AT(int, 0x0066305c)
#define DAT_0083d990 GLOBAL_AT(int, 0x0083d990)
#define DAT_00662dd4 GLOBAL_AT(int, 0x00662dd4)
#define DAT_0083d3e8 GLOBAL_AT(int, 0x0083d3e8)
#define DAT_0083d3e4 GLOBAL_AT(int, 0x0083d3e4)
#define DAT_0083d3e0 GLOBAL_AT(int, 0x0083d3e0)
#define DAT_0083d448 GLOBAL_AT(int, 0x0083d448)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_Console_initialised_00632c40 ((char*)0x00632c40)
#define s_lostlogo_00632b48 ((char*)0x00632b48)
#define s_Starting_music_00632c04 ((char*)0x00632c04)
#define s_openingfmv_00632b68 ((char*)0x00632b68)
#define s_loadingscreen_tga_00625338 ((char*)0x00625338)
#define s_Starting_sound_00632bf4 ((char*)0x00632bf4)
#define s_introntsc_00632b3c ((char*)0x00632b3c)
#define s_vectorlosttoyssplash_tga_00632bd8 ((char*)0x00632bd8)
#define s_FrontEnd_v2_FE_Blank_tga_00629f68 ((char*)0x00629f68)
#define s_copyright_00632b5c ((char*)0x00632b5c)
#define s_splash_tga_00632bcc ((char*)0x00632bcc)
#define s_atari_00632b54 ((char*)0x00632b54)
#define s_ltlogo_00632b90 ((char*)0x00632b90)
#define s_default_msh_00632b30 ((char*)0x00632b30)
#define s_TWIMTBP_GefFX_640x480_Audio_00632b74 ((char*)0x00632b74)
typedef uint32_t (BEA_CDECL* CDXFMV__vslot6_t)(void);
static const bea_guard<CDXFMV__vslot6_t> CDXFMV__vslot6 = {(CDXFMV__vslot6_t)0x0053f180};
typedef undefined4 (BEA_CDECL* CFEPCredits__vslot0_t)(undefined4, ...);
static const bea_guard<CFEPCredits__vslot0_t> CFEPCredits__vslot0 = {(CFEPCredits__vslot0_t)0x004fdc10};
typedef uint32_t (BEA_THISCALL* CTweakSLONG__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CTweakSLONG__vslot0_t> CTweakSLONG__vslot0 = {(CTweakSLONG__vslot0_t)0x00528ad0};
typedef uint32_t (BEA_THISCALL* FUN_00429bc0_t)(uint32_t);
static const bea_guard<FUN_00429bc0_t> FUN_00429bc0 = {(FUN_00429bc0_t)0x00429bc0};
typedef uint32_t (BEA_THISCALL* FUN_0042a410_t)(uint32_t);
static const bea_guard<FUN_0042a410_t> FUN_0042a410 = {(FUN_0042a410_t)0x0042a410};
typedef uint32_t (BEA_THISCALL* FUN_0042bbc0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042bbc0_t> FUN_0042bbc0 = {(FUN_0042bbc0_t)0x0042bbc0};
typedef uint32_t (BEA_THISCALL* FUN_0042cf40_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042cf40_t> FUN_0042cf40 = {(FUN_0042cf40_t)0x0042cf40};
typedef uint32_t (BEA_THISCALL* FUN_0042cf70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042cf70_t> FUN_0042cf70 = {(FUN_0042cf70_t)0x0042cf70};
typedef uint32_t (BEA_CDECL* FUN_0042d7a0_t)(void);
static const bea_guard<FUN_0042d7a0_t> FUN_0042d7a0 = {(FUN_0042d7a0_t)0x0042d7a0};
typedef uint32_t (BEA_THISCALL* FUN_0042d8e0_t)(uint32_t);
static const bea_guard<FUN_0042d8e0_t> FUN_0042d8e0 = {(FUN_0042d8e0_t)0x0042d8e0};
typedef uint32_t (BEA_THISCALL* FUN_004416e0_t)(uint32_t);
static const bea_guard<FUN_004416e0_t> FUN_004416e0 = {(FUN_004416e0_t)0x004416e0};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_CDECL* FUN_00453780_t)(int, ...);
static const bea_guard<FUN_00453780_t> FUN_00453780 = {(FUN_00453780_t)0x00453780};
typedef undefined4 (BEA_THISCALL* FUN_00465640_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00465640_t> FUN_00465640 = {(FUN_00465640_t)0x00465640};
typedef uint32_t (BEA_THISCALL* FUN_004a2a20_t)(uint32_t);
static const bea_guard<FUN_004a2a20_t> FUN_004a2a20 = {(FUN_004a2a20_t)0x004a2a20};
typedef undefined4 (BEA_CDECL* FUN_004a5200_t)(void);
static const bea_guard<FUN_004a5200_t> FUN_004a5200 = {(FUN_004a5200_t)0x004a5200};
typedef void * (BEA_CDECL* FUN_004aa6e0_t)(void *, undefined4, ...);
static const bea_guard<FUN_004aa6e0_t> FUN_004aa6e0 = {(FUN_004aa6e0_t)0x004aa6e0};
typedef uint32_t (BEA_THISCALL* FUN_004bb380_t)(uint32_t);
static const bea_guard<FUN_004bb380_t> FUN_004bb380 = {(FUN_004bb380_t)0x004bb380};
typedef uint32_t (BEA_CDECL* FUN_004d7200_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004d7200_t> FUN_004d7200 = {(FUN_004d7200_t)0x004d7200};
typedef undefined1 (BEA_THISCALL* FUN_004e00d0_t)(uint32_t);
static const bea_guard<FUN_004e00d0_t> FUN_004e00d0 = {(FUN_004e00d0_t)0x004e00d0};
typedef uint32_t (BEA_CDECL* FUN_004e59f0_t)(uint32_t);
static const bea_guard<FUN_004e59f0_t> FUN_004e59f0 = {(FUN_004e59f0_t)0x004e59f0};
typedef uint32_t (BEA_THISCALL* FUN_004f2150_t)(uint32_t);
static const bea_guard<FUN_004f2150_t> FUN_004f2150 = {(FUN_004f2150_t)0x004f2150};
typedef uint32_t (BEA_THISCALL* FUN_004f21f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f21f0_t> FUN_004f21f0 = {(FUN_004f21f0_t)0x004f21f0};
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef int * (BEA_CDECL* FUN_004f27f0_t)(void *, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};
typedef uint32_t (BEA_CDECL* FUN_00510800_t)(void);
static const bea_guard<FUN_00510800_t> FUN_00510800 = {(FUN_00510800_t)0x00510800};
typedef void * (BEA_THISCALL* FUN_005145f0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005145f0_t> FUN_005145f0 = {(FUN_005145f0_t)0x005145f0};
typedef undefined4 (BEA_THISCALL* FUN_005154e0_t)(uint32_t);
static const bea_guard<FUN_005154e0_t> FUN_005154e0 = {(FUN_005154e0_t)0x005154e0};
typedef uint32_t (BEA_THISCALL* FUN_005155e0_t)(uint32_t);
static const bea_guard<FUN_005155e0_t> FUN_005155e0 = {(FUN_005155e0_t)0x005155e0};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef uint32_t (BEA_CDECL* FUN_00515fb0_t)(void);
static const bea_guard<FUN_00515fb0_t> FUN_00515fb0 = {(FUN_00515fb0_t)0x00515fb0};
typedef uint32_t (BEA_THISCALL* FUN_00556f50_t)(uint32_t);
static const bea_guard<FUN_00556f50_t> FUN_00556f50 = {(FUN_00556f50_t)0x00556f50};

static undefined4 BEA_THISCALL ap_004efb10(void * this_)
{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  bool bVar4;

  alignas(16) uint8_t bea_frame_[0x300] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_2fc)[376] = *reinterpret_cast<undefined1 (*)[376]>(bea_frame_ + 0x300 - 0x2fc);
  undefined1 (&local_184)[376] = *reinterpret_cast<undefined1 (*)[376]>(bea_frame_ + 0x300 - 0x184);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x300 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x300 - 0x4);
  if (DAT_0082b4a4 == 0) {
    CTweakSLONG__vslot0(bea_arg((CTweakSLONG *)&DAT_009c6480), bea_arg(0));
  }
  FUN_005159e0(bea_arg(&DAT_0088a0a8));
  FUN_004e59f0(bea_arg(40000));
  FUN_004416e0(bea_arg(&DAT_0066f580));
  FUN_004416e0(bea_arg(&DAT_0066eb90));
  FUN_005145f0(bea_arg(local_184), bea_arg(&DAT_0089be50), bea_arg(1), bea_arg(1));
  FUN_005145f0(bea_arg(local_2fc), bea_arg(&DAT_0089be5c), bea_arg(1), bea_arg(1));
  FUN_0042d8e0(bea_arg(local_2fc));
  FUN_0042d8e0(bea_arg(local_184));
  FUN_00429bc0(bea_arg(&DAT_00663498));
  FUN_00441740(&DAT_0066eb90,s_Console_initialised_00632c40);
  if (DAT_008554a4 == '\0') {
    FUN_00453780(1);
  }
  iVar3 = FUN_005154e0(bea_arg(&DAT_0088a0a8));
  if (iVar3 == 0) {
    return 0;
  }
  FUN_005159e0(bea_arg(&DAT_0088a0a8));
  FUN_005159e0(bea_arg(&DAT_0088a0a8));
  FUN_0042d7a0();
  CDXFMV__vslot6();
  FUN_005159e0(bea_arg(&DAT_0088a0a8));
  FUN_005159e0(bea_arg(&DAT_0088a0a8));
  if (DAT_00662f40 != 0) {
    FUN_00441740(&DAT_0066eb90,s_Starting_music_00632c04);
    FUN_00441740(&DAT_0066eb90,s_Starting_sound_00632bf4);
    cVar2 = FUN_004e00d0(bea_arg(&DAT_00896988));
    if (cVar2 == '\0') {
      DAT_00662f40 = 0;
      DAT_00662dcc = 0;
    }
    FUN_004bb380(bea_arg(&DAT_00889a48));
    FUN_00441740(&DAT_0066eb90,&DAT_0062b13c);
  }
  if (((DAT_00662dc8 != -1) || (DAT_0066304c != -1)) || (DAT_00663050 != 0)) goto LAB_004efeea;
  bVar4 = DAT_006630cc == 0;
  DAT_00662f3c = 1;
  if (DAT_0066e94e == '\0') {
    DAT_0083d3ec = (void *)FUN_004f27f0(s_splash_tga_00632bcc,0,0,1,1,1);
    DAT_00662f3c = 0;
  }
  else {
    DAT_0083d3ec = (void *)FUN_004f27f0(s_vectorlosttoyssplash_tga_00632bd8,0,0,1,1,1);
  }
  _DAT_0083d450 = 0;
  if (bVar4) {
    if (DAT_00662f28 == 0) {
      FUN_00465640(bea_arg(&DAT_0089d690), bea_arg(s_copyright_00632b5c), bea_arg(0), bea_arg(0), bea_arg(1), bea_arg(0), bea_arg(1), bea_arg(0));
      FUN_00465640(bea_arg(&DAT_0089d690), bea_arg(s_atari_00632b54), bea_arg(0), bea_arg(0), bea_arg(1), bea_arg(1), bea_arg(1), bea_arg(1));
      FUN_00465640(bea_arg(&DAT_0089d690), bea_arg(s_lostlogo_00632b48), bea_arg(0), bea_arg(0), bea_arg(1), bea_arg(1), bea_arg(1), bea_arg(1));
      FUN_00465640(bea_arg(&DAT_0089d690), bea_arg(s_introntsc_00632b3c), bea_arg(0), bea_arg(0), bea_arg(1), bea_arg(1), bea_arg(0), bea_arg(1));
    }
    else {
      FUN_00465640(bea_arg(&DAT_0089d690), bea_arg(s_ltlogo_00632b90), bea_arg(0), bea_arg(0), bea_arg(1), bea_arg(1), bea_arg(1), bea_arg(1));
      if (DAT_00662df4 == 0) {
        if (DAT_0083d404 != 0) {
          FUN_00465640(bea_arg(&DAT_0089d690), bea_arg(s_TWIMTBP_GefFX_640x480_Audio_00632b74), bea_arg(0), bea_arg(0), bea_arg(1), bea_arg(1), bea_arg(0), bea_arg(1));
        }
        DAT_00650610 = 0x78e;
        _DAT_0083d450 = FUN_00465640(bea_arg(&DAT_0089d690), bea_arg(s_openingfmv_00632b68), bea_arg(0), bea_arg(0), bea_arg(1), bea_arg(1), bea_arg(0), bea_arg(1));
        goto LAB_004efec4;
      }
    }
  }
  else {
    iVar3 = FUN_00465640(bea_arg(&DAT_0089d690), bea_arg(s_ltlogo_00632b90), bea_arg(1), bea_arg(0), bea_arg(1), bea_arg(0), bea_arg(0), bea_arg(1));
    if ((iVar3 == 0) &&
       ((DAT_0083d404 == 0 ||
        (iVar3 = FUN_00465640(bea_arg(&DAT_0089d690), bea_arg(s_TWIMTBP_GefFX_640x480_Audio_00632b74), bea_arg(1), bea_arg(0), bea_arg(1), bea_arg(0), bea_arg(0), bea_arg(1)),
        iVar3 == 0)))) {
      DAT_00650610 = 0x78e;
      FUN_00465640(bea_arg(&DAT_0089d690), bea_arg(s_openingfmv_00632b68), bea_arg(1), bea_arg(0), bea_arg(1), bea_arg(0), bea_arg(0), bea_arg(1));
LAB_004efec4:
      DAT_00650610 = 0x7fffffff;
    }
  }
  if (DAT_0083d3ec != (void *)0x0) {
    FUN_004f27e0(bea_arg((void *)((int)DAT_0083d3ec + 8)));
    FUN_00556f50(bea_arg(DAT_0083d3ec));
  }
LAB_004efeea:
  FUN_004f2150(bea_arg(&DAT_0083d960));
  uVar1 = DAT_0066305c;
  if (DAT_0083d990 != 0) {
    uVar1 = 0;
  }
  FUN_004f21f0(bea_arg(&DAT_0083d960), bea_arg(uVar1));
  CFEPCredits__vslot0(0);
  if (DAT_00662dd4 == 0) {
    FUN_004d7200(bea_arg(0xffffffff), bea_arg(0), bea_arg(0));
  }
  FUN_005155e0(bea_arg(&DAT_0088a0a8));
  FUN_0042a410(bea_arg(&DAT_00663498));
  FUN_0042bbc0(bea_arg(&DAT_00663498), bea_arg(1), bea_arg(1), bea_arg(0));
  FUN_0042cf40(bea_arg(&DAT_00663498), bea_arg(0), bea_arg(0x42200000));
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0));
  FUN_0042cf40(bea_arg(&DAT_00663498), bea_arg(0x42200000), bea_arg(0x42480000));
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3dcccccd));
  FUN_00515fb0();
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3e4ccccd));
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3e99999a));
  if (DAT_0083d3e8 != 0) {
    *(int *)(DAT_0083d3e8 + 0x170) = *(int *)(DAT_0083d3e8 + 0x170) + -1;
    DAT_0083d3e8 = 0;
  }
  DAT_0083d3e8 = FUN_004aa6e0(s_default_msh_00632b30,1);
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3ecccccd));
  if (DAT_0083d3e4 != 0) {
    FUN_004f27e0(bea_arg((void *)(DAT_0083d3e4 + 8)));
    DAT_0083d3e4 = 0;
  }
  DAT_0083d3e4 = FUN_004f27f0(s_FrontEnd_v2_FE_Blank_tga_00629f68,0,0,1,1,1);
  if (DAT_0083d3e0 != 0) {
    FUN_004f27e0(bea_arg((void *)(DAT_0083d3e0 + 8)));
    DAT_0083d3e0 = 0;
  }
  DAT_0083d3e0 = FUN_004f27f0(s_loadingscreen_tga_00625338,0,0,1,1,1);
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3f000000));
  if (DAT_0083d448 == 0) {
  }
  FUN_004a5200();
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3f19999a));
  *(undefined4 *)this_ = 0xffffffff;
  FUN_00510800();
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3f800000));
  FUN_004a2a20(bea_arg(&DAT_009c3df0));
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004efb10, ap_004efb10));
