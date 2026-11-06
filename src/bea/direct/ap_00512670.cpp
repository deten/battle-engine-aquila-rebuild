// auto-ported from 00512670_FUN_00512670.c (FUN_00512670, 128 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define s_Battle_Engine_Aquila_0063ddc4 ((char*)0x0063ddc4)
typedef char* (BEA_CDECL* FUN_004f7c70_t)(uint32_t);
static const bea_guard<FUN_004f7c70_t> FUN_004f7c70 = {(FUN_004f7c70_t)0x004f7c70};
typedef void * (BEA_THISCALL* FUN_00528f80_t)(uint32_t);
static const bea_guard<FUN_00528f80_t> FUN_00528f80 = {(FUN_00528f80_t)0x00528f80};

static void * BEA_THISCALL ap_00512670(void * this_)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  FUN_00528f80(bea_arg(this_));
  *(undefined ***)this_ = ((void*)0x005e488c);
  *(undefined4 *)((int)this_ + 0x33478) = 0;
  puVar3 = (undefined1 *)((int)this_ + 0x33474);
  puVar1 = (undefined4 *)((int)this_ + 0x333e4);
  do {
    puVar1[9] = 0;
    puVar3[0x19] = 0;
    *puVar1 = 0;
    puVar1[4] = 0;
    *puVar3 = 1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  } while (BEA_LOOP_GUARD(((int)(puVar3 + (-0x33474 - (int)this_)) < 4)));
  *(undefined1 *)((int)this_ + 0x3348c) = 0;
  uVar2 = FUN_004f7c70(bea_arg(s_Battle_Engine_Aquila_0063ddc4));
  *(undefined4 *)((int)this_ + 0x330ac) = uVar2;
  *(undefined4 *)((int)this_ + 0x330b0) = 1;
  *(undefined4 *)((int)this_ + 0x32e44) = 0;
  *(undefined4 *)((int)this_ + 0x33448) = 0;
  *(undefined4 *)((int)this_ + 0x33460) = 0;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00512670, ap_00512670));
