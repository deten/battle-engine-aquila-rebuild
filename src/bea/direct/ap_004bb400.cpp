// auto-ported from 004bb400_FUN_004bb400.c (FUN_004bb400, 70 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_004bb400(void * this_)
{
  int iVar1;
  int iVar2;
  
  if (*(char *)((int)this_ + 8) != '\0') {
    bea_vcall<uint32_t>(this_, 0xc);
    *(undefined1 *)((int)this_ + 8) = 0;
  }
  bea_vcall<uint32_t>(this_, 0x4);
  iVar2 = *(int *)((int)this_ + 0xc);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this_ + 0xc) = 0;
    return;
  }
  do {
    iVar1 = *(int *)(iVar2 + 0x104);
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar2));
    iVar2 = iVar1;
  } while (BEA_LOOP_GUARD((iVar1 != 0)));
  *(undefined4 *)((int)this_ + 0xc) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bb400, ap_004bb400));
