// auto-ported from 004db8f0_vslot1.c (CRTBuilding::vslot1, 98 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CRTBuilding;
typedef char CRTMesh;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_m_b_rubble_msh_00631de4 ((char*)0x00631de4)
#define s_no_rubble_found_for__s_00631df4 ((char*)0x00631df4)
typedef uint32_t (BEA_THISCALL* CRTMesh__vslot1_t)(uint32_t, uint32_t);
static const bea_guard<CRTMesh__vslot1_t> CRTMesh__vslot1 = {(CRTMesh__vslot1_t)0x004dc370};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef void * (BEA_CDECL* FUN_004aa6e0_t)(void *, undefined4, ...);
static const bea_guard<FUN_004aa6e0_t> FUN_004aa6e0 = {(FUN_004aa6e0_t)0x004aa6e0};

static void BEA_THISCALL ap_004db8f0(CRTBuilding * this_, int param_1)
{
  int iVar1;
  undefined4 uVar2;
  
  CRTMesh__vslot1(bea_arg((CRTMesh *)this_), bea_arg(param_1));
  *(undefined4 *)(this_ + 0x58) = 6;
  *(undefined4 *)(this_ + 0x54) = 0;
  iVar1 = FUN_004aa6e0((char *)(param_1 + 0x100),1);
  *(int *)(this_ + 0x54) = iVar1;
  if (iVar1 == 0) {
    FUN_00441740(&DAT_0066f580,s_no_rubble_found_for__s_00631df4,(char *)(param_1 + 0x100));
    uVar2 = FUN_004aa6e0(s_m_b_rubble_msh_00631de4,1);
    *(undefined4 *)(this_ + 0x54) = uVar2;
  }
  *(undefined4 *)(this_ + 4) = 0x3f800000;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004db8f0, ap_004db8f0));
