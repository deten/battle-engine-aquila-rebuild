// auto-ported from 004bfab0_vslot36.c (CTree::vslot36, 66 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CThing;
typedef char CTree;
typedef uint32_t (BEA_THISCALL* CThing__vslot36_t)(uint32_t, uint32_t);
static const bea_guard<CThing__vslot36_t> CThing__vslot36 = {(CThing__vslot36_t)0x004f36d0};
typedef undefined2 (BEA_THISCALL* FUN_004f6fd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f6fd0_t> FUN_004f6fd0 = {(FUN_004f6fd0_t)0x004f6fd0};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};

static void BEA_THISCALL ap_004bfab0(CTree * this_, undefined4 param_1)
{
  char cVar1;
  
  if ((*(int *)(this_ + 0x48) != 0) && (cVar1 = FUN_004f6fd0(bea_arg(this_), bea_arg(param_1)), cVar1 != '\0')) {
    return;
  }
  FUN_00513bc0(bea_arg(0x1b), bea_arg(0));
  CThing__vslot36(bea_arg((CThing *)this_), bea_arg(param_1));
  FUN_00513bc0(bea_arg(0x1b), bea_arg(1));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bfab0, ap_004bfab0));
