// auto-ported from 0047a8b0_vslot86.c (CGillMHead::vslot86, 77 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGillMHead;
typedef char CUnit;
#define DAT_0062ca48 GLOBAL_AT(int, 0x0062ca48)
#define DAT_00623bb4 GLOBAL_AT(int, 0x00623bb4)
typedef undefined4 (BEA_THISCALL* CUnit__vslot86_t)(uint32_t);
static const bea_guard<CUnit__vslot86_t> CUnit__vslot86 = {(CUnit__vslot86_t)0x004fbcb0};
typedef undefined4 (BEA_THISCALL* FUN_004f4530_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f4530_t> FUN_004f4530 = {(FUN_004f4530_t)0x004f4530};
typedef uint32_t (BEA_THISCALL* FUN_004f4560_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f4560_t> FUN_004f4560 = {(FUN_004f4560_t)0x004f4560};

static undefined4 BEA_THISCALL ap_0047a8b0(CGillMHead * this_)
{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004f4530(bea_arg(this_), bea_arg(&DAT_0062ca48));
  iVar2 = bea_vcall<uint32_t>(this_ + 8, 0x58);
  if (iVar2 != iVar1) {
    return 0;
  }
  iVar1 = CUnit__vslot86(bea_arg((CUnit *)this_));
  if (iVar1 == 0) {
    return 0;
  }
  FUN_004f4560(bea_arg(this_), bea_arg(&DAT_00623bb4), bea_arg(1), bea_arg(0));
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047a8b0, ap_0047a8b0));
