// auto-ported from 004e8ed0_vslot81.c (CNormalSquad::vslot81, 171 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CNormalSquad;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_SquadNormal_cp_0063283c ((char*)0x0063283c)
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef uint32_t (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void * BEA_THISCALL ap_004e8ed0(CNormalSquad * this_)
{
  void *this_00;
  undefined4 *puVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(8), bea_arg(s_C__dev_ONSLAUGHT2_SquadNormal_cp_0063283c), bea_arg(0x437));
  if (this_00 == (void *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    FUN_004e5840(bea_arg(this_00));
  }
  puVar1 = *(undefined4 **)(this_ + 0xa4);
  *(undefined4 **)(this_ + 0xac) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)*puVar1;
  }
  while (BEA_LOOP_GUARD((puVar1 != (undefined4 *)0x0))) {
    FUN_004e5a80(bea_arg(this_00), bea_arg(*puVar1));
    puVar1 = *(undefined4 **)(*(int *)(this_ + 0xac) + 4);
    *(undefined4 **)(this_ + 0xac) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = (undefined4 *)*puVar1;
    }
  }
  return this_00;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e8ed0, ap_004e8ed0));
