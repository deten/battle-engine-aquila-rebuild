// auto-ported from 004445b0_FUN_004445b0.c (FUN_004445b0, 106 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit extraout_ST0: never written by the original (stack garbage is copied out); the port stores 0
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
typedef float10 (BEA_THISCALL* FUN_00442890_t)(uint32_t);
static const bea_guard<FUN_00442890_t> FUN_00442890 = {(FUN_00442890_t)0x00442890};
typedef undefined4 (BEA_THISCALL* FUN_004aa8a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa8a0_t> FUN_004aa8a0 = {(FUN_004aa8a0_t)0x004aa8a0};

static undefined4 BEA_THISCALL ap_004445b0(void * this_, char *param_1, undefined4 param_2)
{
  undefined uVar1;
  void *this_00;
  int iVar2;
  undefined4 uVar3;
  undefined3 extraout_var = 0;
  float10 extraout_ST0;
  
  iVar2 = *(int *)((int)this_ + 0x10);
  if (*(int **)(iVar2 + 0x30) != (int *)0x0) {
    this_00 = (void *)bea_vcall<uint32_t>(*(int **)(iVar2 + 0x30), 0x24);
    iVar2 = 0;
    if (this_00 != (void *)0x0) {
      iVar2 = FUN_004aa8a0(bea_arg(this_00), bea_arg(param_1));
      if ((iVar2 == 0) ||
         (iVar2 = *(int *)(*(int *)((int)this_ + 4) + *(int *)(iVar2 + 0x88) * 4), iVar2 == 0)) {
        uVar1 = FUN_00441740(&DAT_0066f580,s_FATAL_ERROR__Could_not_find_segm_0062864c,param_1);
        iVar2 = CONCAT31(extraout_var,uVar1);
      }
      else {
        *(undefined4 *)(iVar2 + 0x1c) = param_2;
        if (*(void **)((int)this_ + 0xc) != (void *)0x0) {
          uVar3 = FUN_00442890(bea_arg(*(void **)((int)this_ + 0xc)));
          *(float *)((int)this_ + 0x18) = (float)extraout_ST0;
          return uVar3;
        }
      }
    }
  }
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004445b0, ap_004445b0));
