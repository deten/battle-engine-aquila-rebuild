// auto-ported from 0046cdf0_FUN_0046cdf0.c (FUN_0046cdf0, 587 bytes) by tools/autoport.py
// @hand-fixed 2026-10-29 0x55a420 is a thiscall on the global 0x9cc148 (mov ecx, 0x9cc148 at 0046cfd8), receiver dropped by Ghidra; 0x5159b0 loads its own ECX (mov ecx, 0x855bb0; jmp) so cdecl() is right; other call sites checked against the pushes
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#define BEA_PARITY   // stack parity: see the registration
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0066eb90 GLOBAL_AT(int, 0x0066eb90)
#define DAT_0083da30 GLOBAL_AT(short, 0x0083da30)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_00855090 GLOBAL_AT(int, 0x00855090)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
#define DAT_008a1810 GLOBAL_AT(int, 0x008a1810)
#define DAT_00662ad4 GLOBAL_AT(int, 0x00662ad4)
#define DAT_0066e854 GLOBAL_AT(int, 0x0066e854)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_0089c9a0 GLOBAL_AT(int, 0x0089c9a0)
#define s_Size_of_thing____d_0062bfa8 ((char*)0x0062bfa8)
#define s_Size_of_CST_Persistent_thing_____0062bf50 ((char*)0x0062bf50)
#define s_C__dev_ONSLAUGHT2_game_cpp_0062bba4 ((char*)0x0062bba4)
#define s_G__LL_succeeded_0062bf40 ((char*)0x0062bf40)
#define s_Game__LoadLevel__d_0062bfd0 ((char*)0x0062bfd0)
#define s_Size_of_tree____d_0062bfbc ((char*)0x0062bfbc)
#define s_Size_of_CST_thing____d_0062bf74 ((char*)0x0062bf74)
#define s_Size_of_complex_thing____d_0062bf8c ((char*)0x0062bf8c)
typedef uint32_t (BEA_THISCALL* FUN_0042c810_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042c810_t> FUN_0042c810 = {(FUN_0042c810_t)0x0042c810};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint (BEA_THISCALL* FUN_00466980_t)(uint32_t);
static const bea_guard<FUN_00466980_t> FUN_00466980 = {(FUN_00466980_t)0x00466980};
typedef void * (BEA_THISCALL* FUN_004d2780_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d2780_t> FUN_004d2780 = {(FUN_004d2780_t)0x004d2780};
typedef undefined4 (BEA_THISCALL* FUN_0050b520_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0050b520_t> FUN_0050b520 = {(FUN_0050b520_t)0x0050b520};
typedef undefined4 (BEA_THISCALL* FUN_0050d7d0_t)(uint32_t);
static const bea_guard<FUN_0050d7d0_t> FUN_0050d7d0 = {(FUN_0050d7d0_t)0x0050d7d0};
typedef void * (BEA_THISCALL* FUN_005145f0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005145f0_t> FUN_005145f0 = {(FUN_005145f0_t)0x005145f0};
typedef uint32_t (BEA_CDECL* FUN_005159b0_t)(void);
static const bea_guard<FUN_005159b0_t> FUN_005159b0 = {(FUN_005159b0_t)0x005159b0};
typedef int (BEA_THISCALL* FUN_0051f370_t)(uint32_t);
static const bea_guard<FUN_0051f370_t> FUN_0051f370 = {(FUN_0051f370_t)0x0051f370};
typedef uint32_t (BEA_THISCALL* FUN_0053f010_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0053f010_t> FUN_0053f010 = {(FUN_0053f010_t)0x0053f010};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_THISCALL* FUN_0055a420_t)(uint32_t);
static const bea_guard<FUN_0055a420_t> FUN_0055a420 = {(FUN_0055a420_t)0x0055a420};

static undefined4 BEA_THISCALL ap_0046cdf0(void * this_, int param_1)
{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puStack_8;
  undefined4 local_4;
  FUN_00441740(&DAT_0066eb90,s_Game__LoadLevel__d_0062bfd0,param_1);
  *(int *)((int)this_ + 0x30) = param_1;
  *(undefined4 *)((int)this_ + 0x110) = 0x3f000000;
  *(undefined4 *)((int)this_ + 0xf4) = 0;
  DAT_0083da30 = 0;
  FUN_00441740(&DAT_0066f580,s_Size_of_tree____d_0062bfbc,0x4c);
  FUN_00441740(&DAT_0066f580,s_Size_of_thing____d_0062bfa8,0x3c);
  FUN_00441740(&DAT_0066f580,s_Size_of_complex_thing____d_0062bf8c,0x7c);
  FUN_00441740(&DAT_0066f580,s_Size_of_CST_thing____d_0062bf74,0x24);
  FUN_00441740(&DAT_0066f580,s_Size_of_CST_Persistent_thing_____0062bf50,0x38);
  iVar1 = FUN_0050b520(bea_arg(&DAT_00855090), bea_arg(param_1), bea_arg(0));
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_0050d7d0(bea_arg(&DAT_00855090));
    if (iVar1 == 0) {
      *(undefined4 *)((int)this_ + 0x29c) = 1;
    }
    else {
      *(undefined4 *)((int)this_ + 0x29c) = 2;
    }
    iVar1 = 0;
    *(undefined4 *)((int)this_ + 0x2b8) = 0;
    if (0 < *(int *)((int)this_ + 0x29c)) {
      do {
        pvVar2 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x50), bea_arg(0x28), bea_arg(s_C__dev_ONSLAUGHT2_game_cpp_0062bba4), bea_arg(0x353));
        if (pvVar2 == (void *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_004d2780(bea_arg(pvVar2), bea_arg(iVar1 + 1));
        }
        *(undefined4 *)((int)this_ + iVar1 * 4 + 0x2a4) = uVar3;
        if (iVar1 == 0) {
          uVar4 = FUN_00466980(bea_arg(&DAT_0089d758));
        }
        else {
          uVar4 = FUN_0051f370(bea_arg(&DAT_008a1810));
          uVar5 = FUN_00466980(bea_arg(&DAT_0089d758));
          if (uVar4 == uVar5) {
            uVar4 = FUN_00466980(bea_arg(&DAT_0089d758));
            uVar4 = uVar4 ^ 1;
          }
        }
        pvVar2 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x178), bea_arg(0x27), bea_arg(s_C__dev_ONSLAUGHT2_game_cpp_0062bba4), bea_arg(0x366));
        if (pvVar2 == (void *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_005145f0(bea_arg(pvVar2), bea_arg(*(undefined4 *)((int)this_ + iVar1 * 4 + 0x2a4)), bea_arg(uVar4), bea_arg((&DAT_00662ad4)[iVar1]));
        }
        *(undefined4 *)((int)this_ + iVar1 * 4 + 0x2b4) = uVar3;
        iVar1 = iVar1 + 1;
      } while (BEA_LOOP_GUARD((iVar1 < *(int *)((int)this_ + 0x29c))));
    }
    DAT_0066e854 = *(undefined4 *)((int)this_ + 0x2a4);
    FUN_0055a420(bea_arg(0x9cc148));   // mov ecx, 0x9cc148 (0046cfd8)
    FUN_0042c810(bea_arg(&DAT_00663498), bea_arg(1), bea_arg(0));
    FUN_0053f010(bea_arg(&DAT_0089c9a0), bea_arg(0xff), bea_arg(1));
    FUN_005159b0();
    FUN_00441740(&DAT_0066eb90,s_G__LL_succeeded_0062bf40);
    uVar3 = 1;
  }
  return uVar3;
}

// @autoport-registration
// stack parity (bea/parity.h): the game code this calls runs at the original's depths
// tools/callsites.py 46cdf0 --table: the original's calls (kind, target or vtable offset,
// ESP below the entry ESP, return address); between calls its ESP is entry - 0x1c
static const BeaParSite par_0046cdf0[] = {
    {BEA_PAR_DIRECT, 0x00441740, 0x28, 0x0046ce1f},   // 0046ce1a
    {BEA_PAR_DIRECT, 0x00441740, 0x28, 0x0046ce4f},   // 0046ce4a
    {BEA_PAR_DIRECT, 0x00441740, 0x28, 0x0046ce63},   // 0046ce5e
    {BEA_PAR_DIRECT, 0x00441740, 0x28, 0x0046ce77},   // 0046ce72
    {BEA_PAR_DIRECT, 0x00441740, 0x28, 0x0046ce8b},   // 0046ce86
    {BEA_PAR_DIRECT, 0x00441740, 0x28, 0x0046ce9f},   // 0046ce9a
    {BEA_PAR_DIRECT, 0x0050b520, 0x24, 0x0046ceae},   // 0046cea9
    {BEA_PAR_DIRECT, 0x0050d7d0, 0x1c, 0x0046cec0},   // 0046cebb
    {BEA_PAR_DIRECT, 0x005490e0, 0x2c, 0x0046cf08},   // 0046cf03
    {BEA_PAR_DIRECT, 0x004d2780, 0x20, 0x0046cf1f},   // 0046cf1a
    {BEA_PAR_DIRECT, 0x00466980, 0x1c, 0x0046cf40},   // 0046cf3b
    {BEA_PAR_DIRECT, 0x0051f370, 0x1c, 0x0046cf4e},   // 0046cf49
    {BEA_PAR_DIRECT, 0x00466980, 0x1c, 0x0046cf5a},   // 0046cf55
    {BEA_PAR_DIRECT, 0x00466980, 0x1c, 0x0046cf68},   // 0046cf63
    {BEA_PAR_DIRECT, 0x005490e0, 0x2c, 0x0046cf88},   // 0046cf83
    {BEA_PAR_DIRECT, 0x005145f0, 0x28, 0x0046cfb0},   // 0046cfab
    {BEA_PAR_DIRECT, 0x0055a420, 0x1c, 0x0046cfe7},   // 0046cfe2
    {BEA_PAR_DIRECT, 0x0042c810, 0x24, 0x0046cff4},   // 0046cfef
    {BEA_PAR_DIRECT, 0x0053f010, 0x24, 0x0046d005},   // 0046d000
    {BEA_PAR_DIRECT, 0x005159b0, 0x1c, 0x0046d00f},   // 0046d00a
    {BEA_PAR_DIRECT, 0x00441740, 0x24, 0x0046d01e},   // 0046d019
    {0, 0, 0, 0}};
BEA_PARITY_HOOK(0x0046cdf0, 0046cdf0, ap_0046cdf0, 0x1c, par_0046cdf0)
