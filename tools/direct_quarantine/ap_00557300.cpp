// auto-ported from 00557300_FUN_00557300.c (FUN_00557300, 1650 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x350: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_0085ad1c GLOBAL_AT(int, 0x0085ad1c)
#define DAT_008889f0 GLOBAL_AT(int, 0x008889f0)
#define DAT_00856014 GLOBAL_AT(int, 0x00856014)
#define DAT_009cc0d8 GLOBAL_AT(char, 0x009cc0d8)
#define DAT_009cc0e4 GLOBAL_AT(int, 0x009cc0e4)
#define DAT_009cc0e8 GLOBAL_AT(char, 0x009cc0e8)
#define DAT_009cc0f4 GLOBAL_AT(int, 0x009cc0f4)
#define DAT_009cc134 GLOBAL_AT(int, 0x009cc134)
#define DAT_00663064 GLOBAL_AT(int, 0x00663064)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_009cc0f8 GLOBAL_AT(int, 0x009cc0f8)
#define DAT_009cc104 GLOBAL_AT(int, 0x009cc104)
#define DAT_009cc108 GLOBAL_AT(char, 0x009cc108)
#define DAT_009cc114 GLOBAL_AT(int, 0x009cc114)
#define DAT_00888a50 GLOBAL_AT(int, 0x00888a50)
#define s_C__dev_ONSLAUGHT2_DXTexture_cpp_0065269c ((char*)0x0065269c)
#define s_data_resources_textures__s__d__s_006526e8 ((char*)0x006526e8)
#define s_data_resources_textures_mustbe___006526bc ((char*)0x006526bc)
#define s_mouse_tga_00640058 ((char*)0x00640058)
#define s_data_resources_dxtntextures__s___00652710 ((char*)0x00652710)
typedef undefined4 (BEA_STDCALL* FUN_0042d080_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042d080_t> FUN_0042d080 = {(FUN_0042d080_t)0x0042d080};
typedef bool (BEA_THISCALL* FUN_00528af0_t)(uint32_t);
static const bea_guard<FUN_00528af0_t> FUN_00528af0 = {(FUN_00528af0_t)0x00528af0};
typedef void* (BEA_THISCALL* FUN_00547d70_t)(uint32_t);
static const bea_guard<FUN_00547d70_t> FUN_00547d70 = {(FUN_00547d70_t)0x00547d70};
typedef uint32_t (BEA_THISCALL* FUN_00547d90_t)(uint32_t);
static const bea_guard<FUN_00547d90_t> FUN_00547d90 = {(FUN_00547d90_t)0x00547d90};
typedef undefined4 (BEA_THISCALL* FUN_00547ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00547ec0_t> FUN_00547ec0 = {(FUN_00547ec0_t)0x00547ec0};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef undefined4 (BEA_THISCALL* FUN_00548c00_t)(uint32_t);
static const bea_guard<FUN_00548c00_t> FUN_00548c00 = {(FUN_00548c00_t)0x00548c00};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef char * (BEA_CDECL* FUN_00557a00_t)(uint32_t);
static const bea_guard<FUN_00557a00_t> FUN_00557a00 = {(FUN_00557a00_t)0x00557a00};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};
typedef int (BEA_STDCALL* FUN_005758e6_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005758e6_t> FUN_005758e6 = {(FUN_005758e6_t)0x005758e6};

static int BEA_THISCALL ap_00557300(void * this_, int param_1)
{
  char cVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  undefined2 uVar6;
  byte *pbVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  int iVar16;
  undefined4 uVar17;
  bool bVar18;

  alignas(16) uint8_t bea_frame_[0x350] = {};   // the original stack frame (emulate_frame)
  int &local_34c = *reinterpret_cast<int *>(bea_frame_ + 0x350 - 0x34c);
  char (&local_344)[61] = *reinterpret_cast<char (*)[61]>(bea_frame_ + 0x350 - 0x344);
  undefined1 (&auStack_307)[195] = *reinterpret_cast<undefined1 (*)[195]>(bea_frame_ + 0x350 - 0x307);
  undefined1 (&local_244)[308] = *reinterpret_cast<undefined1 (*)[308]>(bea_frame_ + 0x350 - 0x244);
  char (&local_110)[260] = *reinterpret_cast<char (*)[260]>(bea_frame_ + 0x350 - 0x110);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x350 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x350 - 0x4);
  *(undefined4 *)((int)this_ + param_1 * 4 + 0xb8) = 0;
  iVar8 = *(int *)(((char *)&DAT_0085ad1c) + DAT_008889f0 * 0x516c) * 0xf68 + DAT_008889f0 * 0x516c;
  uVar11 = *(undefined4 *)
            (&DAT_00856014 + *(int *)(&DAT_00856014 + iVar8 + 0xf50) * 0x18 + iVar8 + 0x150);
  cVar4 = FUN_00528af0(bea_arg(&DAT_009cc0d8));
  iVar8 = DAT_009cc0e4;
  if ((((cVar4 == '\0') &&
       (cVar4 = FUN_00528af0(bea_arg(&DAT_009cc0e8)), iVar8 = DAT_009cc0f4, cVar4 == '\0')) || (iVar8 == 2))
     || (((cVar4 = FUN_00528af0(bea_arg(&DAT_009cc0d8)), iVar8 = DAT_009cc0e4, cVar4 != '\0' ||
          (cVar4 = FUN_00528af0(bea_arg(&DAT_009cc0e8)), iVar8 = DAT_009cc0f4, cVar4 != '\0')) &&
         ((iVar8 == 1 && ((*(byte *)((int)this_ + 0x155) & 1) != 0)))))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  local_34c = 0;
  if (DAT_009cc134 == 0) {
    if ((((byte)uVar11 & 3) == 3) || (bVar2)) goto LAB_0055750d;
    switch(*(undefined4 *)((int)this_ + 0x144)) {
    default:
      local_34c = 0;
      break;
    case 1:
      local_34c = 0x19;
      break;
    case 2:
      local_34c = 0x1a;
      break;
    case 3:
      local_34c = 0x16;
      break;
    case 4:
      local_34c = 0x15;
      break;
    case 5:
      local_34c = 0x17;
      break;
    case 6:
      goto switchD_005574b2_caseD_6;
    case 7:
      goto switchD_005574b2_caseD_7;
    case 8:
      local_34c = 0x34545844;
      goto LAB_0055750d;
    case 9:
      local_34c = 0x3c;
      break;
    case 10:
      local_34c = 0x3f;
    }
    if (local_34c == 0x15) {
switchD_005574b2_caseD_7:
      local_34c = 0x1a;
    }
    else if (local_34c == 0x16) {
switchD_005574b2_caseD_6:
      local_34c = 0x17;
    }
  }
  else if (bVar2) {
    switch(*(undefined4 *)((int)this_ + 0x144)) {
    default:
      local_34c = 0;
      break;
    case 1:
      local_34c = 0x19;
      break;
    case 2:
      local_34c = 0x1a;
      break;
    case 3:
      local_34c = 0x16;
      break;
    case 4:
      local_34c = 0x15;
      break;
    case 5:
      local_34c = 0x17;
      break;
    case 6:
      local_34c = 0x31545844;
      break;
    case 7:
      local_34c = 0x32545844;
      break;
    case 8:
      local_34c = 0x34545844;
      break;
    case 9:
      local_34c = 0x3c;
      break;
    case 10:
      local_34c = 0x3f;
    }
  }
LAB_0055750d:
  if ((DAT_00663064 == 0) || (bVar3 = true, *(char *)((int)this_ + 0x154) == '\0')) {
    bVar3 = false;
  }
  pbVar7 = (byte *)((int)this_ + 8);
  pcVar15 = s_mouse_tga_00640058;
  do {
    bVar5 = *pbVar7;
    bVar18 = bVar5 < (byte)*pcVar15;
    if (bVar5 != *pcVar15) {
LAB_00557555:
      iVar8 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
      goto LAB_0055755a;
    }
    if (bVar5 == 0) break;
    bVar5 = pbVar7[1];
    bVar18 = bVar5 < (byte)pcVar15[1];
    if (bVar5 != pcVar15[1]) goto LAB_00557555;
    pbVar7 = pbVar7 + 2;
    pcVar15 = pcVar15 + 2;
  } while (BEA_LOOP_GUARD((bVar5 != 0)));
  iVar8 = 0;
LAB_0055755a:
  if ((iVar8 == 0) && (bVar2)) {
    local_34c = 0x15;
  }
  if ((bVar3) || (bVar2)) goto LAB_005575dc;
  switch(*(undefined4 *)((int)this_ + 0x144)) {
  default:
    local_34c = 0;
    break;
  case 1:
    local_34c = 0x19;
    break;
  case 2:
    local_34c = 0x1a;
    break;
  case 3:
    local_34c = 0x16;
    break;
  case 4:
    local_34c = 0x15;
    break;
  case 5:
    local_34c = 0x17;
    break;
  case 6:
    goto switchD_00557581_caseD_6;
  case 7:
    goto switchD_00557581_caseD_7;
  case 8:
    local_34c = 0x34545844;
    goto LAB_005575dc;
  case 9:
    local_34c = 0x3c;
    break;
  case 10:
    local_34c = 0x3f;
  }
  if (local_34c == 0x15) {
switchD_00557581_caseD_7:
    local_34c = 0x1a;
  }
  else if (local_34c == 0x16) {
switchD_00557581_caseD_6:
    local_34c = 0x17;
  }
LAB_005575dc:
  do {
    cVar4 = *(char *)((int)this_ + 0x154);
    uVar13 = 0xffffffff;
    pcVar15 = (char *)((int)this_ + 8);
    do {
      pcVar10 = pcVar15;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar10 = pcVar15 + 1;
      cVar1 = *pcVar15;
      pcVar15 = pcVar10;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar13 = ~uVar13;
    pcVar15 = pcVar10 + -uVar13;
    pcVar10 = local_110;
    for (uVar14 = uVar13 >> 2; BEA_LOOP_GUARD((uVar14 != 0)); uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar10 = pcVar10 + 4;
    }
    uVar11 = *(undefined4 *)((int)this_ + 0x144);
    pcVar9 = local_110;
    for (uVar13 = uVar13 & 3; BEA_LOOP_GUARD((cVar1 = local_110[0], uVar13 != 0)); uVar13 = uVar13 - 1) {
      *pcVar10 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar10 = pcVar10 + 1;
    }
    while (BEA_LOOP_GUARD((cVar1 != '\0'))) {
      if (*pcVar9 == '\\') {
        *pcVar9 = '%';
      }
      pcVar15 = pcVar9 + 1;
      pcVar9 = pcVar9 + 1;
      cVar1 = *pcVar15;
    }
    if (bVar3) {
      pcVar15 = s_data_resources_dxtntextures__s___00652710;
      iVar8 = 0x1c;
    }
    else {
      pcVar15 = s_data_resources_textures__s__d__s_006526e8;
      if (cVar4 == '\0') {
        pcVar15 = s_data_resources_textures_mustbe___006526bc;
      }
      iVar8 = 0x18;
    }
    pcVar10 = (char *)FUN_00557a00(bea_arg(uVar11));
    FUN_0055de9b(local_344,pcVar15,local_110,param_1,pcVar10);
    uVar13 = 0xffffffff;
    pcVar15 = local_344;
    do {
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      cVar4 = *pcVar15;
      pcVar15 = pcVar15 + 1;
    } while (BEA_LOOP_GUARD((cVar4 != '\0')));
    if (iVar8 + 0x41U < ~uVar13 - 1) {
      auStack_307[iVar8] = 0x2e;
      auStack_307[iVar8 + 1] = 0x61;
      auStack_307[iVar8 + 2] = 0x79;
      auStack_307[iVar8 + 3] = 0x61;
      auStack_307[iVar8 + 4] = 0;
    }
    FUN_00547d70(bea_arg(local_244));
    iVar16 = -1;
    iVar8 = FUN_00547ec0(bea_arg(local_244), bea_arg(local_344), bea_arg(0x11), bea_arg(1), bea_arg(0));
    if (iVar8 != 0) {
      uVar11 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x500000), bea_arg(0x61), bea_arg(s_C__dev_ONSLAUGHT2_DXTexture_cpp_0065269c), bea_arg(0x1a2));
      iVar8 = FUN_00548570(bea_arg(local_244), bea_arg(uVar11), bea_arg(0x500000));
      if (iVar8 == 0x500000) {
        FUN_0042d080(bea_arg(0), bea_arg(0xd1), bea_arg(0xffffffff));
      }
      else {
        uVar17 = 0xffffffff;
        iVar16 = -1;
        if (*(short *)((int)this_ + 0xb2) != 0) {
          bVar5 = (byte)*(short *)((int)this_ + 0xb2);
          *(undefined2 *)((int)this_ + 0xb2) = 0;
          *(short *)((int)this_ + 0xb0) = *(short *)((int)this_ + 0xb0) << (bVar5 & 0x1f);
          *(int *)((int)this_ + 0xac) = *(int *)((int)this_ + 0xac) << (bVar5 & 0x1f);
        }
        cVar4 = FUN_00528af0(bea_arg(&DAT_009cc0f8));
        iVar12 = DAT_009cc104;
        if ((((cVar4 != '\0') ||
             (cVar4 = FUN_00528af0(bea_arg(&DAT_009cc108)), iVar12 = DAT_009cc114, cVar4 != '\0')) &&
            (iVar12 != 0)) &&
           ((((iVar12 = *(int *)((int)this_ + 0x148), iVar12 == 0 || (iVar12 == 1)) &&
             ((*(byte *)((int)this_ + 0x155) & 4) != 0)) ||
            (((iVar12 != 0 && (iVar12 != 1)) && ((*(byte *)((int)this_ + 0x155) & 2) == 0)))))) {
          cVar4 = FUN_00528af0(bea_arg(&DAT_009cc0f8));
          if (cVar4 == '\0') {
            cVar4 = FUN_00528af0(bea_arg(&DAT_009cc108));
            if (cVar4 == '\0') {
              uVar6 = 0;
            }
            else {
              uVar6 = (undefined2)DAT_009cc114;
            }
          }
          else {
            uVar6 = (undefined2)DAT_009cc104;
          }
          *(undefined2 *)((int)this_ + 0xb2) = uVar6;
          cVar4 = FUN_00528af0(bea_arg(&DAT_009cc0f8));
          if (cVar4 == '\0') {
            cVar4 = FUN_00528af0(bea_arg(&DAT_009cc108));
            if (cVar4 == '\0') {
              bVar5 = 0;
            }
            else {
              bVar5 = (byte)DAT_009cc114;
            }
          }
          else {
            bVar5 = (byte)DAT_009cc104;
          }
          *(int *)((int)this_ + 0xac) = *(int *)((int)this_ + 0xac) >> (bVar5 & 0x1f);
          cVar4 = FUN_00528af0(bea_arg(&DAT_009cc0f8));
          if (cVar4 == '\0') {
            cVar4 = FUN_00528af0(bea_arg(&DAT_009cc108));
            if (cVar4 == '\0') {
              bVar5 = 0;
            }
            else {
              bVar5 = (byte)DAT_009cc114;
            }
          }
          else {
            bVar5 = (byte)DAT_009cc104;
          }
          *(short *)((int)this_ + 0xb0) = *(short *)((int)this_ + 0xb0) >> (bVar5 & 0x1f);
          uVar17 = *(undefined4 *)((int)this_ + 0xac);
          iVar16 = (int)*(short *)((int)this_ + 0xb0);
        }
        iVar16 = FUN_005758e6(bea_arg(DAT_00888a50), bea_arg(uVar11), bea_arg(iVar8), bea_arg(uVar17), bea_arg(iVar16), bea_arg((int)*(short *)((int)this_ + 0x156)), bea_arg(0), bea_arg(local_34c), bea_arg(*(undefined4 *)((int)this_ + 0x150)), bea_arg(2), bea_arg(0xffffffff), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg((int)this_ + param_1 * 4 + 0xb8));
      }
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(uVar11));
      FUN_00548c00(bea_arg(local_244));
      if (-1 < iVar16) {
LAB_0055793e:
        FUN_00547d90(bea_arg(local_244));
        return iVar16;
      }
    }
    if ((bVar3) || (*(char *)((int)this_ + 0x154) == '\0')) {
      if ((-1 < iVar16) || (local_34c == 0)) goto LAB_0055793e;
      local_34c = 0;
    }
    else {
      bVar3 = true;
    }
    FUN_00547d90(bea_arg(local_244));
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00557300, ap_00557300));
