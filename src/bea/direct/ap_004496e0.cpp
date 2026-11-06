// auto-ported from 004496e0_FUN_004496e0.c (FUN_004496e0, 77 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_ERROR__No_secondary_objectives_i_00628ad8 ((char*)0x00628ad8)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static undefined4 BEA_THISCALL ap_004496e0(void * this_)
{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  uVar3 = 1;
  bVar2 = false;
  piVar4 = (int *)((int)this_ + 0x4d0);
  iVar5 = 10;
  do {
    iVar1 = *piVar4;
    if (((iVar1 == 1) || (iVar1 == 2)) && (bVar2 = true, iVar1 == 2)) {
      uVar3 = 0;
    }
    piVar4 = piVar4 + 2;
    iVar5 = iVar5 + -1;
  } while (BEA_LOOP_GUARD((iVar5 != 0)));
  if (!bVar2) {
    FUN_00441740(&DAT_0066f580,s_ERROR__No_secondary_objectives_i_00628ad8);
    uVar3 = 0;
  }
  return uVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004496e0, ap_004496e0));
