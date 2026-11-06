// auto-ported from 004dbd80_vslot1.c (CRTCutscene::vslot1, 208 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CRTCutscene;
typedef char CRenderThing;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_RTCutscene_cpp_00631e2c ((char*)0x00631e2c)
typedef uint32_t (BEA_THISCALL* CRenderThing__vslot1_t)(uint32_t, uint32_t);
static const bea_guard<CRenderThing__vslot1_t> CRenderThing__vslot1 = {(CRenderThing__vslot1_t)0x004d6a30};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint BEA_THISCALL ap_004dbd80(CRTCutscene * this_, int param_1)
{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  CRenderThing__vslot1(bea_arg((CRenderThing *)this_), bea_arg(param_1));
  iVar5 = *(int *)(param_1 + 0x418);
  *(int *)(this_ + 0x18) = iVar5;
  uVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar5 << 2), bea_arg(0x1d), bea_arg(s_C__dev_ONSLAUGHT2_RTCutscene_cpp_00631e2c), bea_arg(0x29));
  *(undefined4 *)(this_ + 0x14) = uVar2;
  uVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)(this_ + 0x18) << 2), bea_arg(0x1d), bea_arg(s_C__dev_ONSLAUGHT2_RTCutscene_cpp_00631e2c), bea_arg(0x2a));
  *(undefined4 *)(this_ + 0x1c) = uVar2;
  uVar3 = *(uint *)(this_ + 0x18);
  iVar5 = 0;
  if (0 < (int)uVar3) {
    do {
      *(undefined4 *)(*(int *)(this_ + 0x14) + iVar5 * 4) = 0;
      uVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x100), bea_arg(0x1d), bea_arg(s_C__dev_ONSLAUGHT2_RTCutscene_cpp_00631e2c), bea_arg(0x32));
      *(undefined4 *)(*(int *)(this_ + 0x1c) + iVar5 * 4) = uVar2;
      uVar3 = 0xffffffff;
      pcVar6 = *(char **)(*(int *)(param_1 + 0x414) + iVar5 * 4);
      do {
        pcVar7 = pcVar6;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      uVar3 = ~uVar3;
      pcVar6 = pcVar7 + -uVar3;
      pcVar7 = *(char **)(*(int *)(this_ + 0x1c) + iVar5 * 4);
      for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      iVar5 = iVar5 + 1;
      for (uVar4 = uVar3 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
    } while (BEA_LOOP_GUARD((iVar5 < *(int *)(this_ + 0x18))));
  }
  *(undefined4 *)(this_ + 4) = 0x3f800000;
  this_[0x20] = (CRTCutscene)0x0;
  *(undefined4 *)(this_ + 0x24) = 0xffffffff;
  return uVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dbd80, ap_004dbd80));
