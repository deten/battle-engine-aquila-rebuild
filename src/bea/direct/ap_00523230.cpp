// auto-ported from 00523230_FUN_00523230.c (FUN_00523230, 126 bytes) by tools/autoport.py
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

static void BEA_THISCALL ap_00523230(void * this_)
{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)this_ != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)this_;
      iVar2 = *(int *)(iVar3 + iVar1 + 4);
      if (iVar2 != 0) {
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar2));
        *(undefined4 *)(iVar3 + iVar1 + 4) = 0;
      }
      iVar3 = iVar3 + 0x14;
    } while (BEA_LOOP_GUARD((iVar3 < 0x14000)));
  }
  iVar3 = *(int *)this_;
  if (iVar3 != 0) {
    FUN_0055db0a(bea_arg(iVar3), bea_arg(0x14), bea_arg(*(undefined4 *)(iVar3 + -4)), bea_arg(((void*)0x00523210)));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar3 + -4));
    *(undefined4 *)this_ = 0;
  }
  if (*(int *)((int)this_ + 4) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 4)));
    *(undefined4 *)((int)this_ + 4) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00523230, ap_00523230));
