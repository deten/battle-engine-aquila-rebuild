// auto-ported from 0046fc40_FUN_0046fc40.c (FUN_0046fc40, 244 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_Warning__can_t_find_unit__d_to_d_0062c208 ((char*)0x0062c208)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_0046fc40(void * this_)
{
  int *piVar1;
  int *this_00;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (*(int **)((int)this_ + 0x9f8) != (int *)0x0) {
    *(int *)((int)this_ + 0xa00) = *(int *)((int)this_ + 0xa00) + -1;
    this_00 = (int *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x9f8), 0x144);
    if (*(int *)((int)this_ + 0xa00) == -1) {
      *(undefined4 *)((int)this_ + 0xa00) = 0xffffffff;
      FUN_00401000(bea_arg((void *)((int)this_ + 0xa04)), bea_arg(0));
    }
    else {
      if (*(int *)((int)this_ + 0xa00) < 0) {
        *(int *)((int)this_ + 0xa00) = this_00[3] + -1;
      }
      piVar1 = (int *)*this_00;
      this_00[2] = (int)piVar1;
      if (piVar1 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar1;
      }
      if (iVar2 == 0) {
        *(undefined4 *)((int)this_ + 0xa00) = 0xffffffff;
      }
      else {
        iVar3 = *(int *)((int)this_ + 0xa00);
        while(BEA_LOOP_GUARD(( true ))) {
          if ((iVar3 < 1) || (bVar4 = iVar2 == 0, iVar2 = 0, bVar4)) goto LAB_0046fd10;
          piVar1 = *(int **)(this_00[2] + 4);
          this_00[2] = (int)piVar1;
          if ((piVar1 == (int *)0x0) || (iVar2 = *piVar1, iVar2 == 0)) break;
          iVar3 = iVar3 + -1;
        }
        FUN_00441740(&DAT_0066f580,s_Warning__can_t_find_unit__d_to_d_0062c208,
                     *(int *)((int)this_ + 0xa00));
        *(undefined4 *)((int)this_ + 0xa00) = 0xffffffff;
        iVar2 = 0;
      }
LAB_0046fd10:
      FUN_00401000(bea_arg((void *)((int)this_ + 0xa04)), bea_arg(iVar2));
    }
    if (this_00 != (int *)0x0) {
      FUN_004e5c60(bea_arg(this_00));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
    }
  }
  return;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_0046fc40.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
