// auto-ported from 005015c0_FUN_005015c0.c (FUN_005015c0, 108 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00854e00 GLOBAL_AT(int, 0x00854e00)
typedef uint32_t (BEA_THISCALL* FUN_005005e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005005e0_t> FUN_005005e0 = {(FUN_005005e0_t)0x005005e0};
typedef uint32_t (BEA_THISCALL* FUN_005007f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005007f0_t> FUN_005007f0 = {(FUN_005007f0_t)0x005007f0};

static int BEA_CDECL ap_005015c0(undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  void *this_local;
  uint32_t eax_in = 0;
  int iVar2;
  int iVar3;
  
  for (this_local = DAT_00854e00; BEA_LOOP_GUARD((this_local != (void *)0x0)); this_local = *(void **)((int)this_local + 0x58)) {
    iVar1 = *(int *)((int)this_local + 0x1c);
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = 0x400;
      if (0x400 < iVar1) {
        do {
          iVar2 = iVar2 * 2;
        } while (BEA_LOOP_GUARD((iVar2 < iVar1)));
      }
    }
    iVar1 = *(int *)((int)this_local + 0x34);
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = 0x400;
      if (0x400 < iVar1) {
        do {
          iVar3 = iVar3 * 2;
        } while (BEA_LOOP_GUARD((iVar3 < iVar1)));
      }
    }
    eax_in = *(int *)((int)this_local + 0x48);
    if (iVar2 < *(int *)((int)this_local + eax_in * 4 + 0x14)) {
      eax_in = FUN_005005e0(bea_arg(this_local), bea_arg(iVar2));
    }
    if (iVar3 < *(int *)((int)this_local + 0x30)) {
      eax_in = FUN_005007f0(bea_arg(this_local), bea_arg(iVar3));
    }
  }
  return eax_in;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005015c0, ap_005015c0));
