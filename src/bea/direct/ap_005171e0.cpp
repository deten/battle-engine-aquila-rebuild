// auto-ported from 005171e0_FUN_005171e0.c (FUN_005171e0, 123 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define s_Shutting_down_sound_device_0063e750 ((char*)0x0063e750)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};

static void BEA_THISCALL ap_005171e0(void * this_)
{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  CRenderThing__vslot3(s_Shutting_down_sound_device_0063e750);
  piVar3 = (int *)((int)this_ + 0xc4);
  iVar2 = 0x40;
  do {
    piVar1 = (int *)piVar3[0x40];
    if (piVar1 != (int *)0x0) {
      bea_vcall<uint32_t>(piVar1, 0x8, piVar1);
      piVar3[0x40] = 0;
    }
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      bea_vcall<uint32_t>(piVar1, 0x8, piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (BEA_LOOP_GUARD((iVar2 != 0)));
  piVar3 = *(int **)((int)this_ + 0xc0);
  if (piVar3 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar3, 0x8, piVar3);
    *(undefined4 *)((int)this_ + 0xc0) = 0;
  }
  if (*(undefined4 **)((int)this_ + 0x2c8) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x2c8), 0x0, 1);
    *(undefined4 *)((int)this_ + 0x2c8) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005171e0, ap_005171e0));
