// auto-ported from 0054f6e0_FUN_0054f6e0.c (FUN_0054f6e0, 83 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef int (BEA_THISCALL* FUN_004cae50_t)(uint32_t);
static const bea_guard<FUN_004cae50_t> FUN_004cae50 = {(FUN_004cae50_t)0x004cae50};
typedef uint32_t (BEA_CDECL* FUN_004caf30_t)(void);
static const bea_guard<FUN_004caf30_t> FUN_004caf30 = {(FUN_004caf30_t)0x004caf30};
typedef uint32_t (BEA_CDECL* FUN_004caf60_t)(void);
static const bea_guard<FUN_004caf60_t> FUN_004caf60 = {(FUN_004caf60_t)0x004caf60};
typedef uint32_t (BEA_CDECL* FUN_004cb080_t)(void);
static const bea_guard<FUN_004cb080_t> FUN_004cb080 = {(FUN_004cb080_t)0x004cb080};
typedef uint32_t (BEA_THISCALL* FUN_004cb1b0_t)(uint32_t);
static const bea_guard<FUN_004cb1b0_t> FUN_004cb1b0 = {(FUN_004cb1b0_t)0x004cb1b0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static undefined4 BEA_THISCALL ap_0054f6e0(void * this_)
{
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  
  iVar1 = *(int *)this_;
  while (BEA_LOOP_GUARD((iVar1 != 0))) {
    iVar1 = *(int *)((int)*(void **)this_ + 0x68);
    FUN_004cae50(bea_arg(*(void **)this_));
    *(undefined4 *)(*(int *)this_ + 0x68) = *(undefined4 *)((int)this_ + 8);
    *(undefined4 *)((int)this_ + 8) = *(undefined4 *)this_;
    *(int *)this_ = iVar1;
  }
  FUN_004caf30();
  FUN_004cb080();
  uVar2 = FUN_004caf60();
  this_00 = *(void **)((int)this_ + 0xc);
  if (this_00 != (void *)0x0) {
    FUN_004cb1b0(bea_arg(this_00));
    uVar2 = FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
  }
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0054f6e0, ap_0054f6e0));
