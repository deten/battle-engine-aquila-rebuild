// auto-ported from 004433f0_FUN_004433f0.c (FUN_004433f0, 102 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_Warning__First_core_part_has_no_c_006285bc ((char*)0x006285bc)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static undefined4 BEA_THISCALL ap_004433f0(void * this_)
{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  if (*(int *)((int)this_ + 0x30) == 0) {
    FUN_00441740(&DAT_0066f580,s_Warning__First_core_part_has_no_c_006285bc);
  }
  else {
    puVar3 = *(undefined4 **)((int)this_ + 0x24);
    if (puVar3 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*puVar3;
    }
    if (piVar2 != (int *)0x0) {
      do {
        iVar1 = bea_vcall<uint32_t>(piVar2, 0x14);
        if ((iVar1 == 0) && (piVar2[0xe] == 0)) {
          return 0;
        }
        puVar3 = (undefined4 *)puVar3[1];
        if (puVar3 == (undefined4 *)0x0) {
          piVar2 = (int *)0x0;
        }
        else {
          piVar2 = (int *)*puVar3;
        }
      } while (BEA_LOOP_GUARD((piVar2 != (int *)0x0)));
      return 1;
    }
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004433f0, ap_004433f0));
