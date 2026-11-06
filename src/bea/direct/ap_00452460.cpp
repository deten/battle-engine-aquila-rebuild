// auto-ported from 00452460_vslot7.c (CFEPBriefing::vslot7, 650 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xd0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CFEPBriefing;
#define DAT_0089d94c GLOBAL_AT(int, 0x0089d94c)
#define DAT_00628fe8 GLOBAL_AT(float, 0x00628fe8)
#define _DAT_00628fec GLOBAL_AT(float, 0x00628fec)
#define DAT_00629038 GLOBAL_AT(int, 0x00629038)
#define DAT_0089d91c GLOBAL_AT(int, 0x0089d91c)
#define s__data_video_Briefings_PC__03d_25_00628fef ((char*)0x00628fef)
#define s_data_video_Briefings_PC__03d_exa_0062903c ((char*)0x0062903c)
#define s_data_video_Briefings_PC__03d_vid_00629014 ((char*)0x00629014)
typedef uint32_t (BEA_THISCALL* FUN_005412e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005412e0_t> FUN_005412e0 = {(FUN_005412e0_t)0x005412e0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};
typedef void * (BEA_CDECL* FUN_0055e490_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e490_t> FUN_0055e490 = {(FUN_0055e490_t)0x0055e490};
typedef int (BEA_CDECL* FUN_0055e4a3_t)(uint32_t);
static const bea_guard<FUN_0055e4a3_t> FUN_0055e4a3 = {(FUN_0055e4a3_t)0x0055e4a3};

static void BEA_THISCALL ap_00452460(CFEPBriefing * this_, undefined4 param_1)
{
  int iVar1;

  alignas(16) uint8_t bea_frame_[0xd0] = {};   // the original stack frame (emulate_frame)
  int &local_d0 = *reinterpret_cast<int *>(bea_frame_ + 0xd0 - 0xd0);
  undefined1 (&local_c8)[200] = *reinterpret_cast<undefined1 (*)[200]>(bea_frame_ + 0xd0 - 0xc8);
  if (0x1af < DAT_0089d94c) {
    if (0x264 < DAT_0089d94c) {
      switch(DAT_0089d94c) {
      case 0x26d:
      case 0x26e:
        local_d0 = 0x26d;
        break;
      default:
switchD_004524a3_caseD_65:
        break;
      case 700:
        local_d0 = 700;
        break;
      case 0x2c6:
        local_d0 = 0x2c6;
        break;
      case 0x2d0:
        local_d0 = 0x2d0;
        break;
      case 0x2db:
      case 0x2dc:
        local_d0 = 0x2db;
        break;
      case 0x2e5:
      case 0x2e6:
        local_d0 = 0x2e5;
        break;
      case 800:
        local_d0 = 800;
      }
      goto LAB_004525fc;
    }
    if (DAT_0089d94c == 0x264) {
switchD_0045256a_caseD_263:
      local_d0 = 0x263;
    }
    else {
      switch(DAT_0089d94c) {
      case 0x1b0:
        goto switchD_0045256a_caseD_1b0;
      default:
        goto switchD_004524a3_caseD_65;
      case 500:
        local_d0 = 500;
        break;
      case 0x1ff:
        local_d0 = 0x1ff;
        break;
      case 0x200:
        local_d0 = 0x200;
        break;
      case 0x209:
      case 0x20a:
        local_d0 = 0x209;
        break;
      case 0x20b:
      case 0x20c:
        local_d0 = 0x20b;
        break;
      case 600:
        local_d0 = 600;
        break;
      case 0x263:
        goto switchD_0045256a_caseD_263;
      }
    }
    goto LAB_004525fc;
  }
  if (DAT_0089d94c == 0x1af) {
switchD_0045256a_caseD_1b0:
    local_d0 = 0x1af;
    goto LAB_004525fc;
  }
  if (DAT_0089d94c < 0x138) {
    if (DAT_0089d94c != 0x137) {
      switch(DAT_0089d94c) {
      case 100:
        local_d0 = 100;
        break;
      default:
        goto switchD_004524a3_caseD_65;
      case 0x6e:
        local_d0 = 0x6e;
        break;
      case 200:
        local_d0 = 200;
        break;
      case 0xd3:
      case 0xd4:
        local_d0 = 0xd3;
        break;
      case 0xdd:
      case 0xde:
        local_d0 = 0xdd;
        break;
      case 0xe7:
      case 0xe8:
        local_d0 = 0xe7;
        break;
      case 300:
        local_d0 = 300;
      }
      goto LAB_004525fc;
    }
switchD_00452506_caseD_138:
    local_d0 = 0x137;
  }
  else {
    switch(DAT_0089d94c) {
    case 0x138:
      goto switchD_00452506_caseD_138;
    default:
      goto switchD_004524a3_caseD_65;
    case 0x141:
    case 0x142:
      local_d0 = 0x141;
      break;
    case 0x14b:
    case 0x14c:
      local_d0 = 0x14b;
      break;
    case 400:
      local_d0 = 400;
      break;
    case 0x19b:
    case 0x19c:
      local_d0 = 0x19b;
      break;
    case 0x1a5:
    case 0x1a6:
      local_d0 = 0x1a5;
    }
  }
LAB_004525fc:
  FUN_0055de9b(local_c8,s_data_video_Briefings_PC__03d_exa_0062903c,local_d0);
  DAT_00628fe8 = 1.0f;
  _DAT_00628fec = 1.0f;
  iVar1 = FUN_0055e490(bea_arg(local_c8), bea_arg(&DAT_00629038));
  if (iVar1 == 0) {
    FUN_0055de9b(local_c8,s_data_video_Briefings_PC__03d_vid_00629014,local_d0);
    DAT_00628fe8 = 0.78515625;
    _DAT_00628fec = 0.58203125;
    iVar1 = FUN_0055e490(bea_arg(local_c8), bea_arg(&DAT_00629038));
    if (iVar1 == 0) {
      FUN_0055de9b(local_c8,s__data_video_Briefings_PC__03d_25_00628fef + 1,local_d0);
    }
    else {
      FUN_0055e4a3(bea_arg(iVar1));
    }
  }
  else {
    FUN_0055e4a3(bea_arg(iVar1));
  }
  local_d0 = (int)(longlong)ROUND(149.0f / _DAT_00628fec);
  iVar1 = local_d0;
  local_d0 = (int)(longlong)ROUND(201.0f / DAT_00628fe8);
  FUN_005412e0(bea_arg(&DAT_0089d91c), bea_arg(local_c8), bea_arg(local_d0), bea_arg(iVar1), bea_arg(0), bea_arg(1), bea_arg(0));
  *(undefined4 *)(this_ + 0xc) = 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00452460, ap_00452460));
