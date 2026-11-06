// auto-ported from 0046fb80_FUN_0046fb80.c (FUN_0046fb80, 191 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_0046fb80(void * this_)
{
  int *piVar1;
  int *this_00;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (*(int **)((int)this_ + 0x9f8) != (int *)0x0) {
    *(int *)((int)this_ + 0xa00) = *(int *)((int)this_ + 0xa00) + 1;
    this_00 = (int *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x9f8), 0x144);
    piVar1 = (int *)*this_00;
    this_00[2] = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if (iVar3 == 0) {
      *(undefined4 *)((int)this_ + 0xa00) = 0xffffffff;
      FUN_00401000(bea_arg((void *)((int)this_ + 0xa04)), bea_arg(0));
    }
    else {
      FUN_00401000(bea_arg((void *)((int)this_ + 0xa04)), bea_arg(iVar3));
      iVar2 = *(int *)((int)this_ + 0xa00);
      while(BEA_LOOP_GUARD(( true ))) {
        if ((iVar2 < 1) || (bVar4 = iVar3 == 0, iVar3 = 0, bVar4)) goto LAB_0046fc1c;
        piVar1 = *(int **)(this_00[2] + 4);
        this_00[2] = (int)piVar1;
        if ((piVar1 == (int *)0x0) || (iVar3 = *piVar1, iVar3 == 0)) break;
        iVar2 = iVar2 + -1;
      }
      *(undefined4 *)((int)this_ + 0xa00) = 0xffffffff;
      iVar3 = 0;
LAB_0046fc1c:
      FUN_00401000(bea_arg((void *)((int)this_ + 0xa04)), bea_arg(iVar3));
    }
    if (this_00 != (int *)0x0) {
      FUN_004e5c60(bea_arg(this_00));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
    }
  }
  return;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_0046fb80.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
