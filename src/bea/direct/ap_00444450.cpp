// auto-ported from 00444450_FUN_00444450.c (FUN_00444450, 91 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit extraout_var: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_FATAL_ERROR__Could_not_find_segm_0062864c ((char*)0x0062864c)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef undefined4 (BEA_THISCALL* FUN_004aa8a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa8a0_t> FUN_004aa8a0 = {(FUN_004aa8a0_t)0x004aa8a0};

static int BEA_THISCALL ap_00444450(void * this_, char *param_1, undefined4 param_2)
{
  undefined uVar1;
  void *this_00;
  int iVar2;
  undefined3 extraout_var = 0;
  
  iVar2 = *(int *)((int)this_ + 0x10);
  if (*(int **)(iVar2 + 0x30) != (int *)0x0) {
    this_00 = (void *)bea_vcall<uint32_t>(*(int **)(iVar2 + 0x30), 0x24);
    iVar2 = 0;
    if (this_00 != (void *)0x0) {
      iVar2 = FUN_004aa8a0(bea_arg(this_00), bea_arg(param_1));
      if (iVar2 != 0) {
        iVar2 = *(int *)(*(int *)((int)this_ + 4) + *(int *)(iVar2 + 0x88) * 4);
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0xc) = param_2;
          return iVar2;
        }
      }
      uVar1 = FUN_00441740(&DAT_0066f580,s_FATAL_ERROR__Could_not_find_segm_0062864c,param_1);
      iVar2 = CONCAT31(extraout_var,uVar1);
    }
  }
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00444450, ap_00444450));
