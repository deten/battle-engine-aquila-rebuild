// auto-ported from 004f21f0_FUN_004f21f0.c (FUN_004f21f0, 679 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x240: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_0083d990 GLOBAL_AT(int, 0x0083d990)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_text_cpp_00632dd8 ((char*)0x00632dd8)
#define s_english_00632d74 ((char*)0x00632d74)
#define s_ERROR__Can_t_open_text_file__s_00632df4 ((char*)0x00632df4)
#define s_data_LANGUAGE__s_DAT_00632e14 ((char*)0x00632e14)
#define s_data_LANGUAGE_american_DAT_00632e2c ((char*)0x00632e2c)
#define s_ERROR__unkown_language__d_00632d9c ((char*)0x00632d9c)
#define s_french_00632d7c ((char*)0x00632d7c)
#define s_spanish_00632d84 ((char*)0x00632d84)
#define s_unknown_version_in_text_file_00632db8 ((char*)0x00632db8)
#define s_italian_00632d8c ((char*)0x00632d8c)
#define s_german_00632d94 ((char*)0x00632d94)
typedef uint32_t (BEA_STDCALL* FUN_0042c750_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042c750_t> FUN_0042c750 = {(FUN_0042c750_t)0x0042c750};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef void* (BEA_THISCALL* FUN_00547d70_t)(uint32_t);
static const bea_guard<FUN_00547d70_t> FUN_00547d70 = {(FUN_00547d70_t)0x00547d70};
typedef uint32_t (BEA_THISCALL* FUN_00547d90_t)(uint32_t);
static const bea_guard<FUN_00547d90_t> FUN_00547d90 = {(FUN_00547d90_t)0x00547d90};
typedef undefined4 (BEA_THISCALL* FUN_00547ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00547ec0_t> FUN_00547ec0 = {(FUN_00547ec0_t)0x00547ec0};
typedef uint32_t (BEA_THISCALL* FUN_005482c0_t)(uint32_t);
static const bea_guard<FUN_005482c0_t> FUN_005482c0 = {(FUN_005482c0_t)0x005482c0};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef undefined4 (BEA_THISCALL* FUN_00548c00_t)(uint32_t);
static const bea_guard<FUN_00548c00_t> FUN_00548c00 = {(FUN_00548c00_t)0x00548c00};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_THISCALL ap_004f21f0(void * this_, int param_1)
{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  undefined2 uVar4;
  char *v0;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;

  alignas(16) uint8_t bea_frame_[0x240] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_240)[308] = *reinterpret_cast<undefined1 (*)[308]>(bea_frame_ + 0x240 - 0x240);
  char (&local_10c)[256] = *reinterpret_cast<char (*)[256]>(bea_frame_ + 0x240 - 0x10c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x240 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x240 - 0x4);
  if ((*(int *)((int)this_ + 0x14) == 0) && (*(int *)((int)this_ + 4) == 0)) {
    *(int *)((int)this_ + 0x1c) = param_1;
    if (DAT_0083d990 == 0) {
      switch(param_1) {
      case 1:
        v0 = s_french_00632d7c;
        break;
      case 2:
        v0 = s_german_00632d94;
        break;
      case 3:
        v0 = s_spanish_00632d84;
        break;
      case 4:
        v0 = s_italian_00632d8c;
        break;
      default:
        FUN_00441740(&DAT_0066f580,s_ERROR__unkown_language__d_00632d9c,param_1);
      case 0:
        v0 = s_english_00632d74;
      }
      FUN_0055de9b(local_10c,s_data_LANGUAGE__s_DAT_00632e14,v0);
    }
    else {
      FUN_0055de9b(local_10c,s_data_LANGUAGE_american_DAT_00632e2c);
    }
    FUN_00547d70(bea_arg(local_240));
    iVar5 = FUN_00547ec0(bea_arg(local_240), bea_arg(local_10c), bea_arg(0x11), bea_arg(1), bea_arg(0));
    if (iVar5 == 0) {
      FUN_0042c750(bea_arg(local_10c), bea_arg(0xffffffff));
      FUN_00441740(&DAT_0066f580,s_ERROR__Can_t_open_text_file__s_00632df4,local_10c);
      FUN_00548c00(bea_arg(local_240));
      FUN_00547d90(bea_arg(local_240));
    }
    else {
      uVar6 = FUN_005482c0(bea_arg(local_240));
      uVar7 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(uVar6), bea_arg(0x72), bea_arg(s_C__dev_ONSLAUGHT2_text_cpp_00632dd8), bea_arg(0x80));
      *(undefined4 *)((int)this_ + 4) = uVar7;
      FUN_00548570(bea_arg(local_240), bea_arg(uVar7), bea_arg(uVar6));
      *(undefined4 *)((int)this_ + 0x18) = uVar6;
      piVar2 = *(int **)((int)this_ + 4);
      iVar5 = *piVar2;
      if (iVar5 == -0x45) {
        uVar8 = piVar2[1];
        if ((uVar8 & 0x80000000) == 0) {
          *(undefined4 *)((int)this_ + 0x20) = 0;
        }
        else {
          *(undefined4 *)((int)this_ + 0x20) = 1;
        }
        uVar8 = uVar8 & 0x7fffffff;
        if (uVar8 == 1) {
          *(undefined4 *)this_ = 1;
          iVar5 = piVar2[2];
          *(int *)((int)this_ + 0x10) = iVar5;
          *(int **)((int)this_ + 8) = piVar2 + iVar5 * 2 + 3;
        }
        else if ((uVar8 == 2) || (uVar8 == 3)) {
          *(uint *)this_ = uVar8;
          iVar3 = piVar2[2];
          *(int *)((int)this_ + 0x10) = iVar3;
          iVar5 = iVar3 * 3 + 3;
          uVar1 = *(undefined1 *)((int)piVar2 + iVar5 * 4 + 1);
          uVar4 = *(undefined2 *)((int)(piVar2 + iVar5) + 2);
          iVar5 = piVar2[iVar5];
          *(int **)((int)this_ + 8) = piVar2 + iVar3 * 3 + 4;
          iVar3 = CONCAT31(CONCAT21(uVar4,uVar1),(char)iVar5) + *(int *)((int)this_ + 0x10) * 0xc;
          iVar5 = *(int *)((int)piVar2 + iVar3 + 0x10);
          *(int *)((int)this_ + 0xc) = (int)piVar2 + iVar3 + 0x14;
          if (*(int *)((int)this_ + 0x20) != 0) {
            uVar8 = (int)piVar2 + iVar5 + iVar3 + 0x17 & 0xfffffffc;
            puVar9 = (undefined4 *)(*(int *)((int)this_ + 0x10) * 0x40 + uVar8);
            *(uint *)((int)this_ + 0x2c) = uVar8;
            *(undefined4 *)((int)this_ + 0x28) = *puVar9;
            *(undefined4 **)((int)this_ + 0x24) = puVar9 + 1;
          }
        }
        else {
          FUN_00441740(&DAT_0066f580,s_unknown_version_in_text_file_00632db8);
        }
      }
      else {
        *(int *)((int)this_ + 0x10) = iVar5;
        *(int **)((int)this_ + 8) = piVar2 + iVar5 + 1;
        *(undefined4 *)this_ = 0;
      }
      FUN_00548c00(bea_arg(local_240));
      *(undefined4 *)((int)this_ + 0x14) = 1;
      FUN_00547d90(bea_arg(local_240));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f21f0, ap_004f21f0));
