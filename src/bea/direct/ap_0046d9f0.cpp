// auto-ported from 0046d9f0_FUN_0046d9f0.c (FUN_0046d9f0, 401 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x260: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0083d454 GLOBAL_AT(int, 0x0083d454)
#define DAT_00672e1c GLOBAL_AT(int, 0x00672e1c)
#define DAT_006728f8 GLOBAL_AT(int, 0x006728f8)
#define DAT_00629038 GLOBAL_AT(int, 0x00629038)
#define DAT_00662564 GLOBAL_AT(int, 0x00662564)
#define DAT_00660620 GLOBAL_AT(int, 0x00660620)
#define DAT_0089d690 GLOBAL_AT(int, 0x0089d690)
#define s_cutscenes__02d_0062c0c4 ((char*)0x0062c0c4)
#define s_cutscenes__02d_small_0062c098 ((char*)0x0062c098)
#define s_data_video__s_vid_0062c0b0 ((char*)0x0062c0b0)
typedef undefined4 (BEA_THISCALL* FUN_004496e0_t)(uint32_t);
static const bea_guard<FUN_004496e0_t> FUN_004496e0 = {(FUN_004496e0_t)0x004496e0};
typedef undefined4 (BEA_THISCALL* FUN_00465640_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00465640_t> FUN_00465640 = {(FUN_00465640_t)0x00465640};
typedef uint32_t (BEA_CDECL* FUN_004726b0_t)(void);
static const bea_guard<FUN_004726b0_t> FUN_004726b0 = {(FUN_004726b0_t)0x004726b0};
typedef uint32_t (BEA_CDECL* FUN_005159b0_t)(void);
static const bea_guard<FUN_005159b0_t> FUN_005159b0 = {(FUN_005159b0_t)0x005159b0};
typedef undefined4 (BEA_CDECL* FUN_00523120_t)(int, int, ...);
static const bea_guard<FUN_00523120_t> FUN_00523120 = {(FUN_00523120_t)0x00523120};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};
typedef void * (BEA_CDECL* FUN_0055e490_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e490_t> FUN_0055e490 = {(FUN_0055e490_t)0x0055e490};
typedef int (BEA_CDECL* FUN_0055e4a3_t)(uint32_t);
static const bea_guard<FUN_0055e4a3_t> FUN_0055e4a3 = {(FUN_0055e4a3_t)0x0055e4a3};

static void BEA_THISCALL ap_0046d9f0(void * this_)
{
  int v0;
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  alignas(16) uint8_t bea_frame_[0x260] = {};   // the original stack frame (emulate_frame)
  char (&local_258)[300] = *reinterpret_cast<char (*)[300]>(bea_frame_ + 0x260 - 0x258);
  undefined1 (&local_12c)[300] = *reinterpret_cast<undefined1 (*)[300]>(bea_frame_ + 0x260 - 0x12c);
  if ((((DAT_0083d454 != 1) && (DAT_0083d454 != 2)) && (*(int *)((int)this_ + 0x34) == 1)) &&
     (DAT_00672e1c == 5)) {
    v0 = FUN_00523120(*(undefined4 *)((int)this_ + 0x30),1);
    iVar1 = FUN_00523120(*(undefined4 *)((int)this_ + 0x30),2);
    if ((*(int *)((int)this_ + 0x30) == 500) && ((*(uint *)((int)this_ + 0x30c) & 0x20000000) != 0)) {
      v0 = iVar1;
    }
    if (*(int *)((int)this_ + 0x30) == 0x2d0) {
      iVar2 = FUN_004496e0(bea_arg(&DAT_006728f8));
      if (iVar2 != 0) {
        v0 = iVar1;
      }
    }
    if (v0 != -1) {
      FUN_0055de9b(local_258,s_cutscenes__02d_0062c0c4,v0);
      FUN_0055de9b(local_12c,s_data_video__s_vid_0062c0b0,local_258);
      iVar1 = FUN_0055e490(bea_arg(local_12c), bea_arg(&DAT_00629038));
      if (iVar1 == 0) {
        FUN_0055de9b(local_258,s_cutscenes__02d_small_0062c098,v0);
      }
      else {
        FUN_0055e4a3(bea_arg(iVar1));
      }
      iVar1 = v0 + 200;
      if (v0 == 0x21) {
        iVar1 = 0xe8;
      }
      if (((&DAT_00662564)[iVar1] != 3) && ((&DAT_00662564)[iVar1] != 2)) {
        (&DAT_00662564)[iVar1] = 2;
        DAT_00660620 = DAT_00660620 + 1;
      }
      uVar3 = 1;
      if ((((v0 == 9) || (v0 == 0xc)) || (v0 == 0xd)) ||
         (((v0 == 0xe || (v0 == 0xf)) || (v0 == 0x10)))) {
        uVar3 = 0;
      }
      FUN_00465640(bea_arg(&DAT_0089d690), bea_arg(local_258), bea_arg(0), bea_arg(uVar3), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(1));
      FUN_005159b0();
    }
    if ((*(int *)((int)this_ + 0x30) == 0x2e5) || (*(int *)((int)this_ + 0x30) == 800)) {
      FUN_004726b0();
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046d9f0, ap_0046d9f0));
