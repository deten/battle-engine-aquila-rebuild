// auto-ported from 004f57b0_FUN_004f57b0.c (FUN_004f57b0, 789 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0083e288 GLOBAL_AT(char, 0x0083e288)
#define DAT_0083dea0 GLOBAL_AT(byte, 0x0083dea0)
#define DAT_0083dab8 GLOBAL_AT(char, 0x0083dab8)
#define DAT_00625098 GLOBAL_AT(undefined, 0x00625098)
#define DAT_00633a24 GLOBAL_AT(undefined, 0x00633a24)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_TokenArchive_c_00633a00 ((char*)0x00633a00)
#define s__s__s_00625274 ((char*)0x00625274)
typedef uint32_t (BEA_THISCALL* FUN_0048de00_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0048de00_t> FUN_0048de00 = {(FUN_0048de00_t)0x0048de00};
typedef char * (BEA_CDECL* FUN_004f52b0_t)(uint32_t);
static const bea_guard<FUN_004f52b0_t> FUN_004f52b0 = {(FUN_004f52b0_t)0x004f52b0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef int (BEA_CDECL* FUN_0055e14f_t)(void *, void *, ...);
static const bea_guard<FUN_0055e14f_t> FUN_0055e14f = {(FUN_0055e14f_t)0x0055e14f};

static undefined4 BEA_THISCALL ap_004f57b0(void * this_, int *param_1, float *param_2, float *param_3, char *param_4)
{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  undefined *puVar15;
  
  FUN_0048de00(bea_arg(*(void **)this_), bea_arg(&DAT_0083e288), bea_arg(999));
  iVar3 = FUN_0055e14f(&DAT_0083e288,s__s__s_00625274,&DAT_0083dea0,&DAT_0083dab8);
  iVar10 = 0;
  do {
    pbVar4 = (byte *)FUN_004f52b0(bea_arg(iVar10));
    pbVar11 = &DAT_0083dea0;
    do {
      bVar2 = *pbVar11;
      bVar14 = bVar2 < *pbVar4;
      if (bVar2 != *pbVar4) {
LAB_004f5822:
        iVar5 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_004f5827;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar11[1];
      bVar14 = bVar2 < pbVar4[1];
      if (bVar2 != pbVar4[1]) goto LAB_004f5822;
      pbVar11 = pbVar11 + 2;
      pbVar4 = pbVar4 + 2;
    } while (BEA_LOOP_GUARD((bVar2 != 0)));
    iVar5 = 0;
LAB_004f5827:
    if (iVar5 == 0) goto LAB_004f5834;
    iVar10 = iVar10 + 1;
  } while (BEA_LOOP_GUARD((iVar10 < 0x7c)));
  iVar10 = -1;
LAB_004f5834:
  *param_1 = iVar10;
  switch(iVar10) {
  case 0:
  case 5:
    goto switchD_004f584d_caseD_0;
  case 1:
  case 7:
  case 0x13:
  case 0x15:
  case 0x16:
  case 0x20:
  case 0x3c:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x50:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x66:
    if (param_3 == (float *)0x0) {
      return 0;
    }
    if (iVar3 < 2) {
      return 0;
    }
    puVar15 = &DAT_00625098;
    param_2 = param_3;
    break;
  case 2:
  case 3:
  case 8:
  case 9:
  case 10:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x11:
  case 0x12:
  case 0x14:
  case 0x17:
  case 0x19:
  case 0x1b:
  case 0x21:
  case 0x22:
  case 0x24:
  case 0x26:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x3a:
  case 0x3b:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x48:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x51:
  case 0x54:
  case 0x60:
  case 0x61:
  case 0x62:
  case 100:
  case 0x68:
  case 0x6f:
  case 0x70:
  case 0x75:
  case 0x76:
    if (param_2 == (float *)0x0) {
      return 0;
    }
    if (iVar3 < 2) {
      return 0;
    }
    puVar15 = &DAT_00633a24;
    break;
  case 4:
  case 0xb:
  case 0x65:
    if (param_4 == (char *)0x0) {
      return 0;
    }
    if (iVar3 < 2) {
      return 0;
    }
    uVar7 = 0xffffffff;
    pcVar12 = &DAT_0083dea0;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar8 = 0xffffffff;
    pcVar12 = &DAT_0083e288 + ~uVar7;
    do {
      pcVar13 = pcVar12;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar12 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar13;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar8 = ~uVar8;
    pcVar12 = pcVar13 + -uVar8;
    for (uVar7 = uVar8 >> 2; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
      *(undefined4 *)param_4 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      param_4 = param_4 + 4;
    }
    for (uVar8 = uVar8 & 3; BEA_LOOP_GUARD((uVar8 != 0)); uVar8 = uVar8 - 1) {
      *param_4 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      param_4 = param_4 + 1;
    }
    return 1;
  case 6:
  case 0x18:
  case 0x1a:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x23:
  case 0x27:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x52:
  case 0x53:
  case 0x55:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 99:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
    FUN_0055e14f(&DAT_0083dab8,&DAT_00625098,param_3);
    *param_2 = *(float *)((int)this_ + 8);
    uVar7 = 0xffffffff;
    pcVar12 = &DAT_0083dea0;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar8 = 0xffffffff;
    pcVar12 = &DAT_0083dab8;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_0083e288 + ~uVar7 + ~uVar8;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar6 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(~uVar9 + 1), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_TokenArchive_c_00633a00), bea_arg(0x16a));
    *(undefined4 *)((int)this_ + *(int *)((int)this_ + 8) * 4 + 0x9c4c) = uVar6;
    uVar7 = 0xffffffff;
    pcVar12 = &DAT_0083dea0;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar8 = 0xffffffff;
    pcVar12 = &DAT_0083dab8;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    if (*(char *)(~uVar7 + ~uVar8 + 0x83e287) == '\0') {
      **(undefined1 **)((int)this_ + *(int *)((int)this_ + 8) * 4 + 0x9c4c) = 0;
      if ((0x30 < *param_1) && (*param_1 < 0x3a)) {
        *param_3 = *param_3 * 0.003921569f;
        *(int *)((int)this_ + 8) = *(int *)((int)this_ + 8) + 1;
        return 1;
      }
      goto LAB_004f59a3;
    }
    uVar7 = 0xffffffff;
    pcVar12 = &DAT_0083dea0;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar8 = 0xffffffff;
    pcVar12 = &DAT_0083dab8;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    pcVar12 = &DAT_0083e288 + ~uVar7 + ~uVar8;
    goto LAB_004f597e;
  case 0xc:
  case 0x10:
  case 0x1c:
  case 0x25:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x67:
  case 0x69:
  case 0x6a:
  case 0x74:
    if (param_4 == (char *)0x0) {
      return 0;
    }
    if (iVar3 < 2) {
      return 0;
    }
    *param_2 = *(float *)((int)this_ + 8);
    uVar7 = 0xffffffff;
    pcVar12 = &DAT_0083dea0;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar8 = 0xffffffff;
    pcVar12 = &DAT_0083e288 + ~uVar7;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar6 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(~uVar8 + 1), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_TokenArchive_c_00633a00), bea_arg(0x138));
    *(undefined4 *)((int)this_ + *(int *)((int)this_ + 8) * 4 + 0x9c4c) = uVar6;
    uVar7 = 0xffffffff;
    pcVar12 = &DAT_0083dea0;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    pcVar12 = &DAT_0083e288 + ~uVar7;
LAB_004f597e:
    uVar7 = 0xffffffff;
    do {
      pcVar13 = pcVar12;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar13 = pcVar12 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar13;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar7 = ~uVar7;
    pcVar12 = pcVar13 + -uVar7;
    pcVar13 = *(char **)((int)this_ + *(int *)((int)this_ + 8) * 4 + 0x9c4c);
    for (uVar8 = uVar7 >> 2; BEA_LOOP_GUARD((uVar8 != 0)); uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar7 = uVar7 & 3; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
      *pcVar13 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar13 = pcVar13 + 1;
    }
LAB_004f59a3:
    *(int *)((int)this_ + 8) = *(int *)((int)this_ + 8) + 1;
    return 1;
  default:
    return 0;
  }
  FUN_0055e14f(&DAT_0083dab8,puVar15,param_2);
switchD_004f584d_caseD_0:
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f57b0, ap_004f57b0));
