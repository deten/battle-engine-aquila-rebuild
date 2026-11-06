// auto-ported from 00502420_FUN_00502420.c (FUN_00502420, 968 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x80: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(char, 0x009c3df0)
#define DAT_0063d040 GLOBAL_AT(int, 0x0063d040)
#define DAT_0063d044 GLOBAL_AT(short, 0x0063d044)
#define DAT_0063d046 GLOBAL_AT(char, 0x0063d046)
#define DAT_0063d01c GLOBAL_AT(int, 0x0063d01c)
#define DAT_0063d000 GLOBAL_AT(int, 0x0063d000)
#define DAT_0063cfec GLOBAL_AT(int, 0x0063cfec)
#define DAT_0063cfd8 GLOBAL_AT(int, 0x0063cfd8)
#define DAT_00622dbc GLOBAL_AT(int, 0x00622dbc)
#define DAT_00622d9c GLOBAL_AT(int, 0x00622d9c)
#define s_dcl_texcoord_v7_0063cfc8 ((char*)0x0063cfc8)
#define s_vs_1_1_dcl_position_v0_0063d020 ((char*)0x0063d020)
#define s_D3DXAssembleShader_failed_for__s_0063cf9c ((char*)0x0063cf9c)
#define s_dcl_blendweight0_v11_0063d004 ((char*)0x0063d004)
#define s_dcl_color_v5_0063cfdc ((char*)0x0063cfdc)
#define s_vs_1_0_0063d038 ((char*)0x0063d038)
#define s_oFog_x_0063cfc0 ((char*)0x0063cfc0)
#define s_C__dev_ONSLAUGHT2_VertexShader_c_0063cf78 ((char*)0x0063cf78)
#define s_dcl_normal_v3_0063cff0 ((char*)0x0063cff0)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef undefined4 (BEA_STDCALL* FUN_0042d080_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042d080_t> FUN_0042d080 = {(FUN_0042d080_t)0x0042d080};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef int (BEA_STDCALL* FUN_00579a9a_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00579a9a_t> FUN_00579a9a = {(FUN_00579a9a_t)0x00579a9a};
typedef const char * (BEA_STDCALL* FUN_005be628_t)(uint32_t);
static const bea_guard<FUN_005be628_t> FUN_005be628 = {(FUN_005be628_t)0x005be628};
typedef char * (BEA_CDECL* _strstr_t)(uint32_t, uint32_t);
static const bea_guard<_strstr_t> _strstr = {(_strstr_t)0x0055ea80};

static void BEA_THISCALL ap_00502420(void * this_)
{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;

  alignas(16) uint8_t bea_frame_[0x80] = {};   // the original stack frame (emulate_frame)
  int * &local_78 = *reinterpret_cast<int * *>(bea_frame_ + 0x80 - 0x78);
  int * &local_74 = *reinterpret_cast<int * *>(bea_frame_ + 0x80 - 0x74);
  char * &local_70 = *reinterpret_cast<char * *>(bea_frame_ + 0x80 - 0x70);
  undefined4 &local_6c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x6c);
  undefined2 &local_68 = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x80 - 0x68);
  undefined1 &local_66 = *reinterpret_cast<undefined1 *>(bea_frame_ + 0x80 - 0x66);
  char (&local_64)[100] = *reinterpret_cast<char (*)[100]>(bea_frame_ + 0x80 - 0x64);
  if (*(int *)((int)this_ + 0x50) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x50)));
    *(undefined4 *)((int)this_ + 0x50) = 0;
  }
  local_6c = DAT_0063d040;
  local_68 = DAT_0063d044;
  local_78 = (int *)0x0;
  local_74 = (int *)0x0;
  local_66 = DAT_0063d046;
  local_70 = _strstr(bea_arg(*(char **)((int)this_ + 0x48)), bea_arg((char *)&local_6c));
  if (local_70 == (char *)0x0) {
    local_70 = _strstr(bea_arg(*(char **)((int)this_ + 0x48)), bea_arg(s_vs_1_0_0063d038));
    FUN_0042d080(bea_arg(CONCAT31((int3)((uint)local_70 >> 8),local_70 != (char *)0x0)), bea_arg(0xd2), bea_arg(200));
  }
  uVar5 = 0xffffffff;
  pcVar2 = s_vs_1_1_dcl_position_v0_0063d020;
  do {
    pcVar8 = pcVar2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar8;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  pcVar2 = pcVar8 + -uVar5;
  pcVar8 = local_64;
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar8 = pcVar8 + 1;
  }
  pcVar2 = _strstr(bea_arg(*(char **)((int)this_ + 0x48)), bea_arg(&DAT_0063d01c));
  if (pcVar2 != (char *)0x0) {
    uVar5 = 0xffffffff;
    pcVar2 = s_dcl_blendweight0_v11_0063d004;
    do {
      pcVar8 = pcVar2;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar8;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar5 = ~uVar5;
    iVar7 = -1;
    pcVar2 = local_64;
    do {
      pcVar9 = pcVar2;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar9;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    pcVar2 = pcVar8 + -uVar5;
    pcVar8 = pcVar9 + -1;
    for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar8 = pcVar8 + 1;
    }
  }
  pcVar2 = _strstr(bea_arg(*(char **)((int)this_ + 0x48)), bea_arg(&DAT_0063d000));
  if (pcVar2 != (char *)0x0) {
    uVar5 = 0xffffffff;
    pcVar2 = s_dcl_normal_v3_0063cff0;
    do {
      pcVar8 = pcVar2;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar8;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar5 = ~uVar5;
    iVar7 = -1;
    pcVar2 = local_64;
    do {
      pcVar9 = pcVar2;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar9;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    pcVar2 = pcVar8 + -uVar5;
    pcVar8 = pcVar9 + -1;
    for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar8 = pcVar8 + 1;
    }
  }
  pcVar2 = _strstr(bea_arg(*(char **)((int)this_ + 0x48)), bea_arg(&DAT_0063cfec));
  if (pcVar2 != (char *)0x0) {
    uVar5 = 0xffffffff;
    pcVar2 = s_dcl_color_v5_0063cfdc;
    do {
      pcVar8 = pcVar2;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar8;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar5 = ~uVar5;
    iVar7 = -1;
    pcVar2 = local_64;
    do {
      pcVar9 = pcVar2;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar9;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    pcVar2 = pcVar8 + -uVar5;
    pcVar8 = pcVar9 + -1;
    for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar8 = pcVar8 + 1;
    }
  }
  pcVar2 = _strstr(bea_arg(*(char **)((int)this_ + 0x48)), bea_arg(&DAT_0063cfd8));
  if (pcVar2 != (char *)0x0) {
    uVar5 = 0xffffffff;
    pcVar2 = s_dcl_texcoord_v7_0063cfc8;
    do {
      pcVar8 = pcVar2;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar8;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar5 = ~uVar5;
    iVar7 = -1;
    pcVar2 = local_64;
    do {
      pcVar9 = pcVar2;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar9;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    pcVar2 = pcVar8 + -uVar5;
    pcVar8 = pcVar9 + -1;
    for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar8 = pcVar8 + 1;
    }
  }
  uVar5 = 0xffffffff;
  pcVar2 = (char *)&local_6c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar6 = 0xffffffff;
  pcVar2 = local_64;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  pcVar2 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg((*(int *)((int)this_ + 0x4c) - (~uVar5 - 1)) + ~uVar6), bea_arg(0x61), bea_arg(s_C__dev_ONSLAUGHT2_VertexShader_c_0063cf78), bea_arg(0x3ad));
  uVar5 = 0xffffffff;
  pcVar8 = *(char **)((int)this_ + 0x48);
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  pcVar9 = pcVar2;
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar8 = local_64;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  pcVar9 = local_70 + ((int)pcVar2 - *(int *)((int)this_ + 0x48));
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar8 = (char *)&local_6c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar6 = 0xffffffff;
  pcVar8 = local_70 + (~uVar5 - 1);
  pcVar9 = local_64;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  local_70 = local_70 + (int)(pcVar2 + ((~uVar6 - 1) - *(int *)((int)this_ + 0x48)));
  uVar5 = 0xffffffff;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  pcVar9 = local_70;
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x48)));
  uVar5 = 0xffffffff;
  *(char **)((int)this_ + 0x48) = pcVar2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  *(uint *)((int)this_ + 0x4c) = ~uVar5 - 1;
  while(BEA_LOOP_GUARD(( true ))) {
    pcVar2 = _strstr(bea_arg(*(char **)((int)this_ + 0x48)), bea_arg(s_oFog_x_0063cfc0));
    if (pcVar2 == (char *)0x0) break;
    pcVar2[4] = ' ';
    pcVar2[5] = ' ';
  }
  iVar7 = FUN_00579a9a(bea_arg(*(undefined4 *)((int)this_ + 0x48)), bea_arg(*(undefined4 *)((int)this_ + 0x4c)), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(&local_78), bea_arg(&local_74));
  if (iVar7 < 0) {
    FUN_005be628(bea_arg(iVar7));
    CRenderThing__vslot3(s_D3DXAssembleShader_failed_for__s_0063cf9c);
    bea_vcall<uint32_t>(local_74, 0xc, local_74);
    CRenderThing__vslot3(&DAT_00622dbc);
    CRenderThing__vslot3(&DAT_00622d9c);
  }
  uVar3 = bea_vcall<uint32_t>(local_78, 0x10, local_78);
  *(undefined4 *)((int)this_ + 0x54) = uVar3;
  uVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(uVar3), bea_arg(0x50), bea_arg(s_C__dev_ONSLAUGHT2_VertexShader_c_0063cf78), bea_arg(0x3e4));
  uVar5 = *(uint *)((int)this_ + 0x54);
  *(undefined4 *)((int)this_ + 0x50) = uVar3;
  puVar4 = (undefined4 *)bea_vcall<uint32_t>(local_78, 0xc, local_78);
  puVar10 = *(undefined4 **)((int)this_ + 0x50);
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar10 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  if (local_78 != (int *)0x0) {
    bea_vcall<uint32_t>(local_78, 0x8, local_78);
    local_78 = (int *)0x0;
  }
  if (local_74 != (int *)0x0) {
    bea_vcall<uint32_t>(local_74, 0x8, local_74);
    local_74 = (int *)0x0;
  }
  if (*(int *)((int)this_ + 0x48) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x48)));
    *(undefined4 *)((int)this_ + 0x48) = 0;
  }
  *(undefined4 *)((int)this_ + 0x4c) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00502420, ap_00502420));
