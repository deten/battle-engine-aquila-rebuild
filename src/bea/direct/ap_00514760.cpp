// auto-ported from 00514760_vslot17.c (CPCController::vslot17, 74 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CPCController;
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef undefined4 (BEA_THISCALL* FUN_00548c00_t)(uint32_t);
static const bea_guard<FUN_00548c00_t> FUN_00548c00 = {(FUN_00548c00_t)0x00548c00};
typedef undefined4 (BEA_THISCALL* FUN_00548d30_t)(uint32_t);
static const bea_guard<FUN_00548d30_t> FUN_00548d30 = {(FUN_00548d30_t)0x00548d30};

static void BEA_THISCALL ap_00514760(CPCController * this_)
{
  CPCController *this_00;
  int iVar1;
  
  this_00 = this_ + 0x2c;
  FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x14), bea_arg(4));
  FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x18), bea_arg(4));
  FUN_00548570(bea_arg(this_00), bea_arg(this_ + 0x1c), bea_arg(4));
  iVar1 = FUN_00548d30(bea_arg(this_00));
  if (iVar1 != 0) {
    FUN_00548c00(bea_arg(this_00));
    this_[0x161] = (CPCController)0x0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00514760, ap_00514760));
