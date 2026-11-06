// auto-ported from 0041b8f0_FUN_0041b8f0.c (FUN_0041b8f0, 71 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00624184 GLOBAL_AT(int, 0x00624184)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_WARNING__Could_not_find_career_n_006241b4 ((char*)0x006241b4)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static int BEA_THISCALL ap_0041b8f0(void * this_, int param_1)
{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < DAT_00624184) {
    piVar2 = (int *)((int)this_ + 0x14);
    do {
      if (*piVar2 == param_1) {
        return iVar1 * 0x40 + 4 + (int)this_;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x10;
    } while (BEA_LOOP_GUARD((iVar1 < DAT_00624184)));
  }
  FUN_00441740(&DAT_0066f580,s_WARNING__Could_not_find_career_n_006241b4,param_1);
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0041b8f0, ap_0041b8f0));
