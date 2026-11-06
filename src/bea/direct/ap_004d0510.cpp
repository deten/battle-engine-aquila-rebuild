// auto-ported from 004d0510_FUN_004d0510.c (FUN_004d0510, 161 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0082b490 GLOBAL_AT(int, 0x0082b490)
#define s_pausemenu_pause_circle02_tga_00631570 ((char*)0x00631570)
#define s_FrontEnd_v2_FE_Blank_tga_00629f68 ((char*)0x00629f68)
#define s_pausemenu_pause_circle01_tga_00631590 ((char*)0x00631590)
typedef uint32_t (BEA_THISCALL* FUN_004a4730_t)(uint32_t);
static const bea_guard<FUN_004a4730_t> FUN_004a4730 = {(FUN_004a4730_t)0x004a4730};
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef int * (BEA_CDECL* FUN_004f27f0_t)(undefined4, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};

static void BEA_THISCALL ap_004d0510(void * this_)
{
  undefined4 *puVar1;
  void *this_00;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)((int)this_ + 0x14);
  *(undefined4 **)((int)this_ + 0x1c) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)*puVar1;
  }
  while (BEA_LOOP_GUARD((this_00 != (void *)0x0))) {
    FUN_004a4730(bea_arg(this_00));
    puVar1 = *(undefined4 **)(*(int *)((int)this_ + 0x1c) + 4);
    *(undefined4 **)((int)this_ + 0x1c) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      this_00 = (void *)0x0;
    }
    else {
      this_00 = (void *)*puVar1;
    }
  }
  uVar2 = FUN_004f27f0(s_pausemenu_pause_circle01_tga_00631590,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x40) = uVar2;
  uVar2 = FUN_004f27f0(s_pausemenu_pause_circle02_tga_00631570,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x44) = uVar2;
  if (DAT_0082b490 != 0) {
    FUN_004f27e0(bea_arg((void *)(DAT_0082b490 + 8)));
    DAT_0082b490 = 0;
  }
  DAT_0082b490 = FUN_004f27f0(s_FrontEnd_v2_FE_Blank_tga_00629f68,4,0,1,0,1);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d0510, ap_004d0510));
