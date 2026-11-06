// auto-ported from 00444620_FUN_00444620.c (FUN_00444620, 56 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit extraout_ST0: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef float10 (BEA_THISCALL* FUN_00442890_t)(uint32_t);
static const bea_guard<FUN_00442890_t> FUN_00442890 = {(FUN_00442890_t)0x00442890};

static int BEA_THISCALL ap_00444620(void * this_, undefined4 param_1)
{
  int iVar1;
  int iVar2;
  float10 extraout_ST0 = 0;
  
  iVar2 = 0;
  iVar1 = *(int *)((int)this_ + 8);
  if (0 < iVar1) {
    do {
      iVar1 = *(int *)(*(int *)((int)this_ + 4) + iVar2 * 4);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x1c) = param_1;
      }
      iVar1 = *(int *)((int)this_ + 8);
      iVar2 = iVar2 + 1;
    } while (BEA_LOOP_GUARD((iVar2 < iVar1)));
  }
  if (*(void **)((int)this_ + 0xc) != (void *)0x0) {
    iVar1 = bea_piece32(FUN_00442890(bea_arg(*(void **)((int)this_ + 0xc))));
    *(float *)((int)this_ + 0x18) = (float)extraout_ST0;
  }
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00444620, ap_00444620));
