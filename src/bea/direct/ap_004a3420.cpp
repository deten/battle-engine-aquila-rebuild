// auto-ported from 004a3420_vslot5.c (CMenuItem::vslot5, 41 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMenuItem;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef undefined4 (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};

static undefined4 BEA_THISCALL ap_004a3420(CMenuItem * this_)
{
  undefined4 uVar1;
  void *this_00;
  undefined4 *puVar2;
  undefined4 auStack_8 [2];
  
  puVar2 = auStack_8;
  uVar1 = bea_vcall<uint32_t>(this_, 0x8);
  this_00 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
  FUN_00540680(bea_arg(this_00), bea_arg(uVar1), bea_arg(puVar2));
  return auStack_8[0];
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a3420, ap_004a3420));
