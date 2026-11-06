// auto-ported from 0040f890_FUN_0040f890.c (FUN_0040f890, 228 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_0040f890(void * this_)
{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*(int *)((int)this_ + 0xa8) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xa8)));
    *(undefined4 *)((int)this_ + 0xa8) = 0;
  }
  while(BEA_LOOP_GUARD(( true ))) {
    piVar1 = *(int **)((int)this_ + 0x50);
    *(int **)((int)this_ + 0x58) = piVar1;
    if ((piVar1 == (int *)0x0) || (puVar2 = (undefined4 *)*piVar1, puVar2 == (undefined4 *)0x0))
    break;
    FUN_004e5bd0(bea_arg((int *)((int)this_ + 0x50)), bea_arg(puVar2));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*puVar2));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(puVar2));
  }
  while(BEA_LOOP_GUARD(( true ))) {
    piVar1 = *(int **)((int)this_ + 0x40);
    *(int **)((int)this_ + 0x48) = piVar1;
    if ((piVar1 == (int *)0x0) || (puVar2 = (undefined4 *)*piVar1, puVar2 == (undefined4 *)0x0))
    break;
    FUN_004e5bd0(bea_arg((int *)((int)this_ + 0x40)), bea_arg(puVar2));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*puVar2));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(puVar2));
  }
  if (*(int *)((int)this_ + 0x68) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x68)));
    *(undefined4 *)((int)this_ + 0x68) = 0;
  }
  if (*(int *)((int)this_ + 100) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 100)));
    *(undefined4 *)((int)this_ + 100) = 0;
  }
  if (*(int *)((int)this_ + 0x60) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x60)));
    *(undefined4 *)((int)this_ + 0x60) = 0;
  }
  if (*(int *)((int)this_ + 0x6c) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x6c)));
    *(undefined4 *)((int)this_ + 0x6c) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040f890, ap_0040f890));
