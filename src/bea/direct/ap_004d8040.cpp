// auto-ported from 004d8040_vslot22.c (CRocket::vslot22, 113 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CRocket;
#define DAT_0082b400 GLOBAL_AT(int, 0x0082b400)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_0083cc48 GLOBAL_AT(int, 0x0083cc48)
#define DAT_0083cc4c GLOBAL_AT(int, 0x0083cc4c)
#define DAT_0083cc50 GLOBAL_AT(int, 0x0083cc50)
#define DAT_0083cc54 GLOBAL_AT(int, 0x0083cc54)
#define s_Big_Rocket_Engine_Effect_00631ccc ((char*)0x00631ccc)
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};
typedef int (BEA_THISCALL* FUN_004cd7a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cd7a0_t> FUN_004cd7a0 = {(FUN_004cd7a0_t)0x004cd7a0};

static undefined4 BEA_THISCALL ap_004d8040(CRocket * this_)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  CRocket *pCVar4;
  
  *(undefined4 *)(this_ + 0xe4) = 1;
  iVar1 = FUN_004cd7a0(bea_arg(&DAT_0082b400), bea_arg(s_Big_Rocket_Engine_Effect_00631ccc));
  uVar2 = 0;
  if (iVar1 != 0) {
    pCVar4 = this_ + 0xec;
    iVar3 = 4;
    do {
      uVar2 = FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(iVar1), bea_arg(pCVar4), bea_arg(DAT_0083cc48), bea_arg(DAT_0083cc4c), bea_arg(DAT_0083cc50), bea_arg(DAT_0083cc54), bea_arg(0), bea_arg(0));
      pCVar4 = pCVar4 + 8;
      iVar3 = iVar3 + -1;
    } while (BEA_LOOP_GUARD((iVar3 != 0)));
  }
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d8040, ap_004d8040));
