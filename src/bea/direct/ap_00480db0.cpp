// auto-ported from 00480db0_FUN_00480db0.c (FUN_00480db0, 93 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_WARNING__Unexpected_collision_ch_0062cdec ((char*)0x0062cdec)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_00480ed0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00480ed0_t> FUN_00480ed0 = {(FUN_00480ed0_t)0x00480ed0};

static void BEA_THISCALL ap_00480db0(void * this_, int *param_1)
{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (param_1 != *(int **)((int)this_ + 8))) {
    iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 8), 0x20, param_1);
    if (iVar1 != 0) {
      iVar1 = bea_vcall<uint32_t>(param_1, 0x20, *(undefined4 *)((int)this_ + 8));
      if (iVar1 != 0) {
        if (*(int *)((int)this_ + 0x10) == 1) {
          FUN_00441740(&DAT_0066f580,s_WARNING__Unexpected_collision_ch_0062cdec);
          return;
        }
        FUN_00480ed0(bea_arg(this_), bea_arg(param_1));
        *(undefined4 *)((int)this_ + 0x10) = 0;
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00480db0, ap_00480db0));
