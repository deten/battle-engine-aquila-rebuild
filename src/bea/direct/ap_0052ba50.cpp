// auto-ported from 0052ba50_FUN_0052ba50.c (FUN_0052ba50, 237 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_0052af00_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0052af00_t> FUN_0052af00 = {(FUN_0052af00_t)0x0052af00};
typedef int (BEA_STDCALL* FUN_0052c4f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0052c4f0_t> FUN_0052c4f0 = {(FUN_0052c4f0_t)0x0052c4f0};

static undefined4 BEA_THISCALL ap_0052ba50(void * this_, int param_1)
{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = *(int *)((int)this_ + 0x32e40) * 0x516c;
  iVar1 = *(int *)((int)this_ + *(int *)((int)this_ + 0x32e40) * 0x516c + 0x516c);
  iVar5 = (int)this_ + iVar1 * 0xf68 + iVar4 + 0x464;
  if (*(int *)((int)this_ + iVar1 * 0xf68 + iVar4 + 0x59c) == param_1) {
LAB_0052bae1:
    *(int *)(iVar5 + 0xf54) = param_1;
    *(int *)((int)this_ + 0x32e44) = param_1;
    *(undefined4 *)((int)this_ + 0x32e4c) = 0;
    bea_vcall<uint32_t>(this_, 0x28, 0);
    iVar4 = FUN_0052af00(bea_arg(this_), bea_arg(1));
    if (-1 < iVar4) {
      *(undefined4 *)((int)this_ + 0x32e4c) = 1;
      return 0;
    }
    uVar3 = FUN_0052c4f0(bea_arg(iVar4), bea_arg(1));
    return uVar3;
  }
  uVar6 = 0;
  if (*(uint *)((int)this_ + 0x32e3c) != 0) {
    iVar4 = (int)this_ + 0x464;
    do {
      uVar2 = 0;
      iVar5 = iVar4;
      if (*(int *)(iVar4 + -4) != 0) {
        do {
          if (*(int *)(iVar5 + 0x138) == param_1) {
            *(uint *)((int)this_ + 0x32e40) = uVar6;
            *(uint *)(iVar4 + 0x4d08) = uVar2;
            goto LAB_0052bae1;
          }
          uVar2 = uVar2 + 1;
          iVar5 = iVar5 + 0xf68;
        } while (BEA_LOOP_GUARD((uVar2 < *(uint *)(iVar4 + -4))));
      }
      uVar6 = uVar6 + 1;
      iVar4 = iVar4 + 0x516c;
    } while (BEA_LOOP_GUARD((uVar6 < *(uint *)((int)this_ + 0x32e3c))));
  }
  return 0x80004005;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_0052ba50.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
