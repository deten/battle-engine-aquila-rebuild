// auto-ported from 00490f50_FUN_00490f50.c (FUN_00490f50, 264 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0062da54 GLOBAL_AT(char, 0x0062da54)
#define s_Map_properties_are_already_loade_0062d9c0 ((char*)0x0062d9c0)
#define s_Map_geometry_is_already_loaded___0062d9f0 ((char*)0x0062d9f0)
#define s_Loading_map__d_0062da5c ((char*)0x0062da5c)
#define s__properties_only__0062da40 ((char*)0x0062da40)
#define s__geometry_only__0062da2c ((char*)0x0062da2c)
#define s__nothing____0062da1c ((char*)0x0062da1c)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static undefined4 BEA_THISCALL ap_00490f50(void * this_, int param_1, int param_2, int param_3)
{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  char (&local_40)[64] = *reinterpret_cast<char (*)[64]>(bea_frame_ + 0x40 - 0x40);
  FUN_0055de9b(local_40,s_Loading_map__d_0062da5c,param_1);
  if (param_3 == 0) {
    pcVar5 = s__geometry_only__0062da2c;
    if (param_2 == 0) {
      pcVar5 = s__nothing____0062da1c;
    }
  }
  else if (param_2 == 0) {
    pcVar5 = s__properties_only__0062da40;
  }
  else {
    pcVar5 = &DAT_0062da54;
  }
  uVar2 = 0xffffffff;
  do {
    pcVar7 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar2 = ~uVar2;
  iVar3 = -1;
  pcVar5 = local_40;
  do {
    pcVar6 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  pcVar5 = pcVar7 + -uVar2;
  pcVar7 = pcVar6 + -1;
  for (uVar4 = uVar2 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  CRenderThing__vslot3(local_40);
  if (param_1 == -1) {
    return 1;
  }
  if (param_2 == 0) {
    if ((param_3 != 0) && (*(int *)((int)this_ + 0x93e4) != 0)) {
      CRenderThing__vslot3(s_Map_properties_are_already_loade_0062d9c0);
      return 1;
    }
  }
  else if (*(int *)((int)this_ + 0x93e0) != 0) {
    CRenderThing__vslot3(s_Map_geometry_is_already_loaded___0062d9f0);
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00490f50, ap_00490f50));
