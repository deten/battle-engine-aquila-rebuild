// auto-ported from 00489ef0_vslot68.c (CInfantryUnit::vslot68, 65 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef char CInfantryUnit;
#define s_dead_forward_0062d518 ((char*)0x0062d518)
typedef uint32_t (BEA_THISCALL* CActor__vslot68_t)(uint32_t);
static CActor__vslot68_t const CActor__vslot68 = (CActor__vslot68_t)0x00402000;
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static FUN_004aa630_t const FUN_004aa630 = (FUN_004aa630_t)0x004aa630;

static uint32_t BEA_THISCALL ap_00489ef0(CInfantryUnit * this_)
{
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  char *pcVar3;
  if (((byte)this_[0x2c] & 4) != 0) {
    iVar1 = *(int *)this_;
    pcVar3 = s_dead_forward_0062d518;
    this_00 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, s_dead_forward_0062d518,1,1);
    uVar2 = FUN_004aa630(bea_arg(this_00), bea_arg(pcVar3));
    bea_vcall<uint32_t>(this_, 0xf0, uVar2);
  }
  *(undefined4 *)(this_ + 0x26c) = 0;
  return CActor__vslot68(bea_arg((CActor *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00489ef0, ap_00489ef0));
