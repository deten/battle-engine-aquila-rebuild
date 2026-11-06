// auto-ported from 004baae0_vslot9.c (CMissile::vslot9, 303 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CMissile;
typedef char CRound;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_Missile_cpp_006309c0 ((char*)0x006309c0)
typedef uint32_t (BEA_THISCALL* CRound__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CRound__vslot9_t> CRound__vslot9 = {(CRound__vslot9_t)0x004d8410};
typedef undefined4 * (BEA_CDECL* FUN_00516580_t)(undefined4, ...);
static const bea_guard<FUN_00516580_t> FUN_00516580 = {(FUN_00516580_t)0x00516580};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef uint32_t (BEA_STDCALL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055db0a_t> FUN_0055db0a = {(FUN_0055db0a_t)0x0055db0a};
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055dc20_t> FUN_0055dc20 = {(FUN_0055dc20_t)0x0055dc20};

static uint32_t BEA_THISCALL ap_004baae0(CMissile * this_, undefined4 param_1)
{
  char *a1;
  char cVar1;
  int iVar2;
  CMissile *pCVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 *puStack_8;
  undefined4 local_4;
  if (*(int *)(*(int *)(this_ + 0xf0) + 0xc) != 0) {
    iVar2 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x428), bea_arg(0x61), bea_arg(s_C__dev_ONSLAUGHT2_Missile_cpp_006309c0), bea_arg(0xb));
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      FUN_0055dc20(bea_arg(iVar2 + 8), bea_arg(0x41c), bea_arg(1), bea_arg(((void*)0x00403f40)), bea_arg(((void*)0x00403f80)));
      *(undefined4 *)(iVar2 + 0x424) = 1;
    }
    uVar5 = 0xffffffff;
    a1 = (char *)(iVar2 + 8);
    if (this_ == (CMissile *)0x0) {
      pCVar3 = (CMissile *)0x0;
    }
    else {
      pCVar3 = this_ + 8;
    }
    *(CMissile **)(iVar2 + 0x408) = pCVar3;
    *(undefined4 *)(iVar2 + 4) = 1;
    pcVar7 = *(char **)(*(int *)(this_ + 0xf0) + 0xc);
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar5 = ~uVar5;
    pcVar7 = pcVar8 + -uVar5;
    pcVar8 = a1;
    for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    piVar4 = (int *)FUN_00516580(*(undefined4 *)(iVar2 + 4));
    *(int **)(this_ + 0x30) = piVar4;
    if (piVar4 != (int *)0x0) {
      bea_vcall<uint32_t>(piVar4, 0x4, a1);
    }
    if (iVar2 != 0) {
      FUN_0055db0a(bea_arg(a1), bea_arg(0x41c), bea_arg(1), bea_arg(((void*)0x00403f80)));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar2));
    }
  }
  return CRound__vslot9(bea_arg((CRound *)this_), bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004baae0, ap_004baae0));
