// auto-ported from 00491930_FUN_00491930.c (FUN_00491930, 114 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef uint32_t (BEA_STDCALL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055db0a_t> FUN_0055db0a = {(FUN_0055db0a_t)0x0055db0a};

static void BEA_THISCALL ap_00491930(void * this_)
{
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)this_ + 0x90) != 0) {
    iVar1 = 0x10;
    do {
      iVar2 = *(int *)(iVar1 + *(int *)((int)this_ + 0x90));
      if (iVar2 != 0) {
        FUN_0055db0a(bea_arg(iVar2), bea_arg(8), bea_arg(*(undefined4 *)(iVar2 + -4)), bea_arg(((void*)0x00491910)));
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar2 + -4));
      }
      iVar2 = iVar1 + -4;
      *(undefined4 *)(iVar1 + *(int *)((int)this_ + 0x90)) = 0;
      iVar1 = iVar2;
    } while (BEA_LOOP_GUARD((-1 < iVar2)));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x90)));
    *(undefined4 *)((int)this_ + 0x90) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00491930, ap_00491930));
