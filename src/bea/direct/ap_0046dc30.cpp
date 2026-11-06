// auto-ported from 0046dc30_FUN_0046dc30.c (FUN_0046dc30, 1531 bytes) by tools/autoport.py
// @hand-fixed 2026-10-29 0x4a2a80 is a thiscall on 0x9c3df0 (mov ecx at 0046dd31; __chkstk prologue hid the ECX read) not stdcall; 0x5015c0 takes no arguments (0046e1d5); the clamp tests `test ah, 1` also catch NaN (0046de30/0046de6e); the clock tests of cases 3-5 keep the unordered result (0046e150); local_110 = 0 stored explicitly (0046df64); 0x515880 called with ECX = 0x88a0a8 as at 0046df9e (its `push ecx` slot is passed on to 0x512490)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x120: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#define BEA_PARITY   // stack parity: see the registration
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_00663050 GLOBAL_AT(int, 0x00663050)
#define DAT_0083d448 GLOBAL_AT(int, 0x0083d448)
#define DAT_0083d454 GLOBAL_AT(int, 0x0083d454)
#define DAT_00679ec4 GLOBAL_AT(int, 0x00679ec4)
#define DAT_009c8010 GLOBAL_AT(int, 0x009c8010)
#define DAT_0089c9a0 GLOBAL_AT(int, 0x0089c9a0)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_0062ba44 GLOBAL_AT(char, 0x0062ba44)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00662dd4 GLOBAL_AT(int, 0x00662dd4)
#define DAT_0066e8c0 GLOBAL_AT(char, 0x0066e8c0)
#define DAT_0062493c GLOBAL_AT(char, 0x0062493c)
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define DAT_008550d0 GLOBAL_AT(undefined4*, 0x008550d0)
#define DAT_00662dcc GLOBAL_AT(int, 0x00662dcc)
#define DAT_00889a48 GLOBAL_AT(int, 0x00889a48)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define s_autoexec_con_0062c0f4 ((char*)0x0062c0f4)
#define s_dumptimerecords_0062c104 ((char*)0x0062c104)
#define s_Post_Load__d_0062c130 ((char*)0x0062c130)
#define s_Dump_the_game_time_records_0062c114 ((char*)0x0062c114)
typedef uint32_t (BEA_CDECL* FUN_00404c10_t)(void);
static const bea_guard<FUN_00404c10_t> FUN_00404c10 = {(FUN_00404c10_t)0x00404c10};
typedef uint32_t (BEA_THISCALL* FUN_0042ad30_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042ad30_t> FUN_0042ad30 = {(FUN_0042ad30_t)0x0042ad30};
typedef undefined4 (BEA_THISCALL* FUN_0042af80_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042af80_t> FUN_0042af80 = {(FUN_0042af80_t)0x0042af80};
typedef uint32_t (BEA_THISCALL* FUN_0042bbc0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042bbc0_t> FUN_0042bbc0 = {(FUN_0042bbc0_t)0x0042bbc0};
typedef uint32_t (BEA_THISCALL* FUN_0042c810_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042c810_t> FUN_0042c810 = {(FUN_0042c810_t)0x0042c810};
typedef uint32_t (BEA_THISCALL* FUN_0042cf40_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042cf40_t> FUN_0042cf40 = {(FUN_0042cf40_t)0x0042cf40};
typedef uint32_t (BEA_THISCALL* FUN_0042cf70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042cf70_t> FUN_0042cf70 = {(FUN_0042cf70_t)0x0042cf70};
typedef uint32_t (BEA_CDECL* FUN_0042d7d0_t)(uint32_t);
static const bea_guard<FUN_0042d7d0_t> FUN_0042d7d0 = {(FUN_0042d7d0_t)0x0042d7d0};
typedef undefined4 (BEA_CDECL* FUN_0042d810_t)(void);
static const bea_guard<FUN_0042d810_t> FUN_0042d810 = {(FUN_0042d810_t)0x0042d810};
typedef undefined4 (BEA_THISCALL* FUN_0042e4b0_t)(uint32_t);
static const bea_guard<FUN_0042e4b0_t> FUN_0042e4b0 = {(FUN_0042e4b0_t)0x0042e4b0};
typedef uint32_t (BEA_THISCALL* FUN_0042e610_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042e610_t> FUN_0042e610 = {(FUN_0042e610_t)0x0042e610};
typedef uint32_t (BEA_THISCALL* FUN_0044a130_t)(uint32_t);
static const bea_guard<FUN_0044a130_t> FUN_0044a130 = {(FUN_0044a130_t)0x0044a130};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};
typedef uint32_t (BEA_THISCALL* FUN_0046ca70_t)(uint32_t);
static const bea_guard<FUN_0046ca70_t> FUN_0046ca70 = {(FUN_0046ca70_t)0x0046ca70};
typedef undefined4 (BEA_THISCALL* FUN_0046cdf0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0046cdf0_t> FUN_0046cdf0 = {(FUN_0046cdf0_t)0x0046cdf0};
typedef undefined4 (BEA_THISCALL* FUN_0046d040_t)(uint32_t);
static const bea_guard<FUN_0046d040_t> FUN_0046d040 = {(FUN_0046d040_t)0x0046d040};
typedef uint32_t (BEA_THISCALL* FUN_0046d470_t)(uint32_t);
static const bea_guard<FUN_0046d470_t> FUN_0046d470 = {(FUN_0046d470_t)0x0046d470};
typedef uint32_t (BEA_THISCALL* FUN_0046d890_t)(uint32_t);
static const bea_guard<FUN_0046d890_t> FUN_0046d890 = {(FUN_0046d890_t)0x0046d890};
typedef uint32_t (BEA_THISCALL* FUN_0046e910_t)(uint32_t);
static const bea_guard<FUN_0046e910_t> FUN_0046e910 = {(FUN_0046e910_t)0x0046e910};
typedef uint32_t (BEA_THISCALL* FUN_0046eee0_t)(uint32_t);
static const bea_guard<FUN_0046eee0_t> FUN_0046eee0 = {(FUN_0046eee0_t)0x0046eee0};
typedef uint32_t (BEA_THISCALL* FUN_004a2a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004a2a80_t> FUN_004a2a80 = {(FUN_004a2a80_t)0x004a2a80};
typedef uint32_t (BEA_THISCALL* FUN_004bac40_t)(uint32_t);
static const bea_guard<FUN_004bac40_t> FUN_004bac40 = {(FUN_004bac40_t)0x004bac40};
typedef uint32_t (BEA_THISCALL* FUN_004bb8c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004bb8c0_t> FUN_004bb8c0 = {(FUN_004bb8c0_t)0x004bb8c0};
typedef uint32_t (BEA_THISCALL* FUN_004d3020_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d3020_t> FUN_004d3020 = {(FUN_004d3020_t)0x004d3020};
typedef uint32_t (BEA_THISCALL* FUN_004e12b0_t)(uint32_t);
static const bea_guard<FUN_004e12b0_t> FUN_004e12b0 = {(FUN_004e12b0_t)0x004e12b0};
typedef uint32_t (BEA_THISCALL* FUN_004e1b20_t)(uint32_t);
static const bea_guard<FUN_004e1b20_t> FUN_004e1b20 = {(FUN_004e1b20_t)0x004e1b20};
typedef uint32_t (BEA_THISCALL* FUN_004ebc00_t)(uint32_t);
static const bea_guard<FUN_004ebc00_t> FUN_004ebc00 = {(FUN_004ebc00_t)0x004ebc00};
typedef undefined4 (BEA_THISCALL* FUN_004f99b0_t)(uint32_t);
static const bea_guard<FUN_004f99b0_t> FUN_004f99b0 = {(FUN_004f99b0_t)0x004f99b0};
typedef int (BEA_CDECL* FUN_005015c0_t)(void);
static const bea_guard<FUN_005015c0_t> FUN_005015c0 = {(FUN_005015c0_t)0x005015c0};
typedef undefined4 (BEA_THISCALL* FUN_00515880_t)(uint32_t);   // no stack arguments; ECX as the original loads it (its push ecx slot reaches 0x512490's argument)
static const bea_guard<FUN_00515880_t> FUN_00515880 = {(FUN_00515880_t)0x00515880};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef undefined4 (BEA_CDECL* FUN_00523120_t)(int, int, ...);
static const bea_guard<FUN_00523120_t> FUN_00523120 = {(FUN_00523120_t)0x00523120};
typedef uint32_t (BEA_THISCALL* FUN_00549270_t)(uint32_t);
static const bea_guard<FUN_00549270_t> FUN_00549270 = {(FUN_00549270_t)0x00549270};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static undefined4 BEA_THISCALL ap_0046dc30(void * this_, undefined4 param_1)
{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined ***pppuVar4;
  void *this_00;
  undefined4 *puVar5;
  int *piVar6;
  ushort uVar7;
  float10 fVar8;
  float10 fVar9;
  undefined4 uVar10;

  alignas(16) uint8_t bea_frame_[0x120] = {};   // the original stack frame (emulate_frame)
  float &local_118 = *reinterpret_cast<float *>(bea_frame_ + 0x120 - 0x118);
  undefined ** &local_114 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x120 - 0x114);
  undefined4 &local_110 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x120 - 0x110);
  undefined1 (&local_10c)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x120 - 0x10c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x120 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x120 - 0x4);
  if (*(int *)((int)this_ + 0xa08) == 0) {
    FUN_0042cf40(bea_arg(&DAT_00663498), bea_arg(0), bea_arg(0x42a00000));
  }
  iVar2 = FUN_0046cdf0(bea_arg(this_), bea_arg(param_1));
  if (iVar2 == 0) {
    FUN_0046ca70(bea_arg(this_));
    return 3;
  }
  if ((((*(int *)((int)this_ + 0xa08) == 0) || (DAT_00663050 != 0)) || (DAT_0083d448 == 1)) ||
     (((DAT_0083d454 == 1 || (DAT_0083d454 == 2)) ||
      ((iVar2 = FUN_00523120(*(undefined4 *)((int)this_ + 0x30),0), iVar2 == -1 ||
       (DAT_0083d448 != 0)))))) {
    uVar10 = 0x42b40000;
  }
  else {
    uVar10 = 0x42c80000;
  }
  FUN_0042cf40(bea_arg(&DAT_00663498), bea_arg(0x42a00000), bea_arg(uVar10));
  iVar3 = FUN_0046d040(bea_arg(this_));
  iVar2 = DAT_00679ec4;
  if (iVar3 == 0) {
    FUN_0046ca70(bea_arg(this_));
    return 3;
  }
  DAT_00679ec4 = DAT_00679ec4 + 1;
  FUN_0055de9b(local_10c,s_Post_Load__d_0062c130,iVar2);
  FUN_004a2a80(bea_arg(&DAT_009c3df0), bea_arg(local_10c));   // mov ecx, 0x9c3df0 (0046dd31)
  if ((*(int *)((int)this_ + 0xa08) == 0) || (DAT_00663050 != 0)) {
LAB_0046dda2:
    if (DAT_0083d448 == 0) {
      uVar10 = 0x42b40000;
    }
    else {
LAB_0046ddb6:
      uVar10 = 0x42c80000;
    }
  }
  else {
    if (DAT_0083d448 == 1) goto LAB_0046ddb6;
    if (((DAT_0083d454 == 1) || (DAT_0083d454 == 2)) ||
       (iVar2 = FUN_00523120(*(undefined4 *)((int)this_ + 0x30),0), iVar2 == -1)) goto LAB_0046dda2;
    FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3f800000));
    FUN_0042bbc0(bea_arg(&DAT_00663498), bea_arg(0), bea_arg(1), bea_arg(1));
    FUN_0046d890(bea_arg(this_));
    uVar10 = 0;
  }
  FUN_0042cf40(bea_arg(&DAT_00663498), bea_arg(uVar10), bea_arg(0x42c80000));
  FUN_004ebc00(bea_arg(&DAT_009c8010));
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3e4ccccd));
  if (*(int *)((int)this_ + 0xa08) != 0) {
    FUN_0044a130(bea_arg(&DAT_0089c9a0));
  }
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3ecccccd));
  fVar8 = bea_fcast<float10>(FUN_005159e0(bea_arg(&DAT_0088a0a8)));
  *(float *)((int)this_ + 0x3a0) = bea_fcast<float>(fVar8);
  fVar9 = (bea_fcast<float10>(*(float *)((int)this_ + 0x398)) - fVar8) / bea_fcast<float10>(*(float *)((int)this_ + 0x3a8));
  *(float *)((int)this_ + 0x3ac) = bea_fcast<float>(fVar9);
  if (!(fVar9 >= bea_fcast<float10>(0.0f))) {   // test ah, 1: below or unordered (0046de30)
    *(undefined4 *)((int)this_ + 0x3ac) = 0;
  }
  if (1.0f < *(float *)((int)this_ + 0x3ac)) {
    *(undefined4 *)((int)this_ + 0x3ac) = 0x3f800000;
  }
  fVar8 = (bea_fcast<float10>(*(float *)((int)this_ + 0x39c)) - fVar8) / bea_fcast<float10>(*(float *)((int)this_ + 0x3a8));
  *(float *)((int)this_ + 0x3b0) = bea_fcast<float>(fVar8);
  if (!(fVar8 >= bea_fcast<float10>(0.0f))) {   // test ah, 1 (0046de6e)
    *(undefined4 *)((int)this_ + 0x3b0) = 0;
  }
  if (1.0f < *(float *)((int)this_ + 0x3b0)) {
    *(undefined4 *)((int)this_ + 0x3b0) = 0x3f800000;
  }
  *(undefined4 *)((int)this_ + 0x3a4) = 0;
  *(undefined4 *)((int)this_ + 0x48) = 0xbf800000;
  *(undefined4 *)((int)this_ + 0x38c) = 0xbf800000;
  *(undefined4 *)((int)this_ + 0x388) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x18) = 0;
  FUN_0042af80(bea_arg(&DAT_00663498), bea_arg(s_dumptimerecords_0062c104), bea_arg(s_Dump_the_game_time_records_0062c114), bea_arg(((void*)0x0046bed0)), bea_arg(0));
  *(undefined4 *)((int)this_ + 0x300) = 0;
  if (DAT_0062ba44 != '\0') {
    DAT_0062ba44 = '\0';
  }
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3f19999a));
  FUN_0042ad30(bea_arg(&DAT_00663498), bea_arg(s_autoexec_con_0062c0f4));
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3f333333));
  FUN_00549270(bea_arg(&DAT_009c3df0));
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3f4ccccd));
  if (DAT_0083d448 != 0) {
    if (DAT_00662dd4 != 0) goto LAB_0046e05f;
    DAT_0066e8c0 = 1;
    FUN_0042cf40(bea_arg(&DAT_00663498), bea_arg(0x42c80000), bea_arg(0x42c80000));
    FUN_0042c810(bea_arg(&DAT_00663498), bea_arg(0), bea_arg(1));
    local_110 = 0;                      // mov [esp+0x18], ebp (0046df64)
    local_114 = ((void*)0x005dbbdc);
    FUN_0042e610(bea_arg(*(void **)((int)this_ + 0x2b4)), bea_arg(&local_114));
    fVar8 = bea_fcast<float10>(FUN_005159e0(bea_arg(&DAT_0088a0a8)));
    local_118 = bea_fcast<float>(fVar8);
    FUN_0042d7d0(bea_arg(0));
    do {
      FUN_00515880(bea_arg(&DAT_0088a0a8));   // mov ecx, 0x88a0a8 (0046df9e)
      bea_vcall<uint32_t>(*(int **)((int)this_ + 0x2b4), 0x8);
      fVar8 = bea_fcast<float10>(FUN_005159e0(bea_arg(&DAT_0088a0a8)));
      if (bea_fcast<float10>(local_118) < fVar8 - bea_fcast<float10>(1.0f)) {
        DAT_0062493c = DAT_0062493c ^ 1;
        FUN_0042c810(bea_arg(&DAT_00663498), bea_arg(0), bea_arg(1));
        fVar8 = bea_fcast<float10>(FUN_005159e0(bea_arg(&DAT_0088a0a8)));
        local_118 = bea_fcast<float>(fVar8);
      }
      pppuVar4 = (undefined ***)FUN_0042e4b0(bea_arg(*(void **)((int)this_ + 0x2b4)));
    } while (BEA_LOOP_GUARD(((pppuVar4 == &local_114) && (cVar1 = FUN_0042d810(), cVar1 == '\0'))));
    DAT_0062493c = 1;
    DAT_0066e8c0 = 0;
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x2b4), 0x8);
    FUN_004bac40(bea_arg(&local_114));
  }
  if (DAT_00662dd4 == 0) {
    while (BEA_LOOP_GUARD((DAT_008a9ac0 == 1))) {
      FUN_0046e910(bea_arg(this_));
    }
  }
LAB_0046e05f:
  if (DAT_0083d448 == 0) {
    FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3f800000));
  }
  puVar5 = DAT_008550d0;
  if (DAT_008550d0 == (undefined4 *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)*DAT_008550d0;
  }
  while (BEA_LOOP_GUARD((this_00 != (void *)0x0))) {
    FUN_004f99b0(bea_arg(this_00));
    puVar5 = (undefined4 *)puVar5[1];
    if (puVar5 == (undefined4 *)0x0) {
      this_00 = (void *)0x0;
    }
    else {
      this_00 = (void *)*puVar5;
    }
  }
  if (DAT_00662dcc != 0) {
    if (*(int *)((int)this_ + 0x30) == 100) {
      uVar10 = 2;
    }
    else {
      uVar10 = 4;
    }
    FUN_004bb8c0(bea_arg(&DAT_00889a48), bea_arg(uVar10), bea_arg(0));
  }
  FUN_0042bbc0(bea_arg(&DAT_00663498), bea_arg(0), bea_arg(1), bea_arg(1));
  iVar2 = *(int *)((int)this_ + 0x34);
  do {
    if (iVar2 != 0) {
      FUN_004e12b0(bea_arg(&DAT_00896988));
      iVar2 = *(int *)((int)this_ + 0x34);
      if (((iVar2 == 6) || (iVar2 == 4)) || (iVar2 == 7)) {
        FUN_00468770(1);
        FUN_004e1b20(bea_arg(&DAT_00896988));
      }
      FUN_0046d470(bea_arg(this_));
      FUN_00404c10();
      FUN_005015c0();   // nothing pushed (0046e1d5); the callee reads no stack argument
      piVar6 = (int *)((int)this_ + 0x2c4);
      iVar2 = 4;
      do {
        if ((int *)piVar6[-8] != (int *)0x0) {
          bea_vcall<uint32_t>(piVar6[-8], 0x4, 1);
          piVar6[-8] = 0;
        }
        if ((int *)*piVar6 != (int *)0x0) {
          bea_vcall<uint32_t>(*piVar6, 0x20, 1);
          *piVar6 = 0;
        }
        piVar6 = piVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (BEA_LOOP_GUARD((iVar2 != 0)));
      return *(undefined4 *)((int)this_ + 0x34);
    }
    FUN_0046eee0(bea_arg(this_));
    if (0 < DAT_0083d454) {
      iVar2 = 0;
      if (0 < *(int *)((int)this_ + 0x29c)) {
        puVar5 = (undefined4 *)((int)this_ + 0x2a4);
        do {
          FUN_004d3020(bea_arg((void *)*puVar5), bea_arg(1));
          iVar2 = iVar2 + 1;
          puVar5 = puVar5 + 1;
        } while (BEA_LOOP_GUARD((iVar2 < *(int *)((int)this_ + 0x29c))));
      }
      switch(DAT_0083d454) {
      case 2:
        if (DAT_00672fd0 > 2.0f) goto LAB_0046e180;      // test ah, 0x41; jne skip (0046e13d): unordered skips
        goto LAB_0046e18a;
      case 3:
      case 4:
        if (DAT_00672fd0 > 120.0f) goto LAB_0046e180;    // 0046e150
        break;
      case 5:
        if (DAT_00672fd0 > 5.0f) goto LAB_0046e180;
        break;
      default:
        if (30.0f < DAT_00672fd0) goto LAB_0046e180;
        goto LAB_0046e18a;
      }
      if (*(int *)((int)this_ + 0x28) == 4) {           // 0046e157
LAB_0046e180:
        *(undefined4 *)((int)this_ + 0x34) = 1;
        *(undefined4 *)((int)this_ + 0x28) = 5;
      }
    }
LAB_0046e18a:
    iVar2 = *(int *)((int)this_ + 0x34);
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
// stack parity (bea/parity.h): the game code this calls runs at the original's depths
// tools/callsites.py 46dc30 --table: the original's calls (kind, target or vtable offset,
// ESP below the entry ESP, return address); between calls its ESP is entry - 0x124
static const BeaParSite par_0046dc30[] = {
    {BEA_PAR_DIRECT, 0x0042cf40, 0x12c, 0x0046dc6a},   // 0046dc65
    {BEA_PAR_DIRECT, 0x0046cdf0, 0x128, 0x0046dc79},   // 0046dc74
    {BEA_PAR_DIRECT, 0x0046ca70, 0x124, 0x0046dc84},   // 0046dc7f
    {BEA_PAR_DIRECT, 0x00523120, 0x12c, 0x0046dcc5},   // 0046dcc0
    {BEA_PAR_DIRECT, 0x0042cf40, 0x12c, 0x0046dcf0},   // 0046dceb
    {BEA_PAR_DIRECT, 0x0046d040, 0x124, 0x0046dcf7},   // 0046dcf2
    {BEA_PAR_DIRECT, 0x0046ca70, 0x124, 0x0046dd02},   // 0046dcfd
    {BEA_PAR_DIRECT, 0x0055de9b, 0x134, 0x0046dd2a},   // 0046dd25
    {BEA_PAR_DIRECT, 0x004a2a80, 0x12c, 0x0046dd3c},   // 0046dd37
    {BEA_PAR_DIRECT, 0x00523120, 0x130, 0x0046dd73},   // 0046dd6e
    {BEA_PAR_DIRECT, 0x0042cf70, 0x12c, 0x0046dd86},   // 0046dd81
    {BEA_PAR_DIRECT, 0x0042bbc0, 0x134, 0x0046dd93},   // 0046dd8e
    {BEA_PAR_DIRECT, 0x0046d890, 0x128, 0x0046dd9a},   // 0046dd95
    {BEA_PAR_DIRECT, 0x0042cf40, 0x130, 0x0046ddca},   // 0046ddc5
    {BEA_PAR_DIRECT, 0x004ebc00, 0x128, 0x0046ddd4},   // 0046ddcf
    {BEA_PAR_DIRECT, 0x0042cf70, 0x12c, 0x0046dde3},   // 0046ddde
    {BEA_PAR_DIRECT, 0x0044a130, 0x128, 0x0046ddf5},   // 0046ddf0
    {BEA_PAR_DIRECT, 0x0042cf70, 0x12c, 0x0046de04},   // 0046ddff
    {BEA_PAR_DIRECT, 0x005159e0, 0x128, 0x0046de0e},   // 0046de09
    {BEA_PAR_DIRECT, 0x0042af80, 0x138, 0x0046dec9},   // 0046dec4
    {BEA_PAR_DIRECT, 0x0042cf70, 0x12c, 0x0046deee},   // 0046dee9
    {BEA_PAR_DIRECT, 0x0042ad30, 0x12c, 0x0046defd},   // 0046def8
    {BEA_PAR_DIRECT, 0x0042cf70, 0x12c, 0x0046df0c},   // 0046df07
    {BEA_PAR_DIRECT, 0x00549270, 0x128, 0x0046df16},   // 0046df11
    {BEA_PAR_DIRECT, 0x0042cf70, 0x12c, 0x0046df25},   // 0046df20
    {BEA_PAR_DIRECT, 0x0042cf40, 0x130, 0x0046df58},   // 0046df53
    {BEA_PAR_DIRECT, 0x0042c810, 0x130, 0x0046df64},   // 0046df5f
    {BEA_PAR_DIRECT, 0x0042e610, 0x12c, 0x0046df87},   // 0046df82
    {BEA_PAR_DIRECT, 0x005159e0, 0x128, 0x0046df91},   // 0046df8c
    {BEA_PAR_DIRECT, 0x0042d7d0, 0x12c, 0x0046df9b},   // 0046df96
    {BEA_PAR_DIRECT, 0x00515880, 0x128, 0x0046dfa8},   // 0046dfa3
    {BEA_PAR_VCALL, 0x00000008, 0x128, 0x0046dfb3}, /* pops guessed */   // 0046dfb0
    {BEA_PAR_DIRECT, 0x005159e0, 0x128, 0x0046dfbd},   // 0046dfb8
    {BEA_PAR_DIRECT, 0x0042c810, 0x130, 0x0046dfe9},   // 0046dfe4
    {BEA_PAR_DIRECT, 0x005159e0, 0x128, 0x0046dff3},   // 0046dfee
    {BEA_PAR_DIRECT, 0x0042e4b0, 0x128, 0x0046e002},   // 0046dffd
    {BEA_PAR_DIRECT, 0x0042d810, 0x128, 0x0046e00f},   // 0046e00a
    {BEA_PAR_VCALL, 0x00000008, 0x128, 0x0046e02c}, /* pops guessed */   // 0046e029
    {BEA_PAR_DIRECT, 0x004bac40, 0x128, 0x0046e040},   // 0046e03b
    {BEA_PAR_DIRECT, 0x0046e910, 0x128, 0x0046e057},   // 0046e052
    {BEA_PAR_DIRECT, 0x0042cf70, 0x12c, 0x0046e072},   // 0046e06d
    {BEA_PAR_DIRECT, 0x004f99b0, 0x128, 0x0046e08b},   // 0046e086
    {BEA_PAR_DIRECT, 0x004bb8c0, 0x130, 0x0046e0bf},   // 0046e0ba
    {BEA_PAR_DIRECT, 0x0042bbc0, 0x134, 0x0046e0cc},   // 0046e0c7
    {BEA_PAR_DIRECT, 0x0046eee0, 0x128, 0x0046e0e5},   // 0046e0e0
    {BEA_PAR_DIRECT, 0x004d3020, 0x12c, 0x0046e10d},   // 0046e108
    {BEA_PAR_DIRECT, 0x004e12b0, 0x128, 0x0046e1a4},   // 0046e19f
    {BEA_PAR_DIRECT, 0x00468770, 0x12c, 0x0046e1bc},   // 0046e1b7
    {BEA_PAR_DIRECT, 0x004e1b20, 0x128, 0x0046e1c9},   // 0046e1c4
    {BEA_PAR_DIRECT, 0x0046d470, 0x128, 0x0046e1d0},   // 0046e1cb
    {BEA_PAR_DIRECT, 0x00404c10, 0x128, 0x0046e1d5},   // 0046e1d0
    {BEA_PAR_DIRECT, 0x005015c0, 0x128, 0x0046e1da},   // 0046e1d5
    {BEA_PAR_VCALL, 0x00000004, 0x12c, 0x0046e1f5}, /* pops guessed */   // 0046e1f2
    {BEA_PAR_VCALL, 0x00000020, 0x12c, 0x0046e205}, /* pops guessed */   // 0046e202
    {0, 0, 0, 0}};
BEA_PARITY_HOOK(0x0046dc30, 0046dc30, ap_0046dc30, 0x124, par_0046dc30)
