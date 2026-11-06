// auto-ported from 004a4730_FUN_004a4730.c (FUN_004a4730, 83 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define s_FrontEnd_v2_FE_Blank_tga_00629f68 ((char*)0x00629f68)
typedef int * (BEA_CDECL* FUN_004f27f0_t)(undefined4, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};

static void BEA_THISCALL ap_004a4730(void * this_)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar2 = FUN_004f27f0(s_FrontEnd_v2_FE_Blank_tga_00629f68,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x24) = uVar2;
  puVar1 = *(undefined4 **)((int)this_ + 8);
  *(undefined4 **)((int)this_ + 0x10) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)*puVar1;
  }
  while (BEA_LOOP_GUARD((piVar3 != (int *)0x0))) {
    bea_vcall<uint32_t>(piVar3, 0x34);
    puVar1 = *(undefined4 **)(*(int *)((int)this_ + 0x10) + 4);
    *(undefined4 **)((int)this_ + 0x10) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)*puVar1;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a4730, ap_004a4730));
