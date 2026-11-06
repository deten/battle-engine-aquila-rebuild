// auto-ported from 004cb1b0_FUN_004cb1b0.c (FUN_004cb1b0, 83 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0082b3ec GLOBAL_AT(int, 0x0082b3ec)
typedef uint32_t (BEA_THISCALL* FUN_004cb1b0_t)(uint32_t);
static const bea_guard<FUN_004cb1b0_t> FUN_004cb1b0 = {(FUN_004cb1b0_t)0x004cb1b0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef uint32_t (BEA_STDCALL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055db0a_t> FUN_0055db0a = {(FUN_0055db0a_t)0x0055db0a};

static void BEA_THISCALL ap_004cb1b0(void * this_)
{
  int iVar1;
  void *this_00;
  
  iVar1 = *(int *)this_;
  if (iVar1 != 0) {
    FUN_0055db0a(bea_arg(iVar1), bea_arg(0xd8), bea_arg(*(undefined4 *)(iVar1 + -4)), bea_arg(((void*)0x00459990)));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar1 + -4));
  }
  this_00 = *(void **)((int)this_ + 4);
  if (this_00 != (void *)0x0) {
    FUN_004cb1b0(bea_arg(this_00));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
  }
  DAT_0082b3ec = DAT_0082b3ec + -1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cb1b0, ap_004cb1b0));
