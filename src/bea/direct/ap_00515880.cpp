// auto-ported from 00515880_FUN_00515880.c (FUN_00515880, 52 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_00889048 GLOBAL_AT(int, 0x00889048)
typedef undefined4 (BEA_THISCALL* FUN_00512490_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00512490_t> FUN_00512490 = {(FUN_00512490_t)0x00512490};

static undefined4 BEA_THISCALL ap_00515880(undefined4 this_)
{
  int iVar1;

  undefined4 uVar2;
  uint local_4;
  
  uVar2 = 0;
  local_4 = CONCAT31((int3)((uint)this_ >> 8),1);
  do {
    iVar1 = FUN_00512490(bea_arg(&DAT_00855bb0), bea_arg(local_4));
    if (DAT_00889048 == 0x12) {
      uVar2 = 2;
    }
    local_4 = local_4 & 0xffffff00;
  } while (BEA_LOOP_GUARD((iVar1 != 0)));
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00515880, ap_00515880));
