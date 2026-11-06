// auto-ported from 004e0fb0_FUN_004e0fb0.c (FUN_004e0fb0, 134 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define s_Warning___out_of_sound_events__006324d8 ((char*)0x006324d8)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};

static int BEA_THISCALL ap_004e0fb0(void * this_, int param_1)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this_ + 0x34);
  if (iVar1 == 0) {
    CRenderThing__vslot3(s_Warning___out_of_sound_events__006324d8);
    return 0;
  }
  iVar4 = *(int *)(iVar1 + 0x74);
  *(int *)((int)this_ + 0x34) = iVar4;
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 0x78) = 0;
  }
  *(undefined4 *)(iVar1 + 0x74) = 0;
  iVar4 = *(int *)((int)this_ + 0xc);
  if (iVar4 == 0) {
    *(undefined4 *)(iVar1 + 0x74) = 0;
    *(undefined4 *)(iVar1 + 0x78) = 0;
    *(int *)((int)this_ + 0xc) = iVar1;
  }
  else {
    if (param_1 == 0) {
      iVar3 = *(int *)(iVar4 + 0x74);
      while (BEA_LOOP_GUARD(((iVar3 != 0 && (-1 < *(int *)(iVar4 + 4)))))) {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar3 + 0x74);
      }
    }
    uVar2 = *(undefined4 *)(iVar4 + 0x74);
    *(int *)(iVar1 + 0x78) = iVar4;
    *(undefined4 *)(iVar1 + 0x74) = uVar2;
    *(int *)(iVar4 + 0x74) = iVar1;
    if (*(int *)(iVar1 + 0x74) != 0) {
      *(int *)(*(int *)(iVar1 + 0x74) + 0x78) = iVar1;
      *(int *)((int)this_ + 8) = *(int *)((int)this_ + 8) + 1;
      return iVar1;
    }
  }
  *(int *)((int)this_ + 8) = *(int *)((int)this_ + 8) + 1;
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e0fb0, ap_004e0fb0));
