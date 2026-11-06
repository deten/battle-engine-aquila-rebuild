// auto-ported from 004c25c0_vslot7.c (CPDTimeline::vslot7, 91 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char CPDTimeline;
typedef uint32_t (BEA_STDCALL* FUN_004f5c90_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f5c90_t> FUN_004f5c90 = {(FUN_004f5c90_t)0x004f5c90};
typedef uint32_t (BEA_STDCALL* FUN_004f5d50_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f5d50_t> FUN_004f5d50 = {(FUN_004f5d50_t)0x004f5d50};

static int BEA_THISCALL ap_004c25c0(CPDTimeline * this_, undefined4 param_1)
{
  int iVar1;
  int iVar2;
  CPDTimeline *pCVar3;
  
  FUN_004f5c90(bea_arg(0x3d), bea_arg(*(undefined4 *)(this_ + 0x5c)));
  iVar1 = *(int *)(this_ + 0x5c);
  iVar2 = 0;
  if (0 < iVar1) {
    pCVar3 = this_ + 100;
    do {
      FUN_004f5d50(bea_arg(0x1c), bea_arg(*(undefined4 *)(pCVar3 + -4)));
      FUN_004f5c90(bea_arg(0x3e), bea_arg(*(undefined4 *)pCVar3));
      FUN_004f5c90(bea_arg(0x22), bea_arg(*(undefined4 *)(pCVar3 + 4)));
      iVar1 = *(int *)(this_ + 0x5c);
      iVar2 = iVar2 + 1;
      pCVar3 = pCVar3 + 0xc;
    } while (BEA_LOOP_GUARD((iVar2 < iVar1)));
  }
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c25c0, ap_004c25c0));
