// auto-ported from 0044a130_FUN_0044a130.c (FUN_0044a130, 130 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_008aa9f0 GLOBAL_AT(int, 0x008aa9f0)
#define DAT_00855090 GLOBAL_AT(undefined4*, 0x00855090)
#define _DAT_008c0278 GLOBAL_AT(int, 0x008c0278)
#define DAT_008c0274 GLOBAL_AT(int, 0x008c0274)
typedef uint32_t (BEA_THISCALL* FUN_00440c40_t)(uint32_t);
static const bea_guard<FUN_00440c40_t> FUN_00440c40 = {(FUN_00440c40_t)0x00440c40};
typedef undefined4 (BEA_THISCALL* FUN_004f6430_t)(uint32_t);
static const bea_guard<FUN_004f6430_t> FUN_004f6430 = {(FUN_004f6430_t)0x004f6430};
typedef uint32_t (BEA_THISCALL* FUN_00545070_t)(uint32_t);
static const bea_guard<FUN_00545070_t> FUN_00545070 = {(FUN_00545070_t)0x00545070};
typedef uint32_t (BEA_STDCALL* FUN_005475d0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005475d0_t> FUN_005475d0 = {(FUN_005475d0_t)0x005475d0};

static uint32_t BEA_THISCALL ap_0044a130(void * this_)
{
  undefined4 *puVar1;
  uint uVar2;
  void *this_00;
  FUN_00440c40(bea_arg(&DAT_008aa9f0));
  puVar1 = DAT_00855090;
  if (DAT_00855090 == (undefined4 *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)*DAT_00855090;
  }
  while (BEA_LOOP_GUARD((this_00 != (void *)0x0))) {
    if ((*(uint *)((int)this_00 + 0x34) & 0x2000000) != 0) {
      uVar2 = FUN_004f6430(bea_arg(this_00));
      FUN_005475d0(bea_arg(*(float *)((int)this_00 + 0x1c) - 0.4f), bea_arg(*(float *)((int)this_00 + 0x20) + 0.1f), bea_arg(uVar2 & 0xff));
    }
    puVar1 = (undefined4 *)puVar1[1];
    if (puVar1 == (undefined4 *)0x0) {
      this_00 = (void *)0x0;
    }
    else {
      this_00 = (void *)*puVar1;
    }
  }
  _DAT_008c0278 = DAT_008c0274;
  return FUN_00545070(bea_arg(*(void **)((int)this_ + 0x10)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044a130, ap_0044a130));
