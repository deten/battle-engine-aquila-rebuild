// auto-ported from 0053d3e0_vslot3.c (CDXEngine::vslot3, 149 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CDXEngine;
typedef char CEngine;
#define DAT_009c64d8 GLOBAL_AT(int, 0x009c64d8)
typedef uint32_t (BEA_THISCALL* CEngine__vslot0_t)(uint32_t);
static const bea_guard<CEngine__vslot0_t> CEngine__vslot0 = {(CEngine__vslot0_t)0x00449890};
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef uint32_t (BEA_THISCALL* FUN_005506e0_t)(uint32_t);
static const bea_guard<FUN_005506e0_t> FUN_005506e0 = {(FUN_005506e0_t)0x005506e0};

static void BEA_THISCALL ap_0053d3e0(CDXEngine * this_)
{
  int iVar1;
  
  CEngine__vslot0(bea_arg((CEngine *)this_));
  if (*(int *)(this_ + 0x4e4) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)(this_ + 0x4e4) + 8)));
    *(undefined4 *)(this_ + 0x4e4) = 0;
  }
  iVar1 = *(int *)(this_ + 0x28);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x170) = *(int *)(iVar1 + 0x170) + -1;
    *(undefined4 *)(this_ + 0x28) = 0;
  }
  if (*(int *)(this_ + 0x4c0) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)(this_ + 0x4c0) + 8)));
    *(undefined4 *)(this_ + 0x4c0) = 0;
  }
  if (*(int *)(this_ + 0x4e8) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)(this_ + 0x4e8) + 8)));
    *(undefined4 *)(this_ + 0x4e8) = 0;
  }
  if (*(int *)(this_ + 0x4ec) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)(this_ + 0x4ec) + 8)));
    *(undefined4 *)(this_ + 0x4ec) = 0;
  }
  FUN_005506e0(bea_arg(&DAT_009c64d8));
  *(undefined4 *)(this_ + 0xc80) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053d3e0, ap_0053d3e0));
