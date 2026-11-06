// auto-ported from 005022a0_FUN_005022a0.c (FUN_005022a0, 378 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_00622dbc GLOBAL_AT(int, 0x00622dbc)
#define DAT_009c3df0 GLOBAL_AT(char, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_VertexShader_c_0063cf78 ((char*)0x0063cf78)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef undefined4 (BEA_STDCALL* FUN_0042d080_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042d080_t> FUN_0042d080 = {(FUN_0042d080_t)0x0042d080};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef int (BEA_STDCALL* FUN_00579a9a_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00579a9a_t> FUN_00579a9a = {(FUN_00579a9a_t)0x00579a9a};

static uint BEA_THISCALL ap_005022a0(void * this_, char *param_1, char *param_2, undefined4 param_3, uint param_4)
{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  int * &piStack_8 = *reinterpret_cast<int * *>(bea_frame_ + 0x10 - 0x8);
  int * &piStack_4 = *reinterpret_cast<int * *>(bea_frame_ + 0x10 - 0x4);
  iVar2 = bea_vcall<uint32_t>(this_, 0xc);
  if (iVar2 < 0) {
    return 0x80004005;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar3 = param_1;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar3 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar3;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar4 = ~uVar4;
  pcVar3 = pcVar3 + -uVar4;
  pcVar6 = (char *)((int)this_ + 8);
  for (uVar5 = uVar4 >> 2; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar6 = pcVar6 + 1;
  }
  *(undefined1 *)((int)this_ + 0x34) = 0;
  *(undefined4 *)((int)this_ + 0x2c) = param_3;
  piStack_8 = (int *)0x0;
  piStack_4 = (int *)0x0;
  if (param_4 == 0xffffffff) {
    uVar4 = 0xffffffff;
    pcVar3 = param_2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    iVar2 = FUN_00579a9a(bea_arg(param_2), bea_arg(~uVar4 - 1), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(&piStack_8), bea_arg(&piStack_4));
    if (iVar2 < 0) {
      if (piStack_4 != (int *)0x0) {
        bea_vcall<uint32_t>(piStack_4, 0xc, piStack_4);
        CRenderThing__vslot3(&DAT_00622dbc);
      }
      FUN_0042d080(bea_arg(0), bea_arg(0xd2), bea_arg(500));
      return 0x80004005;
    }
    param_2 = (char *)bea_vcall<uint32_t>(piStack_8, 0xc, piStack_8);
    param_4 = bea_vcall<uint32_t>(piStack_8, 0x10, piStack_8);
  }
  if (param_4 == 0) {
    *(char **)((int)this_ + 0x50) = param_2;
    *(undefined4 *)((int)this_ + 0x54) = 0xffffffff;
  }
  else {
    pcVar3 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(param_4), bea_arg(0x50), bea_arg(s_C__dev_ONSLAUGHT2_VertexShader_c_0063cf78), bea_arg(0x31d));
    *(char **)((int)this_ + 0x50) = pcVar3;
    for (uVar4 = param_4 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar4 = param_4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
      *pcVar3 = *param_2;
      param_2 = param_2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    *(uint *)((int)this_ + 0x54) = param_4;
  }
  if (piStack_8 != (int *)0x0) {
    bea_vcall<uint32_t>(piStack_8, 0x8, piStack_8);
    piStack_8 = (int *)0x0;
  }
  if (piStack_4 != (int *)0x0) {
    bea_vcall<uint32_t>(piStack_4, 0x8, piStack_4);
    piStack_4 = (int *)0x0;
  }
  iVar2 = bea_vcall<uint32_t>(this_, 0x8);
  return (-1 < iVar2) - 1 & 0x80004005;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005022a0, ap_005022a0));
