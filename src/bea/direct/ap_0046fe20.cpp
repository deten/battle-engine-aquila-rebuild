// auto-ported from 0046fe20_FUN_0046fe20.c (FUN_0046fe20, 155 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008550a8 GLOBAL_AT(undefined4*, 0x008550a8)
#define DAT_008550a0 GLOBAL_AT(undefined4*, 0x008550a0)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};

static void BEA_THISCALL ap_0046fe20(void * this_)
{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  FUN_00401000(bea_arg((void *)((int)this_ + 0xa04)), bea_arg(0));
  *(undefined4 *)((int)this_ + 0xa00) = 0xffffffff;
  *(int *)((int)this_ + 0x9fc) = *(int *)((int)this_ + 0x9fc) + 1;
  DAT_008550a8 = DAT_008550a0;
  if (DAT_008550a0 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *DAT_008550a0;
  }
  if (iVar1 == 0) {
    *(undefined4 *)((int)this_ + 0x9fc) = 0xffffffff;
    FUN_00401000(bea_arg((void *)((int)this_ + 0x9f8)), bea_arg(0));
    return;
  }
  iVar2 = *(int *)((int)this_ + 0x9fc);
  while(BEA_LOOP_GUARD(( true ))) {
    if ((iVar2 < 1) || (bVar3 = iVar1 == 0, iVar1 = 0, bVar3)) goto LAB_0046fead;
    DAT_008550a8 = (int *)DAT_008550a8[1];
    if ((DAT_008550a8 == (int *)0x0) || (iVar1 = *DAT_008550a8, iVar1 == 0)) break;
    iVar2 = iVar2 + -1;
  }
  *(undefined4 *)((int)this_ + 0x9fc) = 0xffffffff;
  iVar1 = 0;
LAB_0046fead:
  FUN_00401000(bea_arg((void *)((int)this_ + 0x9f8)), bea_arg(iVar1));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046fe20, ap_0046fe20));
