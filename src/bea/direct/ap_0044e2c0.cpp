// auto-ported from 0044e2c0_vslot59.c (CFenrir::vslot59, 54 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFenrir;
#define PTR_DAT_00628e9c GLOBAL_AT(void*, 0x00628e9c)
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

static undefined4 BEA_THISCALL ap_0044e2c0(CFenrir * this_)
{
  void *this_00;
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &PTR_DAT_00628e9c;
  this_00 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
  iVar1 = FUN_004aa630(bea_arg(this_00), bea_arg(ppuVar3));
  iVar2 = bea_vcall<uint32_t>(this_ + 8, 0x58);
  if (iVar2 == iVar1) {
    bea_vcall<uint32_t>(this_, 0x38);
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044e2c0, ap_0044e2c0));
