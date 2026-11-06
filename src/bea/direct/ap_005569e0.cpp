// auto-ported from 005569e0_FUN_005569e0.c (FUN_005569e0, 79 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef uint32_t (BEA_STDCALL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055db0a_t> FUN_0055db0a = {(FUN_0055db0a_t)0x0055db0a};

static void BEA_THISCALL ap_005569e0(void * this_)
{
  int iVar1;
  
  iVar1 = *(int *)this_;
  *(undefined4 *)((int)this_ + 0xc) = 0;
  if (iVar1 != 0) {
    FUN_0055db0a(bea_arg(iVar1), bea_arg(0xc), bea_arg(*(undefined4 *)(iVar1 + -4)), bea_arg(((void*)0x005565b0)));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar1 + -4));
    *(undefined4 *)this_ = 0;
  }
  if (*(int *)((int)this_ + 8) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 8) + 8)));
    *(undefined4 *)((int)this_ + 8) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005569e0, ap_005569e0));
