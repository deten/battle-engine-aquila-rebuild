// auto-ported from 0048f540_FUN_0048f540.c (FUN_0048f540, 92 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define s_FrontEnd_v2_FE_Blank_tga_00629f68 ((char*)0x00629f68)
typedef int * (BEA_CDECL* FUN_004f27f0_t)(undefined4, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};

static void * BEA_THISCALL ap_0048f540(void * this_)
{
  undefined4 uVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined4 *)((int)this_ + 0xc) = 0;
  *(undefined ***)this_ = ((void*)0x005dc208);
  uVar1 = FUN_004f27f0(s_FrontEnd_v2_FE_Blank_tga_00629f68,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x10) = uVar1;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048f540, ap_0048f540));
