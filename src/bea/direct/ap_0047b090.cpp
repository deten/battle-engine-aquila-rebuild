// auto-ported from 0047b090_vslot4.c (CGillMHeadAI::vslot4, 108 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGillMHeadAI;
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint (BEA_THISCALL* FUN_004fb500_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fb500_t> FUN_004fb500 = {(FUN_004fb500_t)0x004fb500};
typedef uint (BEA_THISCALL* FUN_004fb5a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb5a0_t> FUN_004fb5a0 = {(FUN_004fb5a0_t)0x004fb5a0};
typedef uint32_t (BEA_THISCALL* FUN_004fb840_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb840_t> FUN_004fb840 = {(FUN_004fb840_t)0x004fb840};

static void BEA_THISCALL ap_0047b090(CGillMHeadAI * this_)
{
  CGillMHeadAI *this_00;
  int iVar1;
  undefined4 uVar2;
  
  this_00 = this_ + 0xc;
  if ((*(int *)(this_ + 0xc) != 0) && ((*(byte *)(*(int *)(this_ + 0xc) + 0x2c) & 4) != 0)) {
    FUN_00401000(bea_arg(this_00), bea_arg(0));
  }
  if ((*(int *)this_00 != 0) && (*(int *)(this_ + 0x10) != 0)) {
    FUN_004fb840(bea_arg(*(void **)(this_ + 8)), bea_arg(*(int *)this_00));
    iVar1 = FUN_004fb5a0(bea_arg(*(void **)(this_ + 8)), bea_arg(*(int *)this_00));
    *(int *)(this_ + 0x1c) = iVar1;
    if (iVar1 != 0) {
      uVar2 = FUN_004fb500(bea_arg(*(void **)(this_ + 8)), bea_arg(*(int *)this_00), bea_arg(0));
      *(undefined4 *)(this_ + 0x18) = uVar2;
      return;
    }
    *(undefined4 *)(this_ + 0x18) = 0;
    return;
  }
  bea_vcall<uint32_t>(this_, 0x2c);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047b090, ap_0047b090));
